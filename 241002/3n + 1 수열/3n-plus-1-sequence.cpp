#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    bool check = false;
    cin >> n;
    while(!check)
    {
        if(n == 1)
        {
            check = true;
        }
        else if(n % 2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else
        {
            n = n * 3 + 1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}