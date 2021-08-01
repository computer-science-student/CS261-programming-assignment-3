#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

// heapify array A containing n elements
void heapify(int A[], int n){
    // will have to do a breath first traversal from the bottom to top.

}

// heapsort array A containing n elements
void heapsort(int A[], int n){
    // In decending order. In order to have the array be in decending order
    //one will need to make use of the max heap.
    // heapsort will call heapify.
    // This sorts the array.
    return;
}

// percolate the key at index k down the heap A containing n elements
void percolateDown(int A[], int n, int index){
    // start here
    // takes in integer Array
    int parent = A[index]; // get value at parent
    int leftChild;
    int rightChild;

    leftChild = A[2 *index + 1]; // get left child
    rightChild = A[2* index +2]; // get right child


}
