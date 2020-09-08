#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0) {
	    int n;
	    cin>>n;
	    int a[n];
	    int x=0;
	    long long int s=0;
	    long long int s1=0;
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	        s+=a[i];
	        s1+=a[i]*a[i];
	    }
	    int ss = n*(n+1)/2;
	    int s1s = n*(2*n+1)*(n+1)/6;
	    int diff = abs(ss-s);
	    int diff1 = abs(s1s-s1);
	    int val = diff1/diff;
	    int val1 = diff;
	    int no = (val+val1)/2;
	    int no1 = no-val1;
	    cout<<no<<" "<<no1<<endl;
	    
	}
	return 0;
}

/*
x+y = n*(n+1)/2
x2-y2 = n*(2*n+1)*(n+1)/6

*/
