#include "abu.h"
#include "lList.h"

int abu(int argc, char *argv[]){
    int ret = 0;
    if((ret = optparse(argc,argv))) return ret;
    if((ret = tui(hostFlags_p))) return ret;
    struct lHdr_t* testHdr = newList(9,NNODE,"test","desc");
    printf("%d,%d,%s,%s,%p\n",testHdr->len,testHdr->type,testHdr->name,testHdr->desc,\
    testHdr->firstNode);
    //executor(hostFlags_p,);
    //printf("%d\n",*hostFlags_p);
    //printf("%d\n", option);
};
/*
while*/
int tui(dabRunOpts_p hostFlags_p){
    if((*hostFlags_p & archisoProfMan) == archisoProfMan){
        printf("hi\n");
    }
    
    return 0;
};

