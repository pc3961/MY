#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char line[80],t1[10],t2[20],t3[10],FPN[20],APN[20],mname[10];
int count , v1,v2,v3,v4;
FILE *ifp;

int main()
{
  int t21,t31,index=1;
ifp= fopen("int.txt","r");
while(!feof(ifp))
{
fgets(line,179,ifp);
count = sscanf(line,"%s%s%s",t1,t2,t3);
if(strcmp("MACRO",t1)==0)
{
strcpy(mname,t2);
printf("\n macro name table");
printf("\n----------------\n");
}
if(strcmp(mname,t2)==0)
{
strcpy(FPN,t3);
printf("\n\n\n**FORMAL PARAMETER NAME TABLE**");
printf("\n-------------------------------:\n");
printf("\nINDEX\t\t:MACRO NAME");
printf("\n%d\t:%s",index,FPN);
}
if(strcmp(mname,t1)==0)
{
strcpy(APN,t2);
printf("\n\n\n**ACTUAL PARAMETER NAME TABLE**");
printf("\n----------------------:\n");
printf("\nINDEX\t\t:MACRO NAME");
printf("\n%d\t:%s",index,APN);
}
} }


