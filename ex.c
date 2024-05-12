#include <stdio.h>

int main(){
    int num;

    printf("Enter the number of prime number you want starting from 2:-- \n");
    scanf("%d", &num);

    if (n >= 1 ) {
        printf("First %d prime numbers are:-- \n", num);
    }

    for(int i = 2; i <= num; i++) {
        for (int j =2; j < num; j++) {
            if(i % j != 0) {
                printf("%d",i);
            }
        }
    }

}