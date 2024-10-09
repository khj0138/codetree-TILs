#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr[10] = new int [10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i] % 3 == 0)
        {
            cout << arr[i-1];
            break;
        }
    }
    
    delete arr;
    return 0;
}