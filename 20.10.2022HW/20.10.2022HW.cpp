#include <iostream>
#include <cmath>

using namespace std;

struct Ss {
    int dlina;
    int klirens;
    int obem;
    int mosh;
    int d;
    char color;
    char pered;
};
Ss ff = {};
void fZad() {
    cout << "dlinu vvedi"; cin >> ff.dlina;
    cout << "klirens"; cin >> ff.klirens;
    cout << "obem"; cin >> ff.obem;
    cout << "mosh"; cin >> ff.mosh;
    cout << "d"; cin >> ff.d;
    cout << "color"; cin >> ff.color;
    cout << "pered"; cin >> ff.pered;
}
void fShow() {
    cout << endl << "dlina "; { cout << ff.dlina << endl; }
    cout << "klirens "; { cout << ff.klirens << endl; }
    cout << "obem "; { cout << ff.obem << endl; }
    cout << "mosh "; { cout << ff.mosh << endl; }
    cout << "d "; { cout << ff.d << endl; }
    cout << "color "; { cout << ff.color << endl; }
    cout << "pered "; { cout << ff.pered << endl; }
}
void fPoisk() {
    string a;
    cin >> a;
    if (a == "dlina ") { cout << ff.dlina; }
    if (a == "klirens ") { cout << ff.klirens; }
    if (a == "obem ") { cout << ff.obem; }
    if (a == "mosh ") { cout << ff.mosh; }
    if (a == "d ") { cout << ff.d; }
    if (a == "color ") { cout << ff.color; }
    if (a == "pered ") { cout << ff.pered; }
}
int main() {
    fZad();
    fShow();
    fPoisk();
}