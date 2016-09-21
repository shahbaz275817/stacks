#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAXSIZE 5

struct stack {
int s[MAXSIZE];
int top;
}st;
void push(int data){
st.top++;
st.s[st.top]=data;
}
int pop(){
    int data;
    data=st.s[st.top];
    st.top--;
    return(data);
}
int stFull(){
    if(st.top>=MAXSIZE-1)
        return 1;
    else
        return 0;
}
int stEmpty(){
    if(st.top==-1)
        return 1;
    else
        return 0;
}
void display(){
    int i;
    if (stEmpty()==1)
        printf("\nStack Is Empty!");
    else {
        for (i = st.top; i >= 0; i--)
            printf("\n%d", st.s[i]);
   }
}

int main()
{
    int data,choice;
    st.top=-1;
    char ans;
    do{
      printf("enter your choice\n1.insertion(push)\n2.deletion(pop)\n3.display\n") ;
      scanf("%d",&choice);
      switch(choice){
      case 1:
        if(stFull()==1)
            {printf("stack is full");}
        else{
            printf("enter the data\n");
            scanf("\n%d",&data);
            push(data);}
        break;

      case 2:
          if(stEmpty()==1)
                printf("empty stack \n Underflow");
          else
                printf("the popped out data is %d",pop());
          break;

      case 3:
          display();
          break;
      default:
        printf("invalid choice");
        break;
      }
      printf("\nDo you wanna continue\n");
      ans=getch();
      }while(ans=='Y'||ans=='y');
    return 0;
}
