#ifndef DCL_H
#define DCL_H
#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };
int tokentype; /* type of last token */
char token[MAXTOKEN]; /* last token string */
char name[MAXTOKEN]; /* identifier name */
char datatype[MAXTOKEN]; /* data type = char, int, etc. */
char out[1000];

int gettoken(void); /* return next token */

/* dcl: parse a declarator */
 void dcl(void);

 /* dirdcl: parse a direct declarator */
 void dirdcl(void);

#endif