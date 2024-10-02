#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < n; k++)
            {
                cout << '*';
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}