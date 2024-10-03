#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int iCheck = 1;
    for(int i = 0; i >= 0; i += iCheck)
    {
        if(i >= (n-1))
        {
            iCheck = -1;
        }
        for (int j = 0; j < n; j++)
        {
            if(iCheck == 1)
            {
                if (j >= (n - 1 - i))
                {
                    cout << '@';
                }
                else
                {
                    cout << ' ';
                }
                cout << ' ';
            }
            else
            {
                if (j <= i)
                {
                    cout << '@';
                }
                else
                {
                    cout << ' ';
                }
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}