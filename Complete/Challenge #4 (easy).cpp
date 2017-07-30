#include <iostream>
#include <ctime>
#include <string>
#include <vector>

std::vector<std::string> generatePassword(const unsigned int amount, const unsigned int length)
{
	std::vector<std::string> passwords;

	for (int x = 0; x < amount; x++)
	{
		std::string tempPass = "";

		for (int x = 0; x < length; x++)
		{
			tempPass += rand() % 74 + '0';
		}
		
		passwords.push_back(tempPass);
	}

	return passwords;
}

int main()
{
	srand(time(0));
	std::vector<std::string> v = generatePassword(8, 10);

	for (int x = 0; x < v.size(); x++)
		std::cout << v.at(x) << std::endl;

	std::cin.get();
}
