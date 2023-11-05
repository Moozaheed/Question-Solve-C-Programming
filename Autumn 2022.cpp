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

//Ans to the Question No: 2(C)


#include<stdio.h>

int divisorcheck(int x,int y)
{
    if(x%y==0  || y%x==0)return 1;
    else return 0;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int c=divisorcheck(x,y);
    printf("%d",c);
}

//Ans to the Question No: 2(C)

#include<stdio.h>

double oddcheck(int x,int y)
{
    if(x%2==1 && y%2==1)return 1.1;
    if(x%2==0 && y%2==0)return 2.0;
    return 0.1;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    double c=oddcheck(x,y);
    printf("%lf",c);
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

//Ans to the Question No: 3(C)

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    gets(str);
    int n=strlen(str);
    
    int m=200;
    int newarr[m];
    for(int i=0;i<m;i++)
    {
        newarr[i]=0;
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        newarr[str[i]]++;
        if(str[i]=='a' || str[i]=='e' || str[i]=='o'||str[i]=='u'||str[i]=='i')sum++;
    }

    for(int i=0;i<m;i++)
    {
        if(i=='a' || i=='e' || i=='o'||i=='u'||i=='i')
        {
            printf("%c => %d (%.2f)%%\n",i,newarr[i],(newarr[i]*100.0/sum));
        }
    }

}

//Ans to the Question No: 4(C)

#include<stdio.h>
#include<string.h>
struct Player
{
    char name[24];
    char country[24];
    int match_played;
    int goals;
    double pass_accuracy;
};


int main()
{
    int n;
    scanf("%d",&n);
    Player arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s",&arr[i].name);
        scanf("%s",&arr[i].country);
        scanf("%d",&arr[i].match_played);
        scanf("%d",&arr[i].goals);
        scanf("%lf",&arr[i]. pass_accuracy);
    }

    double mx=0;
    char ans1[24],ans2[24];
    for(int i=0;i<n;i++)
    {
        if(arr[i].goals>mx)
        {
            mx=arr[i].goals;
            strcpy(ans1,arr[i].name);
            strcpy(ans2,arr[i].country);
        }
    }
    printf("%s\n%s",ans1,ans2);
}
