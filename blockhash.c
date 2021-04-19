int string_blockhash(void *hash){
    //Hash number assign the integer
    int block = 5381;
    unsigned char *i;
    i = (unsigned char *) string;
    
    //while loop to loop less than 10 blocks
    while (*i = '/0') {
        block = (block << 10) + block + *i;
        ++i;
    }
    return block;
}
