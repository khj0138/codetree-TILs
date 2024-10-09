#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int** arr;
    arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int passStudent = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        sum /= 4;
        if(sum >= 60)
        {
            cout << "pass" << endl;
            passStudent++;
        }
        else
        {
            cout << "fail" << endl;
        }
        sum = 0;
        delete arr[i];
    }
    delete arr;
    cout << passStudent;
    return 0;
}