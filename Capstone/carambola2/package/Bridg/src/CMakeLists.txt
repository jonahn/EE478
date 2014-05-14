cmake_minimum_required(VERSION 2.6)
project(Bridg)

add_executable(bridgd main.c indicator.c)

INSTALL(TARGETS bridgd RUNTIME DESTINATION /usr/bin/)
