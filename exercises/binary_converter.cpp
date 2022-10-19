/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

char* byte_to_string(uint8_t);

int main(int argc, char **argv){
	//Parameter check.
	if(argc != 2){
		printf("usage: %s <decimal-number>\n", argv[0]);
		return 1;
	}

	//Main algorithm.
	printf("%s\n", byte_to_string(atoi(argv[1])));

	return 0;
}

char* byte_to_string(uint8_t n){
	char *str = new char(10);
	sprintf(str, "0b");

	for(int i=0; i<8; i++){
		sprintf(str, "%s%d", str, (n & 0b10000000) != 0);
		n <<= 1;
	}

	return str;
}
