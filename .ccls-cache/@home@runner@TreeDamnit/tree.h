#ifndef tree_H
#define tree_H


typedef struct _treenode
{
    int data;
    
    struct _treenode* left;
    struct _treenode* right;
} TREENODE_T;
#include"queue.h"

// Create a new tree node and bring the data into each node
// Return pointer to the tree structure if successful
//   or NULL if the tree can't be created 
//          e.g. memory allocation error 
  
TREENODE_T* newNodeCreate(int item);

// Connect the nodes together by Tree traversal
//   Return 1 if connect successful
//   Return 0 if connect fell

int setChildNode(TREENODE_T* parent, TREENODE_T* child, char direction);


// Postorder is type of Tree traversal
// The format is  LT - RT - R

void postOrder (TREENODE_T* node);


// Preoderis type of Tree traversal
// The format is R - LT - RT

  

void preOder (TREENODE_T* node);

// Inorder type of Tree traversal
// The format is R - LT - RT



void inOrder (TREENODE_T* node);
 

// Bring the data stored in the tree node to the 
// Queue using Command queueEnqueue ,then bring Qut the data to output and move the node by QueueDequeue
//Return -1 if can't sort;
//Return  1 if successful

int breadthSearch (TREENODE_T* node );
 

#endif