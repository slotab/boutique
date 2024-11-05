#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "Personne.h"
using namespace std;

class Client:public Personne
{
private:
	bool carteFid = 0;
public:
	void achatFid();
	void acheterProduit(vector<Produit>& catalogue, int numeroProduit, double quantite);
};

