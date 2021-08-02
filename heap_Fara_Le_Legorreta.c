#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include <limits.h>

// heapify array A containing n elements
void heapify(int A[], int n){
    // Checks the properties
    // will have to do a breath first traversal from the bottom to top.

    /*
    // traverse bottom to top
    for (i = 0; i< n; i++){
        //printf("%d ", A[i]);
        percolateDown(int A[], int n, i);
    } */

}

// heapsort array A containing n elements
void heapsort(int A[], int n){
    // In decending order. In order to have the array be in decending order
    //one will need to make use of the max heap.
    // heapsort will call heapify.
    // This sorts the array.
    int i;
    printf("Before percolation:\n");

    for (i=n-1; i>=0; i--) { // it displays the array from last to beginning
        printf("%d ", A[i]);
    }

    percolateDown(A, n, 4);
    printf("\nAfter percolation:\n");

    /*
    for (i=n-1; i>=0; i) { // it displays the array from last to beginning
        printf("%d ", A[i]);
    }*/
    for (i = 0; i< n; i++){
        printf("%d ", A[i]);
    }

    return;
}

// percolate the key at index k down the heap A containing n elements
void percolateDown(int A[], int n, int index){
    // start here
    // takes in integer Array
    // needs to create a while loop to go down the array.


    int parent; // get value at parent
    int leftChild;
    int rightChild;
    int smallestChild; // placeholder int for the smallest child node.


    int flag = 0;

    while (!flag) {
        parent = A[index];
        int leftchildIndex = 2*index + 1;
        int rightchildIndex = 2*index + 2;

        if ( leftchildIndex < n ){
            leftChild = A[leftchildIndex]; // get left child

        } else {
            // set leftChild to be max value
            leftChild = INT_MAX; // makes use of LIMITS.h
        }

        if ( rightchildIndex < n){
            rightChild = A[rightchildIndex]; // get right child
        } else {
            // Set rightChild to be max value
            rightChild = INT_MAX; // makes of of LIMITS.h
        }
        printf("Parent: %d, Left: %d, Right: %d\n", parent, leftChild, rightChild);
        // Swap if necessary
        // If one of the child nodes is smaller than the parent node,
        if (leftChild < parent || rightChild < parent) {
            // Get the smallest child node; store it in smallestChild
            if (leftChild < rightChild){
                smallestChild = leftChild;
                A[leftchildIndex] = parent; // set left child node to be parent
                // change the parent
                A[index] = smallestChild;
                index = leftchildIndex; // new parent will be left child node


            } else {

                smallestChild = rightChild;
                A[rightchildIndex] = parent; // set right child node to be parent
                A[index] = smallestChild;
                // change the parent
                index = rightchildIndex; // new parent will be right child node.

            }
            // switch parent with smallestChild.
            //printf("Swapping is done \n");

            // Change the parent

        } else {
            flag = 1;
        }

    }


}

/*
A[index]
A[leftchildIndex]

A[leftchildIndex] = parent
A[index] = smallestChild


A[rightchildIndex]
*/
