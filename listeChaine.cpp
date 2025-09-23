#include <iostream>
using namespace std;

class Noeud {
	public:
	    int valeur;
	    Noeud* suivant;
	    
	    // Constructeur pour faciliter la création
	    Noeud(int val) : valeur(val), suivant(nullptr) {}
	    
	    // Destructeur (optionnel, mais bonne pratique)
	    ~Noeud() {}
};

void ajouterDebut(Noeud*& tete, int valeur) {
    Noeud* nouveau = new Noeud(valeur);
    nouveau->suivant = tete;
    tete = nouveau;
}

void afficherListe(Noeud* tete){
    cout << "Liste : ";
    Noeud* courant = tete;
    while (courant != nullptr)
    {
        cout << courant->valeur << "->";
        courant = courant->suivant;
    }
    cout << "NULL" << endl;
}

int main() {
    Noeud * tete = nullptr;

    ajouterDebut(tete,30);
    cout << "Liste apres ajout de 30 : ";
    afficherListe(tete); 

    ajouterDebut(tete,20);
    cout << "Liste apres ajout de 20 : ";
    afficherListe(tete); 

    ajouterDebut(tete,10);
    cout << "Liste apres ajout de 10 : ";
    afficherListe(tete); 
    
    return 0;
}