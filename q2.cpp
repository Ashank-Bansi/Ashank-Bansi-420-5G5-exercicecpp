#include <iostream>
using namespace std;

int main(){
    int choix;
    double temp;
    double tempFinal;

    cout << "Choisissez votre option :" << endl;
    cout << "1. Celsius vers Farenheit" << endl;
    cout << "2. Farheneit vers Celsius" << endl;
    cout << "Votre choix : ";
    cin >> choix;
    
    if (choix == 1){
    cout << "Entrez la temperature en celsius : ";
    cin >> temp;
    tempFinal = (temp * 1.8) +32 ;
    cout << temp << "°C = " <<tempFinal <<"°F" <<endl;
    return 0;

    } else if (choix == 2) 
    cout << "Entrez la temperature en farenheit : ";
    cin >> temp;
    tempFinal = (temp -32 )/1.8;
    cout << temp << "°F = " <<tempFinal <<"°C" <<endl;
    return 0;
    
}