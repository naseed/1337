#include <stdio.h>
int ft_strlen(char *str){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char *c="NASSER";
    printf("%d",ft_strlen(c));
}