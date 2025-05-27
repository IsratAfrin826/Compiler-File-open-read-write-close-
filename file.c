#include<stdio.h>
#include<stdlib.h>

int main() {
FILE *fptr;
int number;

//create and write to the file
fptr = fopen("dara.text" , "w"); //"w" = write mode
if (fptr == NULL) {
    printf("Error! Cannot create file.\n");
    exit(1);
}

 printf("Enter a number : ");
 scanf("%d",&number);

 fprintf(fptr, "%d" , number); //write the number into the the file
 fclose(fptr); //always close the file after writing

 printf("Data written to file successfully.\n");

 //reopen the file to read
 fptr = fopen ("data.text", "r"); //"r" = read mode
 if (fptr == NULL) {
    printf("Error! cannot open file reading.\n");
    exit(1);
 }
  fscanf(fptr, "%d", &number); //read the number from the file
  printf("Data read from file: %d\n",number);

  fclose(fptr); //always close the file after reading

  return 0;
  }
