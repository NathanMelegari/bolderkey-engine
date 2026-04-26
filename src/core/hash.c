#include "hash.h"
#include <sodium/core.h>
#include <stdio.h>
#include <stdlib.h>
#include <sodium.h>


char *hash_password(char *full_password) {

	char *hash_pwr;

	if(sodium_init() < 0) {

		fprintf(stderr, "Hash don't be initialized!");
		exit(0);
	}


	return hash_pwr;
}
