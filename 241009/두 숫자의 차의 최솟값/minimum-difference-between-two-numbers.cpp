#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int* arr = new int[100];
    int dist = 100;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i >= 1)
        {
            if(arr[i] - arr[i-1] < dist)
            {
                dist = arr[i] - arr[i-1];
            }
        }
    }
    cout << dist;
    delete arr;
    return 0;
}