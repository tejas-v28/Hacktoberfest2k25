#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int maxLen = 0, cnt = 0, len = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cnt++;
            len++;
            maxLen = max(maxLen, len);
        }
        else {
            len = 0;
        }
    }
    if(cnt == 0){
        cout << "YES" << endl;
        return;
    }
    
    if((maxLen == 2 && cnt == 2) || (maxLen == 3 && cnt == 3)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}
