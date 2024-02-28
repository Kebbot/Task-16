#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int size = 15;
    int arr[size], min, max;


    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    //Начало проверки
    cout << endl;
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << endl;
    cout << max << endl;
    cout << min << endl;
    return 0;
}
