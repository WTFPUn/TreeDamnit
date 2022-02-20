#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"
#include "queue.h"



int* allocateHeapInt(int value)
{
    int* data = (int*) calloc(1, sizeof(int));
    *data = value;
    return data;
}



int main() 
{
  int status,i;
  
   TREENODE_T* N[20];
  
   N[1] = newNodeCreate(allocateHeapInt(9));
   N[2] = newNodeCreate(allocateHeapInt(6));
   N[3] = newNodeCreate(allocateHeapInt(10));
   N[4] = newNodeCreate(allocateHeapInt(2));
   N[5] = newNodeCreate(allocateHeapInt(5));
   N[6] = newNodeCreate(allocateHeapInt(8));
   N[7] = newNodeCreate(allocateHeapInt(14));
   N[8] = newNodeCreate(allocateHeapInt(4));
   N[9] = newNodeCreate(allocateHeapInt(12));
   N[10] = newNodeCreate(allocateHeapInt(15));


status = setChildNode (N[1], N[2], 'L');
status = setChildNode (N[1], N[3], 'R');
status = setChildNode (N[2], N[4], 'L');
status = setChildNode (N[2], N[5], 'R');
status = setChildNode (N[3], N[6], 'L');
status = setChildNode (N[3], N[7], 'R');
status = setChildNode (N[5], N[8], 'L');
status = setChildNode (N[7], N[9], 'L');
status = setChildNode (N[7], N[10], 'R');

   printf("*****postOrder*****\n");
   TREENODE_T* root = N[1];
   postOrder(root);
   printf("\n");

   printf("*****preOder*****\n");
   TREENODE_T* root1 = N[1];
   preOder(root1);
   printf("\n");

   printf("*****inOrder*****\n");
   TREENODE_T* root2 = N[1];
   inOrder(root2);
   printf("\n");

//  for(i=1;i<=4;i++){
// //   free(N[i]->left);
// //   free(N[i]->right);
//    free(N[i]);
//  }
  // printf("\n");
  // testing(20);
   
  

   printf("*****breadth first search***** ");
   TREENODE_T* root3 = N[1];
   breadthSearch(root3);



    return 0;
}