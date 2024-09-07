#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s;
    cout << "Nhap dien tich s: "  ;
    cin >> s;
    cout << "The tich la: " << 4 * M_PI * pow(sqrt(s / (4 * M_PI)), 3) / 3;
}