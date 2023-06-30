#include <stdio.h>

#define MAX_SIZE_ARRAY 10 

unsigned int My_Data[MAX_SIZE_ARRAY] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};
unsigned int My_Data1[MAX_SIZE_ARRAY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void Swap_Two_Numbers(int *pNum1, int *pNum2);
void Print(int *Array, int Length);
void Buble_Sort(int *Array, int Length);
	
int main() {
	
	Print(My_Data1, MAX_SIZE_ARRAY);
    Buble_Sort(My_Data1, MAX_SIZE_ARRAY);
    Print(My_Data1, MAX_SIZE_ARRAY);
    return 0;
}

void Swap_Two_Numbers(int *pNum1, int *pNum2)
{
	int Temp =*pNum1 ;
	*pNum1 = *pNum2 ;
	*pNum2 = Temp ;
}

void Buble_Sort(int *Array, int Length)
{
	int iteration = 0 ;
	int inner_iteration = 0 ;
	int Flag=0 ;
	for(iteration = 0 ; iteration<Length-1 ; iteration++)
	{
		for(inner_iteration=0 ; inner_iteration<Length-1-iteration ; inner_iteration++)
		{
			if(Array[inner_iteration]>Array[inner_iteration+1])
			{
				Swap_Two_Numbers(&Array[inner_iteration] , &Array[inner_iteration+1]);
				Flag=1 ;
			}
		}
		if(Flag == 0)
		{
			return;
		}
	}
}

void Print(int *Array, int Length)
{
	int counter = 0; 
	for(counter = 0 ; counter<Length ; counter++)
	{
		printf("%d\t",Array[counter]);
	}
	printf("\n");
}