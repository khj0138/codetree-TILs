#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = -1;
    bool check = false;
    while(!check)
    {
        cin >> n;
        if(n < 25)
        {
            cout << "Higher" << endl;
        }
        else if (n > 25)
        {
            cout << "Lower" << endl;
        }
        else
        {
            cout << "Good";
            check = true;
        }
    }
    return 0;
}