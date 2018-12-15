#include <stdio.h>

float suma(float x, float y) {
	return x + y;
}

float resta(float x, float y) {
	return x - y;
}

int main() {
    float x, y, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion (+) (-): ");
    scanf("%c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = suma(x,y);
            break;
        case '-':
            resultado = resta(x,y);
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}
