#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,x,y,r,d;
    /*cout<<"Center point of the circle: ";
    cin>>p>>q;*/
    cout<<"Radius: ";
    cin>>r;

    d=3-2*r;
    x=0;
    y=r;

    while(x<y)
    {
        //cout<<d<<endl;

        if(d<0)
        {
            d=d+4*x+6;
        }
        else
        {
            d = d+4*(x-y)+10;
            y=y-1;
        }
        cout<<"X= "<<++x<<"\tY= "<<y<<endl;
    }
}
