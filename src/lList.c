#include "abu.h"
#include "lList.h"

struct lHdr_t* newHdr(struct lHdr_t* nHdr){
    return nHdr = (struct lHdr_t*)malloc(sizeof(struct lHdr_t));
}

void* newLDCN(struct lHdr_t* hdr){
    dcNode* newDCNode, *curr = NULL;

    newDCNode = (dcNode*) malloc(sizeof(dcNode));
    curr = newDCNode;
    for(int i = hdr->len; i >= 0; i--){
        curr->next=(i==0)?NULL:(dcNode*) malloc(sizeof(dcNode));
        curr=curr->next;
    }
    return (void *)newDCNode;
}

struct lHdr_t *newList(size_t lLen, size_t lType, char* lName, char* lDesc){
    struct lHdr_t* nHdr = NULL;
    nHdr = (struct lHdr_t*) malloc(sizeof(struct lHdr_t));
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