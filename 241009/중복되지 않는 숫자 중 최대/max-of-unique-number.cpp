#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int* arr = new int[1001];
    for (int i = 1; i <= 1000; i++)
    {
        arr[i] = 0;
    }
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }
    for (int i = 1000; i > 0; i--)
    {
        if(arr[i] == 1)
        {
            cout << i;
            break;
        }
    }
    delete arr;
    return 0;
}