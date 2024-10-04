#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a, b;
    cin >> n;
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            sum *= j;
        }
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}