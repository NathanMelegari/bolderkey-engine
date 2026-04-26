/******************************************************************************
 * @file:	main.c
 * @brief:	Care of the main usage loop of BolderKey core
 * @author:	Nathan Melegari
 * @date:	04-22-2026
 * @version:	1.0
******************************************************************************/


#include "main.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *args[]) {

	if(argc < 2) {
		fprintf(stderr, "Pass the correct values!");
		
	}

	if(strcmp(args[1], "") == 0) args[1] = "bolderkey-lts";

	////////////////////////////
	// Get the arguments follow
	char *vault_path = args[1];
	char *passwr_t = args[2];
	char *passwr_s = args[3];

	char *full_password = make_a_password(atoi(passwr_s));
	bool v_exists = vault_exists(vault_path);
	FILE *vault_file = fopen(vault_path, "r");

	if(v_exists == true) {

		insert_vault(vault_file, vault_path, passwr_t, full_password);
	//	encrypt_password(vault_file, passwr_t, full_password);
	}
	else {
		vault_make(vault_file, vault_path);
		insert_vault(vault_file, vault_path, passwr_t, full_password);

		// Create a access key to vault
		char *key = key_access_vault(vault_path);
		printf("%s", key);
	//	encrypt_password(vault_file, passwr_t, full_password);
	}

	printf("%s\n", full_password);
	printf("\033[H\033[2J");

	return 0;
}
