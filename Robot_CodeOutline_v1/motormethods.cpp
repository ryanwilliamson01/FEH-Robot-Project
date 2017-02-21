/*
 *  - OFFICIAL MINECRAFT ROBOT TEAM -
 *
 *  Group C6
 *  Joe Forsman / Carson McCasland / Bailey Mulhern / Ryan Williamson
 *
 *  Motor Methods
 *  Version 1.0
 *  2/21/17 12:57PM
 *
 */

#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>

#include "motormethods.h"

//Defining Pins
#define SHAFT_ENCODER_LEFT //FEHIO::P0_0 INSERT SHAFT ENCODER PINS
#define SHAFT_ENCODER_RIGHT //INSERT SHAFT ENCODER PINS
#define DRIVE_MOTOR_LEFT //FEHMotor::Motor0 INSERT MOTOR PINS
#define DRIVE_MOTOR_RIGHT //INSERT MOTOR PINS
#define SERVO_MOTOR //FEHServo::Servo0 INSERT SERVO PINS

//Declaring Shaft Encoders
DigitalEncoder shaftEncoderLeft(SHAFT_ENCODER_LEFT);
DigitalEncoder shaftEncoderRight(SHAFT_ENCODER_RIGHT);
//Declaring Drive Motors
FEHMotor driveMotorLeft(DRIVE_MOTOR_LEFT,12.0);
FEHMotor driveMotorRight(DRIVE_MOTOR_RIGHT,12.0);
//Declaring Servo Motors
FEHServo servoMotor(SERVO_MOTOR);

/*
 * Drives forward infinitely
 */
void DriveForward(int percent)
{
    /*
     *  INSERT CODE HERE
     */
}

/*
 *Drives forward a specified amount in inches
 */
void DriveForward(int percent, double inch)
{
    /*
     *  INSERT CODE HERE
     */
}

/*
 * Drives backward infinitely
 */
void DriveBackward(int percent)
{
    /*
     *  INSERT CODE HERE
     */
}

/*
 *Drives backward a specified amount in inches
 */
void DriveBackward(int percent, double inch)
{
    /*
     *  INSERT CODE HERE
     */
}

/*
 *Drives forward until the front bump switches are pressed
 */
void DriveForwardUntilPressed(int percent)
{
    /*
     *  INSERT CODE HERE
     */
}

/*
 *Drives backward until the back bump switches are pressed
 */
void DriveBackwardUntilPressed(int percent)
{
    /*
     *  INSERT CODE HERE
     */
}
