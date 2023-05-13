bool noUse(char ch){
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122) || (ch>=48 && ch<=57))
    return false;
    return true;
}
bool checkPalindrome(string s) {
  int e = s.size() - 1, strt = 0;
  while (strt <= e){
      while(noUse(s[strt]))strt++;
      while(noUse(s[e]))e--;

      if(strt>=e)return true;
      if((s[strt]>=65 && s[strt]<=90) && (s[e]>=97 && s[e]<=122))
      s[strt]+=32;

      if((s[strt]>=97 && s[strt]<=122) && (s[e]>=65 && s[e]<=90))
      s[strt]-=32;
      
      if(s[strt]!=s[e])
      return false;
      strt++;
      e--;
  }
  return true;
}
