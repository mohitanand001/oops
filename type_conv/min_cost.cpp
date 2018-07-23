#include<bits/stdc++.h>
using namespace std;
long dp[3][1000000]; 


long min_cost(int indx, long T, vector<long> &volum, vector<long> &price)
{

    if(T <= 0)
        return 0;

    if(indx >= 3 )
        return 10000000;

    if(dp[indx][T] != -1)
        return dp[indx][T];
        

    long choice_1 = price[indx] +  min_cost(indx, T - volum[indx], volum, price) ;
    long choice_2 = min_cost(indx + 1, T, volum, price);

    dp[indx][T] = min(choice_2, choice_1);

    return min(choice_2, choice_1);

        
}


int main()
{
    
    long T, D, total_dist;
    cin >> T >> D >> total_dist;
    
    vector<long > volum (3, -1);
    cin >> volum[0] >> volum[1] >> volum[2];
    
    vector<long > price (3, -1);
    cin >> price[0] >> price[1] >> price[2];
    
    long total_volum_required = ((total_dist) / (D / 1000.0)) * T;
    memset(dp, -1, sizeof(dp));

    long total_price = min_cost(0, total_volum_required, volum, price, T);    
    
    

    memset(dp, -1, sizeof(dp));

    cout << min(total_price, pp); 

    

    
    return 0;
}