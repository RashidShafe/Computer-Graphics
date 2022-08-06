#include<bits/stdc++.h>
using namespace std;
main()
{
    int x1,x2,y1,y2,x,y;
    cout<<"X_Start= ";
    cin>>x1;
    cout<<"X_End= ";
    cin>>x2;
    cout<<"Y_Start= ";
    cin>>y1;
    cout<<"Y_End= ";
    cin>>y2;

    x=x1+1;
    y=y1;

    int d_x=abs(x1-x2);
    int d_y=abs(y1-y2);

    int P=2*d_y-d_x;

    while(x<=x2)
    {
        if(P>=0)
        {
            P=P+ 2*d_y-2*d_x;
            y=y+1;
        }
        else
            P=P+2*d_y;

        cout<<"X= "<<x++<<"\tY= "<<y<<endl;
    }
}
