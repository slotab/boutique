#include "Gerant.h"
#include "Produit.h"

int Gerant::ajouterProduit(vector<Produit>& catalogue, int nbProduits)
{
    Produit nouveauProduit;

    string reference, nomCommercial;
    double prixAchat, prixVente;
    int quantiteDisponible;

    cout << "Donnez la r�f�rence du produit � ajouter : ";
    cin >> reference;
    nouveauProduit.setReference(reference);

    cout << "Donnez le nom du produit � ajouter : ";
    cin >> nomCommercial;
    nouveauProduit.setNomCommercial(nomCommercial);

    cout << "Donnez le prix d'achat du produit � ajouter : ";
    cin >> prixAchat;
    nouveauProduit.setPrixAchat(prixAchat);

    cout << "Donnez le prix de vente du produit � ajouter : ";
    cin >> prixVente;
    nouveauProduit.setPrixVente(prixVente);

    cout << "Donnez la quantit� disponible du produit � ajouter : ";
    cin >> quantiteDisponible;
    nouveauProduit.setQuantiteDisponible(quantiteDisponible);

    catalogue.push_back(nouveauProduit);
    nbProduits++;

    return nbProduits;
}

void Gerant::consulterCatalogue(const vector<Produit>& catalogue, int nbProduits) const
{
    cout << "Catalogue des produits :\n";
    for (int i = 0; i < nbProduits; i++ ) {
        cout << i << "-";
        catalogue[i].afficherProduit();
        cout << endl;
    }
}

void Gerant::modifierQuantiteProduit(vector<Produit>& catalogue, int numeroProduit)
{
    if (catalogue[numeroProduit].getPrixVente() == 0)
    cout << "Produit non trouv�." << endl;
    else
    {
        int nouvelleQuantite;
        cout << "Quelle est la nouvelle quantite de ce produit ?" << endl;
        cin >> nouvelleQuantite;
        cout << "Quantite mofifie !" << endl ;
        catalogue[numeroProduit].setQuantiteDisponible(nouvelleQuantite);
    }
}

