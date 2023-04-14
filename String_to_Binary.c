/*
File: String_to_Binary.c
Author: Phan Trong Nguyen
Date: 
Description:
*/
#include "S_to_B_Header.h"
/*
Function: tong
Description:
Input:
Output:
*/
void Convert_to_Binary(char* array){
    int Decimal[1000]; 
    int Binary[7];
    for( int i = 0; i < strlen(array); i++){
        Decimal[i] = (int) array[i]; // Chuyen chuoi sang thap phan
    }
    for (int j = 0; j < strlen(array); j++){
        for(int i=7; i >= 0;i--)   // Với mỗi kí tự được chuyển sang dạng thập phân, tiếp tục chuyển sang dạng nhị phân 8bit
        {  
            Binary[i]=Decimal[j]%2;  
            Decimal[j]=Decimal[j]/2;  
        }
        // In các kí tự được chuyển đổi
        printf("%c: = ",array[j]); 
        for(int b = 0 ; b <= 7; b++)  
        {  
            printf("%d", Binary[b]);
            if(b == 7) printf("\n");  
        } 
    }
}

