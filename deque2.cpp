#include <iostream>
#include <deque>
#include <string>
using namespace std;

class Person {
public:
    string name;
   string num;
   int score;

    Person(string n, string a,int s) : name(n), num(a) ,score(s){}
};

int main() {
	int b[3];
	for(int i=0;i<3;i++){
		int a[5],max,min,sum;
			for(int i=0;i<5;i++)
			{cin>>a[i];}
		min=a[0];
		max=a[0];
		sum=a[0];
		for(int i=1;i<5;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
			sum+=a[i];
			
			
		}
		b[i]=(sum-min-max)/3;
		
	}
	
	
    deque<Person> characters;

    characters.push_back(Person("����", "1",b[0]));
    characters.push_back(Person("����", "2",b[1]));
    characters.push_back(Person("����", "3",b[2]));
    

    for (const auto& character : characters) {
        cout << "������" << character.name << " ��ţ�" << character.num <<" ������"<< character.score<<endl;
    }

    return 0;
}
