#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int cnt = 0;
    while(N > 1)
    {
        N /= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}