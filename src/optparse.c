#include "abu.h"


int hostFlags = 0;
int* hostFlags_p = &hostFlags;
//const int optamt = sizeof(longopts.)/sizeof(b.)
int selopt = 0;

//dabRunProperties thisRun;
char* cProfile;
//char selopt;
static int usage(int e, char* progName);


static struct option longopts[] = {
	{"custom",optional_argument,&selopt,'c'},
	{"help",no_argument,&selopt,'h'},
	{"vanilla",optional_argument,&selopt,'v'},
	{"xero",optional_argument,&selopt,'x'},
	{"archisoProfMan",optional_argument,&selopt,'a'},
//#ifdef DEV_BUILD
// {,,,},
//#endif
	{NULL,0,NULL,0}
};

static int usage(int e, char* progName){
	fprintf(stderr,
//#ifdef DEV_BUILD
//	"Usage: %s [xxx]\n"
//#else
	"Usage: %s [-chvx]"
//#endif
	"\tNote: -c,-v,-x can take the following optional arguments -> [-c [archiso-profile], -v [r / b], -x [k / g]]\n\n"
	"Created by keyaedisa.\n"
	"archiso wrapper utility designed to help you build your own custom ISO's "
	"or an ISO using one of the built in presets.\n\n"
	"Options:\n"
	"\t-c, --custom\t[archisoProfile]\tBuild an ISO using a custom profile\n"
	"\t-h, --help\t\t\t\tShow this help\n"
	"\t-v, --vanilla\t[r/b]\t\t\tBuild a vanilla arch ISO using the releng or baseline profiles\n"
	"\t-x, --xero\t[k/g]\t\t\tBuild a XeroLinux ISO using the KDE or Gnome profiles\n"
	,progName);


	return (e);
}

//int customHandler(dabRunProperties *st){

//}



int optparse(int argc, char* argv[]){
	int opt;
	int ret = 0;
	if(argc == 1){
		printf("No options provided. \n");
		return ((ret = usage(0,argv[0])));
	};
	while ((opt = getopt_long(argc,argv,
//#ifdef DEV_BUILD
	//"xxx"
//#else
	"c::hv::x::a::",
//#endif
	longopts, NULL)) != -1)
	{
		switch (opt){
		case 'c':
			if(!OPTIONAL_ARGUMENT_IS_PRESENT)
				selopt = opt;
			else {
				//st->customProfile = optarg;
				cProfile = optarg;
				selopt = opt;
			}
			break;
		case 'h':
			return ((ret = usage(1, argv[0])));
		case 'v':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'b')
				*hostFlags_p |= isoBuilder;
			else if (*optarg == 'r')
				*hostFlags_p |= isoBuilder;
		} else
			*hostFlags_p |= isoBuilder; 
		break;
		case 'x':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'k')
				*hostFlags_p |= isoBuilder;
			else if (*optarg == 'g')
				*hostFlags_p |= isoBuilder;			
		} else 
				*hostFlags_p |= isoBuilder;
		break;
		case 'a':
			*hostFlags_p |= archisoProfMan;
			break;
		default:
			return ((ret = usage(0, argv[0])));
		}
	}
	return ret;
}
