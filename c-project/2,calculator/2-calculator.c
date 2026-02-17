#include<stdio.h>
#include<math.h>

void print(){
    printf("\n\n-------------------------------");
    printf("\nWelcome to the Simple Calcultor:");
    printf("\n\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");

}
double modulus(int a, int b){
    if(b==0){
        fprintf(stderr,"invalid argument for modulus");
        return NAN;
    }else{
        return a%b;
    }
}
double Division(double x, double y){
    if(y==0){
        fprintf(stderr,"invaluid argument for division");
        return NAN;
    }else{
        return x/y;
    }
}

int main(){
    int choice;
    double first,second,result;
 while(1){
    print();
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice == 7){
        printf("thanku tushar: By By!!!");
        break;
    }

    if(choice < 0 || choice > 7){
      fprintf(stderr,"you choose wrong option");
      continue;
    }
    printf("\nEnter first number:");
    scanf("\n%lf",&first);
    printf("\nEnter second number:");
    scanf("\n%lf",&second);

    switch(choice){
     case 1:
       result = first + second;
        break;
     case 2:
          result = first - second;
        break;
     case 3:
            result = first * second;
        break;
     case 4:
           result = Division(first,second);
        break;
     case 5:
           result =modulus(first,second);
        break;
     case 6:
            result = pow(first,second);
        break;
    }
    if(!isnan(result)){
      printf("\nResult Of Operation is:%.2f",result);
    }
  };
    return 0;
}