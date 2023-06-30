#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE     10


signed int MyData[MAX_SIZE] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99};

signed int BinarySearch_1(signed int Data[], unsigned int Start_Index, unsigned int End_Index, signed int Req_Value);
signed int BinarySearch_2(signed int Data[], unsigned int Start_Index, unsigned int End_Index, signed int Req_Value);

int main(){
    signed int Ret = 0;

    Ret = BinarySearch_1(MyData, 0, MAX_SIZE-1, 22); 
    printf("Ret = %i \n", Ret);
    Ret = BinarySearch_2(MyData, 0, MAX_SIZE-1, 77); 
    printf("Ret = %i \n", Ret);
    Ret = BinarySearch_2(MyData, 0, MAX_SIZE-1, 100); 
    printf("Ret = %i \n", Ret);

    return 0;
}

signed int BinarySearch_1(signed int Data[], unsigned int Start_Index, unsigned int End_Index, signed int Req_Value){
    unsigned int M_Index = 0;

    while(Start_Index <= End_Index){
        M_Index = Start_Index + ((End_Index - Start_Index) / 2);

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            Start_Index = M_Index + 1;
        }
        else{
            End_Index = M_Index - 1;
        }
    }

    return -1;
}

signed int BinarySearch_2(signed int Data[], unsigned int Start_Index, unsigned int End_Index, signed int Req_Value){
    unsigned int M_Index = 0;

    while(Start_Index <= End_Index){
        M_Index = Start_Index + ((End_Index - Start_Index) / 2);

        if(Req_Value == Data[M_Index]){
            return M_Index;
        }
        else if(Req_Value > Data[M_Index]){
            return BinarySearch_2(Data, M_Index+1, End_Index, Req_Value);
        }
        else{
            return BinarySearch_2(Data, Start_Index, M_Index-1, Req_Value);
        }
    }

    return -1;
}










