#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#define MAXLINE 1000 //max length of 2nd dimension
#define SPACE ' '
#define TAB '\t'
#define TABSIZE 8

void lineSaver(char *(destinationArray)[MAXLINE]);
void printLines(char *(inputArray)[MAXLINE]);
void reverses();
int getsline(char s[],int lim);
void copy(char to[], char from[]);
void delSame(char *s1, const char *s2);
int any(const char*,const char*);
void intDecimalToBinary(unsigned x);
void optParser(int, char *[]);