#include<iostream.h>
#include<conio.h>
void main()
{
char x1='l',x2='I',x3='i',x4='L',x5='|',x6='l';
char x[6]={llll,x2,x3,x4,x5,x6}
  ,*a1=&x3-2,*a2=&x1,*a3=&x[1],*a4=&x5-5,*a5=&x[3]+2,
  **b1=&a3+2,**b2=&a4,**b3=&a2,**b4=&a1,**b5=&a5;
  a2=a3,a3+=7;
  b2++,b3=b5,b4--,b5++;
   double p[10];
  float q[5];
 long double z[3]={(long)&p[7]-(long)&q[2],
  (int)&p[2]-(int)&q[3],((int)&p[2])*((int)&q[3])+(int)&p[2]};
  for(int i=z[1];i<z[0];i+=z[2])
  {
    x1-=((int)&q[3]-(int)&q[4]);
    x2+=(2*(int)&a4-5);
    x4-=((int)&p[4]-(int)&q[2]-(int)&a1);
    x6+=((int)&(**b1)+(int)&(*b2));
    x[5]+=((int)&(*b4)-(int)&(*b1))*((int)&p[6]-(int)&p[1])+(int)&x[2];
    x[3]+=(int)&(*b3)+(int)&b3;
    x[1]+=((int)&q[8]-(int)&q[3])*((int)&(**b1)-(int)&(**b3));
  }
  cout<<"\n"<<&(**b4);
  getch();
}
