#include <iostream>

using namespace std;

struct Rect
{
    int top;
    int bottom;
    int left;
    int right;

};

int square ( Rect& rect1, Rect& rect2);
int min(int a,int b);
int max(int a,int b);

int main()
{
    Rect rect1;
    Rect rect2;

    cout << "enter the bounds of the rectangle1: top, bottom, left, right";
    cin >> rect1.top >> rect1.bottom >> rect1.left >> rect1.right;
    cout << "enter the bounds of the rectangle2: top, bottom, left, right";
    cin >> rect2.top >> rect2.bottom >> rect2.left >> rect2.right;
    int area = square(rect1,rect2);
    cout << area;
    return 0;
}

int square( Rect& rect1, Rect& rect2)
{
    int lenght = min(rect1.right,rect2.right) - max(rect1.left,rect2.left);
    int width = min(rect1.top,rect2.top) - max(rect1.bottom,rect2.bottom);
    int area;
    return area = lenght*width;
}

int min(int a,int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }

}

int max(int a,int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

}
