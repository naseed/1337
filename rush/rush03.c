#include "ft_putchar.c"
void rush(int x,int y){
    int i=1;
    int j=1;
    while(j<=y){
        while(i<=x){
            if(i==0){
                ft_putchar('A');
            }else if(i==x){
                ft_putchar('C');
            }else{
                ft_putchar('B');
            }
            i++;
        }
        ft_putchar('\n');
     j++;   
    }
}