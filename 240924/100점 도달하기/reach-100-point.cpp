#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    cin >> score;
    char grade = 'F';
    for (int i = score; i <= 100; i++)
    {
        if(i >= 90)
        {
            grade = 'A';
        }
        else if(i >= 80)
        {
            grade = 'B';
        }
        else if(i >= 70)
        {
            grade = 'C';
        }
        else if(i >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
        cout << grade << ' ';
    }
    return 0;
}