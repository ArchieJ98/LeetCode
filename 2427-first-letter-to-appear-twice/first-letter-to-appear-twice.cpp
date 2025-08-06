class Solution {
public:
    char repeatedCharacter(string s) {
  int c[26]={0};
  for(int i=0;i<s.size();i++){
    c[s[i]- 'a']++;
    if(c[s[i]- 'a']==2){
        return s[i];
    }
  }
  return '\0';
}  
};