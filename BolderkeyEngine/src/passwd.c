#include "../include/bolderkey.h"
#include <sodium/crypto_secretbox.h>
#include <sodium/randombytes.h>
#include <sodium/utils.h>
#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>
#include <string.h>


void bkey_password_create(int passwd_size, char *out) {

	for(int i = 0; i <= passwd_size; i++) {

		int rand_num = 33 + (rand() % 94);

		char algrism = (char)rand_num;

		out[i] = algrism;
	}

	out[passwd_size] = '\0';
}

bool bkey_password_find(const char *passwd_title, const char *path, char *out) {

	FILE *file = fopen(path, "r");
	char *buffer = malloc(256);
	char *passwd_finded;

	int c;
	short i = 0;
	char line[256];

	if(file == NULL) {

		fprintf(stderr, "Path invalid.\n");
		return false;
	}

	while(fgets(line, sizeof(line), file)) {

		line[strcspn(line, "\n")] = 0;

		if(strcmp(line, passwd_title) == 0) {

			if(fgets(line, sizeof(line), file)) {

				line[strcspn(line, "\n")] = 0;

				strcpy(out, line);
				fclose(file);
				return true;
			}
		}
	}

	fprintf(stderr, "Password don't find.\n");
	return false;
}
