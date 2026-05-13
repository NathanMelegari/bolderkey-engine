/******************************************************************************
 * @file:	vault.c
 * @brief:	The vault main logic
 * @author:	Nathan Melegari
 * @date:	04-25-2026
 * @version:	1.0
******************************************************************************/


#include "../include/bolderkey.h"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>



bool bkey_vault_create(const char *path) {

	FILE *file = fopen(path, "r");

	if(file == NULL) {

		fprintf(stderr, "Error to create a vault.\n");
		return false;
	}

	fclose(file);
	return true;
}

bool bkey_vault_exists(const char *path) {

	if(access(path, F_OK)) {
		return true;
	}
	else {
		return false;
	}
}


bool bkey_vault_insert(const char *path, const char *passwd_title, const char *passwd_encrypt) {

	FILE *file = fopen(path, "a+");

	if(file == NULL) {
		fprintf(stderr, "Error to insert into vault!\n");
		return false;
	}
	
	fprintf(file, "%s={\n%s\n}\n\n", passwd_title, passwd_encrypt);

	fclose(file);
	return true;

}
