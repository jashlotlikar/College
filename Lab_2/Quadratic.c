#include<stdio.h>
#include<math.h>

//Compute all the roots of a quadratic equation using switch case statement.
//[Hint: x = (-b +/- sqrt(b2-4ac))/2a]

int main(){
    float a,b,c,d,r1,r2,re,im;
    int dsign;
    printf("enter a,b,c for ax^2 + bx + c = 0 : \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    d = b*b - 4*a*c;

    if(d>0) dsign = 1;
    else if (d<0) dsign = -1;
    else dsign = 0;


    switch(dsign) {

    case 1:
        r1 = (-b + pow(d,0.5))/(2*a);
        r2 = (-b - pow(d,0.5))/(2*a);
        printf("Equation has 2 real roots which are: %f and %f \n\n",r1,r2);
        break;
    case -1:
        re = -b/(2*a); im = pow(-d, 0.5);
        printf("Equation has 2 imaginary roots which are: \n %f + i%f \n %f - i%f \n\n",re,im,re,im);
        break;
    case 0:
        re = -b/(2*a);
        printf("Equation has a single root which is : %f \n\n",re);
        break;
    default:
        printf("error");

    }


}
