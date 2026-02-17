#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess;
    int no_of_guess=0;

   srand(time(NULL));//ye random number ko ek base deta hai ki tum yaha se satrt karo;


    printf("welcome to numbar guessing game");
    random =rand() % 100 +1;// rand name ke ek pre define function hai random number ko generate karne ke liye 


    do{ // do while condition isliye kyuki ek bar to kam se kam chalna hi chahiye game ko;
        printf("\nplease enter number between (1 to 100)");
        scanf("%d",&guess);// user se number input liya 
        no_of_guess++;

        if(guess > random){
            printf("please guess smaller number");
        }
        else if(guess < random){
            printf("please guess largest number");
        }else{
            printf("congratulation!!! you guess the number in %d attempt",no_of_guess);
        }

    } while(guess!=random);

    
    printf("\nBy By you won the game if you want play again then your welcome!");
    printf("\nThis game is crited by tushar kumar");
}