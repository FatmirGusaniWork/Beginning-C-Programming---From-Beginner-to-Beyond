/*
 * Functions and Prototypes - Converting Temperatures
 * In this exercise you will create a program that will be used to convert Fahrenheit temperatures to Celsius and Kelvin temperatures through the use of two functions.
 * For this program, assume that temperature will be represented as a double value
 * Begin by defining the function prototypes for the functions fahrenheit to celsius and fahrenheit to kelvin which are both passed a
 * double value and return a double value
 * Now, at the bottom of the file, write the full definitions of both functions.
 * The function fahrenheit to celsius is passed a Fahrenheit temperature and returns a rounded Celsius temperature. You may use the
 * «math> function round in order to round the return value. The formula to convert Fahrenheit to Celsius is (5.0/9.0)* (temperature - 32)
 * The function fahrenheit to kelvin is passed a Fahrenheit temperature and returns a rounded Kelvin temperature. The formula to
 * convert Fahrenheit to Kelvin is (5.0/9.0)* (temperature - 32) + 273
 * Remember the rules of PEMDAS when defining the body of your functions.
 * Remember the rules of PEMDAS when defining the body of your functions.
 * Now, from the temperature conversion function, declare and initialize the variables celsius temperature and kelvin temperature by calling
 * the appropriate functions which you have just defined and passing the variable fahrenheit temperature
 * You do not need to declare or initialize fahrenheit temperature as it is already available up you as a parameter of the temperature conversion function.
 * You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check
 * the solution if you really get stuck.
 */
 
#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

double fahrenheit_to_celsius(double temperature) {
    return round(((temperature - 32)*5)/9);
} 

double fahrenheit_to_kelvin(double temperature) {
    return round(((temperature - 32)*5)/9 + 273);
}