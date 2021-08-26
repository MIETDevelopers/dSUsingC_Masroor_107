

//Name:Masroor Shah
//Rrogram: Demonstrating stack operations.
#include<stdio.h>
#include<stdlib.h>
void push();//Function for push  Stack operation
void pop();//Function for pop  Stack operation
void display();//Function for display Stack operation
int stack[10], HIGH = 10, max = -1;
//Main function
void main(){
    int option;
OPERATION: //Goto function label
    printf("Enter an option from the menu:\n1 for Push\n2 for Pop\n3 for display\n4 for Exit\n");
    scanf("%d", &option);
    switch (option){
    case 1:
        push();
        break;
    case 2: 
        pop();
        break;
    case 3: 
        display(); 
        break;
    case 4:
        printf("Thanks!");
        exit(0);
        break;
    default:
        printf("Incorrect option!\n");
        break;
    }
    goto OPERATION;   
}
void push(){
    int item;
    if(max==HIGH-1)
        printf("OVERFLOW!\n");
    else{
        printf("Enter a value to push: ");
        scanf("%d", &item);
        max +=1;
        stack[max] = item;
    }
}
void pop(){
    int item;
    if(max==-1)
        printf("UNDERFLOW!\n");
    else{
        item = stack[max];
        max -=1;
        printf("%d item deleted from stack!\n", item);
    }
    display();
}
void display(){
    int restart;
    if(max==-1)
        printf("UNDERFLOW!\n");
    else{
        printf("Stack elements are: ");
        for(int i=max; i>=0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
CHOICE:
    printf("Press '1' to continue\nPress '2' to exit\n");
    scanf("%d", &restart);
    if(restart==1){
        printf("\n");
    }
    else if(restart==2){
        printf("Thanks!");
        exit(0);
    }
    else{
        printf("Incorrect option!\n");
        goto CHOICE;
    }
}