#include <unistd.h>
int main(int argc,char **argv){
    for(int i=argc-1;i!=0;i--){
        int j=0;
        while(argv[i][j]!='\0'){
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
    }
    return 0;
}