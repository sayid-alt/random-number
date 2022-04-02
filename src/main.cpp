// The random number using cstdlib library noted here
// this part we will using the cstdlib library for our little project
// the project will be the finding out the hidden number element of array
// the number is not truly hidden in this code
// but we using algorithm as if it's hidden

#include <iostream>

// library that includes the rand() function
// rand() function will gives us one random number.
#include <cstdlib> 
using namespace std;

// procedure of printing array using for loop
void printArray(int *arr, int n){
	for (int i = 0; i < n; i++){
		cout << *(arr+i) << " "; // dereferencing for showing the value of pointer variable
	}cout << endl;
}

// procedure for guessing the combination number of array
// we named the procedure as combination and give the three parameters.
// first parameter is will be the hidden array,
// second parameter is will be the empty array, and will be placed by the number of the hidden array
// third parameter is will be the number of lenght of the hidden array
void combination (int *hiddenArray, int *res, int n) {
	int i = 0;
	while(i < n){ // loop the the array based on n length of array
		*(res+i) = rand() % 10; // checking the hidden array element with the random number
		// try activate this line to check how the random number is running
		/* cout << *(res+i) << " "; */

		if (*(res+i) == *(hiddenArray+i)){ 
			*(res+i) = *(hiddenArray+i);
			i++; // the n will be incremented as if the random number is suitable to the index of hidden element of array
		} 
	}
}

/* Driver code */
int main(){
	int pwd[] = {9,3,2,1,0,9,4,3,2,1,0}; // this is for instance of the hidden element of array
	int n = sizeof(pwd)/sizeof(pwd[0]); // declaring the lenght of the hidden array
	int res[n]; // declaring the variable for placing the element of hidden array

	combination(pwd, res, n);
	cout << endl;

	cout << "the hidden array is: " << endl;
	// displaying the hidden array
	printArray(res, n);
	
	
}