cmake_minimum_required(VERSION 2.6)
project(ExampleApp)

add_executable(exampleapp main.c)

INSTALL(TARGETS exampleapp RUNTIME DESTINATION /usr/bin/)
