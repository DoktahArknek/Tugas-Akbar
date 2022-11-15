//Tugas membuat fungsi do-while dan if else

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main (){
	int pilih, pil;
	char ulang;
	do
	{
	   cout <<"-----------Program Memilih Pacar(Khusus Bujang&Gadih)-----------"<<endl;
	   cout <<"----------------------------------------------------------"<<endl;
	   cout <<"-------------Pilihan Pacar Yang Masih Single--------------"<<endl;
	   cout <<"1.Khusus Bujang"<<endl;
	   cout <<"2.Khusus Gadih"<<endl;
	   cout <<"----------------------------------------------------------"<<endl;
	   cout <<"Pilih berdasarkan gendermu :"<<endl;
	   cin>>pilih;
	   if(pilih==1){
	   cout<<"1.Miku\n2.Nino\n3.Itsuki\n4.Ichika\n5.Yotsuba"<<endl;
	   cout<<"Pilih pacarmu!"<<endl;
	   cin>>pil;
	   switch(pil){
		   case 1:
		   	cout<<"Kamu memilih Miku sebagai pacarmu"<<endl;
		   	break;
		   case 2:
		   	cout<<"Kamu memilih Nino sebagai pacarmu"<<endl;
		   	break;
		   case 3:
		   	cout<<"Kamu memilih Itsuki sebagai pacarmu"<<endl;
		   	break;
		   case 4:
		   	cout<<"Kamu memilih Ichika sebagai pacarmu"<<endl;
		   	break;
		   case 5:
		    cout<<"Kamu memilih Yotsuba sebagai pacarmu"<<endl;
		    break;
		   default:
		   	cout<<"Ceweknya sudah taken! Jangan jadi pelakor!"<<endl;
	     }
	   }
	   if(pilih==2){
	   cout<<"1.Steven\n2.Jungkok\n3.Fredie\n4.Andre\n5.Lee"<<endl;
       cout<<"Pilih pacarmu!"<<endl;
       cin>>pil;
	   switch(pil){
		   case 1:
		   	cout<<"Kamu memilih Steven sebagai pacarmu"<<endl;
		   	break;
		   case 2:
		   	cout<<"Kamu memilih Jungkok sebagai pacarmu"<<endl;
		   	break;
		   case 3:
		   	cout<<"Kamu memilih Fredie sebagai pacarmu"<<endl;
		   	break;
		   case 4:
		   	cout<<"Kamu memilih Andre sebagai pacarmu"<<endl;
		   	break;
		   case 5:
		    cout<<"Kamu memilih Lee sebagai pacarmu"<<endl;
		    break;
		   default:
		   	cout<<"Cowoknya sudah taken! Jangan jadi pelakor!"<<endl;
	     }
	   }
	   cout <<endl;
	   cout <<"Tidak puas dengan pacar anda? Mau pilih yang lain? (y/t)? ";
       cin >>ulang;
       cout <<endl;
   }
       while (ulang!= 't');
       cout << "Semoga langgeng xixixixi...";
       cout << endl;
       return 0;
}
