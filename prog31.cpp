// Program 31

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s1[20]="Happy";
	char s2[]="New Year";
	char s3[40]="";
	
	cout<<"s1 = "<< s1 <<"\ns2 = "<< s2;
	cout<<"\nstrcat(s1, s2) = "<<strcat(s1,s2);
	cout<<"\nstrncat(s3, s1, 6) = "<<strncat(s3, s1, 6);
	cout<<"\nstrcat(s3, s1) ="<<strcat(s3, s1)<<endl;
	 
	return 0;
	
}
