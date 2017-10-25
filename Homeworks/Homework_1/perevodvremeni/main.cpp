#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long s;
    std::cout << "Vvedite kolichestvo sekund";
    std::cin >> s;
    long d = s/86400;
    long a = s-(d*86400);
    long h = a/3600;
    long b = a-(h*3600);
    long m = b/60;
    long sec = b-(m*60);
    std::cout << d << "days, " << h << "hours, " << m << "Minutes, " << sec << "seconds, ";

    system("pause");
    return 0;
}
