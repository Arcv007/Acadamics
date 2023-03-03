#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
struct queue {
int items[SIZE];
int front;
int rear;
};
struct queue* createQueue();
void enqueue(struct queue* q, int);
int dequeue(struct queue* q);
void display(struct queue* q);
int isEmpty(struct queue* q);
void printQueue(struct queue* q);
struct node {
int vertex;
struct node* next;
};
struct node* createNode(int);
struct Graph {
int numVertices;
struct node** adjLists;
int* visited;
};
// BFS algorithm
void bfs(struct Graph* graph, int startVertex) {
struct queue* q = createQueue();
graph->visited[startVertex] = 1;
enqueue(q, startVertex);
while (!isEmpty(q)) {
printQueue(q);
int currentVertex = dequeue(q);
printf("Visited %d\n", currentVertex);
struct node* temp = graph->adjLists[currentVertex];
while (temp) {
int adjVertex = temp->vertex;
if (graph->visited[adjVertex] == 0) {
graph->visited[adjVertex] = 1;
enqueue(q, adjVertex);
}
temp = temp->next;
}
}
}
// Creating a node
struct node* createNode(int v) {
struct node* newNode = malloc(sizeof(struct node));
newNode->vertex = v;
newNode->next = NULL;
return newNode;
}
// Creating a graph
struct Graph* createGraph(int vertices) {
struct Graph* graph = malloc(sizeof(struct Graph));
graph->numVertices = vertices;
graph->adjLists = malloc(vertices * sizeof(struct node*));
graph->visited = malloc(vertices * sizeof(int));
int i;
for (i = 0; i < vertices; i++) {
graph->adjLists[i] = NULL;
graph->visited[i] = 0;
}
return graph;
}
// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
// Add edge from src to dest
struct node* newNode = createNode(dest);
newNode->next = graph->adjLists[src];
graph->adjLists[src] = newNode;
// Add edge from dest to src
newNode = createNode(src);
newNode->next = graph->adjLists[dest];
graph->adjLists[dest] = newNode;
}
// Create a queue
struct queue* createQueue() {
struct queue* q = malloc(sizeof(struct queue));
q->front = -1;
q->rear = -1;
return q;
}
// Check if the queue is empty
int isEmpty(struct queue* q) {
if (q->rear == -1)
return 1;
else
return 0;
}
// Adding elements into queue
void enqueue(struct queue* q, int value) {
if (q->rear == SIZE - 1)
printf("\nQueue is Full!!");
else {
if (q->front == -1)
q->front = 0;
q->rear++;
q->items[q->rear] = value;
}
}
// Removing elements from queue
int dequeue(struct queue* q) {
int item;
if (isEmpty(q)) {
printf("Queue is empty");
item = -1;
} else {
item = q->items[q->front];
q->front++;
if (q->front > q->rear) {
printf("Resetting queue ");
q->front = q->rear = -1;
}
}
return item;
}
// Print the queue
void printQueue(struct queue* q) {
int i = q->front;
if (isEmpty(q)) {
printf("Queue is empty");
} else {
printf("\nQueue contains \n");
for (i = q->front; i < q->rear + 1; i++) {
printf("%d ", q->items[i]);
}
}
}
int main() {
struct Graph* graph = createGraph(6);
addEdge(graph, 0, 1);
addEdge(graph, 0, 2);
addEdge(graph, 1, 2);
addEdge(graph, 1, 4);
addEdge(graph, 1, 3);
addEdge(graph, 2, 4);
addEdge(graph, 3, 4);
bfs(graph, 0);
return 0;
}
// DFS algorithm in C
#include <stdio.h>
#include <stdlib.h>
struct node {
int vertex;
struct node* next;
};
struct node* createNode(int v);
struct Graph {
int numVertices;
int* visited;
struct node** adjLists;
};
// DFS algo
void DFS(struct Graph* graph, int vertex) {
struct node* adjList = graph->adjLists[vertex];
struct node* temp = adjList;
graph->visited[vertex] = 1;
printf("Visited %d \n", vertex);
while (temp != NULL) {
int connectedVertex = temp->vertex;
if (graph->visited[connectedVertex] == 0) {
DFS(graph, connectedVertex);
}
temp = temp->next;
}
}
// Create a node
struct node* createNode(int v) {
struct node* newNode = malloc(sizeof(struct node));
newNode->vertex = v;
newNode->next = NULL;
return newNode;
}
// Create graph
struct Graph* createGraph(int vertices) {
struct Graph* graph = malloc(sizeof(struct Graph));
graph->numVertices = vertices;
graph->adjLists = malloc(vertices * sizeof(struct node*));
graph->visited = malloc(vertices * sizeof(int));
int i;
for (i = 0; i < vertices; i++) {
graph->adjLists[i] = NULL;
graph->visited[i] = 0;
}
return graph;
}
// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
// Add edge from src to dest
struct node* newNode = createNode(dest);
newNode->next = graph->adjLists[src];
graph->adjLists[src] = newNode;
// Add edge from dest to src
newNode = createNode(src);
newNode->next = graph->adjLists[dest];
graph->adjLists[dest] = newNode;
}
// Print the graph
void printGraph(struct Graph* graph) {
int v;
for (v = 0; v < graph->numVertices; v++) {
struct node* temp = graph->adjLists[v];
printf("\n Adjacency list of vertex %d\n ", v);
while (temp) {
printf("%d -> ", temp->vertex);
temp = temp->next;
}
printf("\n");
}
}
int main() {
struct Graph* graph = createGraph(4);
addEdge(graph, 0, 1);
addEdge(graph, 0, 2);
addEdge(graph, 1, 2);
addEdge(graph, 2, 3);
printGraph(graph);
DFS(graph, 2);
return 0;
}
// Prim's Algorithm in C
#include<stdio.h>
#include<stdbool.h>
#define INF 9999999
#define V 5
int G[V][V] = {
{0, 9, 75, 0, 0}, {9, 0, 95, 19, 42}, {75, 95, 0, 51, 66}, {0, 19, 51, 0, 31}, {0, 42, 66, 31, 0}};
int main() {
int no_edge;
int selected[V];
memset(selected, false, sizeof(selected));
no_edge = 0;
selected[0] = true;
int x; // row number
int y; // col number
printf("Edge : Weight\n");
while (no_edge < V - 1) {
int min = INF;
x = 0;
y = 0;
for (int i = 0; i < V; i++) {
if (selected[i]) {
for (int j = 0; j < V; j++) {
if (!selected[j] && G[i][j]) {
if (min > G[i][j]) {
min = G[i][j];
x = i;
y = j;
}
}
}
}
}
printf("%d - %d : %d\n", x, y, G[x][y]);
selected[y] = true;
no_edge++;
}
return 0;
}
// Dijkstra's Algorithm in C
#include <stdio.h>
#define INFINITY 9999
#define MAX 10
void Dijkstra(int Graph[MAX][MAX], int n, int start);
void Dijkstra(int Graph[MAX][MAX], int n, int start) {
int cost[MAX][MAX], distance[MAX], pred[MAX];
int visited[MAX], count, mindistance, nextnode, i, j;
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
if (Graph[i][j] == 0)
cost[i][j] = INFINITY;
else
cost[i][j] = Graph[i][j];
for (i = 0; i < n; i++) {
distance[i] = cost[start][i];
pred[i] = start;
visited[i] = 0;
}
distance[start] = 0;
visited[start] = 1;
count = 1;
while (count < n - 1) {
mindistance = INFINITY;
for (i = 0; i < n; i++)
if (distance[i] < mindistance && !visited[i]) {
mindistance = distance[i];
nextnode = i;
}
visited[nextnode] = 1;
for (i = 0; i < n; i++)
if (!visited[i])
if (mindistance + cost[nextnode][i] < distance[i]) {
distance[i] = mindistance + cost[nextnode][i];
pred[i] = nextnode;
}
count++;
}
for (i = 0; i < n; i++)
if (i != start) {
printf("\nDistance from source to %d: %d", i, distance[i]);
}
}
int main() {
int Graph[MAX][MAX], i, j, n, u;
n = 7;
Graph[0][0] = 0;
Graph[0][1] = 0;
Graph[0][2] = 1;
Graph[0][3] = 2;
Graph[0][4] = 0;
Graph[0][5] = 0;
Graph[0][6] = 0;
Graph[1][0] = 0;
Graph[1][1] = 0;
Graph[1][2] = 2;
Graph[1][3] = 0;
Graph[1][4] = 0;
Graph[1][5] = 3;
Graph[1][6] = 0;
Graph[2][0] = 1;
Graph[2][1] = 2;
Graph[2][2] = 0;
Graph[2][3] = 1;
Graph[2][4] = 3;
Graph[2][5] = 0;
Graph[2][6] = 0;
Graph[3][0] = 2;
Graph[3][1] = 0;
Graph[3][2] = 1;
Graph[3][3] = 0;
Graph[3][4] = 0;
Graph[3][5] = 0;
Graph[3][6] = 1;
Graph[4][0] = 0;
Graph[4][1] = 0;
Graph[4][2] = 3;
Graph[4][3] = 0;
Graph[4][4] = 0;
Graph[4][5] = 2;
Graph[4][6] = 0;
Graph[5][0] = 0;
Graph[5][1] = 3;
Graph[5][2] = 0;
Graph[5][3] = 0;
Graph[5][4] = 2;
Graph[5][5] = 0;
Graph[5][6] = 1;
Graph[6][0] = 0;
Graph[6][1] = 0;
Graph[6][2] = 0;
Graph[6][3] = 1;
Graph[6][4] = 0;
Graph[6][5] = 1;
Graph[6][6] = 0;
u = 0;
Dijkstra(Graph, n, u);
return 
}