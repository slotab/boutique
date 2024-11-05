#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "Personne.h"
using namespace std;

class Employe:public Personne
{
public :
	void modifierQuantiteProduit(vector<Produit>& catalogue, int numeroProduit);
	void consulterCatalogue(const vector<Produit>& catalogue, int nbProduits) const;
};

