#include <iostream>
#include <cstdlib>


void sorting(int* array,int size);
void merge(int* array, int size);

int main()
{
    setlocale(LC_ALL, "rus");

    std::cout << " введите размер массива " ;
    int size;
    std::cin >> size;
    std::cout << " введите элементы массива " ;
    int* array = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }


merge(array, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " "  ;
    }

}

void merge(int* array, int size)
{
    if (size == 1)
    {
        return;
    }
    int sizea = size/2;
    int sizeb = size - sizea;
    int* arraya = new int[sizea];
    int* arrayb = new int[sizeb];

    for (int i = 0; i < sizea; ++i)
    {
        arraya[i] = array[i];
    }
    for (int i = 0; i < sizea; ++i)
    {
       // std::cout << arraya[i] << " ";
    }
           // std::cout << std::endl;
    for (int i = sizea; i < (size); ++i)
    {
        arrayb[i-sizea] = array[i];
    }
    for (int i = 0; i < (sizeb); ++i)
    {
       // std::cout << arrayb[i] << " ";
    }
           // std::cout << std::endl;
        merge(arraya, sizea);
        merge(arrayb, sizeb);
     int c = 0;
     int d = 0;
        for (int i = 0; i < size; ++i)
        {

            if ((c == sizea) || (d == sizeb))
           {
              if (c == sizea)
              {
                   array[i] = arrayb[d];
                  d += 1;
              }
              else
                {
                   array[i] = arraya[c];
                   c += 1;
                }
            }
            else
            {

             if (arraya[c] > arrayb[d])
                {
                   array[i] = arrayb[d];
                    d += 1;
                }
             else
                {
                  array[i] = arraya[c];
                  c += 1;
                }
            }
        }
    delete[] arraya;
    delete[] arrayb;
}
