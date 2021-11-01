//Wetlands of Florida uva accepted
//after trying one day finally get accepted
//problem was str1 and str2 and mark was not update
//at last got prsentation error for last extra line


#include <bits/stdc++.h>
#define visited 1
#define MAX 101
using namespace std;

vector <vector<char>> v;
vector <vector<int>> mark;

int counter;
int dr[]={-1,0,1,0,-1,1,1,-1};
int dc[]={0,1,0,-1,1,1,-1,-1};
void bfs(int x,int y,int row,int col)
{
    if(mark[x][y]) return;
    mark[x][y]=visited;
    if(x+dr[0]>=0  && !mark[x+dr[0]][y] && v[x+dr[0]][y]=='W' ) bfs(x+dr[0],y,row,col),counter++;
    if(y+dc[1]<col && !mark[x][y+dc[1]] && v[x][y+dc[1]]=='W' ) bfs(x,y+dc[1],row,col),counter++;
    if(x+dr[2]<row && !mark[x+dr[2]][y] && v[x+dr[2]][y]=='W' ) bfs(x+dr[2],y,row,col),counter++;
    if(y+dc[3]>=0 && !mark[x][y+dc[3]] && v[x][y+dc[3]]=='W') bfs(x,y+dc[3],row,col),counter++;
    if(x+dr[4]>=0 && y+dc[4]<col && !mark[x+dr[4]][y+dc[4]] && v[x+dr[4]][y+dc[4]]=='W') 
    bfs(x+dr[4],y+dc[4],row,col),counter++;
    if(x+dr[5]<row && y+dc[5]<col && !mark[x+dr[5]][y+dc[5]] && v[x+dr[5]][y+dc[5]]=='W')
    bfs(x+dr[5],y+dc[5],row,col),counter++;
    if(x+dr[6]<row && y+dc[6]>=0 && !mark[x+dr[6]][y+dc[6]] && v[x+dr[6]][y+dc[6]]=='W')
    bfs(x+dr[6],y+dc[6],row,col),counter++;
    if(x+dr[7]>=0 && y+dc[7]>=0 && !mark[x+dr[7]][y+dc[7]] && v[x+dr[7]][y+dc[7]]=='W')
    bfs(x+dr[7],y+dc[7],row,col),counter++;
}
int main(){
   // freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    getline(cin,s); //for blank line
    while (t--)
    {
        
        v.clear();
       
        v.resize(MAX);
        int row=0;
        int col=0;
        mark.clear();
        mark.resize(MAX);
        while (1)
        {
            
            getline(cin,s); 
            
            if(s.empty()) break;
            counter=0;
            if(s[0]=='L' || s[0]=='W')
            {
                col=s.size();
                for (int i = 0; i < col; i++)
                {
                    v[row].push_back(s[i]);
                    mark[row].push_back(0);
                }
                
                row++;
            }
            else
            {
                for (int  i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        mark[i][j]=0;
                    }
                    
                }
                
                
                int x,y;
                char str1[3]={'a','b','c'};
                char str2[3]={'a','b','c'};
                int indx1=0;
                int indx2=0;
            
                while(s[indx1]!= ' ')
                {
                    str1[indx1]=s[indx1];
                    indx1++;
                }
                indx1++;
                while (indx1<s.size())
                {
                    str2[indx2]=s[indx1];
                    indx2++;
                    indx1++;
                }
                x=atoi(str1);
                y=atoi(str2);
                bfs(x-1,y-1,row,col);
                cout<<counter+1<<endl;
            } 
            
        }
        if(t)
        cout<<endl;
        //getline(cin,s);
    }
}