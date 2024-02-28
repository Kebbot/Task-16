#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int size = 12;
    int arr[size], min, max, minProf, maxProf;


    cout << "Для вычисления выручки за год введите \n";

    //Начало заполнения массива        arr[i] = min + rand() % (max - min);
    for (int i = 0; i < size; i++)
    {
        cout << "Введие прибыль в " << i + 1 << " месяце: ";
        cin >> arr[i];
        cout << "\nМесяц " << i + 1 << "\t" << "Выручка: " << arr[i] << endl; //это просто проверка
    }
    //Ввод диапазона и вычисление
    cout << "Введите диапазон в которм надо найти минимум и максимум выручки\n";
    cout << "Введите нижний диапазон: ";
    cin >> min;
    cout << "Введите верхний диапазон: ";
    cin >> max;

    minProf = min - 1;
    maxProf = min - 1;

    for (int i = min; i <= max - 1; i++)
    {
        if (arr[i] > arr[maxProf])
        {
            maxProf = i;
        }
        if (arr[i] < arr[minProf])
        {
            minProf = i;
        }
    }
    cout << "Минимальная выручка в указанный период " << minProf + 1 << endl;
    cout << "Максимальная выручка в указанный период " << maxProf + 1 << endl;

    // ну вроде всё..

    return 0;
}
