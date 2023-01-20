#include <libkey.h>

struct Options{
    bool custom;
    char cus[];
    int help;
    char hel[];
    bool vanilla;
    char vanil[];
    bool version;
    char vers[];
    bool xero;
    char xero[];
};

void optParser(int argCount, char *argPassed[]){
    //fprintf(stdout,"%s: %s: \n","test1", argPassed[2]);
    for(int i = 1; i < argCount; i++){
         if(strcmp(argPassed[i],custom)){
            custom();
         } else if(strcmp(argPassed[i],help)){
            help(0);
         } else if(strcmp(argPassed[i],helpLong)){
            help(1);
         } else if(strcmp(argPassed[i],vanilla)){
            vanilla();
         } else if(strcmp(argPassed[i],xero)){
            xero();
         } else { fprintf(stdout,"%s\n","Not a valid option!");}

        //fprintf(stdout,"%s %d %s\n","There are",argCount,"argument(s)");
        fprintf(stdout,"%s %d of %d = %s\n","Arg",i,argCount-1,argPassed[i]);
        /*switch (argPassed[i]){
            case 'c': fprintf(stdout,"%s %d %s %s","hi\n",argCount,argPassed[i],"bye\n"); break;
            case 'h' || 'H':
                if(argPassed[i] == 'H')
                //help(1);
                break;
            case 'v': //vanilla(); break;
            case 'V': //version(); break;
            case 'x': //xeroLinux(); break;
            default:
                fprintf(stdout,"%s\n","henn");
                //usage();
        } */ 
    } 
}