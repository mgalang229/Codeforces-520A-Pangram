#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char c;
	string s;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c;
		s += c;
	}
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	sort(s.begin(), s.end());
	string s2;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] != s[i+1]){
			s2 += s[i];
			cnt++;
		}
	}
	string ap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	int cnt2 = 0;
	for(int i = 0; i < (int)ap.size(); i++){
		if(ap[i] == s2[i]){
			cnt2++;
		}
	}
	if(cnt2 == 26){
		cout << "YES";
	} else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}
