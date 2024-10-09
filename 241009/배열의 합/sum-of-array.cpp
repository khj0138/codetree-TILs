#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int** arr = new int*[4];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        delete arr[i];
    }
    delete arr;
    return 0;
}