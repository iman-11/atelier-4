#include<iostream>
#include<list>
using namespace std;
void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout <<'\t'<< *it;

}

int main(){
int i;
int a;
 list <int> l;
 for(i=0;i<5;++i){
 	cout<<"enter les valeur:";
 	cin>>a;
 	l.push_back(a) ;
 }
 cout<<"votre liste non trie:";
showlist(l);
l.sort();
cout<<"\nvotre liste trie:";
showlist(l);
} 
