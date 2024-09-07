#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned pos, t;
    unsigned long sin;

    while (1)
    {
        cout << "Sin (0 de thoat): ";
        cin >> sin;
        if (!sin)
            break;
        unsigned sum = sin % 10;
        sin /= 10;
        for (int pos = 0; pos < 8 && sin > 0; sin /= 10, ++pos)
        {
            t = sin % 10;
            if (pos % 2)
                sum += t;
            else
                sum += (2 * t) / 10 + (2 * t) % 10;
        }
        cout << "SIN " << (pos < 8 || sin > 0 || sum % 10 ? "khong " : "") << "hop le!" << endl;
    }
}