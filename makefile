all:	SETL genWorld SETLMPI

SETL:	SETL.c
	gcc -DEBUG -o SETL SETL.c

genWorld:	genWorld.c
	gcc -o genWorld genWorld.c

SETLMPI: SETLMPI.c
	mpicc -o SETLMPI SETLMPI.c
