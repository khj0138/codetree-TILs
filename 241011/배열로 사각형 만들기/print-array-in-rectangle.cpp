#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int** arr = new int*[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int[5];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i == 0 || j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        delete arr[i] << ' ';
    }
    delete arr;
    return 0;
}