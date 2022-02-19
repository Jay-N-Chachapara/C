#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


//folloing fuction prints "My Turn!" after every second
//Thread function accepts and return a void pointer
void * myTurn(void * arg)
{
     int i = 0;
     for(i=0;i<10;i++)
     {
          sleep(1);
          printf("\nMy Turn! %d",i+1);
     }
     return NULL;
}

//folloing fuction prints "Your Turn!" after every two seconds
void yourTurn()
{
     int i=0;
     for(i=0;i<3;i++)
     {
          sleep(2);
          printf("\nYour Turn! %d",i+1);
     }
}

int main()
{
     pthread_t newThread;
     pthread_create(&newThread,NULL,myTurn,NULL);
     //myTurn(); Instead of calling we pass it to thread_create so both the methods runs concurrently
     yourTurn();
     //If do not use pthread_join(&threadVar,NULL); then main finish before thread; Thats's why pthread_join()
     pthread_join(newThread, NULL);
     return 0;
}
