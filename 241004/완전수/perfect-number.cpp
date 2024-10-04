#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    cin >> start >> end;
    int sum = 0;
    int cnt = 0;
    for (int i = start; i <= end; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
            if (sum > i)
            {
                continue;
            }
        }
        if(sum == i)
        {
            cnt++;
        }
        sum = 0;
    }
    cout << cnt;
    return 0;
}