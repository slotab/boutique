#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"
#include "Employe.h"
#include "Client.h"
#include "Gerant.h"
using namespace std;


Gerant gerant;
Client client;
Employe employe;


int afficherMenu(int a)
{
    int choix;
    cout << "-------------Menu-------------" << endl;
    cout << "1-Ajouter un nouveau produit" << endl;
    cout << "2-Modifier la quantit� disponible d'un produit" << endl;
    cout << "3-Ajouter ou supprimer un client" << endl;
    cout << "4-Acheter une carte de fidelite" << endl;
    cout << "5-Acheter des produits" << endl;
    cout << "6-Afficher le catalogue des produits" << endl;
    cout << "7-Sortir de la boutique" << endl << endl;
    cout << "Quelle action souhaitez vous realiser?" << endl;
    cin >> choix;
    return choix;
}

int choix(vector<Produit>& catalogue, int& nbProduits) {
    int action = afficherMenu(0);
    Gerant gerant;
    Client client;
    Employe employe;

    switch (action) {
    case 1: {
        nbProduits = gerant.ajouterProduit(catalogue, nbProduits);
        break;
    }
    case 2: {
        int numeroProduit;
        cout << "Entrez le num�ro du produit � modifier : ";
        cin >> numeroProduit;
        gerant.modifierQuantiteProduit(catalogue, numeroProduit);
        break;
    }
    case 3: {
        cout << "Fonctionnalit� d'ajout ou suppression de client � impl�menter." << endl;
        break;
    }
    case 4: {
        client.achatFid();
        break;
    }
    case 5: {
        int numeroProduit;
        double quantite;
        cout << "Entrez le num�ro du produit � acheter : ";
        cin >> numeroProduit;
        cout << "Entrez la quantit� : ";
        cin >> quantite;
        client.acheterProduit(catalogue, numeroProduit, quantite);
        break;
    }
    case 6: {
        gerant.consulterCatalogue(catalogue, nbProduits);
        break;
    }
    case 7: {
        cout << "Merci de votre visite. � bient�t !" << endl;
        break;
    }
    default: {
        cout << "Choix invalide. Veuillez choisir une option entre 1 et 7." << endl;
        break;
    }
    }
    return action;

}

int main()
{
    int nbProduits = 0;
    vector<Produit> catalogue;
    //int a = afficherMenu(0);
    int action=0;
    do {
        action = choix(catalogue , nbProduits);
    } while (action != 7);
}