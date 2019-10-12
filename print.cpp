 #include <bits/stdc++.h>

using namespace std;

#define type1 int
#define type2 int

#define equal(a,b) (fabsl(a-b) < EPS)
#define less(a,b) (a + EPS < b)
#define less_equal(a,b) (a <= b + EPS)
#define isZero(x) (equal(0.0L,x))
#define arcsin(x) (asin(min(max(x,-1.0L),1.0L)))
#define arccos(x) (acos(min(max(x,-1.0L),1.0L)))
#define root(x) (sqrtl(max(x,0.0L)))
#define trail0(x) (setprecision(x))
#define len2(p) (p.X * p.X + p.Y * p.Y) //uses a structure of x and y values, square of the length
#define len(p) (root(len2(p)))
#define dot(p,q) (p.X*q.X + p.Y*q.Y)
#define angle(p,q) (dot(p,q)/(len(p) * len(q)))
#define ortho(p,q) (isZero(dot(p,q)))
#define accute(p,q) (less(0.0L,dot(p,q)))
#define obtuse(p,q) (less(dot(p,q),0.0L))
#define det(p,q) (p.X * q.Y - p.Y * q.X)
#define collinear(p,q) (isZero(det(p,q)))
#define triArea(p,q) (det(p,q)/2.0L)


#include <bits/stdc++.h>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORD(i,a,b) for(int i=(a);i>(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
/////////////////////////////////////////////////////////////////////
int main()
{
    return 0;
}

 int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

type2 DFS(auto root, type2 graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(i+1,children_temp.begin(),children_temp.end());
    return -1
}

type2 BFS(auto root, type2 graph)
{
    vector < type1 > children;
    children = getchildren(graph,root,children);
    for(auto i = children.begin(); i<children.end();++i)
        if (goalCheck)
            return i;
        vector < type1 > children_temp = getchildren(graph,i,children);
        children.insert(children.end(),children_temp.begin(),children_temp.end());
    return -1
}

#define dMult(n,c) (n/gcd(c,n)) // number of distinct multiples of c modulo n
//only iff gcd(c,n) = 1, there are n different numbers modulo n

#define fameMod (7 + 1E9)
#define fameMod2 (9 + 1E3)
#define coPrime(a,b) (__gcd(a,b) == 1)
long long GCD (long long x, long long y)
{
    // return __gcd(x,y);
    if(x<y) swap(x,y);
    if(y<1)
        return x;
    return GCD(y,x%y);
}
vector <int> binary;
//reverse it before using
void int2bin(unsigned long long x)
{
    if(x<=1){
        binary.push_back(x);
        return;
    }
    binary.push_back(x%2);
    int2bin(x/2);
}

long long power(long long base,long long exp,long long modulo)
{
    if(!modulo || base < 0 || exp < 0)
        return -1;
    if(!exp)
        return 1;
    if(exp<=1)
        return base%modulo;
    if(!(exp%2))
        return power((base*base)%modulo,exp/2,modulo)%modulo;
    return (base * power((base*base)%modulo,(exp-1)/2,modulo))%modulo;
}

long long remMod(long long a,long long b,long long modulo)
{
    if(!modulo)
        return -1;
    a %= modulo;
    b %= modulo;
    return (long long)(a*pow(b,modulo-2)) % (long long)modulo;
}

pair <long long> diophantine(long long a, long long b, long long c)
{
    long long g = __gcd(a,b);
    if(!(g%c))
    {
        a /= g;
        b/= g;
        c/= g;
        return make_pair(-b/c,a/c)
    }
    return make_pair(0,0)
}

// The main function that finds shortest distances from src to 
// all other vertices using Bellman-Ford algorithm. The function 
// also detects negative weight cycle 
void BellmanFord(struct Graph* graph, int src) 
{ 
	int V = graph->V; 
	int E = graph->E; 
	int dist[V]; 

	// Step 1: Initialize distances from src to all other vertices 
	// as INFINITE 
	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX; 
	dist[src] = 0; 

	// Step 2: Relax all edges |V| - 1 times. A simple shortest 
	// path from src to any other vertex can have at-most |V| - 1 
	// edges 
	for (int i = 1; i <= V - 1; i++) { 
		for (int j = 0; j < E; j++) { 
			int u = graph->edge[j].src; 
			int v = graph->edge[j].dest; 
			int weight = graph->edge[j].weight; 
			if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) 
				dist[v] = dist[u] + weight; 
		} 
	} 

	// Step 3: check for negative-weight cycles. The above step 
	// guarantees shortest distances if graph doesn't contain 
	// negative weight cycle. If we get a shorter path, then there 
	// is a cycle. 
	for (int i = 0; i < E; i++) { 
		int u = graph->edge[i].src; 
		int v = graph->edge[i].dest; 
		int weight = graph->edge[i].weight; 
		if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) { 
			printf("Graph contains negative weight cycle"); 
			return; // If negative cycle is detected, simply return 
		} 
	} 

	printArr(dist, V); 

	return; 
}


// A utility function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
int minDistance(int dist[], bool sptSet[]) 
{ 
	// Initialize min value 
	int min = INT_MAX, min_index; 

	for (int v = 0; v < V; v++) 
		if (sptSet[v] == false && dist[v] <= min) 
			min = dist[v], min_index = v; 

	return min_index; 
} 

// A utility function to print the constructed distance array 
int printSolution(int dist[]) 
{ 
	printf("Vertex \t\t Distance from Source\n"); 
	for (int i = 0; i < V; i++) 
		printf("%d \t\t %d\n", i, dist[i]); 
} 

// Function that implements Dijkstra's single source shortest path algorithm 
// for a graph represented using adjacency matrix representation 
void dijkstra(int graph[V][V], int src) 
{ 
	int dist[V]; // The output array. dist[i] will hold the shortest 
	// distance from src to i 

	bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest 
	// path tree or shortest distance from src to i is finalized 

	// Initialize all distances as INFINITE and stpSet[] as false 
	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 

	// Distance of source vertex from itself is always 0 
	dist[src] = 0; 

	// Find shortest path for all vertices 
	for (int count = 0; count < V - 1; count++) { 
		// Pick the minimum distance vertex from the set of vertices not 
		// yet processed. u is always equal to src in the first iteration. 
		int u = minDistance(dist, sptSet); 

		// Mark the picked vertex as processed 
		sptSet[u] = true; 

		// Update dist value of the adjacent vertices of the picked vertex. 
		for (int v = 0; v < V; v++) 

			// Update dist[v] only if is not in sptSet, there is an edge from 
			// u to v, and total weight of path from src to v through u is 
			// smaller than current value of dist[v] 
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
				&& dist[u] + graph[u][v] < dist[v]) 
				dist[v] = dist[u] + graph[u][v]; 
	} 

	// print the constructed distance array 
	printSolution(dist); 
}





