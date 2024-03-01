int boredChef(int n, int k, string &s) {
   // Write your code here.
   unordered_map<char, int> map;
   for(auto ele: s) map[ele]++;
   for(auto it: map) if(it.second>= k) return 1;
   return 0;
}