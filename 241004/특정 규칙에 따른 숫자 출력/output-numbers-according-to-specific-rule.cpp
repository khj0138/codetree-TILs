#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if(j <= (n - i))
            {
                cout << sum << ' ';
                sum = (sum % 9) + 1;

            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}