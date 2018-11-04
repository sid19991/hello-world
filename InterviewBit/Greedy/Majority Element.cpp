#define ll long long
int Solution::majorityElement(const vector<int> &A) {
    map<ll,ll>m;
    ll i;
    ll boss=A.size()/2;
    for(i=0;i<A.size();i++)
    {
        m[A[i]]++;
        if(m[A[i]]>=boss)
        {
            return A[i];
        }
    }
    
}
