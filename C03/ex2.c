#include <stdio.h>
char *ft_strcat(char *dest,char *src){
    int i=0;
    int count=0;
    while (dest[count]!='\0'){
        count++;
    }
    while(src[i]!='\0'){
        dest[count]=src[i];
        count++;
        i++;
    }
    dest[count]='\0';
    return dest;
}
int main(){
    char a[]="i love ";
    char b[]="pizza";
    ft_strcat(a,b);
    printf(" a: %s",a);
}
