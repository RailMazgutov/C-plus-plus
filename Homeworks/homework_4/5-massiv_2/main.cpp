#include <iostream>
#include <cstdlib>

void sort(int* array, int size);

int main()
{
    int *array;
    int size = 0;
    std::cout << "enter the number " ;
    int num;
    std::cin >> num;
    int size1 = 1;


    while(num > 0)
    {
         size += 1;
         if (size ==  size1)
         {
             size1 = size1*2;
         }
             int* arraypom = new int[size1];
             for (int i = 0; i < (size-1); ++i)
            {
               arraypom[i] = array[i];
            }


            arraypom[size-1] = num;
            delete[] array;
            array = arraypom;

            std::cout << "enter the number " ;
            std::cin >> num;
    }


    sort(array, size);
    for (int i = 0; i < (size); ++i)
    {
       std::cout << array[i] << " ";
    }
    system("pause");
    return 0;
}




void sort (int* array, int size)
{
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

        for (int i = sizea; i < (size); ++i)
        {
            arrayb[i-sizea] = array[i];
        }

            sort(arraya, sizea);
            sort(arrayb, sizeb);
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
}
