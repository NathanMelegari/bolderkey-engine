#ifndef VAULT_H
#define VAULT_H

#include <stdio.h>
#include <stdbool.h>

bool vault_exists(char *vault_path);
void vault_make(FILE *vault_file, char *vault_path);
char *key_access_vault(char *vault_path);
void insert_vault(FILE *vault_file, char *vault_path, char *password_title, char *full_password);


#endif
