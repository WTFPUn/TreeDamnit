#include "queue.h"
#include <stdlib.h>

/* Create a new queue with the specify capacity
 * Return pointer to the queue structure if successful
 *        or NULL if the queue can't be created 
 *        e.g. memory allocation error  
 */
QUEUE_T* queueCreate(int capacity)
{
    QUEUE_T* queue = (QUEUE_T*) calloc(1, sizeof(QUEUE_T));
    if (queue == NULL)
    {
        return NULL;
    }
    queue->data = (void**) calloc(capacity, sizeof(void*));
    if (queue->data == NULL)
    {
        return NULL;
    }
    queue->headIndex = 0;
    queue->tailIndex = -1;
    queue->count = 0;
    queue->maxCapacity = capacity;
    return queue;
}

/* Destroy the queue and release all memory
 */
void queueDestroy(QUEUE_T* queue)
{
}

/* Returns the number of elements (could be zero)
 * or -1 if the queue has not been created
 */
int queueSize(QUEUE_T* queue)
{
}

/* Add new element to the queue
 * Return -1 if the queue hasn't been created
 *        -2 if the queue is full 
 *         1 if the operation is successful
 */
int queueEnqueue(QUEUE_T* queue, void* data)
{
}

/* Remove an element from the queue
 * Return -1 if the queue hasn't been created
 *        -2 if the queue is empty 
 *         1 if the operation is successful
 */
int queueDequeue(QUEUE_T* queue, void** data)
{
}