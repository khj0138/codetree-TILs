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
            if(j % 2 == 0)
            {
                arr[(n-1)-i][(n-1)-j] = j * n + i + 1;
            }
            else
            {
                arr[i][(n-1)-j] = j * n + i + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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