#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -std=gnu89 -c *.c;
ar -rc liball.a *.o

