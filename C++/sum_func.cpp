#include <iostream>
using namespace std;

int sum(int a, int b, int c) {
    int x = a + b + c;
    return x;
}

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter a number:" << endl;
    cin >> a;

    cout << "Enter another number:" << endl;
    cin >> b;

    cout << "Enter a third number:" << endl;
    cin >> c;

    cout << "The sum of the three numbers is: " << sum(a, b, c) << endl;
    return 0;
}