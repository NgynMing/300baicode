#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    ( a == b && a == c ) ? cout << "=" :
    ( a > b && a > c ) ? cout << a :
    ( b > a && b > c ) ? cout << b :
    cout << c;
    return 0;
}