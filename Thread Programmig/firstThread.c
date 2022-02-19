#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


//folloing fuction prints "My Turn!" after every second
//Thread function accepts and return a void pointer
void* myTurn(void * arg)
{
     while(1) 
     {
          sleep(1);
          printf("\nMy Turn!");
     }
     return NULL;
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

int main()
{
     pthread_t newThread;
     pthread_create(&newThread,NULL,myTurn,NULL);
     //myTurn(); Instead of calling we pass it to thread_create so both the methods runs concurrently
     yourTurn();
     return 0;
}

// As in this program it runs infinetly + if use for condition insted of while with restriction even though it 
// will terminate bcz main it self ends before thread completes its execution.