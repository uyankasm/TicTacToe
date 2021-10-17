#include"TicTacToe.h"
using namespace std;

void TicTacToe::ekran(){//OYUN PANELÝNÝ EKRANA YAZDIRIYORUZ
	
	system("cls");
	cout<<"\n*****************************Tic Tac Toe*****************************";
	cout<<"\n\n\n------------TEAM-1------------||-----------TEAM-2---------";
    cout << "\nPlayer 1 (X)  -  Player 3 (x) || Player 2 (O) - Player 4 (o)" << endl << endl;
    cout << endl;
    
    cout << "     |     |     |     |" << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3]<<"  |  "<<square[4]<<"  |  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;
    cout << "  " << square[5] << "  |  " << square[6] << "  |  " << square[7]<<"  |  "<<square[8]<<"  |  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;
    cout << "  " << square[9] << "  |  "<< square[10] << "  |  " << square[11]<<"  |  "<<square[12]<<"  |  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;
    cout << "  " << square[13] << "  |  " << square[14] << "  |  " <<square[15]<<"  |  "<<square[16]<<"  |  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout<<"\n\n";
}

void TicTacToe::analizekran(){
	cout<<"\n\n_______ANALYSIS_______";
	cout << endl;
	cout << "     |     |     |     |" << endl;
    cout << "TEAM" << " |" <<"%ROW"<< " |" << "%COL"<<" |"<<"%DIA"<<" |"<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;
    cout << "  " << "Xx" << " | " <<xyuzde << "|" << xyuzde<<" |"<<kosex<<" |  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout << "     |     |     |     |" << endl;
    cout << "  " << "Oo" << " | "<<oyuzde << "|" <<oyuzde<<" | "<<koseo<<"|  "<< endl;
    cout << "_____|_____|_____|_____|" << endl;
    cout<<"\n\n";	
}

void TicTacToe::harfsecimi(int b,int p){//OYNAYAN OYUNCUYA GÖRE HARF ATAMASINI YAPIYORUZ
	if(b==1){
		square[p]='X';
	}
	else if(b==2){
		square[p]='O';
	}
	else if(b==3){
		square[p]='x';
	}
	else if(b==4){
		square[p]='o';
	}
}


void TicTacToe::analiz(){
		cout.precision(3);
	xtoplam=0,otoplam=0,okose=0,xkose=0;
	int b=1;
	
	for(b;b<17;b++){//TOPLAM KAÇ GÝRÝÞ YAPILDIÐINI HESAPLIYORUZ
	if(square[b]=='X'||square[b]=='x'||square[b]=='O'||square[b]=='o'){
			toplam++;
		}
	}
	
	b=1;
	for(b;b<17;b++){//KAÇ TANE "X" VE "O" OLDUÐUNU HESAPLIYORUZ
		if(square[b]=='X'||square[b]=='x'){
				xtoplam++;
		}
			 else if(square[b]=='O'||square[b]=='o'){
				otoplam++;
			}
	}
	
	b=1;
	while(b<17){//KÖÞEGENDE KAÇ TANE X VE O OLDUÐUNU HESAPLIYORUZ
		if(square[b]=='X'||square[b]=='x'){
			xkose++;
		}
		else if(square[b]=='O'||square[b]=='o'){
			okose++;
		}
		b+=5;
	}
	
	xyuzde=(xtoplam*1.0/toplam*1.0)*100;//TEAM 1'ÝN SATIR VE SÜTUN ANALÝZÝ
	oyuzde=(otoplam*1.0/toplam*1.0)*100;//TEAM 2'ÝN SATIR VE SÜTUN ANALÝZÝ
	kosex=(xkose*1.0/toplam*1.0)*100;//TEAM 1'ÝN KÖÞEGEN ANALÝZÝ
	koseo=(okose*1.0/toplam*1.0)*100;//TEAM 2'ÝN KÖÞEGEN ANALÝZÝ
}


TicTacToe::TicTacToe(){//DC
	int b=1,a,w=1,y=1;
	char secim;
	do{
	ekran();
	r++;
	u:
	y:
	if(b==5){
		b=1;
	}
		cout<<"\nPlayer"<<b<<" istediginiz alani seciniz:";//KULLANICI OYNAMAK ÝSTEDÝÐÝ ALANI SEÇÝYOR
		cin>>secim;
		//OLMAYAN BÝR ALANI MI SEÇÝYOR KONTROL EDÝYORUZ
		if(secim!='a'&& secim!='b'&& secim!='c'&& secim!='d'&& secim!='e'&& secim!='f'&& secim!='g'&& secim!='h'&& secim!='i'&& secim!='k'&& secim!='l'&& secim!='m'&& secim!='n'&& secim!='t'&& secim!='p'&& secim!='r'){
			cout<<"Boyle bir alan yok.Lutfen tekrar seciniz:";
			goto u;
		}
		
		//DAHA ÖNCE GÝRÝLEN BÝR ALAN OLUP OLMADIÐINI KONTROL EDÝYORUZ
		if(tekrar[1]==secim|| tekrar[2]==secim|| tekrar[3]==secim|| tekrar[4]==secim|| tekrar[5]==secim&& tekrar[6]==secim&& tekrar[7]==secim&& tekrar[8]==secim&& tekrar[9]==secim&& tekrar[10]==secim&& tekrar[11]==secim&& tekrar[12]==secim&& tekrar[13]==secim&& tekrar[14]==secim&& tekrar[15]==secim&& tekrar[16]==secim){
			cout<<"Sectiginiz alani tekrar secemezsiniz.Lutfen yeni bir alan seciniz:";
			goto y;
		}
		tekrar[w]=secim;
		
		for(int x=0;x<17;x++){//KULLANICININ GÝRDÝÐÝ HARFÝN KAÇINCI SIRADA OLDUÐUNU BULUYORUZ
			if(square[x]==secim){
				p=x;
			}
		}
		harfsecimi(b,p);
    		a=kontrol();//KAZANAN OLUP OLMADIÐINI KONTROL EDÝYORUZ
   			b++;
   			w++;		
}while(a==-1);	
 b++;
 
 if(a==1){//KAZANAN TAKIMI VE ANALÝZÝ EKRANA YAZDIRIYORUZ
 	ekran();
 	cout<<"\n\n**********************TEAM "<<team<<" KAZANDI**********************";
 	analiz();
 	analizekran();
 }
 else if(a==2){
 	ekran();
 	cout<<"\n\n**********************OYUN BERABERE BITTI*************************";
 	analiz();
 	analizekran();
 }
}


