/* Hello World program in C
 * Written by Nathanael Kazmierczai, October 2017
 */

#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int id = -1,
        numProcesses = -1;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    MPI_Comm_size(MPI_COMM_WORLD, &numProcesses);

    if (id == 0) {
        printf("\nProcess %d says: There are %d processes operative.\n",id,numProcesses);
    }

    printf("\nProcess %d of %d says: Hello World!\n",id,numProcesses);

    MPI_Finalize();
    return 0;
}

