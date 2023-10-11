#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    double R;
    double x, xp, xk, dx;
    double y;
    double Pi = 4 * atan(1.);

    cout << "R = ";
    cin >> R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x <= -7 - R)
            y = R;      // формулая прямої (рівної)

        else
            if (x >= -7 - R && x <= -7 + R)
                y = R - sqrt(R * R - x * x - 14 * x - 49);  //формула дуги

            else
                if (x >= -7 + R && x <= -4)
                    y = R;       //формула прямої (рівної)

                else
                    if (x >= -4 && x <= 0)
                        y = R + (-R / 4) * (x + 4);

                    else
                        if (x >= 0 && x <= Pi / 2)
                            ;      //синус

                        else
                            if (x >= Pi / 2 && x <= Pi)
                                y = sin(x);
                            else
                                y = x - Pi;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    cin.get();
    return 0;
}
