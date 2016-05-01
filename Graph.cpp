#include "Graph.h"
#include <iostream>
#include <vector>
using namespace std;

Graph::Graph()
{
    //ctor
    string locals[]={"village","blacksmith","resturant","witch","woods","bridge","mountain","dragonLair"};
    for(int i=0;i<8;i++){
        addVertex(locals[i]);
    }
    /*string adjVillage={"0 north east south x x x x"};
    string adjBlacksmith={"south 0 x x east x x x"};
    string adjResturant={"west x 0 x north south east x"};
    string adjWitch={"north x x 0 x east x x"};
    string adjWoods={"x west south x 0 x southeast x"};
    string adjBridge={"0 north east south x x x x"};
    string adjMountain={"0 north east south x x 0 north"};
    string adjDragonLair={"x x x x x x south 0"};*/
    addEdge("village","blacksmith","north");
    addEdge("village","resturant","east");
    addEdge("village","witch","south");
    addEdge("blacksmith","village","south");
    addEdge("blacksmith","woods","east");
    addEdge("resturant","village","west");
    addEdge("resturant","woods","north");
    addEdge("resturant","bridge","south");
    addEdge("resturant","mountain","east");
    addEdge("witch","village","north");
    addEdge("witch","bridge","east");
    addEdge("woods","blacksmith","west");
    addEdge("woods","resturant","south");
    addEdge("woods","mountain","southeast");
    addEdge("bridge","resturant","north");
    addEdge("bridge","witch","west");
    addEdge("mountain","resturant","west");
    addEdge("mountain","woods","northwest");
    addEdge("mountain","dragonLair","north");
    addEdge("dragonLair","mountain","south");
}

Graph::~Graph()
{
    //dtor
}

Bag::Bag()
{
    //ctor
}

Bag::~Bag()
{
    //dtor
}

void Graph::addEdge(string v1, string v2, string direction){
    for(int i=0;i<8;i++){
        if(vertices[i].name==v1){
            for(int j=0;j<8;j++){
                if(vertices[j].name==v2){
                    adjVertex *add=new adjVertex;
                    add->v=&vertices[j];
                    add->direction=direction;
                    vertices[i].adj.push_back(*add);
                    return;
                }
            }
        }
    }
}
void Graph::addVertex(string name){
    vertex *add=new vertex;
    add->name=name;
    add->visited=false;
    vertices.push_back(*add);
}
void Graph::displayEdges(string location){
    for(int i=0;i<8;i++){
        if(vertices[i].name==location){
            for(int j=0;j<vertices[i].adj.size();j++){
                cout<<vertices[i].adj[j].v->name<<" to the "<<vertices[i].adj[j].direction<<endl;
            }
        }
    }
}

void Bag::trade(string give,string recieve){
    for(int i=0;i<items.size();i++){
        if(items[i]==give){
            cout<<items[i]<<" has been removed from your bag"<<endl;
            items.erase(items.begin()+i);
            add(recieve);
        }
    }
}

void Bag::displayBag(){
    if(items.size()==0){
        cout<<"Your bag is completely empty. Not even lint"<<endl;
    }
    else{
        cout<<"You have: "<<endl;
        for(int i=0;i<items.size();i++){
            cout<<"a "<<items[i]<<endl;
        }
        cout<<"in your bag"<<endl;
    }
}

void Bag::add(string item){
    items.push_back(item);
    cout<<item<<" has been added to your bad"<<endl;
}
bool Bag::search(string item){
    for(int i=0;i<items.size();i++){
        if(items[i]==item){
            return true;
        }
    }
    return false;
}
