#include <stdio.h>
int ft_strncmp(char *s1,char *s2,unsigned int n){
    int i=0;
    while(i<n && (s1!='\0' || s2!='\0')){
        if(s1[i]!=s2[i]){
            return s1[i]-s2[i];
        }
        i++;
    }
    return 0;
}
int main(){
    char *a="code";
    char *b="coding";
    printf("%d",ft_strncmp(a,b,4));
}