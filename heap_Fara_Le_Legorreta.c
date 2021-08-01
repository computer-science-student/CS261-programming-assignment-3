#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include <limits.h>

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
    printf("Before percolation:\n");

    for (int i=n-1; i>=0; i--) { // it displays the array from last to beginning
        printf("%d ", A[i]);
    }

    percolateDown(A, n, 1);
    printf("After percolation:\n");

    for (int i=n-1; i>=0; i--) { // it displays the array from last to beginning
        printf("%d ", A[i]);
    }

    return;
}

// percolate the key at index k down the heap A containing n elements
void percolateDown(int A[], int n, int index){
    // start here
    // takes in integer Array
    // needs to create a while loop to go down the array.


    int parent = A[index]; // get value at parent
    int leftChild;
    int rightChild;
    int smallestChild; // placeholder int for the smallest child node.


    int flag = 0;

    while (!flag) {

        if ( (2 *index + 1) < n ){
            leftChild = A[2 *index + 1]; // get left child

        } else {
            // set leftChild to be max value
            leftChild = INT_MAX; // makes use of LIMITS.h
        }

        if ( (2* index +2 ) < n){
            rightChild = A[2* index +2]; // get right child
        } else {
            // Set rightChild to be max value
            rightChild = INT_MAX; // makes of of LIMITS.h
        }
        // Swap if necessary
        // If one of the child nodes is smaller than the parent node,
        if (leftChild < parent || rightChild < parent) {
            // Get the smallest child node; store it in smallestChild
            if (leftChild < rightChild){
                smallestChild = leftChild;
                A[2 *index + 1] = parent; // set left child node to be parent
            } else {
                smallestChild = rightChild;
                A[2* index +2] = parent; // set right child node to be parent
            }
            // switch parent with smallestChild.
            A[index] = smallestChild;
        } else {
            flag = 1;
        }

    }


}
