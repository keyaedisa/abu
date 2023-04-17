//#include "libdab.h"
#include <stdio.h>
#include <stdint.h>

#include "dab.h"

int main(int argc, char *argv[]){
    printf("pee\n");
    dab(argc,argv);
    printf("peez\n");
    lHdr* testHdr = newList(9,NODE,"test","cumdesc");
    printf("%d,%d,%s,%s,%p\n",testHdr->len,testHdr->type,testHdr->name,testHdr->desc,\
    testHdr->firstNode);
    //dab(cmlArgPassed, *argv){

    /*
    if(argc == 2){
        cmlArgPassed = false;
        dab(cmlArgPassed,argv[1]);
    }
    //dab(0);
    //status(); */
    return 0;
}
