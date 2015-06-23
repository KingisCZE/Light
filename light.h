#ifndef LIGHT_H
#define LIGHT_H
#include <QString>


class Light
{

private:
    bool Status;

public:
    Light();
    void TurnOn();
    void TurnOff();
    QString getStatus();

};

#endif // LIGHT_H
