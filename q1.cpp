#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Entrez a : ";
    cin >> a;

    cout << "Entrez b : ";
    cin >> b;

    cout << "Entrez c : ";
    cin >> c;

    cout << "Entree utilisateur : " << a << " " << b << " " << c << endl;

    if (a >= b && a >= c)
    cout <<"a est le plus grand." << endl;
    if (b >= a && b >= c)
    cout <<"b est le plus grand." <<endl;
    else
    cout <<"c est le plus grand." <<endl;
    return 0;
    
}