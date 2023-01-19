#include <stdio.h>
#include <stdlib.h> 
#include "CypherFunctions.h"


void main()
{
	unsigned char in[][Nb] = { {0x00, 0x40, 0x80, 0xc0}, {0x10, 0x50, 0x90, 0xd0}, {0x20, 0x60, 0xa0, 0xce0}, {0x30, 0x70, 0xb0, 0xf0} };
	//unsigned char state[][Nb] = in;
	

	//unsigned char w[Nb][(Nr + 1)];

	/*AddRoundKey(state, w);

	for (int round = 0; round < 10; round++) {
		SubBytes(state);
		ShiftRows(state);
		MixColumns(state);
		AddRoundKey(state, w);
	}*/

	SubBytes(in);
	ShiftRows(in);
	//AddRoundKey(state, w);
	//unsigned char out[][Nb] = state;
	print(in);

}

