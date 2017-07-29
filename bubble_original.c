#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int bubble(int* array, unsigned int size) {
    int temp;
    unsigned int count = 0;

    for(int i=0; i<size-1; i++) {
	for(int j=0; j<size-1-i; j++) {
	    if(array[j] > array[j+1]) {
		temp = array[j];
		array[j] = array[j+1];
		array[j+1] = temp;
	    }
	    count++;
	}
    }

    return count;
}

int main(int argc, char* argv[]) {
    int* array = NULL;
    unsigned int size = 0;
    time_t old_t, new_t;

    if(argc != 2) {
	printf("Usage : %s <count>\n", argv[0]);
	return -1;
    }
    size = atoi(argv[1]);
    
    array = (int*) malloc(size * sizeof(int));
    if(!array) return -1;

    srand(time(NULL));
    for(int i=0; i<size; i++)
	array[i] = rand()%size;

    time(&old_t);
    bubble(array, size);
    time(&new_t);

    printf("Result : %u\n", (unsigned int)(new_t - old_t));

    free(array);

    return 0;
}
