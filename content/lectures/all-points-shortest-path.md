+++
title = "All Points Shortest Path"
author = ["Mattox Beckman"]
date = 2023-02-20
draft = false
weight = 2
math = true
+++

## Slides {#slides}

The Floyd-Warshall algorithm is a dynamic programming technique used in
competitive programming to find the shortest paths between all pairs of
vertices in a weighted, directed graph. Unlike Dijkstra's and Bellman-Ford's
algorithms, which focus on single-source shortest paths, Floyd-Warshall
efficiently computes the shortest paths for every vertex pair simultaneously.
Due to its $O(V^3)$ time complexity, it's best suited for graphs with a
relatively small number of vertices, typically when $ V \leq 400 $ in most
competitive scenarios.

-   [Floyd Warshall](/slides/floyd-warshall.pdf)
