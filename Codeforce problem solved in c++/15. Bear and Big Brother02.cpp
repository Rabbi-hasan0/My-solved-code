#include<iostream>
using namespace std;
int main()
{
      int x,y;

      cin>>x;
      cin>>y;
       if(x*3 > y*2)
       {
             cout<<"1"<<endl;
       }
       else if(x*9 > y*4)
       {
             cout<<"2"<<endl;
       }
       else if(x*27 > y*8)
       {
             cout<<"3"<<endl;
       }
       else if(x*81 > y*16)
       {
             cout<<"4"<<endl;
       }
       else if(x*243 > y*32)
       {
             cout<<"5"<<endl;
       }
       else if(x*729 > y*64)
       {
             cout<<"6"<<endl;
       }
       else if(x*2187 > y*128)
       {
             cout<<"7"<<endl;
       }
       else if(x*6561 > y*256)
       {
             cout<<"8"<<endl;
       }
       else if(x*3*6561 > y*512)
       {
             cout<<"9"<<endl;
       }
       else if(x*3*3*6561 > y*1024)
       {
             cout<<"10"<<endl;
       }
      return 0;
}
