#include<stdio.h>
main()
{

FILE *fp1,*fp2;

char filename[40];
char ch;
int dele_line,temp=1,i=1;
printf("enter the file name");
scanf("%s",filename);
fp1=fopen("fi","r");
if(fp1==NULL)
printf("file does not exist");
printf("enter the number to delet the  line");
scanf("%d",&dele_line);
printf("file information before deleting the line");
while((ch=fgetc(fp1))!=EOF)
{
printf("%c",ch);
printf("venky");
}

printf("logsssssssssssssssssssssssssssssssssss");
rewind(fp1);
printf("logsssssssssssssssssssssssssssssssssss");

fp2=fopen("copy","w");
while((ch=fgetc(fp1))!=EOF)
{

if(ch=='\n')
{
printf("It is log at the temp variable");
temp++;
}
if(temp!=dele_line)
putc(ch,fp2);
}
fclose(fp2);

remove("fi");
rename("copy.c",filename);
printf("data after deleting the line");
fp2=fopen("fi","r");
ch=getc(fp2);
while(ch!=EOF)
{
printf("%c",ch);
ch=getc(fp2);
}

fclose(fp1);
fclose(fp2);
}


	



