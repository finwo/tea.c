#ifndef __FINWO_TEA_H__
#define __FINWO_TEA_H__

#include <stdint.h>

void btea(uint32_t *v, int n, uint32_t const key[4]);
void tea_encrypt (uint32_t v[2], const uint32_t k[4]);
void tea_decrypt (uint32_t v[2], const uint32_t k[4]);
void xtea_encrypt(unsigned int num_rounds, uint32_t v[2], uint32_t const key[4]);
void xtea_decrypt(unsigned int num_rounds, uint32_t v[2], uint32_t const key[4]);

#endif // __FINWO_TEA_H__
