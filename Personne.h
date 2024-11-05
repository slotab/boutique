#pragma once
#include <iostream>
#include <string>
using namespace std;


class Personne
{
protected :
	string nom;
	string prenom;
	string date;
	int id = 0;
	int tel = 0;
public:
	void personne();
	void afficherInfos() const;
	string getNom() const;
	string getPrenom() const;
	string getDateNaissance() const;
	int getIdUnique() const;
	int getTelephone() const;
	void setNom(const string& nom);
	void setPrenom(const string& prenom);
	void setDateNaissance(const string& date);
	void setIdUnique(int id);
	void setTelephone(int tel);
};

