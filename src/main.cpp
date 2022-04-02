#include <iostream>
#include <cstdlib>
using namespace std;

void printArray(int *arr, int n){
	for (int i = 0; i < n; i++){
		cout << *(arr+i) << " ";
	}cout << endl;
}

void combination (int *arr, int *res, int n) {
	int i = 0;
	while(i < n){
		*(res+i) = rand() % 10;
		if (*(res+i) == *(arr+i)){
			*(res+i) = *(arr+i);
			i++;
		} 
	}
}

int main(){
	int pwd[] = {9,3,2,1,0,9,4,3,2,1,0};
	int n = sizeof(pwd)/sizeof(pwd[0]);
	
	int res[n];
	combination(pwd, res, n);
	printArray(res, n);
	
	
}