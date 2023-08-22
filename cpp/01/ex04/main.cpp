#include <iostream>
#include <fstream>
#include <string>

void	print_error(std::string str)
{
	std::cout << str << std::endl;
	//exit(0);
    return ;
}

void	replace_line(std::string s1, std::string s2, std::ifstream &ifs, std::ofstream &ofs)
{
	std::string	line;
	bool		flag = true;
	size_t		pos;

	if (!s1.length())
		print_error("s1 is empty.");
	while (!ifs.eof())
	{
		if (flag)
		{
			pos = 0;
			std::getline(ifs, line);
		}
		pos = line.find(s1, pos);
		if (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		if (line.find(s1, pos) != std::string::npos)
			flag = false;
		else
		{
			flag = true;
			ofs << line << std::endl;
		}
	}
}

int main(int argc, char **argv)
{
	std::string		filename;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc != 4)
		print_error("There're not 3 arguments.");

	filename = argv[1];
	ifs.open(argv[1]);
	if (ifs.fail())
		print_error("Can't open file.");
	filename.append(".replace");
	ofs.open(argv[1]);
	if (ofs.fail())
		print_error("Can't open file.");

	replace_line(argv[2], argv[3], ifs, ofs);

	ifs.close();
	ofs.close();
	return (0);
}