#include <stdio.h>

// Tasas de conversión (puedes actualizar según sea necesario)
#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.12
#define USD_TO_GTQ 7.75
#define USD_TO_EUR 0.92
#define EUR_TO_GTQ 8.50
#define EUR_TO_USD 1.09

// Función para realizar la conversión
double convertir(double monto, double tasa) {
    return monto * tasa;
}

int main() {
    int opcion;
    double monto, resultado;

    printf("=====================================\n");
    printf("      Bienvenido al Conversor Romario          \n");
    printf("=====================================\n");
    printf("Por favor Seleccione la conversión:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("Ingrese su opción (1-6): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 6) {
        printf("Opción inválida. Intente de nuevo.\n");
        return 1; // Termina con error
    }

    printf("Ingrese el monto a convertir: ");
    scanf("%lf", &monto);

    switch (opcion) {
        case 1: resultado = convertir(monto, GTQ_TO_USD);
                printf("Resultado: %.2f Quetzales = %.2f Dólares\n", monto, resultado);
                break;
        case 2: resultado = convertir(monto, GTQ_TO_EUR);
                printf("Resultado: %.2f Quetzales = %.2f Euros\n", monto, resultado);
                break;
        case 3: resultado = convertir(monto, USD_TO_GTQ);
                printf("Resultado: %.2f Dólares = %.2f Quetzales\n", monto, resultado);
                break;
        case 4: resultado = convertir(monto, USD_TO_EUR);
                printf("Resultado: %.2f Dólares = %.2f Euros\n", monto, resultado);
                break;
        case 5: resultado = convertir(monto, EUR_TO_GTQ);
                printf("Resultado: %.2f Euros = %.2f Quetzales\n", monto, resultado);
                break;
        case 6: resultado = convertir(monto, EUR_TO_USD);
                printf("Resultado: %.2f Euros = %.2f Dólares\n", monto, resultado);
                break;
    }

    return 0; // Termina correctamente
}