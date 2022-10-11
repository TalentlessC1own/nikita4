#include "ConsoleOutput.h"

void ConsoleOutput(DialogFinder finder)
{
	if (finder.GetCountOfDialogs() == 0)
	{
		std::cout << "No one dialog been findet" << std::endl;
		return;
	}

	for (int i = 0; i < finder.GetCountOfDialogs();i++)
	{
		std::cout << "dialogue number " << i + 1 << std::endl;
		std::cout << finder.GetDialog(i);

	}
}
