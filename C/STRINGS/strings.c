#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10] = "hello";
    char bh[10] = " world";
    ch[0] = 'H';
    strcat(ch, bh);
    puts(ch);
    int count=0;
    for (int i=0;ch[i]!='\0';i++){
        if ((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u')||(ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U')){
        count++;}
        
    }
    printf("No Of vovels :%d\n",count);
    printf("No Of consonants :%d",strlen(ch)-1-count);
}