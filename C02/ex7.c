#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
char *ft_strupcase(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]<='z'&&str[i]>='a'){
            str[i]=str[i]-32;
        }
        i++;
    }
    return str;
}
int main(){
    char str[]="nasA14ser";
    ft_strupcase(str);
    int i=0;
    while(str[i]!='\0'){
        ft_putchar(str[i]);
        i++;
    }
}