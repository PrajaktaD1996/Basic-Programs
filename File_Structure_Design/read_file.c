#include<stdio.h>
int main(){
    FILE *fp;
    char line[100];// suppose we have to read 100 char
    fp = fopen("data.txt","r");
    while(fgets(line,sizeof(line),fp)){
        printf("%s",line);

    }
    fclose(fp);
    return 0;

}