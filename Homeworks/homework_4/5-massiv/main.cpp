#include <iostream>
#include <cstdlib>

void input(int* array);
void sort(int* array, int size);

int main()
{
    int *array;
    input(array);

    system("pause");
    return 0;
}


void input(int* array)
{
    int size = 0;
    int num;
    std::cin >> num;
    while(num > 0)
    {
        size += 1;
        int* array = new int[size+1];
        int* arraypom = new int[size];
        for (int i = 0; i < (size); ++i)
        {
            arraypom[i] = array[i];
        }

        for (int i = 0; i < (size); ++i)
        {
            array[i] = arraypom[i];
        }
        std::cout << "enter the number " ;
        std::cin >> num;
        array[size+1] = num;
        delete[] arraypom;
    }



sort(array, size);

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
