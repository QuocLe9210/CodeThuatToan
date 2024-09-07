#include <bits/stdc++.h>

using namespace std;

int main()
{
    double xC, yC, xM, yM, R, d;
    cout << "Nhap toa do tam C(xC, yC)";
    cin >> xC >> yC;
    cout << "Nhap ban kinh R";
    cin >> R;
    cout << "Nhap toa do tam M(xM, yM)";
    cin >> xM >> yM;
    d = R * R - ((xM - xC) * (xM - xC) + (yM - yC) * (yM - yC));
    if (d > 0)
        cout << "M nam trong C()" << endl;
    else if (d < 0)
        cout << "M nam ngoai C()" << endl;
    else
        cout << "M nam trong C" << endl;
}