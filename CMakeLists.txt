cmake_minimum_required(VERSION 3.16)
project(arena
	VERSION 0.2.0
	LANGUAGES C
)

set(CMAKE_C_STANDARD 99)

add_library(arena
		"src/arena.c"
		"vendor/logging/logging.c"
)
target_include_directories(arena PUBLIC vendor/logging)
