int solve(string &s) {
    // Write your code here.
    int curr= 1;
    int maxCount= 1;

    for(int i=1; i<s.size(); i++){
        if(s[i]>s[i-1]){
            curr++;
            maxCount= max(curr, maxCount);
        }
        else{
            curr= 1;
        }
    }

    curr= 1;
    for(int i=1; i<s.size(); i++){
        if(s[i]<s[i-1]){
            curr++;
            maxCount= max(curr, maxCount);
        }
        else{
            curr= 1;
        }
    }

    return maxCount;
}