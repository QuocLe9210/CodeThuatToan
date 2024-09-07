#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    !a && (!b && cout << ("Vo so nghiem") || cout << ("Vo nghiem\n")) || cout << ("x = %g\n", (double)-b / a);
}