#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			randomTable();
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}
void randomTable(){
	char a='A'-1;
	int b;
	int i = 0;
	b = rand()%26+1;
	a = a+b;
	cout << a;


}