#include <bits/stdc++.h>

using namespace std;

int main()
{
    double goc;
    cout << "Nhap goc ";
    cin >> goc;
    goc /= 60;
    cout << "x thuoc goc thu: " << (int)ceil(goc / 90) % 4 << endl;
    cout << "cos(x): " << cos(goc * M_PI / 180) << endl;
}