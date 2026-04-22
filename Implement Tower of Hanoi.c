#include <stdio.h>
void toh(int disk_count, char S, char D, char T)
{
//check base condition
if (disk_count== 1)
{
printf("\nMove disk %d from %c to %c",disk_count,S,D);
return;
}
//move top(n-1) disks to auxillary rod 
toh(disk_count-1,S,T,D);
printf("\nMove disk %d from %c to %c",disk_count,S,D);
//move (n-1) disks from auxillary to destination  
toh(disk_count-1,T,D,S);
}
int main()
{
int n; 
printf("enter number of disks: ");
scanf("%d", &n);
toh(n,'S','D','T');
return 0;
}
