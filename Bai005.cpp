#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << ( a + b + c) / 3;
    return 0;
}