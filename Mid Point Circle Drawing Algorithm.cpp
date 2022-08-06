#include<bits/stdc++.h>
using namespace std;
main()
{
    int r;
    cout<<"Radius= ";
    cin>>r;

    int P=1-r;
    int x=0,y=r;

    //float P=5/4-r;

    while(x<y)
    {
        //cout<<P<<endl;
        if(P>=0)
        {
            P=P+(2*x)-(2*y)+5;
            y=y-1;
        }
        else
            P=P+2*x+3;


        cout<<"X= "<<++x<<"\tY= "<<y<<endl;
    }
}
