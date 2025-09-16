#include <iostream>
using namespace std;

int main(){
int nbOrigine;
int reverseNb = 0;


cout <<"Entrez votre nombre : ";
cin >> nbOrigine;

int num = nbOrigine;
while(num != 0){
int lastdigit = num % 10;
reverseNb = reverseNb * 10 + lastdigit;
num = num/10;
}

if (nbOrigine == reverseNb) {
    cout <<"Le nombre "<<nbOrigine<<" est un palindrome" <<endl;
    return 0;
}

else {
    cout <<"Le nombre "<<nbOrigine<<" n'est pas un palindrome" <<endl;
}
}
