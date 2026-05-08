/******************************************************************************
 * @file:	main.c
 * @brief:	Care of the main usage loop of BolderKey core
 * @author:	Nathan Melegari
 * @date:	04-22-2026
 * @version:	1.2.0
******************************************************************************/

#include "../include/bolderkey.h"
#include <sodium/crypto_pwhash.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sodium.h>
#include <time.h>


int main(int argc, char *argv[]) {

	srand(time(NULL));

	if(argc < 2) {
		fprintf(stderr, "Pass the correct values!");
		
	}

	if(strcmp(argv[1], "") == 0) argv[1] = "bolderkey-lts";


	char *vault_path = argv[1];
	char *passwd_t = argv[2];
	char *passwd_s = argv[3];


	char *ret_passwd;
	bkey_passwd_maker(atoi(passwd_s), ret_passwd);

	char ret_passwd_hash[crypto_pwhash_STRBYTES];
	bkey_hash_passwd(ret_passwd, ret_passwd_hash);


	if(bkey_vault_exists(vault_path) != true) {

		bkey_vault_maker(vault_path);
		bkey_vault_insert(vault_path, passwd_t, ret_passwd_hash);
	}
	else {
	
		bkey_vault_insert(vault_path, passwd_t, ret_passwd_hash);
	}

	return 0;
}
