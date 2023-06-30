#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE  10

unsigned int Data[MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};


void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2);
void Print(unsigned int array[], unsigned int array_length);
void Selection_Sort(unsigned int array[], unsigned int array_length);

int main()
{
    Print(Data, MAX_SIZE);
    Selection_Sort(Data, MAX_SIZE);
    Print(Data, MAX_SIZE);
    return 0;
}

void Swap_Two_Numbers(unsigned int *pNumber1, unsigned int *pNumber2){
    unsigned int Temp_Number = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = Temp_Number;
}

void Print(unsigned int array[], unsigned int array_length){
    unsigned int Data_Counter = 0;
    for(Data_Counter=0; Data_Counter<array_length; Data_Counter++){
        printf("%i\t", array[Data_Counter]);
    }
    printf("\n");
}

void Selection_Sort(unsigned int array[], unsigned int array_length){
    unsigned int Sort_Iterator = 0;
    unsigned int Minimum_Index = 0;
    unsigned int Compare_Iterator = 0;

    for(Sort_Iterator = 0; Sort_Iterator < array_length-1; Sort_Iterator++){
        Minimum_Index = Sort_Iterator;

        for(Compare_Iterator = Sort_Iterator+1; Compare_Iterator < array_length; Compare_Iterator++){
            if(array[Compare_Iterator] < array[Minimum_Index]){
                Minimum_Index = Compare_Iterator;
            }
            else{
                /* Nothing */
            }
        }

        Swap_Two_Numbers(&array[Minimum_Index], &array[Sort_Iterator]);
    }
}