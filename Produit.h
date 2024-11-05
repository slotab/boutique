#pragma once
#include <iostream>
#include <string>
using namespace std;

class Produit
{
private:
    string reference;
    string nom_commercial;
    double prix_achat = 0.0;
    double prix_vente = 0;
    double quantite_disponible = 0;
public:
    void produit();
    string getReference() const;
    string getNomCommercial() const;
    double getPrixAchat() const;
    double getPrixVente() const;
    double getQuantiteDisponible();
    void setReference(const string& reference);
    void setNomCommercial(const string& nom_commercial);
    void setPrixAchat(double prix_achat);
    void setPrixVente(double prix_vente);
    void setQuantiteDisponible(double quantite_disponible);
    void afficherProduit() const;
};

