#include <iostream>
#include <cctype>

int main()
{
	char sir[20];
	int i=0;
	std::cout << "Introduceti un sir de caractere." << std::endl;
	std::cin >> sir;
	std::cout << "Noul sir este " << sir <<std::endl;
	while (sir[i] != 0)
	{
		if (isupper(sir[i]))
		{
			sir[i] = tolower(sir[i]);
		}
		else if (islower(sir[i]))
		{
			sir[i] = toupper(sir[i]);
		}
		i++;
	}
	std::cout << sir << std::endl;
	return 0;
}
