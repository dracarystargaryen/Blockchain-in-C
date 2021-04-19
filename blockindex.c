typedef int hash;
typedef char *indextransaction;

//Defines the block in hash structure
typdef struct Block_T {
    hash previous_block;
    //Hash blocks goes through with the transaction
    hash block;
    transaction transactions; 
}block_t;

