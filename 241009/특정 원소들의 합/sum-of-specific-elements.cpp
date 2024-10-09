#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int** arr = new int*[4];
    int sum = 0;
    int num;
    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            cin >> num;
            if(j <= i)
            {
                sum += num;
            }
            arr[i][j] = num;
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        delete arr[i];
    }
    delete arr;
    cout << sum;
    return 0;
}