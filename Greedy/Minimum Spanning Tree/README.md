<h1>What is Spanning Tree?</h1>
Given a connected and undirected graph, a spanning tree of that graph is a subgraph that is a tree and connects all the vertices together. 
<br>
<h1>What is Minimum Spanning Tree?</h1>
A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree.
<br>
<h2>Kruskal's MST</h2>
Below are the steps for finding MST using Kruskal’s algorithm
<br>
<br>
1. Sort all the edges in non-decreasing order of their weight.<br> 
2. Pick the smallest edge. Check if it forms a cycle with the spanning tree formed so far. If cycle is not formed, include this edge. Else, discard it.<br>
3. Repeat step#2 until there are (V-1) edges in the spanning tree.<br>
