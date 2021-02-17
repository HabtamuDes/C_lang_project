#include<stdio.h>

int main(void){


int prices[6]= {6,7,8,9,11,12};

for(int i = 0; i <=6; i++){

    printf("%u", *prices);

    printf("%u",*(prices + i));
}


}