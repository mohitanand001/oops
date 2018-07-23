#include <iostream>
#include <string>
#include <list>
#include<vector>
#include<algorithm>
using namespace std;


bool possible(long long N, long long C, vector<long long > &vec, long long key)
{
    long long placed_cows = 1;
    long long first_place = vec[0]; 
    
    for (long long  i = 1 ; i < N ; i +=1)
    {
        if (vec[i] -first_place >= key)
        {
            first_place = vec[i];
            placed_cows +=1;
     
            if (placed_cows == C)
                return true;
        }
    }
    
    return false;
    
}


long long solve(long long N, long long C, vector<long long > &vec)
{
    
    sort(vec.begin(), vec.end()); 
    long long le = 0, ri = vec.back();
    long long mid ;
    long long max_dist = 0;
    
    while(ri > le)
    {
        mid = le + (ri - le) / 2;
        bool poss = possible(N, C, vec, mid) ;
        
        if(poss)
        {
            le = mid + 1;
            max_dist = max(max_dist, mid);
        }
        
        else
        {
            ri = mid ;
        }
    }
    
    
    
}


    int main()
    {
        int T;
        cin >> T;
        
        while(T--)
        {
            vector<long long> vec;
            long long N, C, x;
            
            cin>> N >> C;
            
            for(int i = 0; i < N; i +=1)
            {
                cin >> x;
                vec.push_back(x);
            }
            
            cout << solve(N, C, vec) - 1<< endl;
        }
 
    return 0;
   }