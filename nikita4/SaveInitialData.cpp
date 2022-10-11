#include "SaveInitialData.h"

void SaveInitialData(std::string text)
{
	if (text.empty())
	{
		std::cout << "Enter text first" << std::endl;
		system("pause");
		return;
	}
	std::ofstream FileRecorder = CheckFile();
	FileRecorder << text;
	FileRecorder.close();
}
