#include<stdio.h>
#include<math.h>
double Geron (double a,double b,double c); 

double Geron (double a, double b, double c) { 
    double p; 
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main () {

double u, v, w;
double s;
printf ("Vvedit storonu trikutnika"); 
scanf ("%lf%lf%lf",&u,&v,&w);
s=Geron(u,v,w);
printf("Ploscha 1 trikutnika %lf\n",s);
s=Geron (10.3,8.1,9.7);
printf("Ploscha 2 trikutnika %lf\n",s);
s=Geron(u+10.3,v+w,w*1.7); 
printf("Ploscha 3 trikutnika %lf\n",s);
return 0;
}
