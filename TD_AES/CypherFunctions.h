#pragma once

#define Nb 4
#define Nk 4
#define Nr 10

void SubBytes(unsigned char ptr_stateTab[4][4]);
void MixColumns(unsigned char ptr_stateTab[4][4]);
void ShiftRows(unsigned char ptr_stateTab[4][4]);
void InvShiftRows(unsigned char ptr_stateTab[4][4]);
void AddRoundKey(unsigned char ptr_stateTab[4][4], unsigned char RoundKey[4][4]);
void cypherEncrypt(unsigned char in[4][4], unsigned char key[4][4]);
void calcNewRoundKey(unsigned char RoundKey[4][4], int Round);
void print(unsigned char ptr_stateTab[4][4]);
