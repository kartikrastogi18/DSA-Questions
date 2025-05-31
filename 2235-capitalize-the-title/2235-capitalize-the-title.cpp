class Solution {
public:
    string capitalizeTitle(string title) {
       int n=title.size();
       for(int i=0;i<n;i++){
        int first=i;
        while(i<n&&title[i]!=' '){
            title[i]=tolower(title[i]);
            i++;
        }
        if(i-first>2){
            title[first]=toupper(title[first]);
        }
       } 
       return title;
    }
};