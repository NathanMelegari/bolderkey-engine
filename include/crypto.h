/******************************************************************************
 * @file:	vault.h
 * @brief:	The hash logic library
 * @author:	Nathan Melegari
 * @date:	04-25-2026
 * @version:	1.0
******************************************************************************/


#ifndef CRYPTO_H
#define CRYPTO_H


#include <stdio.h>
#include <stdbool.h>

void bkey_hash_passwd(const char *passwd, char *hash);
bool bkey_verify_hash_to_passwd(char *hash, char *passwd);

#endif
