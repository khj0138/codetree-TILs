#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool check = false;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        if(n % 3 != 0)
        {
            check = true;
        }
    }
    if(check)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
    return 0;
}