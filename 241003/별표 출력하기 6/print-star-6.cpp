#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int iCheck = 1;
    for (int i = 0; i >= 0; i = i + iCheck)
    {
        if(i >= (n-1))
        {
            iCheck = -1;
        }
        int jCheck = 1;
        for(int j = 0; j >= 0; j = j + jCheck)
        {
            if(j >= (n-1))
            {
                jCheck = -1;
            }
            if(j >= i)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}