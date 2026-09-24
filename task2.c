#include <stdio.h>

int main() {
    float temperature;
    char ogscale;
    char newscale;
    printf("Enter the temperature value: ");
    while (scanf("%f", &temperature) != 1) {
        printf("Invalid Input, must be an integer, please try again.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Enter the temperature value");
    }
    printf("Enter the original scale (C, F, or K): ");
    scanf("%c", &ogscale);
    while (ogscale != 'C' && ogscale != 'F' && ogscale != 'K') {
        printf("Invalid input, must be C, F, or K, please try again\n");
        printf("Enter the original scale C, F, or K): ");
        scanf("%c", &ogscale);
    }
    printf("Enter the scale to convert to (C, F, or K):");
    scanf("%c", &newscale);
    while (newscale != 'C' && newscale != 'F' && newscale != 'F') {
        printf("Invalid input, must be C, F, or K, please try again\n");
        printf("Enter the scale to convert to (C, F, or K)");
        scanf("%c", &newscale);
    }
    float kelvin;
    if (ogscale == 'C') {
        kelvin = temperature + 273.15;
    }
    else if (ogscale == 'F') {
        kelvin = (temperature-32)*(5.0/9.0)+273.15;
    }
    else if (ogscale == 'K') {
        kelvin = temperature;
    }
    if (newscale == 'C') {
        temperature = kelvin - 273.15;
    }
    else if (newscale == 'F') {
        temperature = (kelvin-273.15) *(9.0/5.0) +32;
    }
    else if (newscale == 'K'){
        temperature = kelvin;
    }
    printf("Converted temperature: %f\n", temperature);
    const char *category;
    const char *advisory;
    float celsius = kelvin - 273.15;
    if(celsius < 0){
        category = "Freezing";
        advisory = "Bundle up!";
    }
    else if (celsius < 10){
        category = "Cold";
        advisory = "Wear a jacket!";
    }
    else if (celsius < 25){
        category = "Comfortable";
        advisory = "Enjoy the nice weather!";
    }
    else if (celsius < 35){
        category = "Hot";
        advisory = "Drink lots of water!";
    }
    else{
        category = "Extreme Heat";
        advisory = "Stay indoors!";
    }
    printf("Temperature category: %s\n", category);
    printf("Weather advisory: %s\n", advisory);
    return 0;
}