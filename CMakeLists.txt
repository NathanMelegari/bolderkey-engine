cmake_minimum_required(VERSION 3.10)

project(BolderKey VERSION 1.0)

set(CMAKE_C_STANDARD 99)


#-----------------------------
# MAKE THE EXECUTABLE
#-----------------------------

find_package(Sodium REQUIRED)

set(BOLDERKEY_FILES
	src/main.c src/core/passwr_maker.c src/core/hash.c src/core/vault.c)

add_executable(bolderkey-lts ${BOLDERKEY_FILES})


target_link_libraries(seu_projeto PRIVATE ${SODIUM_LIBRARIES})
target_include_directories(seu_projeto PRIVATE ${SODIUM_INCLUDE_DIRS})

