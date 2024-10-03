#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int iCheck = 1;
    int jCheck = 0;
    for(int i = 0; i >= 0; i += iCheck)
    {
        if(i >= (n - 1))
        {
            if(iCheck == 0)
            {
                iCheck = -1;
            }
            else
            {
                iCheck = 0;
            }
        }

        if(i % 2 == 0)
        {
            jCheck = i / 2;
        }
        else
        {
            jCheck = n - 1 - (i / 2);
        }

        for (int j = 0; j <= jCheck; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}