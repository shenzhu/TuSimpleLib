#include "graph.h"

struct Graph* createGraph(char* name){
	struct Graph* new = (struct Graph*) malloc(sizeof(struct Graph));
	new->name = name;
	new->nodes = NULL;
	new->weight = NULL;
	new->hashmap = create_hashmap(STRING, INT);
	return new;
}

void addGraphNode(struct Graph* graph, struct Node* node){
	if (graph->nodes==NULL){
		graph->nodes = create_list(LIST);
		graph->weight = create_list(LIST);
	}
	plus_list(graph->nodes, node->nodes);
	plus_list(graph->weight, node->weight);
	hashmap_put(graph->hashmap, getNodeName(node), get_list_size(graph->nodes)-1);
}

void addGraphEdge(struct Graph* graph, struct Node* node1, struct Node* node2, double weight){
	if (hashmap_get(graph->hashmap, getNodeName(node1))==NULL){
		addGraphNode(graph, node1);
	}
	if (hashmap_get(graph->hashmap, getNodeName(node2))==NULL){
		addGraphNode(graph, node2);
	}
	// addNodeEdge(node1, node2, weight);
	// if (node1->nodes==NULL){
	// 	node1->nodes = create_list(STRING);
	// 	node1->weight = create_list(FLOAT);
	// }
	// plus_list(node1->nodes, getNodeName(node2));
	// plus_list(node1->weight, weight);
}

struct List* nameIterGraph(struct Graph* graph, int index){
	int size = get_list_size(graph->nodes);
	// printf("%d\n", size);
	if (0<=index && index<size)
		return (struct List*)get_list_element(graph->nodes, index);
	else{
		printf("Node does not exist.\n");
		return NULL;
	}
}

struct List* weightIterGraph(struct Graph* graph, int index){
	int size = get_list_size(graph->weight);
	// printf("%d\n", size);
	if (0<=index && index<size)
		return (struct List*)get_list_element(graph->weight, index);
	else{
		printf("Node does not exist.\n");
		return NULL;
	}
}

struct List* findGraphNode(struct Graph* graph, char* nodeName){
	int index = hashmap_get(graph->hashmap, nodeName);
	return nameIterGraph(graph, index);
}

int main(){
	return 0;
}