#include "dab.h"

lHdr* newHdr(lHdr* nHdr){
    return nHdr = (lHdr*)malloc(sizeof(lHdr));
}

void* newLDCN(lHdr* hdr){
    void* newDCNode, *curr = NULL;

    newDCNode = malloc(sizeof(dcNode));
    curr = newDCNode;
    for(int i = hdr->len; i >= 0; i--){
        curr->next=(i==0)?NULL:malloc(sizeof(dcNode));
        curr=curr->next;
    }

}

lHdr *newList(size_t lLen, size_t lType, char* lName, char* lDesc){
    lHdr* nHdr = NULL;
    nHdr = (lHdr*) malloc(sizeof(lHdr));
    nHdr->len=lLen;
    nHdr->type=lType;
    nHdr->name=lName;
    nHdr->desc=lDesc;
    nHdr->firstNode=NULL;
    nHdr->lastNode=NULL;

    //createHeader(nHdr);
    return nHdr;


}

/*
switch (type)
    {
    case NODE:
        
        break;
    case DCNODE:

        break;
    default:
        break;
    }
    if(type == NODE){

    }
*/