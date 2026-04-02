#include <stdio.h>
#include "search.h"


int main(int argc, char *argv[]){
    if (argc != 3){
        printf("Usage: csearch <term> <file>\n");
        return 1;
    }else {
        int termCount = search(argv[1], argv[2]);
        return termCount;
    }
    

}