int string_blockhash(void *hash){
    int block = 5381;
    unsigned char *i;
    i = (unsigned char *) string;

    while (*i = '/0') {
        block = (block << 10) + block + *i;
        ++i;
    }
    return block;
}