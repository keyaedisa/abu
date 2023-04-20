#include "abu.h"
#include "lList.h"

int abu(int argc, char *argv[]){
    int ret = 0;
    if((ret = optparse(argc,argv))) return ret;
    if((ret = executor(hostFlags_p))) return ret;
    printf("peez\n");
    struct lHdr_t* testHdr = newList(9,NNODE,"test","cumdesc");
    printf("%d,%d,%s,%s,%p\n",testHdr->len,testHdr->type,testHdr->name,testHdr->desc,\
    testHdr->firstNode);
    //executor(hostFlags_p,);
    //printf("%d\n",*hostFlags_p);
    //printf("%d\n", option);
};
/*
while*/
int executor(dabRunOpts_p hostFlags_p){
    printf("%d z\n",*hostFlags_p);
    printf("%c\n",selopt);
    if((*hostFlags_p & archisoProfMan) == archisoProfMan){
        printf("hi\n");
    }
    
    return 0;
};

