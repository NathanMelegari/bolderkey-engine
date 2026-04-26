cmake_minimum_required(VERSION 3.10)

project(BolderKey VERSION 1.0)

set(CMAKE_C_STANDARD 99)


#-----------------------------
# MAKE THE EXECUTABLE
#-----------------------------

set(BOLDERKEY_FILES
	src/main.c src/core/passwr_maker.c src/core/hash.c src/core/vault.c)

add_executable(bolderkey-lts ${BOLDERKEY_FILES})
