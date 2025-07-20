#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_print_alphabet(void){
    char x = 'a';
    while(x<= 'z'){
        write(1,&x,1);
        x++;
    }
}
void ft_print_reverse_alphabet(void){
    char x='z';
    while(x>='a'){
        ft_putchar(x);
        x--;
    }
}
void ft_print_numbers(void){
    char x='0';
    while(x<='9'){
        ft_putchar(x);
        x++;
    }
}
void ft_is_negative(int n){
    char x='N';
    if(n<0){
        ft_putchar(x);
    }else{
        x+=2;
        ft_putchar(x);
    }
}
void ft_print_comb(void){
    char a;
    char b;
    char c;
    a='0';
    
}

int main(){
    char a='0';
    ft_putchar(a);
    return 0;
}