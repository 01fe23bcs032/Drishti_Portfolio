## CHITRANAGARI : SMART CITY DESIGN 

## Business Cases identified by Drishti R N (01FE23BCS032)

1. **POPULATION DENSITY AND DATA**👨‍👩‍👧‍👦
      - Since CHITRANAGARI is known to draw inspiration from a culturally and tourism-rich city in Rajasthan(referring to Jaipur), its population density reflects a vibrant mix of local residents, also affecting the vicinity of all the areas and a dynamic influx of visitors, creating a unique geographic and economic profile.
      - To effectively manage Chitranagari's unique geographic and economic profile, strategic urban planning is essential. This would mainly include the proper management of population as it is still a growing city in terms of population.

2. **WATER SUPPLY AND MANAGEMENT**🌦️
    - Located in Rajasthan, Chitranagari is a victim of extreme weather conditions that significantly influence water availability. The region experiences scorching summers, leading to high evaporation rates and increased water demand. Winters, though milder, see limited rainfall. 
     - Water availability is naturally constrained due to the desert landscape, with limited surface water bodies and declining groundwater levels. Compared to other states, Rajasthan's overall water resources are significantly lower, making water a precious commodity.  
-In Chitranagari, ensuring sufficient water supply is critical to support its growing population, vibrant tourism sector, and the overall quality of life for residents. 


3. **TRAFFIC DATA AND MANAGEMENT**🚦
      - Chitranagari, surrounded by a desert landscape, faces unique challenges in maintaining road infrastructure. The harsh climatic conditions, including occasional sandstorms, can degrade road surfaces over time which not only impact quality of roads but also contribute to traffic congestion.
      - To accommodate the increasing population and ensure smooth transport, a systematic traffic management approach is crucial. Proper planning of road networks, allocation of dedicated lanes, and efficient traffic flow systems will be essential to decrease congestion.



## COURSE LEARNING REFLECTIONS 
---
 ### 1. Iteration, Recursion, and Backtracking  
- In nature , we come across many kinds of problems that could be solved using algorithm techniques that includes iteration , recursion , backtracking.

#### **Iteration**  
- Iteration involves repeating a task multiple times in a process. 
- For example, spiral arrangements of petals in flower or arranging Matryoshka dolls involves repeating the same action—forming a flower or nesting the dolls—until there isno more space left or dolls to handle.

#### **Recursion**  
- Recursion involves solving a problem by breaking it down into smaller groups of the same problem.  
- For instance, cell division process and food chain also involves recurssion 

#### **Backtracking**  
- Backtracking explores multiple possibilities, retracing steps when a chosen path doesnt leads to a desired result.  
- Examples include solving Sudoku puzzles or tackling the N-Queens problem. In these situations, the process involves trial and error, testing one path at a time and reverting to earlier steps when necessary.

---

### 2. Space and Time Efficiency & Orders of Growth  

#### **Space Efficiency**  
This refers to the additional memory required by an algorithm during execution.  

#### **Time Efficiency**  
This measures how long an algorithm takes to complete a task. Both metrics help evaluate how practical and efficient an algorithm is for a specific problem.  

#### **Orders of Growth**  
This describes how an algorithm’s execution time scales with input size.  
The growth can be constant, logarithmic, linear, quadratic, or cubic, depending on how input size impacts performance.

---

### 3. Design Principles  

- Different design principles are developed to optimize problems, and selecting the right principle for a given problem is essential for efficiency.  
For example:  
- **Pruning** is ideal for solving the N-Queens problem, but **Parental Dominance** would not be suitable.  
- **Bit Manipulation** is used in Fenwick Trees, whereas **Edge Relaxation** is applied in spanning trees.  

- Applying the wrong principle complicates the problem rather than simplifying it, underscoring the importance of matching the design principle to the problem.

---

### 4. Tree Data Structures  

Tree structures are designed for hierarchical data organization. Where elements (nodes) are connected by edges. A tree starts from a root node and branches out into child nodes, with no cycles. 
- **Balanced Trees** (AVL, Red-Black, 2-3 trees): Useful for maintaining balance through rotations, enabling faster search, insertion, and deletion operations with a time complexity of \( O(\log n) \).  
- **Trie**: Ideal for managing character data like dictionaries or prefixes.  
- **Heap**: Must satisfy the tree shape and parental dominance properties.

---

### 5. Array Query Algorithms  

- Array query algorithms are effective for small and static datasets, such as finding the sum, minimum, maximum, or other properties over a range of indices.
- These algorithms leverage **pre-computation** by storing previously calculated results to avoid redundant calculations.  
- Structures like Segment Trees,Sparse Tables and Fenwick Trees use this principle, making them efficient for array queries.

---
### 6. Difference between trees and graphs 
- **Trees** are hierarchical data structures with n nodes and n−1 edges, where each node has a single root to node path, making them acyclic. Traversals include Inorder, Preorder, and Postorder.
- DFS and BFS are also used in tree traversals.
  
- **Graphs** on the other hand, are generalized structures where nodes(vertices) connect through edges, which can form cycles and can be directed or undirected.
- Its applications include navigation systems and other network purposes.

---
### 7. Sorting and Searching algorithms 
- Sorting algorithms organize data for efficient access and manipulation.
- They include sorting techniques like Quick sort, Merge sort, Bubble Sort and Insertion sort.
 
- Searching algorithms locate data within structures.
- They include searching techniques like
   - **Rabin-Karp**
   - **Knuth-Morris-Pratt**
   - **Boyer-Moore**

---
### 8. Graph algorithms
Graph algorithms solve essential problems in connectivity and optimization.
- Spanning tree uses various algorithms to find the shortest path between source to destination.
- **Kruskal** finds the shortest path by visiting all nodes.
- **Dijkstra** uses cost matrix to find the shortest path but need not visit all the nodes.
- **Warshall** shows if there is a path from one node to other.
- **Floyd** shows if there is a shortest path from one node to other.
- **Bellman-Ford** can find path with negative weight cycles also which was not available in Dijkstra.

---
## RELATED SDG'S, TARGET AND INDICATOR TO BUISNESS CASES 
1. **POPULATION DENSITY AND DATA**
   - **Goal-11** : Sustainable Cities and Communities
Sustainable traffic systems promote urban accessibility, reduce congestion, and improve public transport.
   - **
  
2. **Water Supply and Management**
   - **SDG Goal-6** : Clean Water and Sanitation
Ensures the availability and sustainable management of water for all.
   - **SDG Target 6.4** : By 2030, substantially increase water-use efficiency across all sectors and ensure sustainable withdrawals and supply of freshwater to address water scarcity and substantially reduce the number of people suffering from water scarcity.

- **SDG Indicator**: - **Indicator 6.4.1**: Change in water-use efficiency over time.
- **Indicator 6.4.2**: Level of water stress: freshwater withdrawal as a proportion of available freshwater resources.

