#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Graph {
    private:
        unordered_map<string, unordered_set<string> > adjList;
    
    public:
        void printGraph() {
            for (auto [node, bridges] : adjList) {
                cout << node << ": [ ";
                for (auto bridge : bridges) {  
                    cout << bridge << " ";
                }
                cout << "]" << endl;
            }
        }

        bool addNode(string node) {
            if (adjList.count(node) == 0) {
                adjList[node];
                return true;
            }
            return false;
        }

        bool addBridge(string node1, string node2) {
            if (adjList.count(node1) != 0 && adjList.count(node2) != 0) {
                adjList.at(node1).insert(node2);
                adjList.at(node2).insert(node1);
                return true;
            }         
            return false;  
            
        }

};



int main() {

    Graph* myGraph = new Graph();

    myGraph->addNode("A");
    myGraph->addNode("B");

    myGraph->addBridge("A", "B");

    myGraph->printGraph();
      
}

