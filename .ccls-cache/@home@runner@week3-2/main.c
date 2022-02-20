#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"
#include "queue.h"


int main() 
{
  int status,i;
  
   TREENODE_T* N[11];

     ///Bring data to node
  
   N[1] = newNodeCreate(3);
   N[2] = newNodeCreate(5);
   N[3] = newNodeCreate(8);
   N[4] = newNodeCreate(7);
   N[5] = newNodeCreate(9);
   N[6] = newNodeCreate(10);
   N[7] = newNodeCreate(1);
   N[8] = newNodeCreate(2);
   N[9] = newNodeCreate(4);
   N[10] = newNodeCreate(6);

    // connect the nodes together
  
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
   


   
   printf("*****breadth first search***** ");
   TREENODE_T* root3 = N[1];
   breadthSearch(root3);

    //Release all memory
  for(i=0;i<=11;i++){
    
   free(N[i]);
  }
  

  
    return 0;
}