#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int check = 1;
    for (int i = 1; i >= 1; i = i + check)
    {
        if(i == n)
        {
            check = -1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << endl;
    }
    return 0;
}