#include<stdio.h>

int main(void){

int incrementAge(){
static int age[3];
age[0] ++;

return age[0];
}

printf("%d\n", incrementAge());
printf("%d\n", incrementAge());
printf("%d\n", incrementAge());


}