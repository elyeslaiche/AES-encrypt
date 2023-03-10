#include <stdio.h>
#include <stdlib.h> 
#include "CypherFunctions.h"


void main()
{
	unsigned char in[][Nb] = { {0x32, 0x88, 0x31, 0xe0}, {0x43, 0x5a, 0x31, 0x37}, {0xf6, 0x30, 0x98, 0x07}, {0xa8, 0x8d, 0xa2, 0x34} };
	unsigned char key[4][4] = { {0x2b, 0xd28, 0xab, 0x09}, {0x7e, 0xae, 0xf7, 0xcf}, {0x15, 0xd2, 0x15, 0x4f}, {0x16, 0xa6, 0x88, 0x3c} };
	unsigned char allkeys[4][44];

	printf("Matrice de base:\n\n");
	print(in);
	cypherEncrypt(allkeys, in, key);
	printf("\n--------------------\n");
	printf("Matrice cryptee:\n\n");
	print(in);
	cypherDecrypt(allkeys, in, key);
	printf("\n--------------------\n");
	printf("Matrice decryptee:\n\n");
	print(in);
}

