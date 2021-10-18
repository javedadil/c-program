#include <iostream>
using namespace std;


void welcome(){
     	cout<<"Welcome"<<endl;
		cout<<"Press 0 to Cancel"<<endl;
		cout<<"Press 1 For Top Offer"<<endl;
		cout<<"Press 2 For All In On Offers"<<endl;
		cout<<"Press 3 For super data offers"<<endl;
		cout<<"Press 4 Super Social And Sms Offers"<<endl;
		cout<<"Press 5 For Make Your Own Offer"<<endl;
		cout<<"Press 6 For My Account"<<endl;
		cout<<"Press 7 For Vas"<<endl;
		cout<<"Press 8 For Jazztunes"<<endl;
		cout<<"Press 9 For jazz_on_whatsapp"<<endl;
		cout<<"Press 10 For Tax certificate"<<endl;
}
void top(){
	cout << "Enter Your Choice\n";
	   cout << "\t1. 1Hour 1GB @Rs.9\n";
        cout << "\t2. Day Offer @Rs.14\n";
        cout << "\t3. 7Day Social- WA.FB.IMO & Youtube 5GB\n";
        cout << "\t4. Weekly All Network @Rs.170\n";
        cout << "\t5. 7Day 24GB @Rs.275\n";
        cout << "\t6. Monthly Super Duper @Rs.621\n";
        cout<<" \t7. Press 0 to Cancel"<<endl;
	
}
void sub(){
	cout<<"1 for Subscribe"<<endl;
	cout<<"0 for back"<<endl;
}

int main(){
	
		while(true){
			
			int a;
			welcome();
			cin>>a;
		
			if(a==1){
				 while(true){
	        		top();
		  			 int offer;
	       		 	 cin>>offer;
	          
			   		 if (offer==1){
	  			sub();
	  			
	  			
	  			while(true){
	  				int sucs;
	  				cin>>sucs;
	  				if (sucs==1){
	  					cout<<"Offer Subscribe Successfully";
	  				}
	  				else if (sucs==0){
	  					sub();
	  				}
	  				else{
	  					cout<<"Invalid";
	  				}
	  			}
	  			
        	}
	        	
	     			else if(offer==0){
        	break;
        }	
	     	   			else
        	cout<<"invalid";
        }
							}
       	
	  }
	  
        
	}
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 else if (a==2){
	
	}
	 else if (a==3){
	
	}
	 else if (a==4){
		
	}
	 else if (a==5){
	
	}
	else if (a==6){
	
	}
	else if (a==7){
	
	}
	else if (a==8){
	
	}
	else if (a==9){
	
	}
	else if (a==10){
	
	}
			else if (a==0){
		break;
	}
	else{
		cout<<"invalid";
	}
		
		
		
	}

	


}
