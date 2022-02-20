#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"
#include "queue.h"



int main() 
{
  int status,i;
  
   TREENODE_T* N[20];
  
   N[1] = newNodeCreate(9);
   N[2] = newNodeCreate(6);
   N[3] = newNodeCreate(10);
   N[4] = newNodeCreate(2);
   N[5] = newNodeCreate(5);
   N[6] = newNodeCreate(8);
   N[7] = newNodeCreate(14);
   N[8] = newNodeCreate(4);
   N[9] = newNodeCreate(12);
   N[10] = newNodeCreate(15);


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

//  for(i=1;i<=4;i++){
// //   free(N[i]->left);
// //   free(N[i]->right);
//    free(N[i]);
//  }
  // printf("\n");
  // testing(20);
   
  


   TREENODE_T* root3 = N[1];
   breadthSearch(root3);



    return 0;
}