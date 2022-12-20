#include<iostream>

using namespace std;

int main(){
	string name,date,movie,last;
	int id,gear;
	
	cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
	cout<<"?????: ";
	getline(cin, name);
	cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\nFahsai: I think you are an Engineering student. What is your student ID?\n";
	cout<<name<<": ";
	cin>>id;
	cin.ignore();
	gear= (id/10000000)-12;
	cout<<"Fahsai: I think you may be GEAR "<<gear<<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
	cout<<name<<": ";
	getline(cin, movie);
	cout<<"Fahsai: So....which day are you free to go with me?\n";
	cout<<name<<": ";
	getline(cin, date);
	cout<<"Fahsai: "<<date<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
	cout<<name<<": ";
	getline(cin, last);
	cout<<"Fahsai: 555+ see you "<<date<<". Bye Bye \\(^ ^)/";
}