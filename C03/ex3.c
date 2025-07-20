#include <stdio.h>
char *ft_strncat(char *dest,char *src, unsigned int n){
    int i=0;
    int count=0;
    while(dest[count]!='\0'){
        count++;
    }
    while(src[i]!='\0'&&i<n){
        dest[count]=src[i];
        i++;
        count++;
    }
    dest[count]='\0';
    return dest;
}
int main(){
    char a[]="i love ";
    char b[]="pizza";
    ft_strncat(a,b,3);
    printf(" a: %s",a);
}
