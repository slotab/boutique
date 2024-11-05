#include "Personne.h"

void Personne::personne()
{
	nom = " ";
	prenom = " ";
	date = " ";
	id = 0;
	tel = 0;
}

void Personne::afficherInfos() const {
    cout << "Nom : " << nom << "\n"
        << "Pr�nom : " << prenom << "\n"
        << "Date de naissance : " << date << "\n"
        << "ID : " << id << "\n"
        << "T�l�phone : " << tel << "\n";
}

string Personne::getNom() const
{ return nom; 
}

string Personne::getPrenom() const
{ return prenom; 
}

string Personne::getDateNaissance() const
{ return date; 
}

int Personne::getIdUnique() const
{ return id; 
}

int Personne::getTelephone() const
{ return tel; 
}

void Personne::setNom(const string& nom)
{ this->nom = nom; 
}

void Personne::setPrenom(const string& prenom)
{ this->prenom = prenom;
}

void Personne::setDateNaissance(const string& date)
{ this->date = date;
}

void Personne::setIdUnique(int id)
{ this->id = id; 
}

void Personne::setTelephone(int tel)
{ this->tel = tel; 
}