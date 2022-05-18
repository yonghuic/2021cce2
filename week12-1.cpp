#include<stdio.h>
#include<vector>
#include<algorithm>

class Student {
public:
	char name[30];
	int grade;
};

bool compare( Student a, Student b) {
	return a.grade>b.grade;
}
int main(){
	int n;
	scanf("%d", &n);
	std::vector<Student> s(n);
	for(int i=0;i<n;i++){
		scanf("%s %d", s[i].name, &s[i].grade);
	}
	
	std::stable_sort(s.begin(), s.end(), compare);
	
	for(int i=0;i<n;i++){
		printf("%s %d\n", s[i].name, s[i].grade);
	}
}
