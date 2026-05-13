#include "../include/bolderkey.h"
#include <string>

class BkeyPassword {

	private:

		PasswordManager* pmr;

	public:
		BkeyPassword() {pmr = create_passwd_manager_struct()}
		~BkeyPassword() {destroy_passwd_manager_struct(pmr)}

		void bkey_password_create(int passwd_size, std::string passwd_out) {

			bkey_password_create(passwd_size, passwd_out);
		}

		bool bkey_password_find(std::string passwd_title., std::string path, std::string out) {

			bkey_password_find(const char *passwd_title, const char *path, char *out);
		}
};


class BkeyVault {

	public:

		bool bkey_vault_create(std::string path) {

			bkey_vault_create(path);
		}

		bool bkey_vault_exists(std::string path) {

			bkey_vault_exists(path);
		}

		bool bkey_vault_insert(std::string path, std::string passwd_title, std::string passwd_encrypt) {

			bkey_vault_insert(path, passwd_title, passwd_encrypt);
		}
};


class BkeyCrypto {

	public:
		bool bkey_crypto_hash_generate() {

			bkey_crypto_hash_generate(const unsigned char *input, size_t input_len, char *hash_out);
		}

		bool bkey_crypto_hash_verify() {

			bkey_crypto_hash_verify(const unsigned char *input_passwd, const unsigned char *input_hash);
		}

		bool bkey_crypto_key_generate() {

			bkey_crypto_key_generate(const unsigned char *input, size_t input_len, char key_out);
		}

		bool bkey_crypto_key_verify() {

			bkey_crypto_key_verify(const unsigned char *input_key, const unsigned char *input_key_save);
		}
};


class BkeyMemory {

	public:
		bool bkey_memory_free(void *p) {

			bkey_memory_free(p);
		}
};
