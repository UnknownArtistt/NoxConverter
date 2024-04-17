#ifndef UNIT_CONVERSORS_H
#define UNIT_CONVERSORS_H

// Temperature conversors

double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

// Distance conversors

double kilometersToMiles(double kilometers);
double milesToKilometers(double miles);
double metersToYards(double meters);
double yardsToMeters(double yards);
double centimetersToInches(double centimeters);
double inchesToCentimeters(double inches);

// Weight conversors

double kilosToPounds(double kilos);
double poundsToKilos(double pounds);
double gramsToOunces(double grams);
double ouncesToGrams(double ounces);

// Currency conversors

double eurosToDolars(double euros);
double eurosToBPounds(double euros);
double eurosToYuans(double euros);

double dolarsToEuros(double dolars);
double dolarsToBPounds(double dolars);
double dolarsToYuans(double dolars);

double bpoundsToEuros(double bpounds);
double bpoundsToDolars(double bpounds);
double bpoundsToYuans(double bpounds);

double yuansToEuros(double yuans);
double yuansToDolars(double yuans);
double yuansToBPounds(double yuans);

#endif