#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int** arr = new int*[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 1;
        }
    }
    int num;
    for (int i = 0 ; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> num;
            arr[i % 3][j] *= num;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
        delete arr[i];
    }
    delete arr;
    return 0;
}