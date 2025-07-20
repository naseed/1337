#include <stdio.h>
unsigned int ft_strlcat(char *dest ,char *src ,unsigned int size){
    int i=0;
    int src_len=0;
    int dest_len=0;
    while(dest[dest_len]!='\0'&&dest_len<size){
        dest_len++;
    }
    while(src[src_len]!='\0'){
        src_len++;
    }
    if(dest_len>=size){
        
    }
}
int main(){
    char a[]="hello ";
    char b[]="world";
    ft_strlcat(a,b,9);
    printf("%s",a);
}
