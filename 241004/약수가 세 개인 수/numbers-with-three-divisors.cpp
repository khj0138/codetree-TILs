#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    cin >> start >> end;
    int cnt = 0;
    int cntThree = 0;
    for (int i = start; i <= end; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                cnt++;
            }
        }
        if(cnt == 3)
        {
            cntThree++;
        }
        cnt = 0;
    }
    cout << cntThree;
    return 0;
}