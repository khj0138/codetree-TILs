#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int** arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = j * n + i + 1;
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