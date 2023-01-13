#include <libabu.h>
#include <libkey.h>

// think about potentially using a struct to neatly store the variables abu needs

int main(int argc, char *argv[]){
    bool cmlArgPassed; // keeps track of if the user called abu with or w/out args from the console
    if(argc >= 2){
        cmlArgPassed = true;
    }
    else{
        cmlArgPassed = false;
    }
    abu(cmlArgPassed, *argv){

    }
    if(argc == 2){
        cmlArgPassed = false;
        abu(cmlArgPassed,argv[1]);
    }
    abu(0);
    status();
}

int abu(int cmlArgPassed, char *cmlArg){
    if(cmlArgPassed == 1){
        optParser()
    }
}