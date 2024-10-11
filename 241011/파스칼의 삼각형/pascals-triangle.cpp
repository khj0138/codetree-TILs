#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j == 0 || i == j)
            {
                arr[i][j] = 1;
            }
            else if (j > i)
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete arr[i];
    }
    delete arr;
    return 0;
}