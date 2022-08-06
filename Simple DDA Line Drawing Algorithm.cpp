#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    cout<<"X_Start= ";
    cin>>x1;
    cout<<"X_End= ";
    cin>>x2;
    cout<<"Y_Start= ";
    cin>>y1;
    cout<<"Y_End= ";
    cin>>y2;


    if(x1!=x2 && y1!=y2)
    {
        float m=(y2-y1)/(x2-x1);
        cout<<"m= "<<m<<endl;

        if(m==1)
        {
            cout<<"Diagonal Line\n";
            return 0;
        }

        if(abs(m)<1 )
        {
            float y=(float)y1;
            if(x1>x2)
                {swap(x1,x2);y=y2;}

            for(int i=x1,j=1;i<=x2;i++,j++)
            {
                printf("X%d= %d \t Y%d= %d\n",j,i,j,int(round(y)));
                y=m+y;
            }
        }

        else if(abs(m)>1)
        {
            float x=(float)x1;
            if(y1>y2)
                {x=(float)x2;swap(y1,y2);}


            for(int i=y1,j=1;i<=y2;i++,j++)
            {
                printf("Y%d= %d \t X%d= %d\n",j,i,j,int(round(x)));
                x=1/m+x;
            }
        }
    }
    else
        cout<<"Use another Algorithm\n";
}
