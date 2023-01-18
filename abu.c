#include <stdio.h>
#include <libkey.h>

// think about potentially using a struct to neatly store the variables abu needs
// create a string array called options each element contains a string that is the name
// of the option, and the length of the array is how many options exist

int main(int argc, char *argv[]){
    bool cmlArgPassed; // keeps track of if the user called abu with or w/out args from the console
    if(argc > 2){
        cmlArgPassed = true;
        fprintf(stdout,"%s %s %s %s %d","hi\n",argv,argv[1],"Bye\n",420);
        //optParser(argc,*argv);
    }
    else{
        cmlArgPassed = false;
        fprintf(stdout,"%s %s %s %s %d","hi\n",argv,argv[1],"bye\n",69);
    }
    //abu(cmlArgPassed, *argv){

    /*
    if(argc == 2){
        cmlArgPassed = false;
        abu(cmlArgPassed,argv[1]);
    }
    //abu(0);
    //status(); */
    return 0;
}


/*
int abu(int cmlArgPassed, char *cmlArg){
    if(cmlArgPassed == 1){
        optParser(argc, )
    }
}*/