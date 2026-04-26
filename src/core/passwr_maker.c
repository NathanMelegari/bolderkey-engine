#include "passwr_maker.h"
#include <stdlib.h>
#include <time.h>


char *make_a_password(int size) {

	srand(time(NULL));

	char *full_password = malloc(sizeof(size));

	for(int i = 0; i <= size; i++) {

		int rand_num = 33 + (rand() % 94);

		char algrism = (char)rand_num;

		if(rand_num == 32) {
			i--;
			continue;
		}

		full_password[i] = algrism;
	}

	return full_password;
}
