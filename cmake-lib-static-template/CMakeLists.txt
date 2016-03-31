cmake_minimum_required(VERSION 2.8)         		# Проверка версии CMake.

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin ) # Собирать в папку bin/

set (CMAKE_C_FLAGS "-Wall")				# Добавляет ключи компилятора

add_executable(mylab src/main.c src/add.c)		# Создает исполняемый файл с именем main
							# из исходника main.cpp

target_link_libraries(mylab m)				# Указание прилинковать математическую библиотеку (math.h)

