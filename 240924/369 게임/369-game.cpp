#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int ten;
    int one;
    for (int i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            cout << 0 << ' ';
        }
        else
        {
            ten = i / 10;
            one = i % 10;
            if(ten != 0 && ten % 3 == 0 )
            {
                cout << 0 << ' ';
            }
            else if(one != 0 && one % 3 == 0)
            {
                cout << 0 << ' ';
            }
            else
            {
                cout << i << ' ';
            }
        }
        
    }
    return 0;
}