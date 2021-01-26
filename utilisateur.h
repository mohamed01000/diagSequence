#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include<QString>

class Utilisateur
{

    std::string nom;
public:
    Utilisateur();

    Utilisateur(std::string n);
    std::string getNom();

};

#endif // UTILISATEUR_H
