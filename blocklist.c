typedef struct {
    block_t info;
} DATA;

typdef struct node {
    DATA num;
    struct node* next; 
}NODE;

NODE* add(NODE* node, DATA data);
void print_list(NODE* node);
void get_transaction(NODE* head, unsigned char *list_trans);