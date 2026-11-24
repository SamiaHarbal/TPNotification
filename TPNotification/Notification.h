#pragma once
#include <iostream>
#include <string>
using namespace std;

class Notification
{
protected:
    string destinataire;
    string message;

public:
    Notification(string destinataire, string message);
    virtual void afficher();
    virtual void envoyer() = 0;
    virtual ~Notification();
};