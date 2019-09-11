#include <iostream>

using namespace std;

int main()
{
    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] =='-')
        {
            str[i] ='+';
        }
        else
            if(str[i] =='+')
            {
                {
                    str[i] ='-';
                }
            }
    }
    std::cout << str;
}
