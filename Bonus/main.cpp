#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int x,y;
    char letter;
    cin>>y>>x>>letter;
    vector<string> room(y);
    set<char> colors;


    for(int i=0; i<y; i++)
    {
        cin>>room[i];
    }
    vector<pair<int,int>> coordinate={{-1,0},{1,0},{0,-1},{0,1}};
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(room[i][j]==letter)
            {
                for(int k=0; k<4; k++)
                {
                    int move_x=j+coordinate[k].first;
                    int move_y=i+coordinate[k].second;

                    if(move_x>=0 && move_x < x && move_y >= 0 && move_y< y)
                    {
                        if (room[move_y][move_x]!= '.' && room[move_y][move_x] != letter)
                        {
                            colors.insert(room[move_y][move_x]);
                        }
                    }
                }
            }
        }
    }
cout<<colors.size();



    return 0;
}
