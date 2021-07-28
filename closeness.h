#ifndef CLOSENESSH
#define CLOSENESSH


#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <limits>

using namespace std;


class Graph
{
  int totalRegions;
  enum Status {NOTVISITED, FOUND, VISITED};

  struct structRegion
  {
     int id;
     int distance;
     Status visitation;

     structRegion(int _id) : id(_id),
                       visitation(Status::NOTVISITED),
                       distance(0)
                       {}
  };

 public:

  vector<structRegion> region;
  vector< list<int> > adjList;

  Graph(int);
  void addEdge(int, int);
  int breadthFirstSearch(int);
};


#endif