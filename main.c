#include <stdio.h>
#include <stdlib.h> 

int randomNumberGen();

int main(void){
//Magic 8 ball prompt
char ques[30];  

printf("Enter your question here: \n");
scanf("%s", ques);

randomNumberGen();
return 0;
}
