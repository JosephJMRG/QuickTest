/**
 * @file main.cpp
 * @author JosephJMRG (github.com/JosephJMRG)
 * @brief
 * @version 0.1
 * @date 18-07-2024
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <string>
/**
 * @brief version 3
 * Uso correcto de std::cout y std::in
 */
float preguntarNum(const char *mensaje, float numero) {
  float numTemp;
  int numValido = 0;
  while (numValido != 1) {
    std::cout << mensaje;
    if (std::cin >> numTemp) {
      numero = numTemp;
      numValido = 1;
    } else {
      std::cout << "ESO NO ES UN NUMERO XDDDD";
      // limpiar estado de std::cin
      std::cin.clear();
      // limpiar buffer manualmente
      int c;
      while ((c = getchar()) != '\n' && c != EOF);
    }
  }

  return numero;
}

float suma(float a, float b) { return (a + b); }

int main() {
  float a = 0;
  float b = 0;

  preguntarNum("Ingrese primer numero: ", a);
  preguntarNum("Ingrese segundo numero: ", b);

  std::cout << "El resultado es: ", suma(a, b);

  return 0;
}

/**
 * @brief Version 2
 *  Uso de printf y scanf
 */
/*
float preguntarNum(const char *mensaje, float numero) {
  float numTemp;
  int numValido = 0;
  while (numValido != 1) {
    printf("%s", mensaje);
    if (scanf_s("%f", &numTemp) == 1) {
      numero = numTemp;
      numValido = 1;
    } else {
      printf("ESO NO ES UN NUMERO XDDDD\nh");
      int c;
      while ((c = getchar()) != '\n' && c != EOF);
    }
  }

  return numero;
}

float suma(float a, float b) { return (a + b); }

int main() {
  float a = 0;
  float b = 0;

  preguntarNum("Ingrese primer numero: ", a);
  preguntarNum("Ingrese segundo numero: ", b);

  printf_s("El resultado es: ", suma(a, b));

  return 0;
} */

/**
 * @brief Version 1
 */
/*
float suma(float a, float b) { return a + b; }

int main() {
  float a;
  float b;
  std::cout << "Ingrese primer numero: ";
  std::cin >> a;
  std::cout << "Ingrese segundo numero: ";
  std::cin >> b;
  std::cout << "El resultado es: " << suma(a, b) << std::endl;

  return 0;
} */