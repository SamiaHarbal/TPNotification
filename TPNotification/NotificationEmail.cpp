#include "NotificationEmail.h"
NotificationEmail::NotificationEmail(string destinataire, string message, string objet)
    : Notification(destinataire, message)
{
    this->objet = objet;
}

void NotificationEmail::afficher()
{
    cout << "EMAIL | A : " << destinataire << " | Objet : " << objet << " | Message : " << message << endl;
}

void NotificationEmail::envoyer()
{
    cout << "Email envoye a " << destinataire << endl;
}