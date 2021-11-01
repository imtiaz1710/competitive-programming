//Good process but bad answer...time limit exceeded...because deque insert takes o(n) time in each operation



// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// using namespace std;
// deque <int> dq;
// vector <int> team_x_ace_kina;
// map <int,int> name_and_team_no;
// void dequeue()
// {
    
//     auto it=dq.begin();
//     cout<<*it<<endl;
//     dq.pop_front();
// }
// void enqueue()
// {
//     int tmp;
//     cin>>tmp;
//     if(dq.empty())
//     {
//         dq.push_back(tmp);
//        team_x_ace_kina[name_and_team_no[tmp]]=1;
//        return;
//     }
//     if(team_x_ace_kina[name_and_team_no[tmp]]==0)
//     {
//         dq.push_back(tmp);
//         team_x_ace_kina[name_and_team_no[tmp]]=1;
       
//     }
//     else
//     {
        
//         auto it=dq.end();
//         it--;
        
//         while (1)
//         {
//             if(name_and_team_no[*it]==name_and_team_no[tmp] )
//             {
//                 it++;
//                 dq.insert(it,tmp);
//                 return;
//             }
//             if(it==dq.begin())
//             return;
//             it--;
//         } 
//     } 
// }
// int main(){
//     fin;
//     fout;
//     //ios_base::sync_with_stdio(false);
//     //cin.tie(NULL);
//     int t;
//     scanf("%d",&t);
//     int scnerio=0;
//     while (t)
//     {
//         team_x_ace_kina.assign(1009,0);
//         scnerio++;
//         for (int i = 1; i <= t; i++)
//         {
//             int no_of_player;
//             scanf("%d",&no_of_player);
//             for (int j = 0; j < no_of_player; j++)
//             {
//                 int tmp;
//                 cin>>tmp;
//                 name_and_team_no[tmp]=i;
//             }  
//         }
//         printf("Scenario #%d\n",scnerio);
//         string str;
//         cin>>str;
//         while (str!="STOP")
//         {
//             if(str=="ENQUEUE")

//             {
//                  enqueue();
                
//             }
//             else if(str=="DEQUEUE")
//             {
//                     dequeue();
                
//             } 
//             cin>>str;
//         }
//         cout<<endl;
//         dq.clear();
//         name_and_team_no.clear();
//         scanf("%d",&t);

//     }
    
//     return 0;
// }

//Finally saw the solution and implement ...

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin,fout;
    int t;
    int scnerio=0;
    
    while (cin>>t,t)
    {
        queue<int> individual_team[t+1];
        queue<int> combined_team;
        vector<int> kon_team_er_member(1000009,0);
        for (int i = 1; i <= t; i++)
        {
            int num_of_members;
            cin>>num_of_members;
            for (int j = 0; j < num_of_members; j++)
            {
                int id;
                cin>>id;
                kon_team_er_member[id]=i;
            }
            
        }
        printf("Scenario #%d\n",++scnerio);
        string str;
       
        while (cin>>str,str[0]!='S')
        {
            if(str[0]=='E')
            {
                int id;
                cin>>id;
                if(individual_team[kon_team_er_member[id]].empty())
                {
                    combined_team.push(kon_team_er_member[id]);
                }
                individual_team[kon_team_er_member[id]].push(id);
            }
            else
            {
                int team=combined_team.front();
                cout<<individual_team[team].front()<<endl;
                individual_team[team].pop();
                if(individual_team[team].empty())
                {
                    combined_team.pop();
                }
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}