#include "unit_conversors.h"
#include <stdio.h>

// Temperature functions implementation

double celsiusToFahrenheit(double celsius) 
{
    double fahrenheit = (celsius * 9.0/5.0) + 32;
    return fahrenheit;
}

double fahrenheitToCelsius(double fahrenheit) 
{
    double celsius = (fahrenheit - 32) * 5.0/9.0;
    return celsius;
}

double celsiusToKelvin(double celsius) 
{
    double kelvin = celsius + 273.15;
    return kelvin;
}

double kelvinToCelsius(double kelvin) 
{
    double celsius = kelvin - 273.15;
    return celsius;
}

double fahrenheitToKelvin(double fahrenheit) 
{
    // First to Celsius
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    // Then to Kelvin
    double kelvin = celsius + 273.15;
    return kelvin;
}

double kelvinToFahrenheit(double kelvin) 
{
    // First to Celsius
    double celsius = kelvin - 273.15;
    // Then to Fahrenheit
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}

// Distance functions implementation

double kilometersToMiles(double kilometers) 
{
    double miles = kilometers / 1.609344;
    return miles;
}

double milesToKilometers(double miles) 
{
    double kilometers = miles * 1.609344;
    return kilometers;
}

double metersToYards(double meters) 
{
    double yards = meters * 1.093613;
    return yards;
}

double yardsToMeters(double yards) 
{
    double meters = yards / 1.093613;
    return meters;
}

double centimetersToInches(double centimeters) 
{
    double inches = centimeters / 2.54;
    return inches;
}

double inchesToCentimeters(double inches) 
{
    double centimeters = inches * 2.54;
    return centimeters;
}

// Weight functions implementation

double kilosToPounds(double kilos) 
{
    double pounds = kilos * 2.204622;
    return pounds;
}

double poundsToKilos(double pounds) 
{
    double kilos = pounds / 2.204622;
    return kilos;
}

double gramsToOunces(double grams) 
{
    double ounces = grams / 28.34952;
    return ounces;
}

double ouncesToGrams(double ounces) 
{
    double grams = ounces * 28.34952;
    return grams;
}

// Currency functions implementation

double eurosToDolars(double euros) 
{
    double dolars = euros * 1.06;
    return dolars;
}

double eurosToBPounds(double euros) 
{
    double pounds = euros * 0.85;
    return pounds;
}

double eurosToYuans(double euros) 
{
    double yuans = euros * 7.69;
    return yuans;
}

double dolarsToEuros(double dolars) 
{
    double euros = dolars / 1.06;
    return euros;
}

double dolarsToBPounds(double dolars) 
{
    double pounds = dolars * 0.80;
    return pounds;
}

double dolarsToYuans(double dolars) 
{
    double yuans = dolars * 7.24;
    return yuans;
}

double bpoundsToEuros(double bpounds) 
{
    double euros = bpounds / 0.85;
    return euros;
}

double bpoundsToDolars(double bpounds) 
{
    double dolars = bpounds * 1.25;
    return dolars;
}

double bpoundsToYuans(double bpounds) 
{
    double yuans = bpounds * 9.02;
    return yuans;
}

double yuansToEuros(double yuans) 
{
    double euros = yuans * 0.13;
    return euros;
}

double yuansToDolars(double yuans) 
{
    double dolars = yuans * 0.14;
    return dolars;
}

double yuansToBPounds(double yuans) 
{
    double pounds = yuans * 0.11;
    return pounds;
}

