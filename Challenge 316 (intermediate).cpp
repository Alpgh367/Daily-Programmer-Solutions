#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class shoppingCart
{
	public:
		void add(const std::string& item);
		unsigned int getTotalPrice() const;

	private:
		void checkDiscounts(); // may need to change type?

	private:
		unsigned int totalPrice = 0;
		unsigned int itemAmounts[3] = { 0, 0, 0 };
		const unsigned int itemPrices[3] = { 300, 110, 30 };
		std::string itemCodes[3] = { "OH", "BC", "SK" };
};

void shoppingCart::add(const std::string& item) 
{
	int itemNum;

	for (int x = 0; x < 3; x++) // finds which number the item is in the item codes array
	{
		if (itemCodes[x] == item)
		{
			itemNum = x;
			break;
		}
	}

	++itemAmounts[itemNum];
	totalPrice += itemPrices[itemNum];

	checkDiscounts();
}

void shoppingCart::checkDiscounts()
{

}

unsigned int shoppingCart::getTotalPrice() const
{
	return totalPrice;
}

void getInput(std::vector<std::string>& v)
{
	std::string input, buffer;

	std::getline(std::cin, input);

	std::stringstream ss(input);

	while (ss >> buffer)
		v.push_back(buffer);
}

int main()
{
	
	std::vector<std::string> input;
	shoppingCart sp;

	getInput(input);

	for (int x = 0; x < input.size(); x++)
	{
		sp.add(input[x]);
	}

	for (int x = 0; x < input.size(); x++)
	{
		if (x < input.size() - 1)
			std::cout << input[x] << ", ";
		else
			std::cout << input[x] << " = " << sp.getTotalPrice() << std::endl;
	}

	system("pause");
}