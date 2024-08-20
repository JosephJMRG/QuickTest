/**
 * @file index.js
 * @author JosephJMRG (github.com/JosephJMRG)
 * @brief
 * @version 0.1
 * @date 18-07-2024
 *
 * @copyright Copyright (c) 2024
 *
*/

import { createInterface } from "readline";

const rl = createInterface({
  input: process.stdin,
  output: process.stdout,
});

function preguntarNumero() {
  rl.question("Ingrese primer numero: ", (a1) => {
    if (isNaN(a1) || a1.trim() === "") {
      console.log("Eso no es un numero wn XD");
      preguntarNumero();
    } else {
      rl.question("Ingrese segundo numero: ", (b1) => {
        if (isNaN(b1) || b1.trim() === "") {
          console.log("Eso no es un numero wn XD");
          preguntarNumero();
        } else {
          const suma1 = parseFloat(a1) + parseFloat(b1);
          console.log(`El resultado es ${suma1}`);
          rl.close();
        }
      });
    }
  });
}

preguntarNumero();
