#include "libabu.h"

//void optParser(int argCount, char *argPassed[]);

struct options{
    // at the end of each variable, S or L mean "short" or "long" respectively
    // SF and LF mean "Short Flag" or "Long Flag" respectively
    //bool flagPolarity;
    bool customSF;
    bool helpSF;
    bool vanillaSF;
    bool versionSF;
    bool xeroSF;
    char *customS;
    char *helpS;
    char *vanillaS; 
    char *versionS;
    char *xeroS;
    bool helpLF;
    char *helpL;
};


void optParser(int argCount, char *argPassed[]){
    //fprintf(stdout,"%s: %s: \n","test1", argPassed[2]);
    struct options opts;


    
    opts.customS = "-c";
    opts.helpS = "-h";
    opts.helpL = "--help";
    opts.vanillaS = "-v";
    opts.versionS = "-V";
    opts.xeroS = "-x";
    

    for(int i = 1; i < argCount; i++){
        //int boolT = 0;
        //boolT = strcmp(argPassed[i],custom);
        //fprintf(stdout,"%d\n",boolT);
        if(!strcmp(argPassed[i],opts.customS)){
           opts.customSF = true;
           system("bash options/custom");
        } else if(!strcmp(argPassed[i], opts.helpS)){
           opts.helpSF = true;
           system("bash options/help -h ");    
        } else if(!strcmp(argPassed[i], opts.helpL)){
           opts.helpLF = true;
           system("bash options/help --help ");
        } else if(!strcmp(argPassed[i], opts.vanillaS)){
           opts.vanillaSF = true;
           system("bash options/vanilla");    
        } else if(!strcmp(argPassed[i], opts.versionS)){
            opts.versionSF = true;
            system("bash options/version");    
        } else if(!strcmp(argPassed[i], opts.xeroS)){
           opts.xeroSF = true;
           system("bash options/xero");    
         } else { fprintf(stdout,"%s\n","Not a valid option!");}

        //fprintf(stdout,"%s %d %s\n","There are",argCount,"argument(s)");
        //fprintf(stdout,"%s %d of %d = %s\n","Arg",i,argCount-1,argPassed[i]);
         
    } 
} // in theory this could maybe allow you to handle multiple options at once