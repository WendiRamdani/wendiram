/*	TUGAS ARRAY
*/	

#include <iostream>

using namespace std;

int main(){
	//KAMUS
	
	char hrf[4]; 
	char C; 
	int D=0, sum=0;
	//ALGORITMA
	
	while(D<= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>hrf[D];  
			D++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<hrf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu \n";
	cin>>C;
	
	for(int D=0; D<=3; D++ ){
	if(C == hrf[D]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<C<<" : sebanyak: "<<sum;
	
}
