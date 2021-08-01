#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

// heapify array A containing n elements
void heapify(int A[], int n);


// heapsort array A containing n elements
void heapsort(int A[], int n);


// percolate the key at index k down the heap A containing n elements
void percolateDown(int A[], int n, int index);
