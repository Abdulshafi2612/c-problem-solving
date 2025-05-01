#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]=="Tetrahedron")
            sum+=4;
        else if(arr[i]=="Cube")
            sum+=6;
        else if(arr[i]=="Octahedron")
            sum+=8;
        else if(arr[i]=="Dodecahedron")
            sum+=12;
        else if(arr[i]=="Icosahedron")
            sum+=20;

    }
    cout<<sum;
    return 0;
}
