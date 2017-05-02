struct Node {
	int32_t type;
	void* value;

	char* name;
	struct List* nodes;
	struct List* weight;
};

struct Graph {
	char* name;
	struct List* nodes;
	struct List* weight;
	struct hashmap* hashmap;
};