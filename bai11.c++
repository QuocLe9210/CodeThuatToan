#include <bits/stdc++.h>

using namespace std;

int main() {
    char human, computer;
    unsigned int h = 0, c = 0; // h: điểm của người; c: điểm của máy

    srand(static_cast<unsigned int>(time(nullptr)));

    while (true) {
        cout << "Nhap ky tu (b-d-k), ky tu khac de thoat: ";
        cin >> human;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (human) {
            case 'b':
                switch (rand() % 3) {
                    case 0: computer = 'b'; break;
                    case 1: computer = 'd'; h++; break;
                    case 2: computer = 'k'; c++;
                }
                break;
            case 'd':
                switch (rand() % 3) {
                    case 0: computer = 'b'; c++; break;
                    case 1: computer = 'd'; break;
                    case 2: computer = 'k'; h++;
                }
                break;
            case 'k':
                switch (rand() % 3) {
                    case 0: computer = 'b'; h++; break;
                    case 1: computer = 'd'; c++; break;
                    case 2: computer = 'k';
                }
                break;
            default: return 0;
        }

        cout << "Computer: " << computer << endl;
        cout << "Ty so: " << h << " - " << c << endl;
    }

    return 0;
}