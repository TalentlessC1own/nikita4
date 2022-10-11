#include "Menu.h"


int AscUserInputType()
{
	int variant;
	std::cout << "Enter 1 for manual input " << std::endl
		<< "Enter 2 for file input " << std::endl;
	variant = CheckMenu(2);
	return variant;
}

int AscOutputType()
{
	int variant;
	std::cout << "Enter 1 for console output " << std::endl
		<< "Enter 2 for file output " << std::endl;
	variant = CheckMenu(2);
	return variant;
}


int AscInitialDataSaveMenu()
{
	int variant;

		std::cout << "1 - save initial data" << std::endl
		<< "2 - not save initial data  " << std::endl;
	variant = CheckMenu(2);
	return variant;
}
