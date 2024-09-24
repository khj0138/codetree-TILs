#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        if(n % 3 == 0)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
    else if (n % 5 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}