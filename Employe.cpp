#include "Employe.h"


void Employe::consulterCatalogue(const vector<Produit>& catalogue, int nbProduits) const
{
    cout << "Catalogue des produits :\n";
    for (int i = 0; i < nbProduits; i++) {
        cout << i << "-";
        catalogue[i].afficherProduit();
        cout << endl;
    }
}

void Employe::modifierQuantiteProduit(vector<Produit>& catalogue, int numeroProduit)
{
    if (catalogue[numeroProduit].getPrixVente() == 0)
        cout << "Produit non trouv�." << endl;
    else
    {
        int nouvelleQuantite;
        cout << "Quelle est la nouvelle quantite de ce produit ?" << endl;
        cin >> nouvelleQuantite;
        cout << "Quantite mofifie !" << endl;
        catalogue[numeroProduit].setQuantiteDisponible(nouvelleQuantite);
    }
}
