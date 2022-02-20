#ifndef tree_H
#define tree_H


typedef struct _treenode
{
    void** data;
    
    struct _treenode*left;
    struct _treenode*right;
} TREENODE_T;
#include"queue.h"

// /* Create a new queue with the specify capacity
//  * Return pointer to the queue structure if successful
//  *        or NULL if the queue can't be created 
//  *        e.g. memory allocation error  
//  */
 TREENODE_T* newNodeCreate(void* item);



 int setChildNode(TREENODE_T* parent,
  TREENODE_T* child, char direction);


 void postOrder (TREENODE_T* node);


 void preOder (TREENODE_T* node);


 void inOrder (TREENODE_T* node);
 

void breadthSearch (TREENODE_T* node );
 

#endif