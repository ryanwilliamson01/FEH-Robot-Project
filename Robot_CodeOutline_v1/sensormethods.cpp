/*
 *  - OFFICIAL MINECRAFT ROBOT TEAM -
 *
 *  Group C6
 *  Joe Forsman / Carson McCasland / Bailey Mulhern / Ryan Williamson
 *
 *  Sensor Methods
 *  Version 1.0
 *  2/21/17 12:57PM
 *
 */

#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>

#include "sensormethods.h"

//Defining Pins
#define BUMP_FRONT_LEFT //FEHIO::P0_0 INSERT BUMP PINS
#define BUMP_FRONT_RIGHT //INSERT BUMP PINS
#define BUMP_BACK_LEFT //INSERT BUMP PINS
#define BUMP_BACK_RIGHT //INSERT BUMP PINS
#define CDS_CELL FEHIO::P0_0//FEHIO::P0_0 INSERT CDS CELLS PINS
#define ANALOG_OPTOSENSOR_LEFT //FEHIO::P0_0 INSERT ANALOG OPTOSENSOR PINS
#define ANALOG_OPTOSENSOR_MIDDLE //INSERT ANALOG OPTOSENSOR PINS
#define ANALOG_OPTOSENSOR_RIGHT //INSERT ANALOG OPTOSENSOR PINS

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
bool IsFrontPressed()
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
double setCdSThreshold()
{
    float x,y;

    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );
    LCD.WriteLine("Press the Screen to Begin Recording Threshold Values");

    while(!LCD.Touch(&x,&y))
    {
        Sleep(10);
    }

    double max = 0, min = 3.3, average = 0;

    for(int i = 0; i < 100; i++)
    {
        double reading = CdSCell.Value();
        average += reading;

        if(reading > max)
        {
            max = reading;
        }
        else if(reading < min)
        {
            min = reading;
        }

        Sleep(50);
    }

    average = average / 100.0;

    return average;
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
