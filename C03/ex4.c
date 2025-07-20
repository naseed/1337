#include <stdio.h>
char *ft_strstr(char *str,char *to_find){
    int i=0;
    int j=0;
    if(to_find=='\0')
        return str;
    while(str[i]!='\0'){
        while(str[i+j]==to_find[j] && str[i+j]!='\0'){
            j++;
        }
        if(to_find[j]=='\0'){
            return str+i;
        }
        i++;
        j=0;
    }
    return 0;
}
int main(){
    char text[] = "I love programming in C";
    char *found = ft_strstr(text, "programming");

    if (found != NULL)
        printf("Found: %s\n", found);
    else
        printf("Not found\n");
}