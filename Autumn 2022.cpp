//        Autumn 2022

//Ans to the Question No: 1(A)
    
        3 0
        3 1
        3 2
        3 3
        2 0
        2 1
        2 2
        1 0
        1 1 

//Ans to the Question No: 1(B)

    for(int i=p;i<=q;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        printf("%d ",i);
    }


//Ans to the Question No: 1(C)

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==1)
        {
            if(i%3==0 || i%5==0)
            {
                sum+=i;
            }
        }
    }

    printf("Sum = %d\n",sum);
}


//Ans to the Question No: 1(C) OR


#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);

    for(int i=1;i<=n;i++)
    {
        if(i%d==0)
        {
            printf("\n");
            continue;
        }
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


//Ans to the Question No: 3(A)

#include<stdio.h>
int main()
{
    //My ID is: C201096

    int arr[6]={2,0,1,0,9,6};

    for(int i=0;i<6;i++)
    {
        printf("i = %d, A[%d] = %d\n",i,i,arr[i]);
    }

}

//Ans to the Question No: 3(B)

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            printf("%d ",arr[i]);
        }
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)
        {
            printf("%d ",arr[i]);
        }
    }
}

//Ans to the Question No: 3(B) OR
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("Strictly Increasing\n");
    }
    else
    {
        printf("Not Strictly Increasing\n");
    }
}