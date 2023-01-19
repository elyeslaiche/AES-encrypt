#pragma once

#define Nb 4
#define Nk 4
#define Nr 10


void SubBytes(unsigned char ptr_stateTab[4][4]);
void MixColumns(unsigned char ptr_stateTab[4][4]);
void ShiftRows(unsigned char ptr_stateTab[4][4]);
void AddRoundKey(unsigned char ptr_stateTab[4][4], char** RoundKey);
void print(unsigned char ptr_stateTab[4][4]);
