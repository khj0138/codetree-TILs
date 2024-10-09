#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int max1, max2;
    max1 = 1024 * 1024 * 1024 * (-2);
    max2 = max1;

    int* arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(max2 < arr[i])
        {
            max2 = arr[i];
            if(max2 > max1)
            {
                int temp = max1;
                max1 = max2;
                max2 = temp;
            }
        }
    }
    delete arr;
    return 0;
}