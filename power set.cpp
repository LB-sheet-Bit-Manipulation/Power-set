//LOGIC: 
//Observation
// let char input[]={'a','b','c'}
//  represent by bit  1   1   1

// count ki value(in binary bcoz count ki bits travel karre apan)        ouput

//  000                                                                 {'','',''}
//  001                              									{'c'}
//  010																	{'b'}
//  011																	{'b','c'}
//  100																	{'a'}
//  101																	{'a','c'}
//  110																	{'a','b'}
//  111																	{'a','b','c'}

//take input as character array and represent presence and absence of each element by 1 and 0
//run 2 loops jismese bahar wali loop count ko track karegi and andar wali loop bit by bit count ki value ko traverse karegi
//see code for more clarity

//TC = O(n*2^n)

#include<iostream>
#include<cmath>     //to use pow()

using namespace std;

void PowerSet(char input[],int set_size)
{
	int power_set_size=pow(2,set_size); //2^n
	int counter,j;
	
	for(counter=0;counter<power_set_size;counter++)
	{
		//j is used to traverse bit by bit in count's value.If jth bit in the counter is set, print the jth element in input[]
		//1 (0001) ko baari baari right shift krke & lo to check if that jth bit is set
		for(j=0;j<set_size;j++)
		{
			if((counter & (1<<j))!=0)
			{
				cout<<input[j];
			}
		}
		cout<<"\n";
	}
	
}

int main() 
{ 
	//static input lera hu mai
	char input[]={'a','b','c'};
	int set_size=3;
	
	cout<<"\nSubset is as follows => \n";
	cout<<"\n {";
	
	PowerSet(input,set_size);
	
	cout<<"\n }";
		
return 0;
}
