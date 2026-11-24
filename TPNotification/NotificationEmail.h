#pragma once
#include "Notification.h"

class NotificationEmail : public Notification
{
private:
    string objet;

public:
    NotificationEmail(string destinataire,string message, string objet);
    void afficher() override;
    void envoyer() override;
};