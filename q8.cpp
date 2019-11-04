// DELHI'S ODD EVEN
// Due to growing Traffic Problem Kejriwal wants to devise a new scheme. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

// Input Format:
// The first line contains N , then N integers follow each denoting the number of the car.

// Constraints:
// N<=1000 Car No >=0 && Car No <=1000000000

// Output Format
// N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !

// Sample Input
// 2
// 12345
// 12134
// Sample Output
// Yes
//NO 
#include<iostream>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++){
		int cno;
		cin>>cno;
		int sume=0;
		int sumo=0;
		while(cno!=0){
			int ld=cno%10;
			if(ld%2==0){
				sume=sume+ld;
			}
			else{
				sumo=sumo+ld;
			}
			cno=cno/10;
		}
		if(sume%4==0 || sumo%3==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}