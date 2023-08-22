#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char *av[])
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string file;
	std::string contents;
	std::string s1;
	std::string s2;
	int s1_len;
	int s2_len;

	if (ac != 4)
	{
		std::cout << "argc error_not 3" << std::endl; 
		return (1);
	}
    file = av[1];
	s1 = av[2];
	s2 = av[3];
	s1_len = s1.length();
	s2_len = s2.length();
	if (file.length() == 0 || s1_len == 0 || s2_len == 0)
	{
		std::cout << "argv error_length 0" << std::endl; 
		return (1); //exit(0);
	}

	ifs.open(av[1]);
	if (ifs.fail())
	{
		std::cout << "file open error" << file << std::endl;
		return (1);  //exit(0);
	}

	file.append(".replace"); 
	ofs.open(av[1]);
	if (ofs.fail())
	{
		std::cout << "file open error" << file << std::endl;
		return (1); //exit(0);
	}

	while (true)
	{
		std::getline(ifs, contents);
		
		size_t pos = 0;
		while (true)
		{
			pos = contents.find(s1, pos);
			if (pos == std::string::npos)
			{
				break ;
			}
			contents.erase(pos, s1_len);
			contents.insert(pos, s2);
			pos += s2_len;
		}
		ofs << contents;
		if (ifs.eof())
			break ;
		ofs << std::endl;	
	}
	
    ifs.close();
	ofs.close();
	return (0);
}