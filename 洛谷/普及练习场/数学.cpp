/*

////////////////////////////////////
#include<stdio.h>  
int gcd(int a,int b)  
{  
   if(b == 0) return a;
    return gcd(b,a%b);
}  
int main()  
{  
    int T,n,m,a,b,c,d,e,f;  
    scanf("%d",&T);  
    while(T--)  
    {  
           scanf("%d %d %d %d",&a,&b,&c,&d);  
           n = b * d / gcd(b,d);  
           a = n / b *a;  
           c = n / d *c;  
           
           e = a + c;  
           m = gcd(e,n);  
           printf("%d %d\n",e/m,n/m);  
    }  
    return 0;  
}

///////////////////////////////////
*/


//////////////////////////////////
/*
#include<stdio.h>  
#include<math.h>  
int n;
int prime(int m) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}  
int main (void)  
{  
   int i,a;  
   while(scanf("%d",&n),n!=0)  
    {  
       a=0;  
       for(i=3;i<n/2;i++)  
       {  
           if(prime(i)!=0)//找出可拆出的两个素数中较小的数  
           {  
                if(prime(n-i)!=0)//若n-i的值也为素数，结果加一  
                    a++;  
           }  
       }  
       printf("%d\n",a);  
    }  
   return 0;  
}  
*/
/*
int prime(int m)//判断素数  
{  
   int i,k;  
   if(m==1)  
       return 0;  
   k=(int)sqrt(m);  
   for(i=2;i<=k;i++)  
    {  
       if(m%i==0)  
          return 0;  
    }  
   return 1;  
} */


///////////////////////////////////////


#include<stdio.h>  
#include<math.h>  
int prime(int m);  
int main (void)  
{  
   int n,i,a;  
   while(scanf("%d",&n),n!=0)  
    {  
       a=0;  
       for(i=3;i<n/2;i++)  
       {  
           if(prime(i)!=0)//找出可拆出的两个素数中较小的数  
           {  
                if(prime(n-i)!=0)//若n-i的值也为素数，结果加一  
                    a++;  
           }  
       }  
       printf("%d\n",a);  
    }  
   return 0;  
}  
int prime(int m)//判断素数  
{  

   for(int i=2;i*i<=m;i++)  
    {  
       if(m%i==0) return 0;  
    }  
   return m != 1;  
} 










///////////////////////////////////// 
