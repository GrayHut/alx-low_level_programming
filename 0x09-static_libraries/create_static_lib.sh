#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *c
ar -rc liball.a *.o
ranlib liball.a
gcc -c main.c main.h
