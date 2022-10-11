#include <iostream>
#include "Menu.h"
#include "DialogFinder.h"
#include "FileInput.h"
#include "FileOutput.h"
#include "TextInput.h"
#include"SaveInitialData.h"
#include"ConsoleOutput.h"
#include "Check.h"

enum class Type
{
	console = 1,
	file
};

enum class Answer
{
	Yes = 1,
	No
};


int main()
{
	setlocale(LC_ALL, "ru_RU.cp1251");
	std::cout << "Nikita 415 var 4 kr 4 " << std::endl;

	std::string text;

	while (true)
	{
		Type input = static_cast<Type>(AscUserInputType());
		switch (input)
		{
		case Type::console:
			text = InputText();
			break;
		case Type::file:
			text = FileInput();
			break;
		}
		DialogFinder finder(text);

		finder.FindDialogs();


		if (static_cast<Answer>(AscInitialDataSaveMenu()) == Answer::Yes)
			SaveInitialData(text);


		Type output = static_cast<Type>(AscOutputType());
		switch (output)
		{
		case Type::console:
			ConsoleOutput(finder);
			break;
		case Type::file:
			FileOutputResult(finder);
		}
		std::cout << "End program?\n1 - Yes\n2 - No" << std::endl;
		Answer endProgram = static_cast<Answer>(CheckMenu(2));
		if (endProgram == Answer::Yes)
			return 0;
	}
}