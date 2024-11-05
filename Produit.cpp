#include "Produit.h"


void Produit::produit()
{
	reference = " ";
	nom_commercial = " ";
	prix_achat = 0;
	prix_vente = 0;
	quantite_disponible = 0;
}

string Produit::getReference() const
{
	return reference;
}

string Produit::getNomCommercial() const
{
	return nom_commercial;
}

double Produit::getPrixAchat() const
{
	return prix_achat;
}

double Produit::getPrixVente() const
{
	return prix_vente;
}

double Produit::getQuantiteDisponible()
{
	return quantite_disponible;
}

void Produit::setReference(const string& reference)
{
	this->reference = reference;
}

void Produit::setNomCommercial(const string& nom_commercial)
{
	this->nom_commercial = nom_commercial;
}

void Produit::setPrixAchat(double prix_achat)
{
	this->prix_achat = prix_achat;
}

void Produit::setPrixVente(double prix_vente)
{
	this->prix_vente = prix_vente;
}

void Produit::setQuantiteDisponible(double quantite_disponible)
{
	this->quantite_disponible = quantite_disponible;
}

void Produit::afficherProduit() const {
	cout << "Reference : " << reference  << endl
		<< "Nom commercial : " << nom_commercial << endl
		<< "Prix d'achat : " << prix_achat  << endl
		<< "Prix de vente : " << prix_vente  << endl
		<< "Quantite disponible : " << quantite_disponible;
}