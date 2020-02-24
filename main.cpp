#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

//mkp is for adding new adding people to the working list
//rmp for removing them
//count gives the number of entries in the list currently

using namespace std;

struct Person
{
    string _name;
    string _hostel;
    bool _class;
    bool _gender;
    string _place;
    bool _repeater;
    char _house;
    string _religion;

    Person(string name,string hostel,bool clas,bool gender,string place,bool repeater,char house,string religion):
	    _name(name), _hostel(hostel), _class(clas), _gender(gender), _place(place), _repeater(repeater), _house(house), _religion(religion){}

};

//list of everyone included in the selection
vector<Person> working_list;

//Function to load EVERYONE to the working list
void mkp(Person person)
{
	working_list.push_back(person);
}


char getMaxHouse()
{
	int S=0,R=0,T=0,D=0,A=0;
	
	for(auto x: working_list)
	{
		switch(x._house)
		{
			case 'S':
				++S;	break;
			case 'R':
				++R;	break;
			case 'A':
				++A;	break;
			case 'T':
				++T;	break;
			case 'D':
				++D;	break;
		}
	}

	vector<int> arr = {S,R,A,D,T};
	int max = *max_element(arr.begin(),arr.end());
	
		if(max == S)
			return 'S';
		else if(max == R)
			return 'R';	
		else if(max == T)
			return 'T';	
		else if(max == D)
			return 'D';	
		else 
			return 'A';
	
}

void doHouse(char house)
{
	string _house;
	char choice;

	switch (house)
	{
		case 'S':
			cout<<"Samhara?"<<endl;	
			cin>>choice;
			if(choice == 'y')
			{
				 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house != 'S')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			else
			{
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house == 'S')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}

			break;
			
		case 'R':
			cout<<"Rakshasa?"<<endl;	
			cin>>choice;
			if(choice == 'y')
			{
				 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house != 'R')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			else
			{
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house == 'R')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			break;
		case 'T':
			cout<<"Thandava?"<<endl;	
			cin>>choice;
			if(choice == 'y')
			{
				 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house != 'T')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			else
			{
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house == 'T')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			break;
		case 'D':
			cout<<"Dhruva?"<<endl;	
			cin>>choice;
			if(choice == 'y')
			{
				 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house != 'D')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			else
			{
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house == 'D')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}	
			break;
		case 'A':
			cout<<"Senate?"<<endl;	
			cin>>choice;
			if(choice == 'y')
			{
				 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house != 'A')
						working_list.erase(iterator);
					else
						++iterator;
				}
			}
			else
			{
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
				{
					if(iterator->_house == 'A')
						working_list.erase(iterator);
					else
						++iterator;
				}

			}
			break;
	}
}

void insertData();

int main()
{
    insertData();
    char choice='y';
    while(choice == 'y')
    {

	    cout<<"Is this dude in CSA?"<<endl;
	    cin>>choice;
	    if(choice == 'y')
	    {
		    auto iterator = working_list.begin();
	    while(iterator!=working_list.end())
	    {
		    char choice;
			    if(iterator->_class==true)
				    working_list.erase(iterator);
			    else
				    ++iterator; 
		    } 
	    }
	    else
	    {
		    auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
		    {
			    if(iterator->_class==false)
				    working_list.erase(iterator);
			    else
				    ++iterator;
	        } 
	    }


            cout<<endl<<"Is this a dude?"<<endl;
	    cin>>choice;
	    if(choice == 'y')
	    {
		     auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
	    	    {
	if(iterator->_gender==false)
				    working_list.erase(iterator);
	else
		++iterator;
		    }

	    }
	    else
	    {
	 auto iterator = working_list.begin();
	    while(iterator!=working_list.end()) 
	    	    {
		    if(iterator->_gender==true)
				    working_list.erase(iterator);
		    else
			    ++iterator;
		    }

	    }

	    
	cout<<endl<<"Is He from the house ";
	doHouse(getMaxHouse());
	for(auto iterator : working_list)
		cout<<iterator._name<<endl;
	    
cin>>choice;	

    }

    return 0;
}

