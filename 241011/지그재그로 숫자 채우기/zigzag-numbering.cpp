#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(j % 2 == 0)
            {
                arr[i][j] = j * n + i;
            }
            else
            {
                arr[n - i - 1][j] = j * n + i;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < m; j++)
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