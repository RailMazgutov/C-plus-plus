# C-plus-plus
## Переменные
### Базовые типы
#### Знаковые целочисленные типы
|        Тип        |         Размер           |                         Диапозон                           |
| -------------     | ------------------------ | ---------------------------------------------------------- |
|  ``` short ```    | 16 бит                   | От -32 768 до 32 767                                       |
| ``` int ```       | > ``` short ```          | От -2 147 483 648 до 2 147 483 647                         |
| ``` long ```      | >= 32 И  >= ``` int ```  | От -2 147 483 648 до 2 147 483 647                         |
| ``` long long ``` | >= 64 И  >= ``` long ``` | От -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807 |
#### Знаковые дробные числа
Типы для представления дробных чисел:
- ```float```
- ```double```
- ```long double```

Эти типы характеризуэтся количеством значащих цифр, которые они могут представлять и минимальным допустимым диапозоном порядка. *Значащими цифрами* являются значащие разряды числа, например *12345 - 5 значащих цифр*, а *12000 - 2 значащих цифры*, *12.345 - так же 5 значащих цифр*
*float* - минимум 32 бита
*double* - минимум 48, и не меньше чем *float*
*long double* - минимум такой же как и *double*
#### Типы без знаков
Все просто, берешь тип со знаком, пишешь перед ним ``` unsigned ``` тип становится без знаковым. При это Размер остается таким же, а дипозон становится от 0 до ``` SIGNED_MAX * 2 + 1```
#### Тип ```char```
```char``` нужен что бы хранить символы. Обычно весит 1 байт, и в числовом представлении имеет диапозон от -128 до 127. Часто используется для представления байта, потому что подходит по размеру.
#### Тип ``` bool ```
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
#### Оператор ```sizeof```
```sizeof``` используется для получения размера переданного объекта или типа данных. Возвращает размер в байтах.
```
int x = sizeof(x);
```
#### Задание
1. С помощью sizeof устновить размеры знаковых целочисленных типов, вывести полученные результаты в консоль.
2. Попросить пользователя ввести 2 числа, приняв их за катеты прямоугольного треугольника, посчитать и вывести площадь этого треугольника.

> P.S. Результат надо представить двумя файлами *.cpp* для передачи мне, завести репозиторий на GitHub.com. Добавить эти файлы в репозиторий, и кинуть ссылку мне на этот репозиторий.
