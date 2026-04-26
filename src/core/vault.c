/******************************************************************************
 * @file:	vault.c
 * @brief:	The vault main logic
 * @author:	Nathan Melegari
 * @date:	04-25-2026
 * @version:	1.0
******************************************************************************/


#include "vault.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>


// Verify if a vault exists in the system
//
bool vault_exists(char *vault_path) {

	if(access(vault_path, F_OK)) {
		return true;
	}
	else {
		return false;
	}
}


// Make a new vault if don't exists
//
void vault_make(FILE *vault_file, char *vault_path) {

	vault_file = fopen(vault_path, "r");

	if(vault_file == NULL) {
		perror("Error to create a vault!");
		exit(1);
	}


	fclose(vault_file);
}

char *key_access_vault(char *vault_path) {

	char *full_access_key;
        int keys = 0;

        srand(time(NULL));

        while(keys <= 9) {

		for(int i = 0; i <= 5; i++) {

			int rand_num = 33 + (rand() % 94);

                	char rand_char = (char)rand_num;
                	full_access_key[i] = rand_char;
		}

		full_access_key = "-";

                for(int i = 0; i <= 4; i++) {

                        int rand_num = 33 + (rand() % 94);

                        char rand_char = (char)rand_num;
                        full_access_key[i] = rand_char;
                }

                full_access_key = "\n";
                keys += 1;
        }

          return full_access_key;

}

// Add passwords in a exists vault
//
void insert_vault(FILE *vault_file, char *vault_path, char *password_title, char *full_password) {

	vault_file = fopen(vault_path, "a+");

	if(vault_file == NULL) {
		perror("Error to insert into vault!");
		exit(1);
	}
	
	fprintf(vault_file, "%s={\n%s\n}\n\n", password_title, full_password);

	fclose(vault_file);
}
