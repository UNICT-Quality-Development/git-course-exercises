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

int main() {

	float a, b;

	printf("inserisci due numeri e ottieni la loro somma, sottrazione, moltiplicazione e divisione\n");

	printf("inserisci il primo numero\n");
	scanf("%f", &a);
	printf("inserisci il secondo numero\n");
	scanf("%f", &b);

	printf("la loro somma e' %f\n", a + b);
	prinf("la loro differenza e' %f\n", a - b);
	printf("il loro prodotto e' %f\n", a * b);
	if (b == 0) printf("non e' possibile dividere per 0\n");
	else printf("la loro divisione e' %f\n", a / b);
}
