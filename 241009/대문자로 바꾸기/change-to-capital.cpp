#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char** texts = new char*[5];
    char c;
    for (int i = 0; i < 5; i++)
    {
        texts[i] = new char[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> c;
            texts[i][j] = c - 'a' + 'A';
        }
        for (int j = 0; j < 3; j++)
        {
            cout << texts[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        delete texts[i];
    }
    delete texts;
    return 0;
}