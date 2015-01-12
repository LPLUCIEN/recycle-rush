#ifndef CHASSIS
#define CHASSIS

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:
    Talon* drivemotorA;
    Talon* drivemotorB;
    Talon* drivemotorC;
    Talon* drivemotorD;

public:
    Chassis();
    ~Chassis();
    void drive(double vX, double vY, double vZ, double Throttle);
    void InitDefaultCommand();
};

#endif
