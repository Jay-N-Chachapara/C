#include<stdio.h>
#include<unistd.h> //This lib is included for the system function sleep()

//following is the API for thread programming
#include<pthread.h>


//folloing fuction prints "My Turn!" after every second
void myTurn()
{
     while(1) 
     {
          sleep(1);
          printf("\nMy Turn!");
     }
}

//folloing fuction prints "Your Turn!" after every two seconds
void yourTurn()
{
     while(1)
     {
          sleep(2);
          printf("\nYour Turn!");
     }
}

//In this manner only first method get called for infinite time.
//Second method never gets called
//Heance we need to create thread. Go to firstThread.c
int main()
{
     myTurn();
     yourTurn();
     return 0;
}
