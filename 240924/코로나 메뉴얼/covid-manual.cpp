#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char test;
    int temp;

    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> test >> temp;
        if (test == 'Y' && temp >= 37)
        {
            sum++;
        }
    }
    if(sum >= 2)
    {
        cout << 'E';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}