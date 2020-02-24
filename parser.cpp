#include<iostream>
#include<fstream>
#include<sstream>

void write(const std::string& lineToWrite)
{
	std::fstream file("main.cpp",std::ios::in | std::ios::out);
	std::string line;
	bool flag = false;
	if(file.is_open())
	{
	while(getline(file,line))
	{
	if(!line.compare("//PARSER-FLAG!-DO-NOT-EDIT-THIS-PART-OF-THE-CODE"))
	{
		flag = true;
		file.seekp(file.tellg());
		file.seekp(-49,std::ios::cur);
	        file<<"    "<<lineToWrite<<"\n//PARSER-FLAG!-DO-NOT-EDIT-THIS-PART-OF-THE-CODE\n}";
		break;
	}
	}
	if(!flag)
	std::cout<<std::endl<<"E: PARSER FLAG not found"<<std::endl;
	}
	else std::cout<<std::endl<<"E: Trouble opening the file"<<std::endl;
}


int main()
{
	char choice='y';
	std::string name,place,hostel,religion,_choice;
	bool _class,gender,repeater;
	char house;
	while(choice == 'y')
	{
		std::cout<<"$:Enter the name: ";
		std::cin>>name;
		std::cout<<"$:Enter the place: ";
		std::cin>>place;
		std::cout<<"$:Enter the religion: ";
		std::cin>>religion;
		std::cout<<"$:Enter the hostel: ";
		std::cin>>hostel;
		std::cout<<"$:Enter the first character of the house: ";
		std::cin>>house;
		std::cout<<"$:Is this person male?(y/n):";
		std::cin.ignore();
		if(std::cin.get() == 'y')
			gender = true;
		else gender = false;
		std::cout<<"$:Is this person a repeater?(y/n):";
		std::cin.ignore();
		if(std::cin.get() == 'y')
			repeater = true;
		else repeater = false;
		std::cout<<"$:Is this person in CSB?(y/n):";
		std::cin.ignore();
		if(std::cin.get() == 'y')
			_class = true;
		else _class = false;
		std::stringstream strStream;
		strStream<<"mkp(Person(\""<<name<<"\",\""<<hostel<<"\",";
		if(_class)
			strStream<<"true";
		else strStream<<"false";
		strStream<<",";
		if(gender)
			strStream<<"true";
		else strStream<<"false";
		strStream<<",\""<<place<<"\",";
		if(repeater)
			strStream<<"true";
		else strStream<<"false";
		strStream<<",\'"<<house<<"\',\""<<religion<<"\"));";
		std::string line = strStream.str();
		write(line);

		std::cout<<"$:Do you want to continue?(y/n): ";
		std::cin>>choice;
	}
	//system("g++ main.cpp");
	std::cout<<std::endl;
}
