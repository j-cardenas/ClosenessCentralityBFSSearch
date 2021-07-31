
#include "closeness.h"

int main()
{
   int numRegions = 9;
   Graph reg(numRegions);
   reg.addEdge((1-1), (4-1));
   reg.addEdge((1-1), (5-1));
   reg.addEdge((2-1), (3-1));
   reg.addEdge((2-1), (9-1));
   reg.addEdge((3-1), (2-1));
   reg.addEdge((3-1), (8-1));
   reg.addEdge((4-1), (1-1));
   reg.addEdge((4-1), (7-1));
   reg.addEdge((5-1), (1-1));
   reg.addEdge((5-1), (8-1));
   reg.addEdge((6-1), (7-1));
   reg.addEdge((6-1), (9-1));
   reg.addEdge((7-1), (4-1));
   reg.addEdge((7-1), (6-1));
   reg.addEdge((8-1), (3-1));
   reg.addEdge((8-1), (5-1));
   reg.addEdge((9-1), (2-1));
   reg.addEdge((9-1), (6-1));
   




   cout <<"It begins "<<endl;
pair <int, int> p[numRegions];
/*
int arr[numRegions];
double inverse[numRegions];
int min;
int y=0;
int temp;
*/


  for(int i =0; i<numRegions; ++i){
  p[i].first = i;
  p[i].second = reg.breadthFirstSearch(i);
  }



  

/*for(int i=0;i<numRegions;i++)
	{		
		for(int j=i+1;j<numRegions;j++)
		{

      if (arr[i]==arr[j])
      {
        
      }
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

  for(int i=0;i<numRegions;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	

  cout << "Order :"<<endl;
  for(int i =0; i<numRegions; ++i){
 
 

  }
 */


}


