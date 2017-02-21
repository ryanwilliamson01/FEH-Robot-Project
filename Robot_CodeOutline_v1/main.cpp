/*
 *  - OFFICIAL MINECRAFT ROBOT TEAM -
 *
 *  Group C6
 *  Joe Forsman / Carson McCasland / Bailey Mulhern / Ryan Williamson
 *
 *  Code Outline
 *  Version 2.0
 *  2/19/17 11:20PM
 *
 */

#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>

//Defining Pins
#define BUMP_FRONT_LEFT //FEHIO::P0_0 INSERT BUMP PINS
#define BUMP_FRONT_RIGHT //INSERT BUMP PINS
#define BUMP_BACK_LEFT //INSERT BUMP PINS
#define BUMP_BACK_RIGHT //INSERT BUMP PINS
#define CDS_CELL //FEHIO::P0_0 INSERT CDS CELLS PINS
#define ANALOG_OPTOSENSOR_LEFT //FEHIO::P0_0 INSERT ANALOG OPTOSENSOR PINS
#define ANALOG_OPTOSENSOR_MIDDLE //INSERT ANALOG OPTOSENSOR PINS
#define ANALOG_OPTOSENSOR_RIGHT //INSERT ANALOG OPTOSENSOR PINS
#define SHAFT_ENCODER_LEFT //FEHIO::P0_0 INSERT SHAFT ENCODER PINS
#define SHAFT_ENCODER_RIGHT //INSERT SHAFT ENCODER PINS
#define DRIVE_MOTOR_LEFT //FEHMotor::Motor0 INSERT MOTOR PINS
#define DRIVE_MOTOR_RIGHT //INSERT MOTOR PINS
#define SERVO_MOTOR //FEHServo::Servo0 INSERT SERVO PINS
//Defining Tasks
#define TASK_DRIVE_FORWARD 0
#define TASK_DRIVE_BACKWARDS 1
#define TASK_TURN_LEFT 2
#define TASK_TURN_RIGHT 3
//Defining States
#define STATE_ON_LINE 0
#define STATE_OFF_LINE_LEFT 1
#define STATE_OFF_LINE_RIGHT 2

//Declaring Bump Switches
DigitalInputPin bumpFrontLeft(BUMP_FRONT_LEFT);
DigitalInputPin bumpFrontRight(BUMP_FRONT_RIGHT);
DigitalInputPin bumpBackLeft(BUMP_BACK_LEFT);
DigitalInputPin bumpBackRight(BUMP_BACK_RIGHT);
//Declaring CdS Cell
AnalogInputPin CdSCell(CDS_CELL);
//Declaring Analog OptoSensors
AnalogInputPin analogOptosensorLeft(ANALOG_OPTOSENSOR_LEFT);
AnalogInputPin analogOptosensorMiddle(ANALOG_OPTOSENSOR_MIDDLE);
AnalogInputPin analogOptosensorRight(ANALOG_OPTOSENSOR_RIGHT);
//Declaring Shaft Encoders
DigitalEncoder shaftEncoderLeft(SHAFT_ENCODER_LEFT);
DigitalEncoder shaftEncoderRight(SHAFT_ENCODER_RIGHT);
//Declaring Drive Motors
FEHMotor driveMotorLeft(DRIVE_MOTOR_LEFT,12.0);
FEHMotor driveMotorRight(DRIVE_MOTOR_RIGHT,12.0);
//Declaring Servo Motors
FEHServo servoMotor(SERVO_MOTOR);

//Set CdS Cell Thresholds
double lightThresholdBlue; //***To be assigned during the calibration process***
double lightThresholdRed;
double lightThresholdNone;
//Set OptoSensor Thresholds
double lineThresholdOrangeLeft;
double lineThresholdOrangeMiddle;
double lineThresholdOrangeRight;

// - UTILITY METHODS -

/*
 * Calibrates all motors and sensors
 *
 * @return true if all motors and sensors were initialized correctly, false if anything went wrong or needs attention
 */
bool Calibrate()
{
    /*
     * INSERT CODE HERE
     */
}

/*
 * Displays all important values to the screen for use in debugging the robot
 */
void Display()
{
    /*
     * INSERT CODE HERE
     */
}
// - UTILITY METHODS -


// - SENSOR METHODS -

// Bump Switches

/*
 * Returns the value of the given bump switch
 *
 * @return true if the bump switch is pressed, false if it is not
 */
bool isPressed(DigitalInputPin bump)
{
    /*
     * INSERT CODE HERE
     */
}

/*
 * Returns whether or not both front bump switches are pressed
 *
 * @return true if both front bump switches are pressed, false if one or both are not pressed
 */
bool isFrontPressed()
{
    /*
     * INSERT CODE HERE
     */
}

/*
 * Returns whether or not both back bump switches are pressed
 *
 * @return true if both back bump switches are pressed, false if one or both are not pressed
 */
bool isBackPressed()
{
    /*
     * INSERT CODE HERE
     */
}

// CdS Cell

/*
 * Sets the threshholds for various colors of light
 */
void setCdSThreshold()
{
    /*
     * INSERT CODE HERE
     */
}

// Analog Optosensors

/*
 * Sets the threshold for various colors of line
 */
void setOptosensorThreshold()
{
    /*
     * INSERT CODE HERE
     */
}

// - SENSOR METHODS -



// - MOTOR METHODS -

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
// - MOTOR METHODS -



int main(void)
{

    float x,y;

    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    while( true )
    {
        if( LCD.Touch(&x,&y) )
        {
            LCD.WriteLine( "Hello World!" );
            Sleep( 100 );
        }
    }
    return 0;
}
