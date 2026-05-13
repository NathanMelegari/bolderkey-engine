/******************************************************************************
 * @file:	bolderkey.h
 * @brief:	The main file of the core engine
 * @author:	Nathan Melegari
 * @date:	25-04-2026
 * @version:	1.0
******************************************************************************/

#ifndef BOLDERKEY_H
#define BOLDERKEY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



/***********************************************
 * PASSWORD FUNCTIONS
***********************************************/
typedef struct PasswordManager PasswordManager;
PasswordManager* create_passwd_manager_struct();
void destroy_passwd_manager_struct(PasswordManager* ptr);
void process_passwd_manager_struct(PasswordManager* ptr);

void bkey_password_create(int passwd_size, char *out);
bool bkey_password_find(const char *passwd_title, const char *path, char *out);


// VAULT FUNCTIONS
typedef struct VaultManager VaultManager;
VaultManager* create_vault_manager_struct();
void destroy_vault_manager_struct(VaultManager* ptr);
void process_vault_manager_struct(VaultManager* ptr);

bool bkey_vault_create(const char *path);
bool bkey_vault_exists(const char *path);
bool bkey_vault_insert(const char *path, const char *passwd_title, const char *passwd_encrypt);


// CRYPTOGRAPHY
typedef struct CryptoManager CryptoManager;
CryptoManager* create_crypto_manager_struct();
void destroy_crypto_manager_struct(CryptoManager* ptr);
void process_crypto_manager_struct(CryptoManager* ptr);

void bkey_crypto_hash_generate(const unsigned char *input, size_t input_len, char *hash_out);
bool bkey_crypto_hash_verify(const unsigned char *input_passwd, const unsigned char *input_hash);
void bkey_crypto_key_generate(const unsigned char *input, size_t input_len, char key_out);
bool bkey_crypto_key_verify(const unsigned char *input_key, const unsigned char *input_key_save);


// MEMORY SECURITY
typedef struct MemoryManager MemoryManager;
MemoryManager* create_memory_manager_struct();
static void destroy_memory_manager_struct(MemoryManager* ptr);
static void process_memory_manager_struct(MemoryManager* ptr);

bool bkey_memory_free(void *p, ...);
bool bkey_memory_is_alloc(void *p, ...);


#ifdef __cplusplus
}
#endif
#endif
