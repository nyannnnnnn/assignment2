all:	SETL genWorld

SETL:	SETL.c
	gcc -DEBUG -o SETL SETL.c

genWorld:	genWorld.c
	gcc -o genWorld genWorld.c


