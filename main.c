#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "unit_conversors.h"

void showBanner()
{
    printf("\n--------------------------------------------------------------------\n");
    system("figlet -f slant NoxConverter\n");
    printf("                    [+] Coded By AbyssWatcher [+]\n");
    printf("--------------------------------------------------------------------\n");
}

void printTempSubMenu() 
{
    printf("\nTEMPERATURE\n");
    printf("--------------------------\n");
    printf("[1] Celsius to Fahrenheit\n");
    printf("[2] Celsius to Kelvin\n");
    printf("[3] Fahrenheit to Celsius\n");
    printf("[4] Fahrenheit to Kelvin\n");
    printf("[5] Kelvin to Celsius\n");
    printf("[6] Kelvin to Fahrenheit\n");
    printf("[7] Exit Temperature\n\n");
    printf("--------------------------\n");
    printf("Enter your selection: ");
}

void printDistSubMenu() 
{
    printf("\nDISTANCE\n");
    printf("--------------------------\n");
    printf("[1] Kilometers to Miles\n");
    printf("[2] Miles to Kilometers\n");
    printf("[3] Meters to Yards\n");
    printf("[4] Yards to Meters\n");
    printf("[5] Centimeters to Inches\n");
    printf("[6] Inches to Centimeters\n");
    printf("[7] Exit Distance\n\n");
    printf("--------------------------\n");
    printf("Enter your selection: ");
}

void printWeightSubMenu() 
{
    printf("\nWEIGHT\n");
    printf("--------------------------\n");
    printf("[1] Kilograms to Pounds\n");
    printf("[2] Pounds to Kilograms\n");
    printf("[3] Grams to Ounces\n");
    printf("[4] Ounces to Grams\n");
    printf("[5] Exit Weight\n\n");
    printf("--------------------------\n");
    printf("Enter your selection: ");

}

void printCurrencySubMenu() 
{
    printf("\nCURRENCY\n");
    printf("--------------------------\n");
    printf("[1] Euro to USD\n");
    printf("[2] Euro to GBP\n");
    printf("[3] Euro to CNY\n");
    printf("[4] USD to Euro\n");
    printf("[5] USD to GBP\n");
    printf("[6] USD to CNY\n");
    printf("[7] GBP to Euro\n");
    printf("[8] GBP to USD\n");
    printf("[9] GBP to CNY\n");
    printf("[10] CNY to Euro\n");
    printf("[11] CNY to USD\n");
    printf("[12] CNY to GBP\n");
    printf("[13] Exit Currency\n\n");
    printf("--------------------------\n");
    printf("Enter your selection: ");
}

