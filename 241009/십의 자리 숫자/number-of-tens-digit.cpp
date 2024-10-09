#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr = new int[100];
    int* numCheck = new int[10];
    int cnt = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
        {
            break;
        }
        cnt++;
    }
    for (int i = 0; i < cnt; i++)
    {
        numCheck[(arr[i] % 100) / 10]++;
    }
    for (int i = 1; i <= 9; i++)
    {
        cout << i << " - " << numCheck[i] << endl;
    }

    delete numCheck;
    delete arr;
    return 0;
}