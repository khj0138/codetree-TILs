#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 0;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input % 2 == 0 && input % 3 == 0)
        {
            sum += input;
        }
    }
    cout << sum;
    return 0;
}