# Implementation of Tarjan's Algorithm

A directed graph is strongly connected if there is a path between all pairs of vertices. A strongly connected component (SCC) of a directed graph is a maximal strongly connected subgraph. For example, there are 3 SCCs in the following graph.

Tarjan Algorithm is based on following facts: 
1. DFS search produces a DFS tree/forest 
2. Strongly Connected Components form subtrees of the DFS tree. 
3. If we can find the head of such subtrees, we can print/store all the nodes in that subtree (including head) and that will be one SCC. 
4. There is no back edge from one SCC to another (There can be cross edges, but cross edges will not be used while processing the graph).