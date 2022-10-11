#include "DialogFinder.h"

void DialogFinder::FindDialogs()
{
	std::string tempDialog;
	bool isDialog = false;
	for (int i = 1; i < text.size(); i++)
	{
		if (text[i] == '-' && text[i- 1] == '\n')
			isDialog = true;

		if (isDialog)
			tempDialog += text[i];

		if (text[i] == '\n' && text[i - 1] == '!' || text[i - 1] == '.' || text[i - 1] == '?')
		{
			isDialog = false;
			dialogs.push_back(tempDialog);
			tempDialog.clear();
		}
	}
	if(isDialog)
		dialogs.push_back(tempDialog);
	
}

std::string DialogFinder::GetDialog(int number)
{
	if (number > dialogs.size())
		return 0;
	return dialogs[number];
}

std::vector<std::string> DialogFinder::GetVector()
{
	return dialogs;
}

int DialogFinder::GetCountOfDialogs()
{
	return static_cast<int>(dialogs.size());
}

