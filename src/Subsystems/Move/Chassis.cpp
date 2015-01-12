/*
 * Chassis.cpp
 *
 *  Created on: 10 Jan 2015
 *      Author: lucien
 */

#include "Chassis.h"

Chassis :: Chassis(): Subsystem("chassis"){
    driveMotorA = new Talon(1);
    driveMotorB = new Talon(2);
    driveMotorC = new Talon(3);
    driveMotorD = new Talon(4);
    driveMotorE = new Talon(5);
    driveMotorF = new Talon(6);

}

Chassis :: ~Chassis(){
    delete driveMotorA;
    delete driveMotorB;
    delete driveMotorC;
    delete driveMotorD;
    delete driveMotorE;
    delete driveMotorF;
}

void Chassis :: drive(double vX, double vY, double vR, double Throttle){

}

void Chassis :: InitDefaultCommand() {

}
