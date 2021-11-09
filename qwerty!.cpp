#include <iomanip>
#include<math.h>
#include<windows.h>
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i=5;
    float minX, maxX, h, x;
    double y;
    cin >> minX >> maxX >> h;
    x = minX;
    do 
    {
        y = (pow(x, 5) + 3 * tan(pow(x, 2) + 2));
        (x += h);
        cout << setw(10) << left << x << setw(4) << y << endl;
       
    }
       while (x <= maxX + h / 2)




}