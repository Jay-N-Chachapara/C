#include<stdio.h>
#define Max 20

int Top = -1;
int Stack[Max];

void push(int a)
{
     //code to push an element on to the stack
     if(Top == Max)
          printf("Overflow");
     else
     {
          Top++;
          Stack[Top] = a;
     }
}

int pop()
{
     //code to delete an element from the top of the stock
     if(Top == -1)
     {
          printf("Underfolw");
     }
     else
     {
          int temp = Stack[Top];
          Top--;
          return temp;     
     }
}

int peep()
{
     //code to display the top most element of the stack
     if(Top == -1)
     {
          printf("Undreflow");
     }
     else
     {
          return Stack[Top];
     }
}

int main()
{
     int choice = 0;
     do
     {
          printf("\n1.Push\n2.Pop\n3.Peep\n4.Exit\n");
          printf("Enter your choice : ");
          scanf("%d",&choice);
          if(choice == 1)
          {
               int element = 0;
               printf("Enter an element value : ");
               scanf("%d",&element);
               push(element);
          }
          else if(choice == 2)
          {
               printf("%d",pop());
          }
          else if(choice == 3)
          {
               printf("%d",peep());
          }
     }while(choice != 4);
     return 0;
}