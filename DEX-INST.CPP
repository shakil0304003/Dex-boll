#include<stdio.h>
void main()
{FILE *p1;
 char sha[6]="shakil";
 int i=0;
 p1=fopen("RESTORE","w");
 fprintf(p1,"%s %d",sha,i);
 fclose(p1);
}