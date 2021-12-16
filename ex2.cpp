 #include <iostream>
using namespace std;


int main()
{
     string a;
    string debut;

    cout << "entrer une chaine de caracteres: \n";
    cin >> a;
    cout << a << " represent la date du "<<a.substr(0,2);
    debut = a.substr(2,2);

   if(debut =="01"){
   	cout<<"janvier";
   }   
else if(debut =="02"){
   	cout<<"février";
   }   
else if(debut =="03"){
   	cout<<"mars";
   }   
else if(debut =="04"){
   	cout<<"avril";
   }   
else if(debut =="05"){
   	cout<<"mai";
   }   
else if(debut =="06"){
   	cout<<"juin";
   }
else if(debut =="07"){
   	cout<<"juillet ";
   }
else if(debut =="08"){
   	cout<<"août ";
   }
else if(debut =="09"){
   	cout<<"septembre ";
   }
else if(debut =="10"){
   	cout<<"octobre";
   }    
else if(debut =="11"){
   	cout<<"novembre ";
   }
else if(debut =="12"){
   	cout<<"decembre ";
   } 
  cout<<a.substr(4,4)<<" a "<<a.substr(8,2)<<":"<<a.substr(10,2);

   
}
