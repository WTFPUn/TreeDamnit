#include "tree.h"
#include <stdlib.h>
#include <stdio.h> 
#include "queue.h"

/* Create a new Tree node with the specify capacity
* Return pointer to the Tree structure if successful
*        or NULL if the Tree can't be created 
*        e.g. memory allocation error  
*/
TREENODE_T* newNodeCreate(int item)
{
    TREENODE_T* tree = (TREENODE_T*) calloc(1, sizeof(TREENODE_T));
    if (tree == NULL)
        return NULL;
    tree->data = item;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}



/* onnect the nodes together by Tree traversal
*    Return 1 if connect successful
*    Return 0 if connect fail 
*/
int setChildNode (TREENODE_T* parent, TREENODE_T* child, char direction) {
  int success = 1;

  if (direction == 'L')
    parent->left = child;
  else if (direction == 'R')
    parent->right = child;
  else
    success = 0;
  return success;
}

/* Just Damn postOrder function
*    Didn't return something and the format is LT-RT- R
*/
void postOrder (TREENODE_T* node){
 
  if (node->left != NULL)
    postOrder(node->left);
  if (node->right != NULL)
    postOrder(node->right);
  printf("Access: %d \n", node->data);
 
}

/* Like postOrder but it a preOrder
 *    Didn't return something and the format is R-LT-RT
 */
void preOder (TREENODE_T* node){
  printf("Access: %d \n", node->data);
  if (node->left != NULL)
    preOder(node->left);
  if (node->right != NULL)
    preOder(node->right);

}

// Inorder type of Tree traversal
// The format is R - LT - RT

/* InOrder function 
 *    Didn't return something and the format is R-LT-RT
 */
void inOrder (TREENODE_T* node) {

  if (node->left != NULL)
    inOrder(node->left);
  printf("Access: %d \n", node->data);
  if (node->right != NULL)
    inOrder(node->right);

}

// Bring the data stored in the tree node to the 
// Queue using Command queueEnqueue ,then bring Qut the data to output and move the node by QueueDequeue
// Return -1 if can't sort;
// Return  1 if successful
int breadthSearch(TREENODE_T* node ) {
  int count=0;
  if(node == NULL)
    return -1;
  printf("\n");
  
  QUEUE_T* queue =  queueCreate(10); 
  TREENODE_T* temptree;

  queueEnqueue(queue, node);
  while(queue->count != 0) {
    printf("Access: %d\n", queue->data[queue->headIndex]->data);
    if(queue->data[queue->headIndex]->left != NULL)
      queueEnqueue(queue, queue->data[queue->headIndex]->left);
    if(queue->data[queue->headIndex]->right != NULL)
      queueEnqueue(queue, queue->data[queue->headIndex]->right);
    queueDequeue(queue, temptree);
  }
    //Release all memory
   queueDestroy(queue);
  return 1;
}