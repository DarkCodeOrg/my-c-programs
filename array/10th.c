#include<stdio.h>
#include <math.h>

#define n  5

double rcalc(float ,float ,float ,float ,float);        //declaration of the r calculation function 

double rcalc(float a,float b,float c,float d,float e)
{
    double f;
    for (int i = 0; i < n; i++)
    {
        f = (a - (d*c)) / (sqrt(  ((n * b) - (d*d)) * ((n*e) - (c*c)) )   );   
    }
    return f;
}


int main()

{
    float x[n],y[n],z[n];     //////  z = xy 
    float u[n],v[n];           ///////  x^2 = u ; y^2 = v
    double r;

////////////////////////////////////////////      /////////////////////////////////////////

    printf("enter your numbers now : ");

                //taking values of x              //
                                                  // here we are just taking the user  inputs 
            for (int i = 0; i < n ; i++)          // so dont waste much of your time here
            {                                     //
                    printf("enter %d th value of x : ",(i+1));       //
                     scanf("%f",&x[i]);          // ;-)  :-)
            }
               
               //taking values of y 
               
            for (int i = 0; i < n ; i++)
            {
                printf("enter  %d th value of y : ",(i+1));
                     scanf("%f",&y[i]);
            }
    
  /////////////////////////////////////
  for (int i = 0; i < n; i++)       ///    xy = z
    {                               ///    here we are calculating the value of "xy" array
       z[i] = x[i]*y[i];            ///    x^2 = u
       u[i] = x[i]*x[i];            ///    y^2 = v
       v[i] = y[i]*y[i];            ///
    }                               ///
   ////////////////////////////////////
   
   
  ///////////////////////////////////////////   ///////////////////////////////////////

    float l=0 , m=0 , o=0 , p=0 , q=0;


    for (int i = 0; i < n ; i++)
    {
        l += z[i];          ////   l = summation of z
        m += u[i];          ////   m = summation of u
        q += v[i];          ////   q = summation of v
        o += x[i];          ////   o = summation of x
        p += y[i];          ////   p = summation of y
    }

//////         //////        /////     /////////////
    
    r = rcalc(l,m,p,o,q);           // calling funcion rcalc to calculate correlation coefficient              
    
//////         //////        /////     /////////////    
    
    printf("the result is : %lf  \n",r);
    return 0 ; 
}


///////////////////////////////////  R CALCULATION      /////////////////////////////////

