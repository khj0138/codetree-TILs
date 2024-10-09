#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int** arr = new int*[2];
    for (int i = 0; i < 2; i++)
    {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);

    int totalSum = 0;
    int sum = 0;
    double avr;
    int cnt = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        avr = (double)sum / 4.0f;
        cout << avr << ' ';
        totalSum += sum;
        sum = 0;
        cnt = 0;
    }
    cout << endl;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            sum += arr[i][j];
        }
        avr = (double)sum / 2.0f;
        cout << avr << ' ';
        sum = 0;
        cnt = 0;
    }
    cout << endl;
    cout << (double)totalSum / 8.0f;


    for (int i = 0; i < 2; i++)
    {
        delete arr[i];
    }
    delete arr;
    return 0;
}