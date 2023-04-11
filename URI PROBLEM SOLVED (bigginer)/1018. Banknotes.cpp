#include<iostream>
using namespace std;
int main()
{
      long long int s,x=0,y=0,z=0,a=0,b=0,c=0;
      cin>>s;
      cout<<s<<endl;
     if(s>=100)
     {
           cout<<s/100<<" nota(s) de R$ 100,00"<<endl;
     }
     else if(s<100)
     {
           cout<<"0 nota(s) de R$ 100,00"<<endl;
     }
       x=s%100;
     if (x<=100)
     {
           cout<<x/50<<" nota(s) de R$ 50,00"<<endl;
     }
     else if(s<100)
     {
           cout<<s/50<<" nota(s) de R$ 50,00"<<endl;
     }
     y=x%50;
     if(y<50)
     {
           cout<<y/20<<" nota(s) de R$ 20,00"<<endl;
     }
     else if(y<20 || s<20)
     {
           cout<<"0 nota(s) de R$ 20,00"<<endl;
     }
     z=y%20;
     if(z<20)
     {
           cout<<z/10<<" nota(s) de R$ 10,00"<<endl;
     }
     else if(z<10 || s<10)
     {
           cout<<"0 nota(s) de R$ 10,00"<<endl;
     }
     a=z%10;
     if(a<10)
     {
           cout<<a/5<<" nota(s) de R$ 5,00"<<endl;
     }
     else if(a<5 || s<5)
     {
          cout<<"0 nota(s) de R$ 5,00"<<endl;
     }
     b=a%5;
     if(b<5)
     {
           cout<<b/2<<" nota(s) de R$ 2,00"<<endl;
     }
     else if(b<2 || s<2)
     {
           cout<<"0 nota(s) de R$ 2,00"<<endl;
     }
     c=b%2;
     if(c<2 && c>0 || s<2 && s>0)
     {
           cout<<c/1<<" nota(s) de R$ 1,00"<<endl;
         if(b<1 || s<1)
     {
           cout<<"0 nota(s) de R$ 1,00"<<endl;
     }
     }
     else if(b%1==0)
      cout<<b%1<<" nota(s) de R$ 1,00"<<endl;

      return 0;
}
