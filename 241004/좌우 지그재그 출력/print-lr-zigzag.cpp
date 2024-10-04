#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int outNum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                outNum = (i - 1) * n + j ;
                cout << outNum << endl;
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                outNum = (i - 1) * n + (n + 1 - j);
                cout << outNum << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}