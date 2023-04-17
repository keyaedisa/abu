#include "dab.h"

void dab(int argc, char *argv[]){
    optparse(argc,argv);
    executor(hostFlags_p);
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

