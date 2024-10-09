#include <iostream>
using namespace std;

void request1(int* arr, int& a, int& n)
{
    if(a <= n)
        cout << arr[a - 1] << endl;
}

void request2(int* arr, int& b, int& n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == b)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

void request3(int* arr, int& s, int& e, int& n)
{
    if(s < 1 || e < 1 || s > n || e > n)
    {
        return;
    }
    for (int i = s - 1; i <= e - 1; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int* request = new int[3];
    for (int i = 0; i < q; i++)
    {
        request[0] = 0;
        request[1] = 0;
        request[2] = 0;
        cin >> request[0];
        switch(request[0])
        {
            case 1:
            {
                cin >> request[1];
                request1(arr, request[1], n);
                break;
            }
            case 2:
            {
                cin >> request[1];
                request2(arr, request[1], n);
                break;
            }
            case 3:
            {
                cin >> request[1] >> request[2];
                request3(arr, request[1], request[2], n);
                break;
            }
        }
    }
    delete request;
    delete arr;
    return 0;
}