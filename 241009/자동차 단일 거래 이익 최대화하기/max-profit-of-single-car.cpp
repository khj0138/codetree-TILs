#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int min, max;
    min = 1024 * 1024 * 1024 * 2 - 1;
    max = 0;
    int num;
    int benefit = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > min && num > max)
        {
            max = num;
        }
        if(num < min)
        {
            if(benefit < (max - min))
            {
                benefit = (max - min);
            }
            max = 0;
            min = num;
        }
    }
    if(benefit < (max - min))
    {
        benefit = (max - min);
    }
    cout << benefit;
    return 0;
}