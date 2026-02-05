/*Recussion_Bitwise: 31 . Tower of Hanoi*/
/*Theory : It is classic recussive probelm in which there are three neddeles give in which on 
has to shift the disc stack fom one needle to another needle as it it and 
the rule is no bigger disc is allowed to place over the smaller disc and 
one can move only one disc at a time.   */

/*Problem stattement:: You have:

3 rods → A (source), B (helper), C (destination)

N disks (big → bottom, small → top)

Rules

✅ Move only 1 disk at a time
✅ Only top disk can be moved
✅ Bigger disk cannot go on smaller disk*/

/**
 Logic: 1st move top two on the healper rod, 
 then move the bigger one on the destination rod,
  then place the disc from the healper rod to destination rod.   
 */

#include<stdio.h>
void tower(int n, char src,char desti,char helper){
    //n is no of disc
    //src ,desti,helper-->rods
    if(n==1)
    {
        printf("move disc from src(%c)-->dest(%c)", &src,&desti);
        return;
    }
    tower(n-1,src,desti,helper);
    printf("Move disk %d from %c → %c\n", n, src, desti);
    tower(n-1,helper,src,desti);

}


int main(){

int n=3;
tower(n,'A','B','C');
return 0;
}