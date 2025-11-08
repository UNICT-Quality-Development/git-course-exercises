/* Reminder -- Gli studenti della Steve Jobs non potranno scrivere in C++
 quindi scriveremo in linguaggio JavaScript  */

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Insert the first number: ', (num1) => {
    rl.question('Insert the second number: ', (num2) => {
        const result = num1 + num2;
        console.log("Sum: " + result);
        rl.close();
    });
});
