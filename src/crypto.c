#include "../include/crypto.h"
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


void bkey_hash_passwd(const char *passwd, char *hash) {


	if(sodium_init() < 0) exit(1);


	if(crypto_pwhash_str(hash, passwd, strlen(passwd), crypto_pwhash_OPSLIMIT_MODERATE, crypto_pwhash_MEMLIMIT_MODERATE) != 0) {

		fprintf(stderr, "Error to hash password!");
		exit(1);
	}

}



bool bkey_verify_hash_to_password(char *hash, char *passwd) {

	if(crypto_pwhash_str_verify(hash, passwd, strlen(passwd)) != 0) {
		return false;
	}
	else {
		return true;
	}
}

