#include <bits/stdc++.h>

using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main()
{
    double xA, xB, xC, yA, yB, yC, xM, yM;
    cout << "A(xA,yA)";
    cin >> xA >> yA;
    cout << "B(xB,yB)";
    cin >> xB >> yB;
    cout << "C(xC,yC)";
    cin >> xC >> yC;
    cout << "M(xM,yM)";
    cin >> xM >> yM;

    double abc = area(xA, yA, xB, yB, xC, yC);
    double amb = area(xM, yM, xA, yA, xB, yB);
    double amc = area(xM, yM, xA, yA, xC, yC);
    double abm = area(xA, yA, xB, yB, xM, yM);

    if (amb + amc + abm == abc)
        cout << "M nam trong tam giac ABC" << endl;
    else if (amb == 0 || amc == 0 || abm == 0)
        cout << "M nam tren canh tam giac ABC" << endl;
    else
        cout << "M nam ngoai tam giac" << endl;
}