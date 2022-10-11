#pragma once
#include <iostream>
#include <vector>
#include <string>

class DialogFinder
{
private:
	std::string text;
	std::vector <std::string> dialogs;

public:
	DialogFinder(std::string textValue)
		: text("\n" + textValue)
	{}
	void FindDialogs();
	

	std::string GetDialog(int number);

	std::vector <std::string> GetVector();

	int GetCountOfDialogs();
	
};

