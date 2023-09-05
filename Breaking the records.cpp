vector<int> breakingRecords(vector<int> scores) {
    int max=0,min=0;
    int n=scores.size();
    for(int i=1;i<n;i++){
        int big=scores[0];
        int small=scores[0];
        for(int j=0;j<i;j++){
            if(big<scores[j]){
                big=scores[j];
            }
            if(small>scores[j]){
                small=scores[j];
            }
        }
        if(scores[i-1]<scores[i] && big<scores[i]){
            max++;
        }
        else if(scores[i-1]>scores[i] && small>scores[i]){
            min++;
        }
    }
    vector<int> res;
    res.push_back(max);
    res.push_back(min);
    return res;
    
}
