#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int randomNumberGen() {
srand(time(NULL));
int randomNumber = (rand() % 10) + 1;

if (randomNumber == 1) {
    printf("Yes\n");
}
    else if (randomNumber == 2){
        printf("No\n");
    }
    else if (randomNumber == 3){
        printf("Maybe\n");
    }
    else if (randomNumber == 4){
        printf("Ask again later\n");
    }
    else if (randomNumber == 5){
        printf("Definitely\n");
    }
    else if (randomNumber == 6){
        printf("Absolutely not\n");
    }
    else if (randomNumber == 7){
        printf("It is certain\n");
    }
    else if (randomNumber == 8){
        printf("Very doubtful\n");
    }
    else if (randomNumber == 9){
        printf("Without a doubt\n");
    }
    else if (randomNumber == 10){
        printf("Concentrate and ask again\n");
    }
else {
    printf("Error");
}
return 0;
}