#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    double* arr;
    arr = new double[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    delete arr;
    double avr = sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avr << endl; 
    if(avr >= 4.0f)
    {
        cout << "Perfect";
    } 
    else if(avr >= 3.0f)
    {
        cout << "Good";
    } 
    else
    {
        cout << "Poor";
    }
    return 0;
}