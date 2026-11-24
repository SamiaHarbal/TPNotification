#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string destinataire,string message, string operateur)
    : Notification(destinataire, message)
{
    this->operateur = operateur;
}

void NotificationSMS::afficher()
{
    cout << "SMS | Numero : " << destinataire << " | Operateur : " << operateur << " | Message : " << message << endl;
}

void NotificationSMS::envoyer()
{
    cout << "SMS envoye au " << destinataire << endl;
}