#include <iostream>
#include "functions.h"
#include <cstdlib>
#include <array>

using namespace std;


//function for array sorting by quicksort
void quicksort(int A[], int left, int right){

    int pivot = A[left];
    int i=left;
    int j=right;
    int aux;

    while(i < j){
        while(A[i] <= pivot && i < j){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }
        if (i < j){
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }

    A[left] = A[j];
    A[j] = pivot;

    if(left < j-1){
        quicksort(A, left, j-1);
    }

    if(j+1 < right){
        quicksort(A, j+1, right);
    }
}





//function for array printing
void printarr(int A[], int i){

    for (int k = 0; k < i; k++){
        cout << A[k] << " ";
    }
}



//function for array sorting by mergesort
void mergesort(int a[], int b[], int l, int m){
    int result [l + m];
    int posA = 0;
    int posB = 0;
    int posRes = 0;

    while (posA < l && posB < m){
        if(a[posA] < b[posB]){
            result[posRes] = a[posA];
            posRes++;
            posA++;
        }
        else{
            result[posRes] = b[posB];
            posRes++;
            posB++;
        }
    }


    while(posA < l){
        result[posRes] = a[posA];
        posRes++;
        posA++;
    }


    while(posB < m){
        result[posRes] = b[posB];
        posRes++;
        posB++;
    }


    cout << endl << endl << "Third array: " << endl;


    //array printing.
    for (int k = 0; k < 60; k++){
        cout << result[k] << " ";
    }
}
