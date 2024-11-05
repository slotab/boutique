#include "Client.h"

void Client::achatFid()
{
    if (carteFid == 1)
        cout << "Vous possedez deja une carte de fidelite" << endl;
    else
    {
        carteFid = 1;
        cout << "Vous possedez maintenant la carte de fidelite du magasin ! Une reduction de 10% est appliquee sur tout nos produits" << endl;
    }
}

void Client::acheterProduit(vector<Produit>& catalogue, int numeroProduit, double quantite)
{
    if (catalogue[numeroProduit].getPrixVente() == 0)
        cout << "Produit non trouve." << endl;
    else
    {
        double prix_total;
        prix_total = quantite * catalogue[numeroProduit].getPrixVente();
        if (carteFid == 1)
            prix_total = prix_total * 0.9;
        cout << "Ceci vous fait un total de " << prix_total << " $" << endl;
    }
}

