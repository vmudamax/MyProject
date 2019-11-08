#include<stdio.h>
main()
{
FILE *fp,*fp1;
char fi[50];
char ch;
int deleline,temp=1;
printf("enter filename");
scanf("%s",fi);
fp=fopen("fi","r");
if(fp==NULL)
printf("file does not exist");
printf("Before coping");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
rewind(fp);
printf("enter the num of delete line");
scanf("%d",&deleline);
fp1=fopen("copy","w");
while((ch=fgetc(fp))!=EOF)
{
if(ch=='\n')
temp++;
if(temp!=deleline)
{
putc(ch,fp1);
}
}
remove(fi);
rename("copy","fi");
fclose(fp1);
fclose(fp);
}

