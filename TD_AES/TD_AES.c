#include <stdio.h>
#include <stdlib.h> 
#include "CypherFunctions.h"


void main()
{
	unsigned char in[][Nb] = { {0x32, 0x43, 0xf6, 0xa8}, {0x88, 0x5a, 0x30, 0x8d}, {0x31, 0x31, 0x98, 0xa2}, {0xe0, 0x37, 0x07, 0x34} };
	unsigned char state[4][Nb];
	unsigned char out[4][Nb];

	unsigned char w[Nb][(Nr + 1)];

	//state = in;

	// AddRoundKey(state, w);

	// for(int round = 0; round < 10; round++){
	//     SubBytes(state);
	//     ShiftRows(state);
	//     MixColumns(state);
	//     AddRoundKey(state, w);
	// }

	// SubBytes(state);
	// ShiftRows(state);
	// AddRoundKey(state, w);
	SubBytes(in);
	printf("\n");
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			printf("%x", in[i][j]);
		}
	}

}

