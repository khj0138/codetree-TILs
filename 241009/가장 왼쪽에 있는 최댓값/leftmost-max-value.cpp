#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int max = 0;
    int maxIndex = N - 1;
    int loopIndex = 0;

    int* arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    loopIndex = N;
    while(maxIndex > 0)
    {
        for (int i = 0; i < loopIndex; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
                maxIndex = i;
            }
        }
        cout << maxIndex + 1 << ' ';
        loopIndex = maxIndex;
        max = 0;
    }
    delete arr;
    return 0;
}