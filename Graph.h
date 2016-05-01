#ifndef GRAPH_H
#define GRAPH_H
#include<vector>
#include<iostream>

struct vertex;

class Bag
{
public:
    Bag();
    ~Bag();
    void trade(std::string give, std::string recieve);
    void displayBag();
    void add(std::string item);
    bool search(std::string item);
private:
    std::vector<std::string> items;
};

struct adjVertex{
    vertex *v;
    std::string direction;
};

struct vertex{
    std::string name;
    bool visited;
    std::string direction;
    std::vector<adjVertex> adj;
};
/*Another approach to storing the shortest path is to store a vector of
 pointers to the vertices visited so far along the current path. You can
 use this struct queueVertex for that purpose. Truthfully, storing the parent
 for each vertex as mentioned above is probably easier.*/
struct queueVertex{
    std::string direction;
    std::vector<vertex *> path;
};
class Graph
{
    public:
        Graph();
        ~Graph();
        void addEdge(std::string v1, std::string v2, std::string direction);
        void addVertex(std::string name);
        void displayEdges(std::string location);

    protected:
    private:
        std::vector<vertex> vertices;
        vertex * findVertex(std::string name);
        //call this from within assignDistricts to label the districts.
        //This method should implement a breadth first traversal from the startingCity
        //and assign all cities encountered the distID value

};

#endif // GRAPH_H
