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
                // for (auto edge : edges)
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

};


int main() {

    Graph* myGraph = new Graph();

    myGraph->addNode("A");
 
    myGraph->printGraph();
       
}