#include <stdio.h>
#include <stdlib.h>
#include "Queue_ds.h"

Queue_t *my_Queue=NULL;
QueueStatus_t retval =  QUEUE_OK;
void * element_queued=NULL;
void * element_front=NULL;
void * element_rear=NULL;
uint32 var1 = 11;
uint32 var2 = 22;
uint32 var3 = 33;
uint32 var4 = 44;

int main()
{
   my_Queue =CreateQueue(3,&retval); printf("retval = %d \n",retval);
   retval=EnqueueElement(my_Queue,&var1); printf("retval = %d \n",retval);
   retval=EnqueueElement(my_Queue,&var2); printf("retval = %d \n",retval);
   retval=EnqueueElement(my_Queue,&var3); printf("retval = %d \n",retval);
  element_rear = QueueRear(my_Queue,&retval); printf("retval = %d \n",retval);
  printf("the element at rear is %d \n",*((uint32*)element_rear));
     element_queued = DequeueElement(my_Queue,&retval);printf("retval = %d \n",retval);
      printf("data taken : %d \n",*((uint32*)element_queued));
       element_rear = QueueRear(my_Queue,&retval); printf("retval = %d \n",retval);
  printf("the element at rear is %d \n",*((uint32*)element_rear));
     element_queued = DequeueElement(my_Queue,&retval);printf("retval = %d \n",retval);
      printf("data taken : %d \n",*((uint32*)element_queued));
       element_rear = QueueRear(my_Queue,&retval); printf("retval = %d \n",retval);
  printf("the element at rear is %d \n",*((uint32*)element_rear));
      element_queued = DequeueElement(my_Queue,&retval);printf("retval = %d \n",retval);
      printf("data taken : %d \n",*((uint32*)element_queued));
       element_rear = QueueRear(my_Queue,&retval); printf("retval = %d \n",retval);
  printf("the element at rear is %d \n",*((uint32*)element_rear));


   element_queued = DequeueElement(my_Queue,&retval);printf("retval = %d \n",retval);
    //printf("data taken : %d \n",*((uint32*)element_queued));

    return 0;
}
