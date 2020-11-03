#include <iostream>

using namespace std;

string capturar(){
	string entrada;
	cout<<"Entrada: ";
	cin>>entrada;
	if(entrada=="int" 
		|| entrada=="char" 
		|| entrada=="short" 
		|| entrada=="float" 
		|| entrada=="double" 
		|| entrada=="long"){
		return entrada;
	}	
	else
		return "0";
}

void imprimir(string entrada){
	if(entrada=="int"){
		cout<<"Bytes: "<<sizeof(int)<<endl<<endl;
	}
	
	else if(entrada=="char"){
		cout<<"Bytes: "<<sizeof(char)<<endl<<endl;
	}
	
	else if(entrada=="short"){
		cout<<"Bytes: "<<sizeof(short)<<endl<<endl;
	}
	
	else if(entrada=="float"){
		cout<<"Bytes: "<<sizeof(float)<<endl<<endl;
	}
	
	else if(entrada=="double"){
		cout<<"Bytes: "<<sizeof(double)<<endl<<endl;
	}
	
	else{
		cout<<"Bytes: "<<sizeof(long)<<endl<<endl;
	}
}

int main() {
	int f=1;
	string dato;
	while(f==1){
		dato=capturar();
	    if(dato!="0"){
	    	imprimir(dato);
		}
		else{
			f=0;
		}
	}
	cout<<endl<<"FIN DEL PROGRAMA"<<endl;
    

    return 0;
}
