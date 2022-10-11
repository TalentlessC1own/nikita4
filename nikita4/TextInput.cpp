#include "TextInput.h"

std::string InputText()
{
    system("cls");
    std::cout << "Enter: ";
    std::string  text;
    while (true)
    {
        std::string buffer = "";
        std::getline(std::cin, buffer);
        std::cin.sync();
        if (buffer.empty())
            break;
        text += buffer + "\n";

    }
    return text;
}
