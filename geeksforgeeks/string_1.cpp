#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int testCase;
	cout<<"Number of test case? "; cin>>testCase;
	for(int i=0;i<testCase;++i) {
		cout<<"\nTEST CASE "<<i+1<<":\n";
		//CODE...

		//initialization
		string str1("first string");	//by raw string
		string str2(str1);			//by another string
		string str3(5,'#');			//by repeat numbers of character
		string str4(str1,6,6);		//from 6th index, get 6 character from str1
		string str5(str2.begin(),str2.begin()+5);	//from 0th index to 5th index
		
		//display
		cout<<str1<<endl;
		cout<<str2<<endl;
		cout<<str3<<endl;
		cout<<str4<<endl;
		cout<<str5<<endl;
		
		//string function
		string str6 = str4;			//assignment operator
		str4.clear();				//delete all charater from string
		cout<<str6.length()<<endl;	//str6.size()	--> return length of string
		cout<<str6.at(2)<<endl;		//str6[2]		--> return a particular character
		cout<<str6.front()<<endl;	//str6[0]		--> first character
		cout<<str6.back()<<endl;		//str6[str6.length()-1]	--> last character
		//c_str() return null terminated char array version of string
		const char *charstr = str6.c_str()
		printf("%s\n",charstr);
		//append()
		str6.append(" extension");	//str6 += " extension"
		str4.append(str6,0,6);		//at 0th index get 6 characters
		cout<<str6<<endl<<str4<<endl;
		//find() return index where pattern is found
		//if pattern is not there -> return predefined constant npos whose value is -1
		if(str6.find(str4) != string::npos)
			cout<<"str4 found in str6 at "<<str6.find(str4)<<"pos"<<endl;
		else
			cout<<"str4 not found in str6"<<endl;
		//substr(a,b) return a substring length b from index a
		cout<<str6.substr(7,3)<<endl;
		cout<<str6.substr(7)<<endl;	//from 7th index till the end of string
		//erase(a,b) deletes b characters from index a
		str6.erase(7,4);
		cout<<str6<<endl;
		str6.erase(str6.begin()+5,str6.end()-3);	//iterator version or erase()
		//replace(a,b,str) replaces b characters from a index by str
		str6 = "This is a examples";
		str6.replace(2,7," ese are test");
		cout<<str6<<endl;
	}
	return 0;
}
