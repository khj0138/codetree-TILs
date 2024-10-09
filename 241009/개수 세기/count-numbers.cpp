#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int* arr = new int[100];
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }
    cout << arr[m];
    delete arr;
    return 0;
}