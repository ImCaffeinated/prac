#include <stdio.h>
#include <stdlib.h>



int randomNumberGen() {

int randomNumber = (rand() % 3) + 1;

if (randomNumber == 1) {
    printf("Yes\n");
}
    else if (randomNumber == 2){
        printf("No\n");
    }
    else if (randomNumber == 3){
        printf("Maybe\n");
    }
else {
    printf("Error");
}
return 0;
}