/*
  Author: Pablo G. Blando
  Date: Dec 18 2025
  Program: Gas Calculator

  A simple program to calcule the percent of a filled gas tank and their price.
*/

#include<stdio.h>

int main() {
    // Input
    int tank_cap = 0;
    float initial_percent = 0.0;
    float target_liters = 0.0;
    float liter_price = 0.0;

    // Output
    float final_percent = 0.0;
    float gas_price = 0.0;
    
    printf("Ingrese la capacidad de su tanque en litros: ");
    scanf("%i", &tank_cap);
    printf("\nIngrese el porcentaje de llenado que indica\nsu tanque de gas en este momento: ");
    scanf("%f", &initial_percent);
    printf("\nIngrese la cantidad de litros con los que\ndesea cargar su tanque: ");
    scanf("%f", &target_liters);
    printf("\nIngrese el precio del litro de gas: ");
    scanf("%f", &liter_price);

    //Logic
    final_percent = initial_percent + ((target_liters * 100) / tank_cap);
    gas_price = target_liters * liter_price;

    //Output
    printf("\nLa va\'lvula de su tanque deberi\'a indicar %.1f\%% despue\'s de su carga,", final_percent);
    printf("\ny deberi\'a pagar un costo de $%.1f por %.1f[L] suministrados.\n", gas_price, target_liters);

    getchar();
    return 0;
}
