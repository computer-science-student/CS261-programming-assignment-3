#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// percolate the key at index k down the heap
// A containing n elements
void percolateDown(int A[], int n, int index) {
	int parent, child, swap;

	// Set parent equal to the index that
	// was passed. Find the left child of 
	// this parent.
	parent = index;
	child = 2*parent + 1;

	// As long as a child exists, continue
	// to percolate down.
	while (child <= n-1) {

		// Set swap equal parent. If 
		// swap remains parent, then
		// there will nothing to swap.
		swap = parent;

		// If the key of parent is greater
		// than the key of child, then 
		// the parent will need to be 
		// replaced with a child.
		if (A[parent] > A[child])
			swap = child;
		
		// Before either exiting or
		// executing the swap, compare the
		// key of the right child to the 
		// key of the current swap.
		if (child + 1 <= n-1 && A[swap] > A[child + 1])
			swap = child + 1;

		// If the above statements did not
		// change swap == parent, then
		// there is nothing to swap, so exit.
		if (swap == parent)
			return;
	
		// Else, swap now contains the 
		// the index of the child to
		// swap with parent, so swap.
		else {
			int temp = A[parent];
			A[parent] = A[swap];
			A[swap] = temp;
			
			// The former parent has been
			// moved down to the place of one 
			// of its children. So, the algorithm
			// will repeat, but first, update the 
			// index of parent and update the
			// index of its new left child.
			parent = swap;
			child = 2*parent + 1;
		}
	}
	return;
}


// heapify array A containing n elements
void heapify(int A[], int n)
{
	// Start with the parent of the
	// last element in the array.
	int parent = floor((n-1)/2);
	
	// Proceed up the tree, giving each
	// parent node to percolateDown until 
	// every parent node has been passed.
	while (parent >= 0 ) {
		percolateDown(A, n, parent);
		parent = parent - 1;
	}
	return;
}

// Sorts the heap. Takes array A and size
// of the array n.
void heapsort(int A[], int n)
{
	// heapify if not already in
	// max-heap format.
	heapify(A, n);

	int end = n-1;
	
	while (end > 0) {
		
		// Swap the first entry with
		// the last unsorted entry
		int temp = A[end];
		A[end] = A[0];
		A[0] = temp;

		// Swap has destroyed the heap
		// property, so restore the 
		// heap property.
		end = end - 1;

		percolateDown(A, end+1, 0);
	}	
	return;
}
