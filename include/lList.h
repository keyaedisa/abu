

enum nodeT {NODE = 0, DCNODE};
enum datatypes {INT = 0, SIZE_T, CHAR, STR, CHARA, INTA,}
#define NODE NODE
#define DCNODE DCNODE

typedef struct lHdr_t{
    size_t len;
    size_t type;
    char* name;
    char* desc;
    void* firstNode;
    void* lastNode;
} lHdr;

// Define the structure for the node in the linked list
typedef struct dcNode{
    size_t type;
    size_t dataType;
    void* data;  // The data stored in this node
    lHdr* header; // Pointer to header
    size_t index;   // The current position in the list
    struct dcNode* curr; // Pointer to current node
    struct dcNode* next;  // Pointer to the next node in the list
    struct dcNode* prev; // Ptr to previous node
} dcNode;

typedef struct Node{
    void* data;
    size_t index;
    size_t type;
    size_t dataType;
    struct Node* next;
    lHdr* header;
} Node;

/*
Use skeleton struct to create child structs that you can then feed into
void pointers.

U can type cast the void pointers when you need too so you can apply the 
appropriate arithmetic operations and physical byte address increment and
decrement

function that takes void pointer which then gets casted to a passed in struct
type which is just a child struct of Node struct

Create an array pointer compound literal of values to be stored in list


*/

// Create a new, empty linked list

lHdr *newList(size_t len, size_t type, char* name, char* desc);



/*
void initList() {
    // Set the head pointer to point to a newly allocated node
    head = (Node*) malloc(sizeof(Node));
    
    // Make sure there was no memory allocation error
    if (!head) {
        printf("Error allocating memory\n");
        exit(1);
    }
}*/