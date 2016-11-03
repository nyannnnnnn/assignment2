all:	SETL genWorld SETLMPI SETLREAL

SETL:	SETL.c
	gcc -DEBUG -o SETL SETL.c

genWorld:	genWorld.c
	gcc -o genWorld genWorld.c

SETLMPI: SETLMPI.c
	mpicc -o SETLMPI SETLMPI.c

SETLREAL: SETLreal.c
	mpicc -o SETLREAL SETLreal.c