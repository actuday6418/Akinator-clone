#include<iostream>
#include<fstream>

int main()
{
	std::fstream file("mn.cpp",std::ios::in | std::ios::out);
	std::string line;
	bool flag = false;
	if(file.is_open())
	{
	while(getline(file,line))
	{
	if(!line.compare("//PARSER-FLAG"))
	{
		flag = true;
		file.seekp(file.tellg());
		file.seekp(-14,std::ios::cur);
	        file<<"//test\n//PARSER-FLAG\n}";
		system("g++ mn.cpp");
		break;
	}
	}
	if(!flag)
	std::cout<<std::endl<<"E: PARSER FLAG not found";
	}
	else std::cout<<std::endl<<"E: Trouble opening the file";
std::cout<<std::endl;
}
