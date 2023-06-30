#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE  10

unsigned int Data[MAX_SIZE] = {8, 1, 9, 5, 0, 7, 3, 2, 4, 6};

void Execute_Insertion_Sort(unsigned int array[], unsigned int array_length);
void Print(unsigned int array[], unsigned int array_length);

int main()
{
    Print(Data, MAX_SIZE);
    Execute_Insertion_Sort(Data, MAX_SIZE);
    Print(Data, MAX_SIZE);
    return 0;
}

void Execute_Insertion_Sort(unsigned int array[], unsigned int array_length){
    unsigned int Iteration = 0;
    unsigned int Inserted_Item = 0;
    signed int Compared_Item_Index = 0;

    for(Iteration = 1; Iteration < array_length; Iteration++){
        Inserted_Item = array[Iteration];
        Compared_Item_Index = Iteration - 1;

        while((Inserted_Item < array[Compared_Item_Index])&& (Compared_Item_Index >= 0)){
            array[Compared_Item_Index + 1] = array[Compared_Item_Index];
            Compared_Item_Index--;
        }

        array[Compared_Item_Index + 1] = Inserted_Item;
    }
}

void Print(unsigned int array[], unsigned int array_length){
    unsigned int Counter = 0;
    for(Counter=0; Counter<array_length; Counter++){
        printf("%i\t", array[Counter]);
    }
    printf("\n");
}
