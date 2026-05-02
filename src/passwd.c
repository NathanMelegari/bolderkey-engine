#include "../include/passwd.h"
#include <stdlib.h>
#include <time.h>


void bkey_passwd_maker(short passwd_size, char *ret_passwd) {

	srand(time(NULL));

	char passwd[passwd_size];

	for(int i = 0; i <= passwd_size; i++) {

		int rand_num = 32 + (rand() % 95);

		char algrism = (char)rand_num;

		if(rand_num == 32) {
			i--;
			continue;
		}

		passwd[i] = algrism;
	}
}
