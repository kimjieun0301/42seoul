#include <iostream>

int main(int arc, char *arv[])
{
	if (arc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int j = 1; j < arc ; j++)
		{
			for (int i = 0; arv[j][i]; i++)
			{
				arv[j][i] = toupper(arv[j][i]);
				std::cout << arv[j][i];
			}
		}
	}
	std::cout << std::endl;
	return 0;
}