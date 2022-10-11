#include "FileOutput.h"

void FileOutputResult(DialogFinder finder)
{
	if (finder.GetCountOfDialogs() == 0)
	{
		std::cout << "No one dialog been findet" << std::endl;
		return;
	}
	std::ofstream FileRecorder;
	for (int i = 0; i < finder.GetCountOfDialogs(); i++)
	{
		std::cout << "recording of the " << i + 1 << "dialogue....." << std::endl;
		FileRecorder = CheckFile();
		FileRecorder << finder.GetDialog(i);
		std::cout << "dialogue number " << i + 1 << "successfully recordet" << std::endl;
	}
	FileRecorder.close();
}
