#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    char test;
    double temp;

    int sum;
    for(int i = 0; i < 3; i++)
    {
        cin >> test >> temp;
        if (test == 'Y' && temp >= 37.f)
        {
            sum++;
        }
    }
    if(sum > 2)
    {
        cout << 'E';
    }
    else
    {
        cout << 'N';
    }
    return 0;
}