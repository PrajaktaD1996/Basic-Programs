/**Capstobn project:: 50.Library manegment system::  */
/**Things to do::
 * 1.ADD book
 * 2.Display book
 * 3.Search book
 * 4.Delete book
 */
/* Tech stack used::
1.struct
2.file handeling
3.menu driven
4.searching
5.Basic CURD operations
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book{
    int id;
    char author[50];
    char name[50];
};

int add_Book(){
   struct book b;
   FILE *fp = fopen("lib.dat","ab");
   /*Different file modes: 
   1.r: read text. 2. w: write text 3.a:appennd text 4.rb:read binary 5.ab:appent binary
   6. wb:write binary
   */
   printf("Enter book Id:");
   scanf("%d",&b.id);

   printf("Enter book name:");
   getchar(); //to avaoid this we refer getchar.
   scanf("%[^\n]",b.name);  // it indivisually is not working beacoz, whitespace char.
   /**[^\n]:: scanset=>[] not=>^ newline=>\n */
   /**Note: %s : reads only one word */
   /**fgets() best to use, it pervents overflow, */
   /**gets() is no recommneded to use as it leads to overflow condition
    * scanf(%s) :: leads to partial usage safe.
   */

   printf("Enter Author:");
   getchar();
   scanf("%[^\n]",b.author);

   fwrite(&b, sizeof(b), 1,fp);
   fclose(fp);

   return 0;

}

int display_Book(){
    struct book b;
    FILE *fp = fopen("lib.dat","rb");
    if(fp==NULL)
    {printf("The file is empty!");
        return 0;
    }

    printf("\n ID \tAuthor \t Name");
    while(fread(&b,sizeof(b),1,fp));
    printf("%d  \t %s \t%s",b.id, b.author, b.name);
    fclose(fp);

}
int search_Book(){

    int id, found=0;
    struct book b;
    FILE *fp = fopen("lib.dat","rb");
    if(fp==NULL)
    printf("File is empty!");

    printf("Enter the id to be searched!");
    scanf("%d",&id);

    while(fread(&b,sizeof(b),1,fp));
    {
        if(b.id==id)
        {found =1;}
       // break;}
    }
    if(!found)
    printf("Book not found!");
    
    else
    printf("Book found!");

    fclose(fp);


} 

int delete_Book(){
  int id;
  struct book b;
  FILE *fp = fopen("lib.dat","rb");
  FILE *tmp = fopen("lib.dat","wb");

  printf("Enter ID to be deleted!");
  scanf("%d",&id);
  while(fread(&b,sizeof(b),1,fp))
  {
    if(id==b.id)
    fwrite(&b, sizeof(b),1,tmp);
  }
  fclose(fp);
  fclose(tmp);

  remove("lib.dat");
  rename("tmp.dat","lib.dat");
  printf("Book deleted if exited!");
  return 0;
}
int main(){

 int choice;
 while(1){
    printf("\nLibrary Management System::Menu\n");
    printf("1. Add Book\n");
    printf("2. Display Book\n");
    printf("3. Search Book\n");
    printf("4. Delete Book\n");
    printf("5. Exit\n");

    printf("Enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        add_Book();
        break;

        case 2:
        display_Book();
        break;

        case 3:
        search_Book();
        break;

        case 4:
        delete_Book();
        break;

        case 5:
        return 0;
        break;

        default:
        printf("Wrong choice!");
    }
 }

    return 0;
}