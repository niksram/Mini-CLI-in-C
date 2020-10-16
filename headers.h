#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#include <unistd.h>
#include <dirent.h>
void changedir(char *);
void file(char *);
void show(char *);
void welcome(void);
void help(char*);
void say(char* );
void list(char *);
void pigsay(char*);
void dragonsay(char*);
void printcwd(void);
int input_string(void);
int caller(char*,char*);
int power(int ,int );
void strpop(char*,int );
void strins(char*,int ,char );
int modify(char* ,int );
int calc(char*);
void now(char *);
void play(void);
void clean(void);