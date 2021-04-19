typedef int hash;
typedef char *indextransaction;

typdef struct Block_T {
    hash previous_block;
    hash block;
    transaction transactions;
}block_t;

