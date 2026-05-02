#ifndef VAULT_H
#define VAULT_H

#include <stdio.h>
#include <stdbool.h>


bool bkey_vault_exists(char *vault_path);
void bkey_vault_maker(char *vault_path);
void bkey_vault_insert(char *vault_path, char *passwd_title, char *passwd_hash);


#endif
