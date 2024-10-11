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
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[num1][num2] = i * n + j + 1;
            num2--;
            num1++;
            if(num2 < 0 || num1 >= n)
            {
                num2 = num1 + num2 + 1;
                num1 = 0;
                while(num2 >= (m))
                {
                    num2--;
                    num1++;
                }
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