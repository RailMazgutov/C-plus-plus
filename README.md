# Содержание
- [Урок1](https://github.com/RailMazgutov/C-plus-plus#Урок-1)
  - [Типы данных](https://github.com/RailMazgutov/C-plus-plus#Переменные)
  - [Объявление переменной](https://github.com/RailMazgutov/C-plus-plus#Объявление-переменной)
  - [Оператор sizeof](https://github.com/RailMazgutov/C-plus-plus#Оператор-sizeof)
  - [Задание 1](https://github.com/RailMazgutov/C-plus-plus#Задание-1)
- [Урок2](https://github.com/RailMazgutov/C-plus-plus#Урок-2)
  - [По стилю кода](https://github.com/RailMazgutov/C-plus-plus#По-стилю-кода)
  - [Операторы](https://github.com/RailMazgutov/C-plus-plus#Операторы)
  - [Одномерные массивы](https://github.com/RailMazgutov/C-plus-plus#Одномерные-массивы)
  - [Многомерные массивы](https://github.com/RailMazgutov/C-plus-plus#Многомерные-массивы)
  - [Условные оператор](https://github.com/RailMazgutov/C-plus-plus#Условный-оператор)
  - [Циклы](https://github.com/RailMazgutov/C-plus-plus#Циклы)
  - [Задание 2](https://github.com/RailMazgutov/C-plus-plus#Задание-2)

# Урок 1.
## Типы данных
### Знаковые целочисленные типы
|        Тип        |         Размер           |                         Диапозон                           |
| -------------     | ------------------------ | ---------------------------------------------------------- |
|  ``` short ```    | 16 бит                   | От -32 768 до 32 767                                       |
| ``` int ```       | > ``` short ```          | От -2 147 483 648 до 2 147 483 647                         |
| ``` long ```      | >= 32 И  >= ``` int ```  | От -2 147 483 648 до 2 147 483 647                         |
| ``` long long ``` | >= 64 И  >= ``` long ``` | От -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807 |
### Знаковые дробные числа
Типы для представления дробных чисел:
- ```float```
- ```double```
- ```long double```

Эти типы характеризуэтся количеством значащих цифр, которые они могут представлять и минимальным допустимым диапозоном порядка. *Значащими цифрами* являются значащие разряды числа, например *12345 - 5 значащих цифр*, а *12000 - 2 значащих цифры*, *12.345 - так же 5 значащих цифр*

- ```float``` - минимум 32 бита
- ```double``` - минимум 48, и не меньше чем *float*
- ```long double``` - минимум такой же как и *double*
### Типы без знаков
Все просто, берешь тип со знаком, пишешь перед ним ``` unsigned ``` тип становится без знаковым. При это Размер остается таким же, а дипозон становится от 0 до ``` SIGNED_MAX * 2 + 1```
### Тип ```char```
```char``` нужен что бы хранить символы. Обычно весит 1 байт, и в числовом представлении имеет диапозон от -128 до 127. По диапозону значений типа, становится понятно, что на самом деле хранит целое число. При выводе типа на экран число преобразуется в соответствующий символ по коду. Пример:
```
char b = 65; // Инициализируем переменную с помощью целого числа.
char a = 'A'; // Инициализируем с помощью символа.
```
Часто используется для представления байта, потому что подходит по размеру.
### Тип ``` bool ```
Тут все еще проще ``` bool ``` нужен что бы хранить логические значения ``` true ``` и ```false ```, если приводить к целым числам, то ``` true ``` это ```1```,a ``` false = 0 ```. А вот из целых чисел в ``` bool ``` по другому, все что не ноль это ```true```, а ноль ```false```.
## Объявление переменной
Что бы объявить переменную необходимо воспользоваться конструкцией
```
[тип] [имя переменной];
// Пример
int x;
char bukva;

// Часто надо сразу задать значение переменной
[тип] [имя переменной] = [значение];
// Пример
int y = 100;
x = y + 100;
int z = x / y;
```

> Забегая вперед рассмотрим ввод и вывод переменных в консоль. Для  этого с помощью ``` #include <iostream>``` подключим библиотеку iostream, из которой нам нудны объекты ``` std::cout ``` и ``` std::cin ```
```
#include <iostream>
#include <cstdlib> // Для работы с функцией system()
int main()
{
  // Объявляем переменную
  int number; 
  
  // Выведет этот текст в консоль
  std::cout << "Please enter a number: "; 
  
  // Считываем переменную введенную пользователем
  std::cin >> number; 
  
  // Выводим переменную и строку на экран.
  std::cout << "Your number: " << number; 
  
  system("pause"); // Команда задержки экрана
  return 0;
}
```
## Оператор ```sizeof```
```sizeof``` используется для получения размера переданного объекта или типа данных. Возвращает размер в байтах.
```
int y = sizeof(char); // Получить размер типа char
int x = sizeof(y); // Получить размер переменной y, то же самое что и sizeof(int), в этом случае.
std::cout << x << " " << y;
```
## Задание
1. С помощью sizeof устновить размеры знаковых целочисленных типов, вывести полученные результаты в консоль.
2. Попросить пользователя ввести 2 числа, приняв их за катеты прямоугольного треугольника, посчитать и вывести площадь этого треугольника.
3. Написать программу запрашивающую рост человека в **см** и преобразует это значени в **дюймы**, после чего выводит результат.
4. Написать программу получающую на вход (запрашивает у пользователя) число секунд, преобразовать в число дней, часов, минут и секунд.

  > Пример:
  
  > Enter the number of seсonds: 31600000
  
  > 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#### P.S.
Результат надо представить двумя файлами *.cpp* для передачи мне, завести репозиторий на GitHub.com. Добавить эти файлы в репозиторий, и кинуть ссылку мне на этот репозиторий.

# Урок 2.
## По стилю кода
Прочитать тут: https://habrahabr.ru/post/172091/ 
В начале будет не понятно что такое, надо посмотреть основные моменты, и если есть вопросы возврщаться и смотреть.
Давать переменным полное имя, в соответствии с тем для чего они были объявлены, т.е. если переменная для хранения числа секунд, надо назвать её ```seconds```, а не ```s```.
## Операторы
Все операторы с их приоритетом выполнения есть тут: http://ru.cppreference.com/w/cpp/language/operator_precedence
Иногда на всяких собеседованиях спрашивают какую нибудь задачу на приоритет операторов.
### ```i++``` и ```++i```
Многие привыкли (ты может быть нет) использовать ```i++```, но надо ```++i``` она работает быстре, порой на это пофигу (разница в наше время в миллисекундах минимальная) но в больших системах, лучше этим не принебрегать.
## Одномерные массивы
С массивами все просто объявление не сильно отличается от переменных:
```
//тип имя [размер];
int a[10]; // объявили массив из 10 элементов
```
Что бы обратиться к первому элементу пишем ```a[0]```, к последнему ```a[9]```.
После объявления для массива выделяется память, но какие там лежали значения не понятно, поэтому массив надо заполнить. Сделать это можно так:
```
a[0] = 0;
a[1] = 1;
```
Индекс элемента может храниться в перменной (ещё бы).
```
int b = 3;
a[b] = b;
```
Так же массив можно **инициализровать сразу всеми значениями** делается это так:
```
  int array1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // или так
  int array2[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
```
Если **число элементов совпдает с размером**, размер можно не писать:
```
  int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
```
Если хочется **инициализировать только первые элементы** можно сделать так:
```
  int array1[20] = {0, 1, 2, 3, 4, 5};
```
В остальных могут лежать нули,**но это не точно**, в большинстве случаев нули. А вот так делать нельзя:
```
  int array[3] {0, 1, 2, 3, 4, 5, 6};
```
### Итого
> Пример:
```
  // тип имя[размер];
  double array_double[10];
  // тип имя[] {Список инициализации};
  int array_int[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // задать значение
  array_int[0] = 100;
  // считать значение из консоли
  std::cin >> array_double[0];
  // использовать значение
  array_double[1] = array_double[0] * array_int[0];
  // вывод значения
  std::cout << array_double[1];
```
## Многомерные массивы
Все что больше 1 - много.
Для создания многомерного массива используется следующая конструкция
```
  // тип имя[размер1][размер2][размер3]...;
  int mult_array[10][10]; // Масиив 10х10
  double mult_array_d[7][7][7]; // трехмерный vассив 7х7х7
```
К элементам такого массива обращаемся так же как и к элементам одномерного массива:
```
  mult_array[0][0] = 1;
  mult_array[0][1] = mult_array[0][0] * 2;
  int a = 5, b = 4;
  mult_array[a][b] = mult_array[b][a] = a * b;
```
## Условный оператор
Условный оператор в C++ это:
```
  if (/*условие*/) {
    // операторы
  }
```
Условие логическое выражение выраженное операторами, либо переменная типа ```bool```, либо что-то что может быть bool, например любое число. Пример:

```
  int a;
  std::cout << "Enter a number larger than 5: ";
  std::cin >> a;
  if (a < 5) {
    std::cout << "You little liar!!"
  }
```

Не так уж и много условных операторов:
```
  > больше
  < меньше
  == равно
  != не равно
  && логическое и
  || логическое или
  >= больше или равно
  <= меньше или равно
  ! логическое не
```
Пример:
```
true && true = true
true && false = false
false && false = false

true || true = true
true || false = true
false || false = false

!true = false
!false = true
```
> Посчитай верность выражения ((a > 5) && ( b <= 10)) || (a % 2 == 0) 

> a = 3, b = 9

> a = 6, b = 11

> a = 7, b = 8

Иногда надо обработать случай когда условие не выполнение, и случай когда условие выполнено:

```
  if (...)
  {
    ...
  }
  else
  {
    ...
  }
```

## Циклы
### while
Самый простой цикл:
```
while(условие)
{
  ...
}
```
Выполняется пока условие истинно:
```
int a = 0;
while(a > 10) {
  std::cout << a << std::endl;
  ++a;
}
```
### do { ... } while(...)
То же самое, только цикл точно выполнится один раз.
### for
Этот цикл с предусловием, и действием в конце цикла.
```
for (инициализация; условие ; действие в конце итерации)
{
}
```
Этот цикл чаще всего используется для пробега по массивам и разныи ругим хранилищам:
```
int array[10];
for(int i = 0; i < 10; ++i)
{
  std::cin >> array[i];
}
for(int i = 0; i < 10; ++i)
{
  std::cout << array[i] << std::endl;
}
```

```
int array[10][10];
for(int i = 0; i < 10; i++)
{
  for(int j = 0; j < 0; j++)
  {
    array[i][j] = i * j;
  }
}
```
Переменная объявленная в блоке инициализации доступна только внутри цикла, за его пределами её не существует.

## Задание 2.
**1.** Попросить пользователя ввести 10 чисел, 
- посчитать сумму, 
- среднее элементов массива, 
- найти максимальное и 
- минимальное среди этих чисел. 
Вывести все полученные результаты, а потом массив в обратном порядке.

**2.** Попросить пользователя ввести 20 чисел. Элементы массива на четных местах разделить на 2, на нечетных на 3. Вывести новый массив.

**3.** Попросить пользователя ввести 10 чисел, отсортировать их методом [пузырька](https://ru.wikipedia.org/wiki/%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%BF%D1%83%D0%B7%D1%8B%D1%80%D1%8C%D0%BA%D0%BE%D0%BC ) и вывести результат.

**4.** Заполнить с клавиатуры массив из 10 элементов. 
- Все четные элементы массива разделить на 2. 
- Все элементы массива делящиеся на 5, сделать равными нулю. 
Вывести результирующий массив.

**5.** Заполнить двумерный массив 10х10 так, что бы на главной диагонали стояли единицы, а остальные элементы нули. Вывести этот массив в консоль.

**6.** Создать массив 3х3, попросить пользователя ввести элементы массива. Посчитать сумму элементов удовлетворяющих условию
- сумма индексов элемента четное число
- элемент больше 5
- элемент не делится на 3 нацело
Вывести полученнную сумму.

**7.** Объявить массив 7х6 заполнить его аналогично примеру 4х4:

0 1 2 3

4 5 6 7

8 9 10 11

12 13 14 15

Вывести массив на экран.

# Урок 3

## Функции

Когда необходимо выполнять один и тот же набор действий (чаще объедененных какой-то логической связью) несколько раз в или в нескольких разных местах, эти операции выделять в функцию. Финкция выполняет какие-то действия и возвращает какое-то значение (или не возвращает), функция может принимать набор входных параметров (аргументы функции), а может и не принимать.

### Объявление функций.
При объявление функции мы сообщаем компилятору что такая функция существует, и где-то есть её определение.
Самый простой случай, функция не принимает никаких значений и ничего не возвращает.
```
void someFunction();
```
Первое ключевое слово `void` говорит, что функция ничего не вернет. Потом идет название функции `someFunction`, `()` необходимы для того что бы компилятор понял что это объявление функции.

Так же внутри `()` могут быть перечислены аргументы функции:
```
void someFunction2(int xCoord, int yCoord);
```
Перечисление аргументов функции происходит по шаблону:
```
(тип имя, тип имя...)
```
Даже если переменные одного типа необходимо указывать тип для каждой.

Если функция должна вернуть какое-то значение, то все просто, пишет тип переменной, которую функция должна вернуть, перед именем функции (вместо void):
```
int getMax(int a, int b);
```
Функция должна вернуть целое число, согласно названию максимальное среди двух переданных.
### Определение функций.
Объявление функции говорит компилятору, что такая функция существует. Но не говорит ничего о том что эта функция должна сделать. Что бы функция сделала то, что нужно, необходимо её определить. Делается просто в любом месте файла (этого или почти любого другого) после объявления делаем так:
```
int getMax(int a, int b)
{
  // А вот сюда пишем определение
}
```
Т.е. повторяем строку объявления, а потом открываем фигурные скобки, куда пишем определение. (Сюрприз, та штука `main` куда ты писал весь свой код - функция). 


Что бы функция что-то вернула необходимо использовать ключевое слово `return`:
```
int getMax(int a, int b)
{
  if (a > b) {
    return a; //Вернет a
  } else {
    return b;
  }
}
```

Ключевое слово `return` завершает выполнение функции там где оно встретиться, т.е. дальше не пойдет, поэтому:
```
int getMax(int a, int b)
{
  if (a > b) {
    return a; //Вернет a
  } 
  return b;
}
```
Эти два определения абсолютно одинаковые.

### Вызов функции
Что бы вызвать функцию пишем её имя, а в скобках перечисляем переменные:
```
#include <iostream>

int getMax(int a, int b);

int main()
{
  int randomValue = 10;
  int userValue;
  
  std::cin >> userValue;
  
  int maxValue = getMax(randomValue, userValue);
  std::cout << maxValue;
  
  return 0;
}

int getMax(int a, int b)
{
  if (a > b) {
    return a; //Вернет a
  } 
  return b;
}
```
Если внимательно посмотреть, может возникнуть вопрос, а почему одна и та же строка встречается два раза:
```
int getMax(int a, int b)
```

Ну все на так просто на самом деле можно сделать вот так:
```
#include <iostream>

int getMax(int a, int b)
{
  if (a > b) {
    return a; //Вернет a
  } 
  return b;
}

int main()
{
  int randomValue = 10;
  int userValue;
  
  std::cin >> userValue;
  
  int maxValue = getMax(randomValue, userValue);
  std::cout << maxValue;
  
  return 0;
}
```
Т.е. мы сразу и объявили и определили функцию. Но при этом определить функцию до того как она будет вызвана. В случае с двумя функциями, это достаточно просто, но вот представь что таких функций 20-30, и часть из них вызывает друг-друга. Тогда сделать это становится сложнее. К тому же часто делают отдельный файл с объявлениями функций (что бы можно было быстро посмотреть список всех функций), и отдельно делают файл с определениями всех функций (иногда этот файл не видит программист, которому ты передал свои функции).

## Указатели

Указатель очень опасная и очень полезная попрой штука.
Указатель указывает (да масло масляное) на область в памяти где лежит значение какого-то типа. Объявляется указатель `тип* имя;`:
```
int* pointer; //Указатель на целое число
```
Молодец объявил указатель, только вот проблема куда он указывает??? Ответ, в никуда (точнее куда-то но лучше не надо трогать это _куда_).

Как инициализировать значение переменной? Есть несколько способов:
```
int value = 10;
int* poiner = &value;
```

`&` в этом случае получает адрес переменной (надо запомнить очень важная штука).

Теперь `pointer` указываетна область памяти, где лежит `value`, что это значит? Мы можем изменить значение `value` с помощью `pointer`. Как это сделать, обычное : `pointer += 10;` ничего не сделает с переменной, а только сместит указатель на `10 * sizeof(int)` байт.

Что бы изменить значение на которое указывает указатель надо извлечь значение и его поменать, делается просто пишем `*` перед именем указателя `*pointer += 10;`, если теперь вывести значение `value` оно окажется измененным (проверь это! вдруг я вру.).

### Оператор `new`
Второй способ это оператор `new` он выделяет новый участок памяти для указанного типа.
```
int* pointer = new int;
```
Теперь указатель указывает на область в памяти которую специально для нас выделил компилятор (молодец какой).

Но какое там лежит значение никому не измвестно, и лучше не расчитывать на что-то чудесное. Поэтому нужно сразу положить туда свое значение: `*ponter = 15`, или так: `std::cin >> *pointer;`

### Указатели и функции:
Иногда нам надо изменить значение переменной внутри функции, можно передать туда указатель!!!
```
void sum10(int* value)
{
  *value += 10;
}
```
И использовать это так:
```
int someValue = 5;
sum10(&someValue);
std::cout << someValue;
```
Проверь что там!

### Немного магии с массивами
Имя массива указатель! И указывает он на первый элемент!
```
int array[10];
```
т.е. если просто писать `array` - то это указатель, а что бы указать на любой элемент можно сделать так `(array + индекс)`, а что бы изменить или получить значение: `*(array + индекс)`. Что нам это дает? а вот что, мы можем передать массив в функцию, но надо так же передать и размер массива:
```
int findMaxElement(int* array, int size);
```
Что бы было понятнее что это массив:
```
int findMaxElement(int array[], int size);
```
## Задание
1. Реализовать функцию, принимающую на вход 3 целых числа, а возвращающее среднее среди них.
2. Реализовать функцию которая меняет местами значения двух целых чисел. (Указатели)
3. Реализовать сортировку пузырьком в виде функции, получает указатель на массив и его размер.
4. Реализовать функцию `int findMaxElement(int[] array, int size);`
5. Реализовать функцию `void setAll(int[] array, int size, int value);` которая заменяет значения всех переменных переданного массива на значение переменной `value`.
