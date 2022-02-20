#include "tree.h"
#include <stdlib.h>
#include <stdio.h> 
#include "queue.h"

/* Create a new queue with the specify capacity
 * Return pointer to the queue structure if successful
 *        or NULL if the queue can't be created 
 *        e.g. memory allocation error  
 */
TREENODE_T* newNodeCreate(void* item)
{
    TREENODE_T* tree = (TREENODE_T*) calloc(1, sizeof(TREENODE_T));
    if (tree == NULL)
    {
        return NULL;
    }
    tree->data = (void**) calloc(1, sizeof(void*));
    tree->data = item;
    tree->left = NULL;
    tree->right = NULL;
    
    return tree;
}

int setChildNode (TREENODE_T* parent,
  TREENODE_T* child, char direction)
{
      int success = 1;
      //check null node or other conditions?
      if (direction == 'L'){
      parent->left = child;
      }
      else if (direction == 'R'){
      parent->right = child;
      }
      else{
      success = 0;
      }
      return success;
}

void postOrder (TREENODE_T* node){
  if (node->left != NULL)
  postOrder(node->left);
  if (node->right != NULL)
  postOrder(node->right);
  printf("access %d \n", *(int*)node->data);
}

void preOder (TREENODE_T* node){
  printf("access %d \n", *(int*)node->data);
  if (node->left != NULL)
  preOder(node->left);
  if (node->right != NULL)
  preOder(node->right);

}

void inOrder (TREENODE_T* node){
  
  if (node->left != NULL)
  inOrder(node->left);
  printf("access %d \n", *(int*)node->data);
  if (node->right != NULL)
  inOrder(node->right);

}



void breadthSearch (TREENODE_T* node )
{
  int count=0;
  
   printf("hello");
   printf("\n");
    QUEUE_T* queue =  queueCreate(10); 
  
  int sole1,sole2;
  void* ans ;
  while(node!=NULL)
  {
  
  printf("access %d \n", *(int*)node->data);
  if (node->left != NULL){
   sole1 = queueEnqueue(queue, node->left);
   
  }
  else if (node->right!=NULL){
   sole1 = queueEnqueue(queue, node->right);
   
  }

  

  sole2 = queueDequeue(queue, node);
  
  
  
  // printf("Engueue = %d",sole1);
  // printf("\n");
  // printf("Dequeue = %d",sole2);
  // printf("\n"); 
  // // printf("ans = %d",*(int*)ans);
  
 
}

}
