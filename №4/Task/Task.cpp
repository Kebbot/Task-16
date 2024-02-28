#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    const int m = 15;
    int max_index = 0, min_index = 0;
    double target[m], sum = 0, min, max, proizv = 1;
    for (int i = 0; i < m; i++)
    {
        target[i] = (rand() % 11 - 5) / 2.5;
    }
    cout << "Массив оригинальный 2\n";
    for (int i = 0; i < m; i++)
    {
        cout << target[i] << "\t";
    }
    cout << endl;
    //суммирование отрицательных элементов массива
    for (int i = 0; i < m; i++)
    {
        if (target[i] < 0)
            sum += target[i];
    }
    cout << "Сумма всех отрицательных чисел равна " << sum << endl;
    //находим индексы наибольшего и наименьшего элементов массива
    max = target[0];
    min = target[0];
    for (int i = 1; i < m; i++)
    {
        if (target[i] > max)
        {
            max = target[i];
            max_index = i;
        }
        else if (target[i] < min)
        {
            min = target[i];
            min_index = i;
        }
    }
    //расставляем индексы по возрастанию
    if (min_index > max_index)
        swap(max_index, min_index);
    cout << "Индексы наименьшего и наибольшего элементов " << min_index << "\t" << max_index << endl;
    //находим произведение элементов между наименьшим и наибольшим
    for (int i = min_index + 1; i < max_index; i++)
    {
        proizv *= target[i];
    }
    cout << "Произведение чисел между наибольшим и наименьшим равно " << proizv << endl;
    //произведение чисел с четными индексами
    proizv = 1;
    for (int i = 2; i < m; i += 2)
    {
        proizv *= target[i];
    }
    cout << "Произведение чисел с четными индексами равно " << proizv << endl;
    //суммирование всех элементов между первым и последним отрицательными элементами
    max_index = 0;
    min_index = 0;
    //индекс первого отрицательного
    for (int i = 0; i < m; i++)
    {
        if (target[i] < 0)
        {
            min_index = i;
            break;
        }
    }
    //индекс последнего отрицательного
    for (int i = m - 1; i >= 0; i--)
    {
        if (target[i] < 0)
        {
            max_index = i;
            break;
        }
    }
    sum = 0;
    //суммируем элементы между первым и последним отрицательными
    for (int i = min_index + 1; i < max_index; i++)
    {
        sum += target[i];
    }
    cout << "Сумма всех чисел между первым и последним отрицательными равна " << sum << endl;

    return 0;
}
