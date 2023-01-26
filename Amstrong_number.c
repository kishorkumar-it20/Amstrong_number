#include<stdio.h>
int main()
{
    int num,count=0,cunt,mul=1,res=0,rem;
    printf("Enter a number: ",num);
    scanf("%d",&num);
    int q=num;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cunt=count;
    q=num;
    while(q!=0)
    {
        rem=q%10;
        while(cunt!=0)
        {
            mul=mul*rem;
            cunt--;
        }
        res=res+mul;
        q=q/10;
        cunt=count;
        mul=1;

    }
    if(res==num){
        printf("yes! It is the Amstrong number");
    }
    else{
        printf("No! It is not Amstrong number");
    }
    return 0;

}
