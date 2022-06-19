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
		int checkboard();
};
class board{
	public:
		char** board= new char*[3];
		void createboard();
		void addvalue(int row,int col,char player);
		void show();
		int checkboard();
};
class player{
	public:
		char symbol;
		string name;
};


int main(){
	cubeboard cube;
	player play1;
	player play2;
	play1.symbol='O';
	play2.symbol='X';
	play1.name="P1";
	play2.name="P2";
	int row;
	int col;
	int boardnum;
	int win;
	int i;
	cube.createboard();
	for(i=0;i<9;i++){
		if(i%2==0){
			cout<<"Player: "<<play1.name<<endl;
			cout<<"Choose board"<<endl;
			cin>>boardnum;
			while(boardnum>3||boardnum<1){
				cout<<"Board number should be 1,2 or 3"<<endl;
				cin>>boardnum;
			}
			cout<<"Choose column"<<endl;
			cin>>col;
			while(col>3||col<1){
				cout<<"Column number should be 1,2 or 3"<<endl;
				cin>>col;
			}
			cout<<"Choose row"<<endl;
			cin>>row;
			while(row>3||row<1){
				cout<<"Row number should be 1,2 or 3"<<endl;
				cin>>row;
			}
			cube.addvalue(row,col,boardnum,play1.symbol);
			cube.show();
			win=cube.checkboard();
			if(win==1){
				cout<<"Game over"<<endl;
				cout<<"Player: "<<play1.name<<" wins"<<endl;
				return 0;
			}
		}
		else{
			cout<<"Player: "<<play2.name<<endl;
			cout<<"Choose board"<<endl;
			cin>>boardnum;
			while(boardnum>3||boardnum<1){
				cout<<"Board number should be 1,2 or 3"<<endl;
				cin>>boardnum;
			}
			cout<<"Choose column"<<endl;
			cin>>col;
			while(col>3||col<1){
				cout<<"Column number should be 1,2 or 3"<<endl;
				cin>>col;
			}
			cout<<"Choose row"<<endl;
			cin>>row;
			while(row>3||row<1){
				cout<<"Row number should be 1,2 or 3"<<endl;
				cin>>row;
			}
			cube.addvalue(row,col,boardnum,play2.symbol);
			cube.show();
			win=cube.checkboard();
			if(win==1){
				cout<<"Game over"<<endl;
				cout<<"Player: "<<play2.name<<" wins"<<endl;
				return 0;
			}
		}
	}
	if(i==9){
		cout<<"Game over"<<endl;
		cout<<"It's a tie"<<endl;
	}
	return 0;
}

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
int cubeboard::checkboard(){
	int i,j,k;
	int num;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				if(board[i][j][k]=='*'){
					num++;
				}
			}
		}
	}
	if(num==0){
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
