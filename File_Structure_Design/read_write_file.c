#include<stdio.h>
int main(){
    FILE *f;
    f = fopen("data.txt","w");
    fprintf(f,"HELLO world");
    fprintf(f,"File_Structure Practice");
    fclose(f);
    return 0;

}