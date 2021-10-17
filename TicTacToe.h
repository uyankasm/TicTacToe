#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
 
class TicTacToe{
	public:	
		int kontrol();
		void ekran();
		void analizekran();
		void analiz();
		void harfsecimi(int i,int t);
		TicTacToe();
		
		private:
			char square[17]= {'o','a','b','c','d','e','f','g','h','i','k','l','m','n','t','p','r'};
			char tekrar[17]={};
			char harf;
			int team,p,toplam,xtoplam,otoplam,okose,xkose,r=1;
			float xyuzde,oyuzde,kosex,koseo;	
};
