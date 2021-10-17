#include"TicTacToe.h"
using namespace std;

int main(){
	int n;
	c:
	TicTacToe oyun1;
		cout<<"\n\nTekrar oynamak istiyorsaniz 1'e , istemiyorsaniz 2'ye basiniz...";
		cin>>n;
		if(n==1){//OYUN DEVAM EDER
			goto c;
		}
		else if(n==2){//OYUN BÝTER
			return 0;
		}
		
	return 0;
}
