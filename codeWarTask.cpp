#include <string>
#include <iostream>
std::string abbrevName(std::string name)
{

    std::string initials;
    if (name.length() != 0)
    {
        initials += (char)toupper(name[0]);
        std::string dot{ "." };
        for (int i = 1; i < name.length() - 1; i++)
        {
            if (name[i] == ' ')

                initials += dot + (char)toupper(name[i + 1]);
        }
    }

    else
    {
        std::cout << "No name inserted";
    }

    return initials;
}

int main()
{
    std::cout << abbrevName("Apple Ball Cat");
    return 0;
}