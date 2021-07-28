
#include "closeness.h"

int main()
{
   int numRegions = 5;
   Graph reg(numRegions);
   reg.addEdge(0, 1);
   reg.addEdge(0, 4);
   reg.addEdge(1, 3);
   reg.addEdge(1, 4);
   reg.addEdge(1, 2);
   reg.addEdge(2, 3);
   reg.addEdge(3, 4);

   cout <<"It begins "<<endl;

int arr[numRegions];
  for(int i =0; i<numRegions; ++i){
  arr[i]= reg.breadthFirstSearch(i);
   cout<< endl<<endl<<arr[i];
  }

}
