# Shortest-Path-Finder
This project implements Dijkstra's Algorithm to find the shortest path in a graph. The graph is represented as an adjacency matrix, and the algorithm computes the shortest path from the source node to all other nodes in the graph. The project is implemented in C++.
Input:
Users can input a 4*4 adjacency matrix representing the graph, where each value indicates the weight of the edge between two vertices (0 indicates no direct edge).

Dijkstra's Algorithm:
The algorithm uses a greedy approach to find the shortest path from the source node to all other nodes.

Shortest Path Output:
The program outputs the shortest path from the source (vertex 0) to all other vertices, along with the total weight of the path.

How It Works
The function dijkstra() calculates the shortest path using a priority queue-like structure to select the vertex with the minimum value that hasn't been processed yet.
After calculating the shortest paths, the results are printed, showing the path from the source vertex to each vertex and the corresponding weights.

![image](https://github.com/user-attachments/assets/1e75b848-48a7-4112-97ac-ffd830fb37bf)

