#include <stdio.h>
extern int find_sum(int * arr, int count);

int main(){

    //Get file
    char fileName[100];
    printf("Enter file name: \n");
    scanf("%[^\n]%*c", fileName);
    printf("%s\n", fileName);

    //Open file given by user
    FILE *text = fopen(fileName, "r");
    //Check if file exists in directory
    if (text == NULL) {
       printf("Given Filename Cannot Be Opened\n");
       return 1;
    }

    //Allocate and Get number of variables
    int numCount = 1;
    fscanf(text, "%d", &numCount);
    printf("NumCount: %d\n", numCount);

    //Allocate and an array with every variable
    int numArray[numCount];

    printf("Numbers:\n");
    int i = 0; //indexing through entire array
    while(fscanf(text, "%d", &numArray[i]) == 1){
        i++;
    }

    //Check array values
    for (i = 0; i < numCount; i++) {
        printf("%d ", numArray[i]); // Print each element followed by a space
    }

    //Add sums
    int sum = 0;
    sum = find_sum(numArray, numCount);
    printf("\n\nSum of All Values: %d\n", sum);



}
