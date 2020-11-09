#include <ctime>
#include <iostream>
#include <cstdlib>
#include "funciones.h"


using namespace std;

int main(){
    int array1[30];    //variables
    int array2[30];
	  int m,n,k;
	  int l = 0;

	  srand((unsigned)time(NULL));
	  for (int i=0;i<30;i++){
		    n=rand()%15+1;
		    array1[i] = n;
		    m++;
    }


    cout <<"First array: " << endl;
    printarr(array1, m);              //printarr function call.
    quicksort(array1, 0, m-1);        //quicksort function call.

    cout << endl << endl <<"Sorted first array: " << endl;
    printarr(array1, m);



    srand((unsigned)time(NULL));
	  for (int j=0;j<30;j++){
		    k=rand()%7+1;
		    array2[j] = k;
        l++;
    }



    cout << endl << endl  <<"Second array: " << endl;
    printarr(array2, l);
    quicksort(array2, 0, l-1);

    cout << endl << endl <<"Sorted second array: " << endl;
    printarr(array2, l);


    mergesort(array1, array2, m, l);        //mergesort function call.


    return 0;
}
