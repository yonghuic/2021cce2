#include<iostream>
using namespace std;

class Student{
public:
	char name[30];
	int grade;
};
Student s[100];
int main(){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s[i].name;
			cin>>s[i].grade;
		}
		
		for(int i=0;i<n;i++){
			cout<<s[i].name<<" ";
			cout<<s[i].grade<<endl;
		}
return 0;
}
