#include <iostream>
#include <string>
#include "Player.h"
#include "other.h"

using namespace std;



int main(){
	cubeboard cube;
	board cube2;
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
	int rep;
	cube.createboard();

	for(i=0;i<81;i++){
		cout<<"///////////////////////////////////"<<endl;
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
			
			rep=cube.checkRep(boardnum,col,row);
			if(rep==1){
				cout<<"celda llena perdio turno."<<endl;
			}else{
				cube.addvalue(row,col,boardnum,play1.symbol);
				cube.show();
				
			}
			win=cube.checkboard(play1.symbol);
			if(win==111){
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
			rep=cube.checkRep(boardnum,col,row);
			if(rep==1){
				cout<<"celda llena perdio turno."<<endl;
			}else{
				
			cube.checkRep(boardnum,col,row);
			cube.addvalue(row,col,boardnum,play2.symbol);
			cube.show();
			}
			win=cube.checkboard(play2.symbol);
			if(win==111){
				cout<<"Juego terminado"<<endl;
				cout<<"¡El jugador :"<<play2.name<<" Es el ganador"<<endl;
				return 0;
			}
			
		}
	}

	return 0;
}

