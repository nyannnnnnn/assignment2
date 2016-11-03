#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <mpi.h>
void init(int * a){

	for(int i = 0; i < 4500000; i++){
		a[i] = i;
	}
}
int main(int argc, char** argv)
{
	int *array;
	array = (int*)malloc(sizeof(int) * 4500000);
	int size, rank;
	MPI_Status status;
	MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if(rank == 0){
    	init(array);
    	MPI_Send(array, 4500000, MPI_INT, 1, 0, MPI_COMM_WORLD);
    }
    else if(rank == 1){
    	MPI_Recv(array, 4500000, MPI_INT, 0, 0, MPI_COMM_WORLD, &status);
    }
}
