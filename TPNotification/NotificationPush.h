#pragma once
#include "Notification.h"

class NotificationPush : public Notification
{
private:
    string application;

public:
    NotificationPush(string destinataire,string message, string application);
    void afficher() override;
    void envoyer() override;
};
