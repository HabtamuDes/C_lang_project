#include<stdio.h>
  

  typedef enum{
monday,
tuesday,
wensday,
thursday,
friday,
satrday,
sunday
}WEEKDAY;

int main(void){

    WEEKDAY day = monday;
    for(int i = 0; i<=7; i++){
        
    if(day == i){
        printf("It is monday ");
    }else{ 
        printf("it is not monday");
    }

    }

}