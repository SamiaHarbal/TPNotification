#include "Notification.h"
Notification::Notification(string destinataire, string message)
{
    this->destinataire = destinataire;
    this->message = message;
}

void Notification::afficher()
{
    cout << "Destinataire : " << destinataire << endl;
    cout << "Message : " << message << endl;
}

Notification::~Notification()
{
}
