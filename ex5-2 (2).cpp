#include<iostream>
#include<set>
using namespace std;
  bool recherche(set <int> s,int a){
	set<int>::iterator it;
		for (it= s.begin(); it != s.end(); ++it){
			if(a==*it) {
			
			  return 1;}
			
			
		}	
	
	return 0;
};


int main(){ 
int i;
int b;
	set<int>s2;
s2.insert(4);
s2.insert(8);
s2.insert(6);
s2.insert(2);
s2.insert(5);
cout<<"s2:";
	set<int>::iterator itr;
	for (itr = s2.begin(); itr != s2.end(); itr++)
{
cout << *itr<<" ";
}
cout<<"\n enter nombre a chercher: ";
cin>>b;
cout<<recherche(s2,b);
cout<<endl;
	

	

	
}
