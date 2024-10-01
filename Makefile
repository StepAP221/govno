all: menu.o max.o min.o diff.o sum.o
 gcc menu.o max.o min.o diff.o sum.o -o menu

menu: max.h min.h diff.h sum.h
 gcc -c menu.c 

max: max.h
 gcc -c max.c

min: min.h
 gcc -c min.c

diff: diff.h
 gcc -c diff.c

sum: sum.h
 gcc -c sum.c