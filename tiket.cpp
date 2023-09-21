#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string movie[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"         ONLINE TEATER TICKET           "<<endl;
    cout<<"      XXI Jogja, Jl. Simanjuntak        "<<endl;
    cout<<"========================================"<<endl;
    cout<<"1. Interstellar				Rp. 50000"<<endl;
    cout<<"2. Oppenheim 				Rp. 55000"<<endl;
    cout<<"3. Tenet          			Rp. 55000"<<endl;
    cout<<"4. Inception    				Rp. 45000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Choose The Available Movie : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=4){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : movie[i]="Interstellar    "; harga[i]=50000; break;
		    		case 2 : movie[i]="Oppenheim       "; harga[i]=55000; break;
		    		case 3 : movie[i]="Tenet           "; harga[i]=55000; break;
		    		case 4 : movie[i]="Inception       "; harga[i]=45000; break;
		    		default : movie[i]="";harga[i]=0;
				}
				
				cout<<"Number of Tickets "<<movie[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Movie Not Choosen"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE XXI Jogja Tickets                            "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Film    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<movie[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	

}