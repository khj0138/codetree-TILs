#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char alpha = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << "  ";
            }
            else
            {
                cout << alpha << ' ';
                alpha = (alpha + 1 - 'A') % 26 + 'A';
            }
        }
        cout << endl;
    }
    return 0;
}