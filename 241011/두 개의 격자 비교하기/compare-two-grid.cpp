#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    int num;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> num;
            arr[i][j] = num;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> num;
            arr[i][j] = (int)(arr[i][j] == num ? 0 : 1);
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