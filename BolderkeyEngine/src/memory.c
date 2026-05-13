#include "../include/bolderkey.h"

struct MemoryManager {
};

bool bkey_memory_free(void *p, ...) {

	return true;
}

bool bkey_memory_is_alloc(void *p, ...) {

	if(p) return false;

	return true;
}
