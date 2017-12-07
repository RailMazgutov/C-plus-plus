#include <iostream>

using namespace std;

struct Student
{
  string name;
  string sur;
  double rating;
};

int main()
{
    std::cout << "enter the number of student ";
    int num;
    std::cin >> num;
    Student students[num];
    for (int i = 0; i < num; ++i)
    {
        std::cout << "enter the student name ";
        std::cin >> students[i].name;
        std::cout << "enter the student surname ";
        std::cin >> students[i].sur;
        std::cout << "enter the student rating ";
        std::cin >> students[i].rating;
    }

    for (int i = 0; i < (num-1); ++i)
    {
        for (int j = 0; j < num; ++j)
        {
            if (students[i].rating < students[i+1].rating)
            {
                Student pom = students[i];
                students[i] = students[i+1];
                students[i+1] = pom;
            }
        }
    }

    for (int i = 0; i < num; ++i)
    {
        std::cout << students[i].name << " " << students[i].sur << " " << students[i].rating << std::endl;
    }

    double sum = 0;
    for (int i = 0; i < num; ++i)
    {

        sum = sum + students[i].rating;
    }
    double mean = sum/num;
    std::cout << "the average score=" << mean;
}
