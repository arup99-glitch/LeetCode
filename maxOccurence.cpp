//Greek for Geeks

#include<bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s){
  int arr[26] = {0};

  //create an array of count of characters
  for(int i=0;i<s.length();i++)
  {
      char ch = s[i];
      //lowercase
      int number =0;
      number = ch-'a';
      arr[number]++;
  }
  //find maximum occur character
  int maxi = -1, ans =0;
  for(int i=0;i<26;i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
  }
  return 'a'+ans;

}

int main()
{

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
    return 0;
}
