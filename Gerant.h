#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "Personne.h"
using namespace std;

class Gerant:public Personne 
{
public:
	int ajouterProduit(vector<Produit>& catalogue, int nbProduits);
	void consulterCatalogue(const vector<Produit>& catalogue, int nbProduits) const;
	void modifierQuantiteProduit(vector<Produit>& catalogue, int numeroProduit);
};

