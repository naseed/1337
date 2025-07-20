#include <stdio.h>
int ft_strcmp(char *s1,char *s2){
    int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0'){
        i++;
    }
    return (s1[i]-s2[i]);
}
int main(){
    char *a="code";
    char *b="coding";
    printf("%d",ft_strcmp(a,b));
}