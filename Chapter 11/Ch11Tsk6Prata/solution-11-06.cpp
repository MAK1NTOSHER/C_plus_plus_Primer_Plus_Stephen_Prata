#include "stonewt.h"
#include <iostream>

using std::cout;
using std::cin;

const int ArrSize = 6;

int main(void)
{
    Stonewt arr[ArrSize] = { Stonewt(5, 3.23), Stonewt(10, 13.99999), Stonewt(12, 1) };
    Stonewt model(11, 0);
    int max = 0, min = 0, cnt = 0;
    int stn = 0;
    double pds_left = 0;
    for (int i = 0; i < ArrSize; i++)
    {
        if (i >= 3)
        {
            cout << "Enter the number of stones and the remaining pounds of the " << i + 1 << " object: ";
            cin >> stn >> pds_left;
            arr[i] = Stonewt(stn, pds_left);
        }
        if (arr[min] > arr[i]) min = i;
        if (arr[max] < arr[i]) max = i;
        if (arr[i] >= model) cnt++;
    }
    cout << "Max: " << arr[max];
    cout << "Min: " << arr[min];
    cout << "The number of objects more or equal 11 stone: " << cnt;
    return 0;
}