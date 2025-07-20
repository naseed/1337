#include <unistd.h>

int ft_strlen(char *str){
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}