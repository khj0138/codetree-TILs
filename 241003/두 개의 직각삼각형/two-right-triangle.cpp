#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if(j <= (n - 1 - i) || j >= (n + i) )
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}