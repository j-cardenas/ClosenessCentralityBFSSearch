#include "closeness.h"

using namespace std;


//constructor
Graph::Graph(int r)
{
   totalRegions = r; //number of regions
   adjList.resize(totalRegions); //resizing adjecency list
   for (int i = 0; i < totalRegions; i++)
   {
       region.push_back( structRegion(i) );
   }
}


void Graph::addEdge(int src, int dest)
{
  //undirected graph
   adjList[src].push_back(dest);
   adjList[dest].push_back(src);
}

int Graph::breadthFirstSearch(int s)
{
  int totalDistance =0; 
   region[s].visitation = FOUND; //automatically finds s
   region[s].distance = 0;
   queue<structRegion> q;
   q.push(region[s]);
   while (!q.empty())
   {
      auto u = q.front();
      q.pop();
      for (const auto& v : adjList[u.id])
      {
         if (region[v].visitation == NOTVISITED)
         {
            region[v].visitation = FOUND;
            region[v].distance = u.distance + 1; //Increments distance by each edge
            q.push(region[v]);
         }
      }
      u.visitation = VISITED;
      //cout << region[u.id].id << " at level " << region[u.id].distance <<'\n';
      //Calculates total distance
      totalDistance = totalDistance + region[u.id].distance;
    
   }
   cout << "Total Distance for ["<<s<<"]: " <<totalDistance;
   
   //resetting all nodes back to NOTVISITED to run program again
   for(int i =0; i<5; ++i){
   region[i].visitation = NOTVISITED;
   
  }
  return totalDistance;

}