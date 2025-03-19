#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

#if USE_DOUBLE
using var = float;
#else
using var = double;
#endif
using namespace std;

int main()
{
    var sum = 0;
    var array[10^7];
    for(int i = 0; i < (10^7); i++)
    {
        var a = sin(M_PI / (10^7) * i);
        array[i] = a;
        sum += a;
    }
    cout << sum << endl;
}
