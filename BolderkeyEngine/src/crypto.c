#include "../include/bolderkey.h"
#include <sodium/core.h>
#include <sodium/crypto_generichash.h>
#include <sodium/crypto_pwhash.h>
#include <sodium/crypto_pwhash_argon2i.h>
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>
#include <string.h>
#include <stdbool.h>


void bkey_crypto_hash_generate(const unsigned char *input, size_t input_len, char *hash_out) {

}

bool bkey_crypto_hash_verify(const unsigned char *input_passwd, const unsigned char *input_hash) {

}

void bkey_crypto_key_generate(const unsigned char *input, size_t input_len, char key_out) {

}

bool bkey_crypto_key_verify(const unsigned char *input_key, const unsigned char *input_key_save) {

}