int main()
{
    bool repeat = true;
    int option;
    
    int subOption;

    while (repeat)
    {
        bool repeatSub = true;
        double celsius, fahrenheit, kelvin;
        double kilometers, miles, meters, yards, centimeters, inches;
        double kilos, pounds, grams, ounces;
        double euros, dollars, bpounds, yuans;

        showBanner();
        printf("\nWelcome to NoxConverter! Select the unit to convert ->\n");
        printf("------------------------------------------------------\n");
        printf("[1] Temperature\n");
        printf("[2] Distance\n");
        printf("[3] Weight\n");
        printf("[4] Currency\n");
        printf("[5] Exit\n\n");
        printf("------------------------------------------------------\n");
        printf("Enter your selection: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            while (repeatSub) {
                printTempSubMenu();
                scanf("%d", &subOption);

                switch (subOption)
                {
                case 1: // celsius a fahrenheit
                    printf("\nEnter the degrees in Celsius: ");
                    scanf("%lf", &celsius);
                    fahrenheit = celsiusToFahrenheit(celsius);
                    printf("The degrees in Fahrenheit: %lf\n", fahrenheit);
                    break;

                case 2: // celsius a kelvin
                    printf("\nEnter the degrees in Celsius: ");
                    scanf("%lf", &celsius);
                    kelvin = celsiusToKelvin(celsius);
                    printf("The degrees in Kelvin: %lf\n", kelvin);
                    break;

                case 3: // fahrenheit a celsius
                    printf("\nEnter the degrees in Fahrenheit: ");
                    scanf("%lf", &fahrenheit);
                    celsius = fahrenheitToCelsius(fahrenheit);
                    printf("The degrees in Celsius: %lf\n", celsius);
                    break;

                case 4: // fahrenheit a kelvin
                    printf("\nEnter the degrees in Fahrenheit: ");
                    scanf("%lf", &fahrenheit);
                    kelvin = fahrenheitToKelvin(fahrenheit);
                    printf("The degrees in Kelvin: %lf\n", kelvin);
                    break;

                case 5: // kelvin a celsius
                    printf("\nEnter the degrees in Kelvin: ");
                    scanf("%lf", &kelvin);
                    celsius = kelvinToCelsius(kelvin);
                    printf("The degrees in Celsius: %lf\n", celsius);
                    break;

                case 6: // kelvin a fahrenheit
                    printf("\nEnter the degrees in Kelvin: ");
                    scanf("%lf", &kelvin);
                    fahrenheit = kelvinToFahrenheit(kelvin);
                    printf("The degrees in Fahrenheit: %lf\n", fahrenheit);
                    break;

                case 7:
                    repeatSub = false;
                    break;
                
                default:
                    printf("Enter a valid option please...\n");
                    break;
                }
            }

            break;

        case 2:
            while (repeatSub) {
                printDistSubMenu();
                scanf("%d", &subOption);

                switch (subOption)
                {
                case 1: // km to miles
                    printf("\nEnter the distance in Kilometers: ");
                    scanf("%lf", &kilometers);
                    miles = kilometersToMiles(kilometers);
                    printf("The distance in Miles: %lf\n", miles);
                    break;
                
                case 2: // miles to km
                    printf("\nEnter the distance in Miles: ");
                    scanf("%lf", &miles);
                    kilometers = milesToKilometers(miles);
                    printf("The distance in Kilometers: %lf\n", kilometers);
                    break;

                case 3: // m to yards
                    printf("\nEnter the distance in Meters: ");
                    scanf("%lf", &meters);
                    yards = metersToYards(meters);
                    printf("The distance in Yards: %lf\n", yards);
                    break;

                case 4: //yards to m
                    printf("\nEnter the distance in Yards: ");
                    scanf("%lf", &yards);
                    meters = yardsToMeters(yards);
                    printf("The distance in Meters: %lf\n", meters);
                    break;

                case 5: // cm to inches
                    printf("\nEnter the distance in Centimeters: ");
                    scanf("%lf", &centimeters);
                    inches = centimetersToInches(centimeters);
                    printf("The distance in Inches: %lf\n", inches);
                    break;

                case 6: // inches to cm
                    printf("\nEnter the distance in Inches: ");
                    scanf("%lf", &inches);
                    centimeters = inchesToCentimeters(inches);
                    printf("The distance in Centimeters: %lf\n", centimeters);
                    break;

                case 7:
                    repeatSub = false;
                    break;
                
                default:
                    printf("Enter a valid option please...\n");
                    break;
                }
            }

            break;

        case 3:
            while (repeatSub) {
                printWeightSubMenu();
                scanf("%d", &subOption);

                switch (subOption)
                {
                case 1: // kg to pounds
                    printf("\nEnter the weight in Kilograms: ");
                    scanf("%lf", &kilos);
                    pounds = kilosToPounds(kilos);
                    printf("The weight in Pounds: %lf\n", pounds);
                    break;
                    
                case 2: // pounds to kg
                    printf("\nEnter the weight in pounds: ");
                    scanf("%lf", &pounds);
                    kilos = poundsToKilos(pounds);
                    printf("The weight in Kilograms: %lf\n", kilos);
                    break;

                case 3: // g to ounces
                    printf("\nEnter the weight in Grams: ");
                    scanf("%lf", &grams);
                    ounces = gramsToOunces(grams);
                    printf("The weight in Ounces: %lf\n", ounces);
                    break;
                
                case 4: // ounces to g
                    printf("\nEnter the weight in Ounces: ");
                    scanf("%lf", &ounces);
                    grams = ouncesToGrams(ounces);
                    printf("The weight in Grams: %lf\n", grams);
                    break;

                case 5:
                    repeatSub = false;
                    break;
                
                default:
                    printf("Enter a valid option please...\n");
                    break;
                }

            }

            break;

        case 4:
            while (repeatSub) {
                printCurrencySubMenu();
                scanf("%d", &subOption);

                switch (subOption)
                {
                case 1: // euros to dollars
                    printf("\nEnter the amount in Euros: ");
                    scanf("%lf", &euros);
                    dollars = eurosToDolars(euros);
                    printf("The amount in Dollars: %lf\n", dollars);
                    break;

                case 2: // euros to GBP
                    printf("\nEnter the amount in Euros: ");
                    scanf("%lf", &euros);
                    bpounds = eurosToBPounds(euros);
                    printf("The amount in GBP: %lf\n", bpounds);
                    break;

                case 3: // euros to yuans
                    printf("\nEnter the amount in Euros: ");
                    scanf("%lf", &euros);
                    yuans = eurosToYuans(euros);
                    printf("The amount in Yuans: %lf\n", yuans);
                    break;

                case 4: // dollars to euros
                    printf("\nEnter the amount in Dollars: ");
                    scanf("%lf", &dollars);
                    euros = dolarsToEuros(dollars);
                    printf("The amount in Euros: %lf\n", euros);
                    break;

                case 5: // dollars to GBP
                    printf("\nEnter the amount in Dollars: ");
                    scanf("%lf", &dollars);
                    bpounds = dolarsToBPounds(dollars);
                    printf("The amount in GBP: %lf\n", bpounds);
                    break;

                case 6: // dollars to yuans
                    printf("\nEnter the amount in Dollars: ");
                    scanf("%lf", &dollars);
                    yuans = dolarsToYuans(dollars);
                    printf("The amount in Yuans: %lf\n", yuans);
                    break;

                case 7: // GBP to euros
                    printf("\nEnter the amount in GBP: ");
                    scanf("%lf", &bpounds);
                    euros = bpoundsToEuros(bpounds);
                    printf("The amount in Euros: %lf\n", euros);
                    break;

                case 8: // GBP to dollars
                    printf("\nEnter the amount in GBP: ");
                    scanf("%lf", &bpounds);
                    dollars = bpoundsToDolars(bpounds);
                    printf("The amount in Dollars: %lf\n", dollars);
                    break;

                case 9: // GBP to yuans
                    printf("\nEnter the amount in GBP: ");
                    scanf("%lf", &bpounds);
                    yuans = bpoundsToYuans(bpounds);
                    printf("The amount in Yuans: %lf\n", yuans);
                    break;

                case 10: // yuans to euros
                    printf("\nEnter the amount in Yuans: ");
                    scanf("%lf", &yuans);
                    euros = yuansToEuros(yuans);
                    printf("The amount in Euros: %lf\n", euros);
                    break;

                case 11: // yuans to dollars
                    printf("\nEnter the amount in Yuans: ");
                    scanf("%lf", &yuans);
                    dollars = yuansToDolars(yuans);
                    printf("The amount in Dollars: %lf\n", dollars);
                    break;

                case 12: // yuans to GBP
                    printf("\nEnter the amount in Yuans: ");
                    scanf("%lf", &yuans);
                    bpounds = yuansToBPounds(yuans);
                    printf("The amount in GBP: %lf\n", bpounds);
                    break;

                case 13:
                    repeatSub = false;
                    break;
                
                default:
                    printf("Enter a valid option please...\n");
                    break;
                }
            }
            break;

        case 5:
            printf("\nThank You for using NoxConverter!");
            repeat = false;
            return 0;


        default:
            printf("Enter a valid option please...\n");
            break;
        }
    }
}