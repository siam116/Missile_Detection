#include<bits/stdc++.h>
using namespace std;


int main()
{
   // int xb[13]= {80,90,99,108,116,125,133,141,151,80,60,16,10};
    int xb[13]= {80,90,99,108,116,125,133,141,151,160,169,174,180};

   int yb[13]= {0,-2,-5,-9,-15,-18,-23,-29,-28,-25,-21,-20,-17};
    //int yb[13]= {0,-2,-5,-9,-15,-18,-23,-29,-28,-23,-25,-21,-28};

    float sin[13], cos[13],xf[13],yf[13];

    xf[0]=-70;
    yf[0]=0;


    int i,vf=20;
    float ds=0;
    int flag =0;

    printf("| Time | xb | yb | xf | yf | Distance | Cos | Sin | \n");

    for (i=0; i<=12; i++)
    {

            ds=((xb[i]-xf[i])*(xb[i]-xf[i]))+((yb[i]-yf[i])*(yb[i]-yf[i]));
            ds=sqrt(ds);
            cos[i]=(xb[i]-xf[i])/ds;
            sin[i]=(yb[i]-yf[i])/ds;
                printf("| %d | %d | %d | %.2f | %.2f | %.2f | %.2f | %.2f | \n",i,xb[i],yb[i],xf[i],yf[i],ds,cos[i],sin[i]);

            if(ds<10){
                flag=1;
                break;
            }
            yf[i+1]=yf[i] + vf*sin[i];
            xf[i+1]=xf[i] + vf*cos[i];

    }

if(flag==1) printf("Target destroyed");
else printf("Target escaped");


    return 0;
}