int TicTacToe::kontrol(){//KAZANAN VAR MI KONTROL EDÝYORUZ
	int k=1,l=1,v=1;
	while(k<16){//SATIRLARI KONTROL EDÝYORUZ
		if(square[k]=='X'&&square[k+1]=='x'&&square[k+2]=='x'&&square[k+3]=='X'){
			team=1;
			return 1;
		}
		else if(square[k]=='O'&&square[k+1]=='o'&&square[k+2]=='o'&&square[k+3]=='O'){
			team=2;
			return 1;
		}
		else if(square[k]=='o'&&square[k+1]=='O'&&square[k+2]=='O'&&square[k+3]=='o'){
			team=2;
			return 1;
		}
		else if(square[k]=='x'&&square[k+1]=='X'&&square[k+2]=='X'&&square[k+3]=='x'){
			team=2;
			return 1;
		}
		else if(square[k]=='X'&&square[k+1]=='X'&&square[k+2]=='x'&&square[k+3]=='x'){
			team=1;
			return 1;
		}
		else if(square[k]=='O'&&square[k+1]=='O'&&square[k+2]=='o'&&square[k+3]=='o'){
			team=2;
			return 1;
		}
		else if(square[k]=='o'&&square[k+1]=='o'&&square[k+2]=='O'&&square[k+3]=='O'){
			team=2;
			return 1;
		}
		else if(square[k]=='x'&&square[k+1]=='x'&&square[k+2]=='X'&&square[k+3]=='X'){
			team=1;
			return 1;
		}
		else{
		k+=4;
	}
	}
	
	while(l<5){//SÜTUNLARI KONTROL EDÝYORUZ
		if(square[l]=='X'&&square[l+4]=='x'&&square[l+8]=='x'&&square[l+12]=='X'){
			team=1;
			return 1;
		}
		else if(square[l]=='O'&&square[l+4]=='o'&&square[l+8]=='o'&&square[l+12]=='O'){
			team=2;
			return 1;
		}
		else if(square[l]=='X'&&square[l+4]=='X'&&square[l+8]=='x'&&square[l+12]=='x'){
			team=1;
			return 1;
		}
		else if(square[l]=='o'&&square[l+4]=='O'&&square[l+8]=='O'&&square[l+12]=='o'){
			team=2;
			return 1;
		}
		else if(square[l]=='x'&&square[l+4]=='X'&&square[l+8]=='X'&&square[l+12]=='x'){
			team=1;
			return 1;
		}
		else if(square[l]=='O'&&square[l+4]=='O'&&square[l+8]=='o'&&square[l+12]=='o'){
			team=2;
			return 1;
		}
		else if(square[l]=='o'&&square[l+4]=='o'&&square[l+8]=='O'&&square[l+12]=='O'){
			team=2;
			return 1;
		}
		else if(square[l]=='x'&&square[l+4]=='x'&&square[l+8]=='X'&&square[l+12]=='X'){
			team=1;
			return 1;
		}
		else{
			l++;
		}	
	}
	
	while(v<4){//KÖÞEGENÝ KONTROL EDÝYOR
		if(square[v]=='X'&&square[v+5]=='x'&&square[v+10]=='x'&&square[v+15]=='X'){
			team=1;
			return 1;
		}
		else if(square[v]=='O'&&square[v+5]=='o'&&square[v+10]=='o'&&square[v+15]=='O'){
			team=2;
			return 1;
		}
		else if(square[v]=='o'&&square[v+5]=='O'&&square[v+10]=='O'&&square[v+15]=='o'){
			team=2;
			return 1;
		}
		else if(square[v]=='x'&&square[v+5]=='X'&&square[v+10]=='X'&&square[v+15]=='x'){
			team=2;
			return 1;
		}
		else if(square[v]=='X'&&square[v+5]=='X'&&square[v+10]=='x'&&square[v+15]=='x'){
			team=1;
			return 1;
		}
		else if(square[v]=='O'&&square[k+5]=='O'&&square[v+10]=='o'&&square[v+15]=='o'){
			team=2;
			return 1;
		}
		else if(square[v]=='o'&&square[v+5]=='o'&&square[v+10]=='O'&&square[v+15]=='O'){
			team=2;
			return 1;
		}
		else if(square[v]=='x'&&square[v+5]=='x'&&square[v+10]=='X'&&square[v+15]=='X'){
			team=1;
			return 1;
		}
		else{
			v++;
		}
	}
	if(r==17){//BERABERLÝÐÝ KONTROL EDÝYORUZ
		return 2;
	}
	
	return -1;//OYUN DEVAM EDER
}
