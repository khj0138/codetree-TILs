#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int* arr = new int[4];
    char c;
    double n;
    for (int i = 0; i < 3; i++)
    {
        cin >> c >> n;
        if(c == 'Y')
        {
            if(n >= 37.f)
            {
                arr[0]++;
            }
            else
            {
                arr[2]++;
            }
        }
        else
        {
            if(n >= 37.f)
            {
                arr[1]++;
            }
            else
            {
                arr[3]++;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << ' ';
    }
    if(arr[0] >= 2)
    {
        cout << 'E';
    }
    return 0;
}