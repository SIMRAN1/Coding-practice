long long int is_valid(vector<int>v,int mid){
   long long  int sum=0;
    for(int i=0; i<v.size(); i++){
        sum+=max(v[i]-mid,0);
        
    }
    //cout<<sum<<endl;
    return sum;
}
int Solution::solve(vector<int> &v, int B) {
    
    sort(v.begin(),v.end());
    int n=v.size();
    int low=1,high=v[n-1];
    int res=0;
      while(low<=high){
          int mid= low + (high-low)/2;
        //  cout<<low<<" "<<mid<<" "<<high<<endl;
          if(is_valid(v,mid)>=(long long)B){
              low=mid+1;
              res=mid;
          }
          else
            high=mid-1;
      }
      return res;
}
