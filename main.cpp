#include <QCoreApplication>
#include <iostream>
#include <utilisateur.h>

using namespace std ;

// Step 1 : Creation d'un utilisateur basic
// mise en place d'un constructeur different qui attend en argument le nom


int main(int argc, char *argv[])
{

    string prenom = "Prenom";
    QCoreApplication a(argc, argv);

    Utilisateur u1("francois");

    std::cout << "Utilisateur 1 : ";
    std::cout << u1.getNom();


    return a.exec();
}
