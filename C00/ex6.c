#include <unistd.h>
#include <string.h>

void ft_putchar(char c){
    write(1,&c,1);
}
void ft_print_numbers(char a,char b){
    ft_putchar((a/10)+'0');
    ft_putchar((a%10)+'0');
    ft_putchar(' ');
    ft_putchar((b/10)+'0');
    ft_putchar((b%10)+'0');
    if(a<=98){
        ft_putchar(',');
        ft_putchar(' ');
    }
}
void ft_print_comb2(void){
    int a=00;
    int b;
    while(a<=98){
        b=a+1;
        while(b<=99){
            ft_print_numbers(a,b);
            b++;
        }
        a++;

    }
}
int main(){
    ft_print_comb2();
}