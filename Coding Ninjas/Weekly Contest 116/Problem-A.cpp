int findTheLarger(int n, vector<int> &v) {
    // Write your code here.
    int start= 1;
    int sum1= v[0];
    int sum2= v[v.size()-1];
    if(v.size()==1) return -1;
    
    for(int i=1; i<v.size(); i++){
        if(v[i]<v[i-1]) break;
        sum1+= v[i];
    }

    for(int i=v.size()-2; i>=0; i--){
        if(v[i]<v[i+1]) break;
        sum2+= v[i];
    }

    // cout << sum1 << " " << sum2 << endl;

    if(sum1== sum2) return -1;
    else if(sum1 > sum2) return 0;
    else return 1;

}