#include "../include/bolderkey.h"
#include <stdlib.h>


void bkey_passwd_maker(short passwd_size, char *ret_passwd) {

	for(int i = 0; i <= passwd_size; i++) {

		int rand_num = 33 + (rand() % 94);

		char algrism = (char)rand_num;

		ret_passwd[i] = algrism;
	}
}