void insertData()
{
	//name,hostel,class,gender,place,repeater,house,religion

    mkp(Person("Deon Joshy","Aneeta",false,true,"Ernakulam",false,'T',"christian"));
    mkp(Person("Tom Vempala","Aneeta",false,true,"Kottayam",false,'T',"christian"));
    mkp(Person("Karthika R","Vimala",false,false,"Kottayam",false,'R',"hindu"));
    mkp(Person("Poorab Shenoy","MH",false,true,"Kannur",false,'A',"hindu"));
    mkp(Person("Sahil Sait","Backer",false,true,"Kannur",false,'S',"muslim"));
    mkp(Person("Royce Elson","RR",false,true,"Ernakulam",false,'R',"christian"));
    mkp(Person("Sharat Jacob Jacob","Aneeta",true,true,"Kottayam",false,'S',"christian"));
    mkp(Person("Gayathry ","Nava Jyoti",false,false,"Ernakulam",false,'D',"hindu"));
    mkp(Person("Roy Jose","RR",false,true,"Ernakulam",false,'D',"christian"));
    mkp(Person("Navaneeth S Nair","MH",true,true,"Palakad",false,'T',"hindu"));
    mkp(Person("Vineeth M Vinoy","Aneeta",false,true,"Ernakulam",false,'R',"christian"));
    mkp(Person("Anand V","RR",false,true,"Ernakulam",false,'T',"hindu"));
    mkp(Person("Shimil Abraham","Better Homes",false,true,"Kozhikode",false,'R',"christian"));
    mkp(Person("Syyed Anwar","Some other PG",true,true,"Pathanamthitaa",false,'R',"muslim"));
    mkp(Person("Nayana Vinod","Udaya",true,false,"Kottayam",false,'D',"hindu"));
    mkp(Person("Tony Augustine","Some other PG",true,true,"Ernakulam",true,'S',"christian"));
    mkp(Person("Gokulnath M Prabhu","Some other PG",true,true,"Alapuzha",false,'R',"hindu"));
    mkp(Person("Aleena Baby","YMCA",true,false,"Idukki",true,'D',"christian"));
    mkp(Person("Sidharth S","Some other PG",false,true,"Idukki",true,'S',"hindu"));
    mkp(Person("Tiss Joseph","YMCA",true,false,"Kottayam",false,'D',"christian"));
    mkp(Person("Anjali Rajendran ","Udaya",false,false,"Kannur",false,'D',"hindu"));
    mkp(Person("Shweta Jayan","YMCA",false,false,"Thiruvananthapuram",true,'T',"hindu"));
    mkp(Person("Arun Sojan","'Hosteller' wouldn't really be accurate",true,true,"Kottayam",false,'S',"christian"));
    mkp(Person("Anjali Parapattu","YMCA",true,false,"Ernakulam",false,'A',"christian"));
    mkp(Person("Bharath Raj R","Shamla",false,true,"Kollam",false,'S',"hindu"));
    mkp(Person("Denin Paul","Aneeta",true,true,"Thrissur",false,'T',"christian"));
    mkp(Person("George Sabu","Aneeta",true,true,"Kottayam",false,'T',"christian"));
    mkp(Person("Abiram P","Some other PG",true,true,"Kozhikode",false,'A',"hindu"));
    mkp(Person("Joel Joshua","MH",false,true,"Kasargode",false,'A',"christian"));
    mkp(Person("Neeraj Hari","Some other PG",false,true,"Alapuzha",false,'T',"hindu"));
    mkp(Person("Akhil Prem","Some other PG",true,true,"Kannur",true,'D',"hindu"));
    mkp(Person("Jomey J James","MH",true,true,"Thiruvananthapuram",false,'A',"christian"));
    mkp(Person("Gopika G","Vimala",true,false,"Kottayam",false,'R',"hindu"));
    mkp(Person("Ashish Mathew Philip","MH",true,true,"Thiruvananthapuram",false,'A',"christian"));
    mkp(Person("Sebin Davis","MH",true,true,"Ernakulam",false,'A',"christian"));
    mkp(Person("Abraham Jacob","MH",false,true,"Kannur",false,'A',"christian"));
    mkp(Person("Deepak Sembakam","Aneeta",false,true,"kottayam",true,'R',"christian"));
    mkp(Person("Balu U R","MH",true,true,"Malapuram",true,'A',"hindu"));
    mkp(Person("Vikas P Nambiar","MH",true,true,"Kannur",true,'A',"hindu"));
    mkp(Person("Nikita Menon","Udaya",true,false,"Thrissur",false,'S',"hindu"));
    mkp(Person("Ansaf Muhammed","MH",true,true,"Kannur",true,'A',"muslim"));
    mkp(Person("Jerin Tom","RR",false,true,"Kottayam",false,'T',"christian"));
    mkp(Person("Anjana Sudevan","YMCA",false,false,"Kozhikode",false,'S',"hindu"));
    mkp(Person("Nihitha  S","Nava Jyoti",false,false,"Idukki",false,'T',"hindu"));
    mkp(Person("Meghana O P","Nava Jyoti",true,false,"Ernakulam",false,'T',"hindu"));
    mkp(Person("Jagath Jijo","Sky Blue",true,true,"Kottayam",false,'T',"hindu"));
    mkp(Person("Faheem P P ","Shamla",false,true,"Malapuram",false,'D',"muslim"));
    mkp(Person("Ashwin Girish","MH",false,true,"Pathanamthitaa",false,'A',"hindu"));
    mkp(Person("Sreeram","MH",false,true,"Kozhikode",false,'A',"hindu"));
    mkp(Person("Nithin Antony","Aneeta",true,true,"Alapuzha",false,'T',"christian"));
    mkp(Person("Govind Gayathri","Aneeta",false,true,"Thiruvananthapuram",true,'A',"hindu"));
    mkp(Person("Alen J Ninan","RR",true,true,"Malapuram",false,'S',"christian"));
//PARSER-FLAG
}
