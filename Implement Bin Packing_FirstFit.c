#include<stdio.h>
//firstfit
void firstfit(int items[],int n,int c)
{
int bin[n];
//Set binCount = 0 (no bins used ini ally)
int bincount=0;
for(int i=0;i<n;i++)
bin[i]=c;
for(int i=0;i<n;i++)
 {
    int placed=0;
    {
    for(int j=0;j<bincount;j++)
     {
        if(bin[j]>=items[i])
         {
            bin[j]-=items[i];
            printf("item %d placed in b8in %d\n",items[i],j+1);
            placed=1;
            break;
         }
     }
    if (!placed)
    {
        bin[bincount]-=items[i];
        //Display the bin placement
        printf("item %d placed in bin %d\n",items[i],bincount+1);
        bincount++;
        
     }
 }
printf("total bins used =%d\n");
}
}
int main()
{
    int n,c;
   //Read the number of items 
    printf("enter number of items: ");
    scanf("%d",&n);
    int items[n];
   //Read the size of each item
    printf("enter item size:\n");
    for(int i=0;i<n;i++)
    {
      printf("item %d:",i+1);
      scanf("%d",&items[i]); 
    }
    //ead the bin capacity 
    printf("enter bin capacity: ");
    scanf("%d",&c);
//function call
    firstfit(items,n,c);    
    return 0;
}
