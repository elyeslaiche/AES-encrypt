#include <stdio.h>
#include <stdlib.h> 
#include "CypherFunctions.h"


void main()
{
	unsigned char in[][Nb] = { {0x00, 0x40, 0x80, 0xc0}, {0x10, 0x50, 0x90, 0xd0}, {0x20, 0x60, 0xa0, 0xce0}, {0x30, 0x70, 0xb0, 0xf0} };
	//unsigned char state[][Nb] = in;
	unsigned char key[4][4] = { {0xd6,0xd2 , 0xda, 0xd6}, {0xaa, 0xaf, 0xa6, 0xab} ,{0x74, 0x72, 0x78, 0x76}, {0xfd, 0xfa, 0xf1, 0xfe} };

	//unsigned char w[Nb][(Nr + 1)];

	AddRoundKey(in, key);
	calcNewRoundKey(key, 0);
	
	for (int round = 1; round < 10; round++) {
		SubBytes(in);
		ShiftRows(in);
		MixColumns(in);
		AddRoundKey(in, key);
		calcNewRoundKey(key, round);
	}
	SubBytes(in);
	ShiftRows(in);
	//MixColumns(in);
	AddRoundKey(in, key);
	//unsigned char out[][Nb] = state;
	print(in);

}

