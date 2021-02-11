#include <stdio.h>
#include <stdlib.h>     

#define SIZE 1000       //The number of values in the data file

int main(void)
{
    int numberArray[SIZE];      //An array to store all the wight
    int i;
    double count=0, average=0;  //Auxiliary variable, and the 
                                //average variable

    FILE *myFile;               //A pointer to the structure FILE 
    myFile = fopen("elephant_seal_data.txt", "r");  //open the text file as read
    if(myFile == NULL){                         //only to verify the readding
        printf("Error al leer el archivo");
        exit(1);                                //if the function doesn't find the file, the 
                                                //program will end
    }
        
    for (i = 0; i < SIZE; i++){                     //Read each integer and store at the array
        fscanf(myFile, "%d", &numberArray[i]);
    }
    
    for (i = 0; i < SIZE; i++){         //Store the sum of all the values
        count += numberArray[i];
    }
    average = count / SIZE;     //Calculete the average 

    printf("The average weight is: %lf", average);   //Print the result
    
    return 0;
}