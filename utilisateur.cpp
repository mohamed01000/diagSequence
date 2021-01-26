#include "utilisateur.h"
#include <iostream>
#include <QString>


using namespace std ;

Utilisateur::Utilisateur()
{

}


Utilisateur::Utilisateur(std::string n)
{
nom = n ;
}

string Utilisateur::getNom()
{
    return this->nom;
}
