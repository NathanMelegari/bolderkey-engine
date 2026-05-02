/******************************************************************************
 * @file:	vault.c
 * @brief:	The vault main logic
 * @author:	Nathan Melegari
 * @date:	04-25-2026
 * @version:	1.0
******************************************************************************/


#include "../include/vault.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>



bool bkey_vault_exists(char *vault_path) {

	if(access(vault_path, F_OK)) {
		return true;
	}
	else {
		return false;
	}
}


void bkey_vault_maker(char *vault_path) {

	FILE *vault_file = fopen(vault_path, "r");

	if(vault_file == NULL) {
		perror("Error to create a vault!");
		exit(1);
	}


	fclose(vault_file);
}


void bkey_vault_insert(char *vault_path, char *passwd_title, char *passwd_hash) {

	FILE *vault_file = fopen(vault_path, "a+");

	if(vault_file == NULL) {
		perror("Error to insert into vault!");
		exit(1);
	}
	
	fprintf(vault_file, "%s={\n%s\n}\n\n", passwd_title, passwd_hash);

	fclose(vault_file);
}
