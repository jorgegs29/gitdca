#include <stdio.h>

float suma(float x, float y) {
	return x + y;
}

float resta(float x, float y) {
	return x - y;
}

float multiplicacion(float x, float y) {
	return x * y;
}

float division(float x, float y) {
	return x / y;
}

float potencia(float base, int exponente) {
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    float x, y, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion (+) (-) (*) (/) (^): ");
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
        case '*':
        case 'x':
            resultado = multiplicacion(x,y);
            break;
        case '/':
            resultado = division(x,y);
            break;
        case '^':
            resultado = potencia(x, (int) y);
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
