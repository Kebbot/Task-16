#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int size = 10;
    int arr[size], min, max, sum = 0, userNum;


    cout << "Для определения диапазона выбора рандомных чисел Вам надо ввести минимум и максимум\n";
    cout << "Введитете минимальное значение: ";
    cin >> min;
    cout << "Введите максимальное значение: ";
    cin >> max;
    cout << "Далее бот суммирует все цифры, что мненьше введенного вами";
    cout << "Введите число в заданном диапазоне: ";
    cin >> userNum;

    //Начало заполнения массива
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min);
        cout << arr[i] << "\t";
    }
    // Поиск чисел меньше указанного пользователем и суммирование
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < userNum)
        {
            sum = sum + arr[i];
        }
    }
    cout << endl;
    cout << "Сумма будет равна: " << sum;

    return 0;
}
