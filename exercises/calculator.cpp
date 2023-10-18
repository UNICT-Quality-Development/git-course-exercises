/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/
#include <stdio.h>

int main(){

    printf("Ciao!, Inserisci i numeri in oridne: \n");
    double num1 = 0, num2 = 0;
    int opz = 0;
    if (scanf("%lf %lf", &num1, &num2) == 2){
            printf("Scegli l'operazione che vuoi eseguire:\n1)Addizione\n2)Sottrazione\n3)Moltiplicazione\n4)Divisione\n");
            scanf("%d", &opz);
            switch (opz){
            case 1:
                printf("La somma vale: %g\n", num1 + num2);
            break;
            case 2:
                printf("La sottrazione vale: %g\n", num1 - num2);
            break;
            case 3:
                printf("La moltiplicazione vale: %g\n", num1 * num2);
            break;
            case 4:
                printf("La divisione vale %g\n", num1 / num2);
            break;
            default:
                printf("Errore! Opzione non valida\n");
                break;
            }        
    }else{
        printf("Errore! non hai inserito un numero\n");
    }
    
}
