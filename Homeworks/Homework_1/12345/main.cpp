#include <iostream>
#include <cstdlib>
int main()
{
    int x = sizeof(short);
    int y = sizeof(int);
    int z = sizeof(long);
    int a = sizeof(long long);
    std::cout << " short: " << x << std::endl;;
    std::cout << " int: " << y << std::endl;;
    std::cout << " long: " << z << std::endl;;
    std::cout << " long long: " << a << std::endl;;
    system("pause");
    return 0;
}
