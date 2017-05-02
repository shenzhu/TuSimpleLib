#include "node.h"

struct Node* createNode(char* name, int32_t type, ...) {
	struct Node* new = (struct Node*) malloc(sizeof(struct Node));
	new->name = name;
	new->type = type;
	new->nodes = NULL;
	new->weight = NULL;

	va_list ap;
	va_start(ap, type);
	switch (type) {
		case INT:
			new->value = intTovoid(va_arg(ap, int));
			break;
		case FLOAT:
			new->value = floatTovoid(va_arg(ap, double));
			break;
		case BOOL:
			new->value = boolTovoid(va_arg(ap, bool));
			break;
		case STRING:
			new->value = stringTovoid(va_arg(ap, char*));
		default:
			break;
	}
  	va_end(ap);

  	return new;
}

void* getNodeValue(struct Node* node) {
	if (node == NULL) {
		printf("Node does not exist.\n");
		return NULL;
	}
	// if (type!=node->type){
	// 	printf("Node is not matching input type\n");
	// 	return NULL;
	// }
	return node->value;
}

char* getNodeName(struct Node* node) {
	if (node == NULL) {
		printf("Node does not exist.\n");
		return NULL;
	}
	return node->name;
}

void addNodeEdge(struct Node* node1, struct Node* node2, double weight){
	if (node1->nodes==NULL){
		node1->nodes = create_list(STRING);
		node1->weight = create_list(FLOAT);
	}
	plus_list(node1->nodes, getNodeName(node2));
	plus_list(node1->weight, weight);
	// printf("%d\n", voidToint(newEdge->value));
	// printf("%d\n", voidToint(node->nodes->value));
}

char* nameIterNode(struct Node* node, int index){
	int size = get_list_size(node->nodes);
	printf("%d\n", size);
	if (0<=index && index<size)
		return voidTostring(get_list_element(node->nodes, index));
	else{
		printf("Node does not exist.\n");
		return NULL;
	}
}

double weightIterNode(struct Node* node, int index){
	int size = get_list_size(node->weight);
	// printf("%d\n", size);
	if (0<=index && index<size)
		return voidTofloat(get_list_element(node->weight, index));
	else{
		printf("Node does not exist.\n");
		return 0;
	}
}

int main(){
	struct Node *a = createNode("a", INT, 13);
	printf("%d\n", voidToint(getNodeValue(a)));

	struct Node *b = createNode("b", INT, 11);
	addNodeEdge(a, b, 1.11);
	printf("%s\n", nameIterNode(a, 0));
	printf("%f\n", weightIterNode(a, 0));

	struct Node *c = createNode("c", BOOL, false);
	addNodeEdge(a, c, 2);
	printf("%s\n", nameIterNode(a, 1));

	return 0;
}