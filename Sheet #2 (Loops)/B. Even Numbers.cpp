#include<iostream>
using namespace std;
int main(){
 
  long long num ;
  cin>>num;
		   
		   for(int i =1; i <= num;i++)
			   if(i %2==0)
		   		cout<<i<<endl;		
			   else if(num <2)
		   		cout<<-1<<endl;
	
	
	return 0;
}