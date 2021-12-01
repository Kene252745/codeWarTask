//#include <string>
//#include <iostream>
//std::string abbrevName(std::string name)
//{
//
//    std::string initials;
//    if (name.length() != 0)
//    {
//        initials += (char)toupper(name[0]);
//        std::string dot{ "." };
//        for (int i = 1; i < name.length() - 1; i++)
//        {
//            if (name[i] == ' ')
//
//                initials += dot + (char)toupper(name[i + 1]);
//        }
//    }
//
//    else
//    {
//        std::cout << "No name inserted";
//    }
//
//    return initials;
//}
//
//int main()
//{
//    std::cout << abbrevName("Apple Ball Cat");
//    return 0;
//}


//using namespace std;
//
//// Function to reverse a string
//void reverseStr(string& str)
//{
//    int n = str.length();
//
//    // Swap character starting from two
//    // corners
//    for (int i = 0; i < n / 2 ; i++)
//        swap(str[i], str[n - i - 1]);
//}
//
//// Driver program
//int main()
//{
//    string str = "geeksforgeeks";
//    reverseStr(str);
//    cout << str;
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;
string reverseString(string str)
{
    string holdit;
    for (int i = str.length() - 1; i >= 0; i--)
    {

        holdit += str[i];
    }
    
    return holdit;
}

int main()
{
    reverseString("bask"); 
    return 0; 
}


//int main()
//{
//    string str = "baa";
//    int i;
//    cout << "Printing string in reverse\n";
//    string holdit; 
//    for (i = str.length() - 1; i >= 0; i--)
//    {
//        holdit += str[i];
//    }
//    cout << holdit; 
//    return 0;
//}