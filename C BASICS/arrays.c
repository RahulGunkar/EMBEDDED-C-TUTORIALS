/* This code contains all the functions that can be performed on arrays..like insert,delete,searching
	It also contains code for operations on 2D arrays.
	User must first initialize the array and then pass those arrays to the functiosn defined here 
	for the operations.
*/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE	10

void storeChar(char arr[ARRAY_SIZE]);
void printArray(char arr[ARRAY_SIZE]);

int main(){

	//defining a 1D array of char datatype..it can be later converted to any other data type
	char bufferData[ARRAY_SIZE];

	storeChar(bufferData);
	printArray(bufferData,"int");

	
	

	return 0;
}


void storeChar(char arr[ARRAY_SIZE]){
	int i=0;
	for( i=0 ; i<ARRAY_SIZE ; i++){
		scanf("%c",&arr[i]);
	}
}

void storeInt
void printArray(char arr[ARRAY_SIZE]){
	int i=0;
	for( i=0 ; i<ARRAY_SIZE ; i++){
		if(type == "int"){
			printf("%c\t\n",arr[i] );	/*since Ascii value of 1 is 49..so -48 will convert char in integer*/
	
		}
		}

}