package JV;

import java.util.Scanner;

public class test {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in); // Variable para Ingreso de datos
    float num1 = preguntarNum("Ingrese primer numero: ", in);
    float num2 = preguntarNum("Ingrese segundo numero: ", in);

    System.out.println("Resultado: " + suma(num1, num2));
    in.close(); // Cerrar el Scanner (ingreso de datos)
  }

  private static float suma(float num1, float num2) { return num1 + num2; }

  private static float preguntarNum(String mensaje, Scanner in) {
    float num;

    while (true) {
      System.out.print(mensaje);
      if (in.hasNextFloat()) {
        num = in.nextFloat();
        break;
      } else {
        System.out.println("ESO NO ES UN NUMERO XDD");
        in.next(); // Descarta ingreso no valido de datos
      }
    }
    return num;
  }
}
