#include <unistd.h>

int ft_str_alpha(char *str){
    int i=0;
    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            i++;
        }else{
            return 0;
        }
    }
    return 1;
}