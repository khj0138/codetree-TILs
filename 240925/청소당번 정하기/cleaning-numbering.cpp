#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cntClass = 0, cntHall = 0, cntBath = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i % 12 == 0)
        {
            cntBath++;
        }
        else if (i % 3 == 0)
        {
            cntHall++;
        }
        else if (i % 2 == 0)
        {
            cntClass++;
        }
    }
    cout << cntClass << ' ' << cntHall << ' ' << cntBath;
    return 0;
}