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
     if (rect1.top > rect2.top)
     {
         if (rect1.bottom > rect2.bottom)
         {
             if (rect1.left > rect2.left)
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect2.top - rect1.bottom)*(rect2.right - rect1.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect2.top - rect1.bottom)*(rect1.right - rect1.left);
                     return area;
                 }
             }
             else
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect2.top - rect1.bottom)*(rect2.right - rect2.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect2.top - rect1.bottom)*(rect1.right - rect2.left);
                     return area;
                 }
             }
         }
         else
         {
             if (rect1.left > rect2.left)
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect2.top - rect2.bottom)*(rect2.right - rect1.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect2.top - rect2.bottom)*(rect1.right - rect1.left);
                     return area;
                 }
             }
             else
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect2.top - rect2.bottom)*(rect2.right - rect2.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect2.top - rect2.bottom)*(rect1.right - rect2.left);
                     return area;
                 }
             }
         }
     }
     else
     {
         if (rect1.bottom > rect2.bottom)
         {
             if (rect1.left > rect2.left)
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect1.top - rect1.bottom)*(rect2.right - rect1.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect1.top - rect1.bottom)*(rect1.right - rect1.left);
                     return area;
                 }
             }
             else
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect1.top - rect1.bottom)*(rect2.right - rect2.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect1.top - rect1.bottom)*(rect1.right - rect2.left);
                     return area;
                 }
             }
         }
         else
         {
             if (rect1.left > rect2.left)
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect1.top - rect2.bottom)*(rect2.right - rect1.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect1.top - rect2.bottom)*(rect1.right - rect1.left);
                     return area;
                 }
             }
             else
             {
                 if (rect1.right > rect2.right)
                 {
                      int area = (rect1.top - rect2.bottom)*(rect2.right - rect2.left);
                      return area;
                 }
                 else
                 {
                     int area = (rect1.top - rect2.bottom)*(rect1.right - rect2.left);
                     return area;
                 }
             }
         }
     }
 }
