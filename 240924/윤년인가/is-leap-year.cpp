#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    bool check = false;
    if(y % 4 == 0)
    {
        check = true;
        if(y % 100 == 0 && y % 400 != 0)
        {
            check = false;
        }
    }
    if(check)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}