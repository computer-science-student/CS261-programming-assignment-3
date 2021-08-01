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
    // needs to create a while loop to go down the array.

    //while (index != n)

    int parent = A[index]; // get value at parent
    int leftChild;
    int rightChild;
    int smallestChild; // placeholder int for the smallest child node.

    // Check if entry at leftchild is NULL? if () // Will this ever be necessary?

    leftChild = A[2 *index + 1]; // get left child
    rightChild = A[2* index +2]; // get right child

    // If one of the child nodes is smaller than the parent node,
    if (leftChild < parent || rightChild < parent) {
        // Get the smallest child node; store it in smallestChild
        if (leftChild < rightChild){
            smallestChild = leftChild;
            // set left child node to be parent
            A[2 *index + 1] = parent;
        } else {
            smallestChild = rightChild;
            // set right child node to be parent
            A[2* index +2] = parent;
        }
        // switch parent with smallestChild.
        A[index] = smallestChild;



    }


}
