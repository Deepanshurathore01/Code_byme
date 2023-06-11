#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number , guess , nguesses=0 ;
    // we take a random number 
     srand(time(0));
     number = rand()%100+1;
  //   printf(" the random number is :%d \n",number );
     

// appliy do-while loop
do{
    printf(" guess the number between 1 to 100 \n");
    scanf("%d",&guess);

    // main logic 
    if( guess > number )
    {
       printf(" lower number please \n");

    }
    else if( guess < number )
    {
        printf(" Higher number please \n");
    }
    else{
        printf(" you guessed it in %d attemts \n ",nguesses);
    }
    nguesses++;
}while ( guess != number);
printf(" thanks for playing the guessing number game \n");
return 0;
    
    return 0;
}