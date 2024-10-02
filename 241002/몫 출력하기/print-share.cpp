#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool check = false;
    int cnt = 0;
    while(cnt < 3)
    {
        cin >> n;
        if (n % 2 != 0)
        {
            continue;
        } 
        cnt++;
        cout << n / 2 << endl;
    }
    return 0;
}