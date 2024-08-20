/**
 * @file main.c
 * @author JosephJMRG (github.com/JosephJMRG)
 * @brief
 * @version 0.1
 * @date 18-07-2024
 *
 * @copyright Copyright (c) 2024
 *
 */

/**
 * @brief Version 4
 * (Me olvide que podia pasar directamente el argumento
 * declarado a la funcion en la siguiente línea) 
 * (hice lo de java pa nada aksjdkajsd)
 */
 
#include <stdio.h>

float preguntarNum(const char *mensaje, float num) {
  int numValido = 0;
  while (numValido != 1) {
    printf("%s", mensaje);
    if (scanf_s("%f", &num) == 1) {
      numValido = 1;
    } else {
      printf("ESE NO ES UN NUMERO XDDDDD");
    }
  }

  return num;
}

float suma(float a, float b) { return (a + b); }

int main() {
  float a = 0;
  float b = 0;
  preguntarNum("Ingrese primer numero: ", a);
  preguntarNum("Ingrese primer numero: ", b);
  printf_s("El resultado es: ", suma(a, b));

  return 0;
}

/**
 * @brief Version 3
 * (Structs. Una forma de imitar sintaxis java)
 */
/* typedef struct {
  float valor;
} Numero;
analiza
float preguntarNum(const char *mensaje, Numero *num) {
  int esValido = 0;
  while (!esValido) {
    printf_s("%s", mensaje);
    if (scanf_s("%f", &(num->valor)) == 1) {
      esValido = 1;
    } else {
      printf_s("ESE NO ES UN NUMERO XDDDD");
      // Clear buffer
      while (getchar() != '\n')
        ;
    }
  }

  return num->valor;
}
float suma(float num1, float num2) { return (num1 + num2); }

int main() {
  Numero num1, num2;
  preguntarNum("Ingrese primer numero: ", &num1);
  preguntarNum("Ingrese segundo numero: ", &num2);

  printf_s("El resultado es: %lf", suma(num1.valor, num2.valor));
  return 0;
} */

/**
 * @brief Version 2
 * (Version con validaciones)
 */
/*
float preguntarNum(const char *mensaje) {

  float num;
  char buffer[50];
  int esValido = 0;
  while (!esValido) {
    printf("%s", mensaje);
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
      if (sscanf_s(buffer, "%f", &num) == 1) {
        esValido = 1;
      } else {
        printf("ESO NO ES UN NUMERO XDDD\n");
      }
    }
  }

  return num;
}

int main() {

  float num1 = preguntarNum("Ingrese primer Numero: ");
  float num2 = preguntarNum("Ingrese segundo Numero: ");

  printf_s("Resultado: %f\n", num1 + num2);

  return 0;
} */
/**
 * @brief Version 1
 *
 */
/*
double suma(float a, float b) { return a + b; }

int main() {
  float a, b;
  printf("Ingrese 2 numeros para sumar: ");
  scanf_s("%lf %lf", &a, &b);
  printf("Resultado: %f", suma(a, b));
}
*/
