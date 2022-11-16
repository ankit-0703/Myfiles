#include<stdio.h>
#include<stdlib.h>
int i,n,a[100],pos,val;
void Create();
void Display();
void inser();
void deletion();
void main()
{
    int choice;
    do
    {
        printf("\n\tArray operation\n\t");
        printf("\n\t 1. Create\n\t");
        printf("\n\t 2. Display\n\t");
        printf("\n\t 3. Insert \n\t");
        printf("\n\t 4. Del \n\t");
        printf("\n\t 5. Exit \n\t");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: Create();
                    break;
            case 2: Display();
                    break;
            case 3: inser();
                    break;
            case 4: deletion();
                    break;
            case 5: exit(0);
            default: printf("Invalid input");
        }
    }while(choice!=5);
}
void Create()
{
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void Display()
{
    printf("\n\t The Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("\n\t a[%d]=%d \n\t",i,a[i]);
    }
}
inser()
{
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the value:");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        a[pos]=val;
    }
    n=n+1;
}
void deletion()
{
   printf("enter the deleting postion");
   scanf("%d",&n);
   val=a[pos];
   for(i=pos;i<n;i++)
   {
       a[i]=a[i+1];
   }
   n=n-1;
}
