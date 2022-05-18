#include<iostream>

class Student{
public:
	char name[30];
	int grade;
};
Student s[100];
int main(){
		int n;
		std::cin>>n;
		for(int i=0;i<n;i++){
			std::cin>>s[i].name;
			std::cin>>s[i].grade;
		}
		
		for(int i=0;i<n;i++){
			std::cout<<s[i].name<<" ";
			std::cout<<s[i].grade<<"\n";
		}
return 0;
}

