#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    printf("[2] Pounds ti Kilograms\n");
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
                case 1:
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
                case 1:
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
                case 1:
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
                case 1:
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