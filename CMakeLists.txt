cmake_minimum_required(VERSION 3.15)
project(CScrapper C)

set(CMAKE_C_STANDARD 99)

add_executable(CScrapper main.c parameters.h confParser.c confParser.h commons.h message.c message.h)