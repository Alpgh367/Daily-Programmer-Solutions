#include <iostream>
#include <string>

int main()
{
	std::string name, username;
	unsigned int age;

	std::cout << "Please enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Please enter your age: ";
	std::cin >> age;
	std::cin.ignore(1000, '\n'); // to stop program skipping over second getline
	std::cout << "Please enter your reddit username: ";
	std::getline(std::cin, username);

	std::cout << "your name is " << name << ", you are " << age << " years old, and your uesrname is " << username << std::endl;
	std::cin.get();
}
