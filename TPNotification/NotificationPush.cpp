#include "NotificationPush.h"

NotificationPush::NotificationPush(string destinataire,string message, string application)
    : Notification(destinataire, message)
{
    this->application = application;
}

void NotificationPush::afficher()
{
    cout << "PUSH | Utilisateur : " << destinataire<< " | Application : " << application << " | Message : " << message << endl;
}

void NotificationPush::envoyer()
{
    cout << "Notification Push envoyee a " << destinataire << endl;
}