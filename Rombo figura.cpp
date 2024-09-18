#include <iostream>
using namespace std;

void ejerciciorefuerzo(){
	int numero;
	
	cout<<"** Dibujar un rombo **" <<endl;
	cout<<"Ingrese un numero positivo impar mayor a 1: ";
	cin>> numero;
	
	for (int i=0; i<numero/2; i++ ){
		
		for(int l=(numero/2 +1)- i; l>1; l--) cout<<" ";		
		for(int j=0; j<2*i +1; j++) cout<<"*";
				
		for(int k=(numero/2 +1) -i; k>1; k--) cout<<" ";
		
		cout<<endl;
				
	}
		
	for(int i=0; i<numero/2; i++ ){
		
		for(int l=0; l<i +1; l++) cout<<" ";
		for(int j=numero; j>2*(i+1); j--) cout<<"+";
		for(int k=0; k<i +1; k++) cout<<" ";
		
		cout<<endl;
	}
	
			
}

int main(){

	ejerciciorefuerzo();
	
	return 0;
}

