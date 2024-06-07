#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = a, y = b, z = c;
    if (a > b)
        swap(x, y);
    if (y > z)
        swap(y, z);
    if (x > y)
        swap(x, y);

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}