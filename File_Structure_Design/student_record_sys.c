/**File_Structure_Design: 41.Student Record System */
#include<stdio.h>
struct student{
    char name[20];
    int roll_no;
};


int main(){

    struct student s;
    FILE *f;
    f = fopen("student.dat","ab");
    printf("Enter the details of the student");
    scanf("%d %s",&s.roll_no, s.name);
    fwrite(&s,sizeof(s),1,f);
    fclose(f);

    return 0;
}