#include <stdio.h>
#define N 10

// a[] is the array and n is the size of the array
void selection_sort(int a[], int n); 
int find_largest(int a[], int n);

int main(){

    int i;
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++){
        
        scanf("%d", &a[i]);
    }
    // call the selection_sort function
    selection_sort(a, N);

    // display the sorted array
    printf("In sorted order: ");
    for(i = 0; i < N; i++){

        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

// find the index of the largest element in the array
int find_largest(int a[], int n){

    int largest_index = 0;
    int i;

    // to find the largest element we need to compare the first
    // element in the array with the second element in the array
    // if the compared element is of smaller value, then swap them
    for(i = 1; i <  n; i++){
        // a[i] is greated than the current largest element
        // set the largest_index to i
        if(a[i] > a[largest_index]){

            largest_index = i;
        }

    }
    // largest_index holds the largest index in the elements
    return largest_index;
}

void selection_sort(int a[], int n){

    int largest_index = 0;
    int temp;

    // stop the function if there is only one element
    if(n  == 1){

        return;
    }

    // find the index of the largets elemenet in the array
    // by calling the find_largest function
    // of the array that's passed into the selection_sort function
    largest_index = find_largest(a, n);

    // swap the element at the last posistion in the array
    if(largest_index < n - 1){

        temp  = a[n - 1];
        a[n - 1] = a[largest_index];
        a[largest_index] = temp;
    }
    // call selection_sort function rescursively 
    // to sort the first n - 1 element in the array.
    selection_sort(a, n - 1);
}
