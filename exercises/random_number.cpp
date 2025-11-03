/*
  Write a program that generates a random number.

  REMINDER - Gli studenti della Steve Jobs non studiano linguaggio C++.
  Ci è stato concesso di svolgere gli esercizi in C o JS/TS
*/

const generateRandomNumber = (): number =>  Math.random();

const randomNumber = generateRandomNumber();

console.log("The random number is: ", randomNumber.toFixed(2));
