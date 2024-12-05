#include <stdio.h>

float add(float x, float y){
    return x+y;
}

float sub(float x, float y){
    return x-y;
}

float div(float x, float y){
    if(y=0){
        printf("Zero Division Error\n");
    }
    else {
        return x/y;
    }
}

float mul (float x, float y){
    return x*y;
}

int main(){
    float num1,num2,result;
    char history[100][50];
    int choice;
    int historyindex = 0;
    char operator;

    while (1) {
        printf("\nCalculator Menu\n\n");
        printf("[1] Addition \n");
        printf("[2] Subtraction \n");
        printf("[3] Division \n");
        printf("[4] Multiplication \n");
        printf("[5] View History\n");
        printf("[6] Exit \n\n");

        printf("Enter Your Choice :");
        scanf("%d",&choice);

        if (choice==5){
             printf("\nHistory\n");
             for (int i =0;i<historyindex; i++){
                 printf("%s\n",history[i]);
             }
              printf("\n");
              continue;
        }
        if (choice==6){
            break;
        }

        printf("Enter Two Numbers : ");
        scanf("%f %f",&num1,&num2);

        switch(choice){
        case 1 :
            operator = '+';
            result = add(num1,num2);
            break;

        case 2 :
            operator = '-';
            result = sub(num1,num2);
            break;

        case 3 :
            operator = '/';
            result = div(num1,num2);
            break;

        case 4 :
            operator = '*';
            result = mul(num1,num2);
            break;

        default :
             printf("Error\n");
             continue;
        }

         printf("Result : %.2f\n",result);
         sprintf(history[historyindex],"%.2f %c %.2f = %.2f",num1,operator,num2,result);
         historyindex++;
    }
}
