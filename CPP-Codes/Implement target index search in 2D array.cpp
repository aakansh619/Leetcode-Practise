#include<bits/stdc++.h>
using namespace std;

int main(){
	int r;
	int c;
	cin>>r;
	cin>>c;
	int target;
	int arr[r][c];
	cin >> target;
	
	
	
	for(int i= 0;i<r;i++){
		for(int j = 0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	cout << endl;
	
	for(int i= 0;i<r;i++){
		for(int j = 0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout << endl;
	}
	
	vector<int> vec;
	
		for(int i= 0;i<r;i++){
		for(int j = 0;j<c;j++){
			vec.push_back(arr[i][j]);
		}
	}
	cout<<endl;
	
	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	int lb = 0;
	int ub = vec.size()-1;
	
	while(lb<=ub){
		int mid = lb+(ub-lb)/2;
		
		if(vec[mid] == target){
			int r1 = mid/c;
			int r2 = mid%c;
			
			cout<<r1<<" "<< r2;
			cout<<endl;
		}
		if(vec[mid] < target){
			lb = mid+1;
		}
		else{
			ub = mid-1;
		}
	
	}
	return 0;
}
