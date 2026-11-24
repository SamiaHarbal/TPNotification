// TPNotification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include"GestionnaireNotifications.h"
int main()
{
    NotificationEmail n1("sara@example.com", "Nouvelle connexion detectee","Securite");

    NotificationSMS n2("0612345678","Votre code est 4582","Orange");

    NotificationPush n3("user_102", "Paiement confirme","MyBank");

    Notification* tab[3];

    tab[0] = &n1;
    tab[1] = &n2;
    tab[2] = &n3;

    for (int i = 0; i < 3; i++)
    {
        tab[i]->afficher();
        tab[i]->envoyer();
        cout << endl;
    }
    GestionnaireNotifications g;

    g.ajouter(&n1);
    g.ajouter(&n2);
    g.ajouter(&n3);

    cout << "----- Partie D -----" << endl;

    g.envoyerToutes();

    return 0;
}
  
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
