#include <iostream>
#include <cmath>
#define eps 1e-10

using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        unsigned f = 0;

        if (a == b || b == c || c == a)
            f += 1;
        if (a == b && b == c)
            f += 1;
        if (fabs(a * a + b * b - c * c) < eps ||
            fabs(a * a + c * c - b * b) < eps ||
            fabs(b * b + c * c - a * a) < eps)
            f += 3;

        switch (f)
        {
        case 0:
            cout << "Tam giac thuong\n";
            break;
        case 1:
            cout << "Tam giac can\n";
            break;
        case 2:
            cout << "Tam giac deu\n";
            break;
        case 3:
            cout << "Tam giac vuong\n";
            break;
        case 4:
            cout << "Tam giac vuong can\n";
            break;
        }

        double p = (a + b + c) / 2;
        cout << "Dien tich S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    }
    else
    {
        cout << "Khong hop le\n";
    }

    return 0;
}
