#include <iostream>

int main()
{
	std::cout << "Looping array > keyword: `for` \n"
			  << std::endl;

	int arr[] = {10, 20, 30, 40, 50};

	for (unsigned int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		std::cout << "Element[" << i << "] = " << arr[i] << std::endl;
	}

	return 0;
}
