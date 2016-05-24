#
## Makefile for Chapter 02
#
## Type  make to compile all the programs
# in the chapter 

all: sigdemo4 reaction


clean:
	rm -f sigdemo4 reaction

sigdemo4: sigdemo4.c 
	cc -o sigdemo4 sigdemo4.c
reaction: reaction.c
	cc -o reaction reaction.c





