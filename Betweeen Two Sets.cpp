int getTotalX(vector<int> a, vector<int> b) {
    int cnt=0;
    int n=a.size();
    int max=*max_element(a.begin(),a.end());
    int min=*min_element(b.begin(),b.end());
    for(int i=max;i<=min;i++){
        bool res=true;
        for(int j=0;j<n;j++){
            if(i % a[j]!=0){
                res=false;
                break;
            }
        }
        for(int k=0;k<b.size();k++){
            if (b[k]%i!=0){
                res=false;
                break;
            }
        }
        if(res==true){
            cnt++;
        }
        
    }
    return cnt;
}
