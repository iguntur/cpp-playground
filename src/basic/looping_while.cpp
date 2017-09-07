#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::cout << "Looping array > keyword: `while`" << std::endl;

	std::vector<std::string> instruments;

	instruments.push_back("guitar");
	instruments.push_back("bass");
	instruments.push_back("keyboard");
	instruments.push_back("violin");
	instruments.push_back("saxophone");

	unsigned int i = 0;

	while (i < instruments.size())
	{
		std::cout << "Element[" << i << "] = " << instruments[i] << std::endl;
		i++;
	}

	return 0;
}
