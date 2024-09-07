#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (!a)
    {
        if (!b)
        {
            if (c)
            {
                cout << "PT  vo nghiem " << endl;
            }
            else
            {
                cout << "PT co vo so nghiem " << endl;
            }
        }
        else
        {
            cout << "PT co nghiem: " << -c / b << endl;
        }
    }
    else
    {
        float d = b * b - 4 * a * c;
        if (d > 0) {
            cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
        }
        else if (d == 0)
        {
            cout << "PT co 1 nghiem: x1=x2= " << -b / (2 * a) << endl;
        }
        else
        {
            cout << "PT vo nghiem" << endl;
        }
    }
    
}