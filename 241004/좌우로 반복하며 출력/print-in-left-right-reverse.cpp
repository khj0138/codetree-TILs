#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int jCheck = 1;
    for (int i = 0; i < 2; i++)
    {
        jCheck = 1;
        for (int j = 0; j >= 0; j += jCheck)
        {
            if(j >= n)
            {
                jCheck = -1;
                cout << endl;
            }
            else
            {
                cout << j + 1;
            }
        }
        cout << endl;
    }
    return 0;
}