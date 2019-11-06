##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## MAKEFILE for fonction
##

all: 	compile

compile: *.c
	gcc *.c

execute:a.out
	./a.out

exe:	compile execute

clean:	mr_clean
	./mr_clean

re:	clean all
