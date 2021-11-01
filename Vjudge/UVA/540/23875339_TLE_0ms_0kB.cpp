#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
using namespace std;
deque <int> dq;
vector <int> team_x_ace_kina;
map <int,int> name_and_team_no;
void dequeue()
{
    
    auto it=dq.begin();
    cout<<*it<<endl;
    dq.pop_front();
}
void enqueue()
{
    int tmp;
    cin>>tmp;
    if(dq.empty())
    {
        dq.push_back(tmp);
       team_x_ace_kina[name_and_team_no[tmp]]=1;
       return;
    }
    if(team_x_ace_kina[name_and_team_no[tmp]]==0)
    {
        dq.push_back(tmp);
        team_x_ace_kina[name_and_team_no[tmp]]=1;
       
    }
    else
    {
        
        auto it=dq.end();
        it--;
        
        while (1)
        {
            if(name_and_team_no[*it]==name_and_team_no[tmp] )
            {
                it++;
                dq.insert(it,tmp);
                return;
            }
            if(it==dq.begin())
            return;
            it--;
        } 
    } 
}
int main(){
    
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    int scnerio=0;
    while (t)
    {
        team_x_ace_kina.assign(1009,0);
        scnerio++;
        for (int i = 1; i <= t; i++)
        {
            int no_of_player;
            cin>>no_of_player;
            for (int j = 0; j < no_of_player; j++)
            {
                int tmp;
                cin>>tmp;
                name_and_team_no[tmp]=i;
            }  
        }
        printf("Scenario #%d\n",scnerio);
        string str;
        cin>>str;
        while (str!="STOP")
        {
            if(str=="ENQUEUE")

            {
                 enqueue();
                //   cout<<endl<<endl;
                // for (int i = 0; i < dq.size(); i++)
                // {
                //     cout<<dq[i]<<endl;
                // }
                // cout<<endl<<endl;
            }
            else if(str=="DEQUEUE")
            {
                    dequeue();
                
            } 
            cin>>str;
        }
        cout<<endl;
        dq.clear();
        name_and_team_no.clear();
        cin>>t;

    }
    
    return 0;
}