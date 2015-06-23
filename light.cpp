#include "light.h"
//#include "mainwindow.h"
//#include "ui_mainwindow.h"

Light::Light()
{
    this->Status = false;
}

void Light::TurnOn()
{
    this->Status = true;
}

void Light::TurnOff()
{
    this->Status = false;
}

QString Light::getStatus()
{
    if (this->Status == true) {
        return "The light is turned ON!";
    } else {
        return "The light is turned OFF!";
    }
}
