#pragma once

#define Nb 4
#define Nk 4
#define Nr 10


void SubBytes(unsigned char ptr_stateTab[4][4]);
void MixColumns(char** ptr_stateTab);
void ShiftRows(char** ptr_stateTab);
void AddRoundKey(char** ptr_stateTab, char** RoundKey);
