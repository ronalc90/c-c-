#include <iostream>
#include <string>
using namespace std;

class cubeboard{
	public:
		char*** board= new char**[3];
		char*** newboard= new char**[3];
		void createboard();
		void addvalue(int row,int col,int boardnum,char player);
		void show();
		int checkboard(char);
		int checkRep(int,int,int);

};
class board{
	public:
		char** board= new char*[3];
		void createboard();
		void addvalue(int row,int col,char player);
		void show();
		int checkboard();

		
};


void cubeboard::createboard(){
	int i,j,k;
	for(i=0;i<3;i++){
		board[i]= new char*[3];
		for(j=0;j<3;j++){
			board[i][j]= new char[3];
			for(k=0;k<3;k++){
				board[i][j][k]='*';
			}
		}
	}
}
void cubeboard::addvalue(int row,int col,int boardnum,char player){
	board[boardnum-1][row-1][col-1]=player;
}
void cubeboard::show(){
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				cout<<board[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}

//////////////////////////////
int cubeboard::checkboard(char player){
	int i,j,k;
	int num=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				if(board[i][j][k]==player){
					num++;
				}
			}
		if(num==3){
		return 111;
	}
	}
		if(num==3){
		return 111;
	}
	}
	if(num==3){
		return 111;
	}
}

/////////////////////////////


int cubeboard::checkRep(int row,int col,int boardnum){
	char valor=board[boardnum-1][row-1][col-1];

	if(valor!='*'){
		return 1;
	}
}



void board::createboard(){
	int i,j;
	for(i=0;i<3;i++){
		board[i]= new char [3];
		for(j=0;j<3;j++){
			board[i][j]='*';
		}
	}
}
void board::addvalue(int row,int col,char player){
	board[row-1][col-1]=player;
}
void board::show(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
int board::checkboard(){
	int i,j;
	int num;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(board[i][j]=='*'){
				num++;
			}
		}
	}
	if(num==0){
		return 1;
	}
}




