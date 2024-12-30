/*
Name: ANGELA NGU XIN YI (A24CS0226)
	  TOH SHEE THONG (A24CS0309)
Date: 23.12.2024
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int carModel()
{
	int option;
	while(1)
	{
		cout<<setw(40)<<right<<"Perodua Car Loan Calculator"<<endl;
		cout<<setw(41)<<"(OTR Price Without Insurance)"<<endl;
		cout<<setw(35)<<"1. Select Your Ride"<<endl;
		cout<<"Select Car Model"<<endl;
		cout<<"1. Ativa"<<endl;
		cout<<"2. Aruz"<<endl;
		cout<<"3. Bezza"<<endl;
		cout<<"4. Myvi"<<endl;
		cout<<"5. Alza"<<endl;
		cout<<"6. Axia"<<endl;
		cout<<"Enter the model you want to calculate (1-6): ";
		cin>>option;
		cout<<endl;
		
		if ((option==1)||(option==2)||(option==3)||(option==4)||(option==5)||(option==6))
		{                                                                 
			break;
		}
		
		cout<<"Invalid option. Please enter 1-6 only."<<endl<<endl;
	}
	
	return option;
}

int carLocation()
{
	int location;
	while(1)
	{
		cout<<"Select Location"<<endl;
		cout<<"1. Peninsular Malaysia"<<endl;
		cout<<"2. East Malaysia"<<endl;
		cout<<"3. Labuan"<<endl;
		cout<<"4. Langkawi"<<endl;
		cout<<"Enter the location (1-4): ";
		cin>>location;
		
		if ((location==1)||(location==2)||(location==3)||(location==4))
		{                                                                 
			break;
		}
		
		cout<<"Invalid option. Please enter 1-4 only."<<endl<<endl;
	}
	return location;
}

string carRegion(int location)
{
	string region;
	switch (location)
	{
		case 1: region = "Peninsular Malaysia";
				break;
		case 2: region = "East Malaysia";
				break;
		case 3: region = "Labuan";
				break;
		case 4: region = "Langkawi";
				break;
	}
	return region;
}

int AtivaPrice()
{
	int variants, colours, location, price;
	string model, variant, colour, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Ativa 1.0L X TURBO(CVT)"<<endl;
		cout<<"2. Ativa 1.0L H TURBO(CVT)"<<endl;
		cout<<"3. Ativa 1.0L AV TURBO(CVT)"<<endl;
		cout<<"Enter the car variant (1-3): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2)||(variants==3))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-3 only."<<endl<<endl;
	}
	
	while(1)
	{
		cout<<"Select Car Colour"<<endl;
		if(variants == 1)
		{
			variant = "Ativa 1.0L X TURBO(CVT)";
			cout<<"1. Metallic"<<endl;
			cout<<"Enter the car colour (1): ";
			cin>>colours;
				
			if(colours==1)
			{
				break;
			}
				
			cout<<"Invalid choice. Please enter 1 only."<<endl<<endl;	
		}
		else if(variants == 2)
		{
			variant = "Ativa 1.0L H TURBO(CVT)";
			cout<<"1. Metallic"<<endl;
			cout<<"2. Special Metallic"<<endl;
			cout<<"Enter the car colour (1-2): ";
				
			cin>>colours;
					
			if((colours==1)||(colours==2))
			{
				break;
			}
					
			cout<<"Invalid choice. Please enter 1-2 only."<<endl<<endl;
		}
		else if(variants == 3)
		{
			variant = "Ativa 1.0L AV TURBO(CVT)";
			cout<<"1. Metallic"<<endl;
			cout<<"2. Special Metallic"<<endl;
			cout<<"3. 2-Tone Special Metallic (Balck Roof)"<<endl;
			cout<<"Enter the car colour (1-3): ";
				
			cin>>colours;
					
			if((colours==1)||(colours==2)||(colours==3))
			{
				break;
			}
					
			cout<<"Invalid choice. Please enter 1-3 only."<<endl<<endl;	
		}

	}
	switch (colours)
	{
		case 1: colour = "Metallic";
				break;
		case 2: colour = "Special Metallic";
				break;
		case 3: colour = "2-Tone Special Metallic (Black Roof)";
				break;
	}
	cout<<endl;
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Avita"<<endl;
	if (variants==1)
	{      
		if (colours==1)                       
		{
			switch (location)
			{
				case 1: price = 62500;
						break;
				case 2: price = 64500;
						break;
				case 3: price = 59980;
						break;
				case 4: price = 58650;
						break;
			}
		}
	}
	else if (variants==2)
	{      
		if (colours==1)                       
		{
			switch (location)
			{
				case 1: price = 67300;
						break;
				case 2: price = 69300;
						break;
				case 3: price = 64410;
						break;
				case 4: price = 63080;
						break;
			}
		}
		else if (colours==2)                       
		{
			switch (location)
			{
				case 1: price = 67800;
						break;
				case 2: price = 69800;
						break;
				case 3: price = 64900;
						break;
				case 4: price = 63570;
						break;
			}
		}
	}	
	else if (variants==3)
	{      
		if (colours==1)                       
		{
			switch (location)
			{
				case 1: price = 72600;
						break;
				case 2: price = 74600;
						break;
				case 3: price = 69360;
						break;
				case 4: price = 68030;
						break;
			}
		}
		else if (colours==2)                       
		{
			switch (location)
			{
				case 1: price = 73100;
						break;
				case 2: price = 75100;
						break;
				case 3: price = 69850;
						break;
				case 4: price = 68520;
						break;
			}
		}
		else if (colours==3)                       
		{
			switch (location)
			{
				case 1: price = 73400;
						break;
				case 2: price = 75400;
						break;
				case 3: price = 70130;
						break;
				case 4: price = 68800;
						break;
			}
		}
	}	
	cout<<"Variant: "<<variant<<endl;
	cout<<"Colour: "<<colour<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int AruzPrice()
{
	int variants, location, price;
	string model, variant, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Aruz 1.5 AV(Auto)"<<endl;
		cout<<"2. Aruz 1.5 X(Auto)"<<endl;
		cout<<"Enter the car variant (1-2): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-2 only."<<endl<<endl;
	}
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Aruz"<<endl;
	if (variants==1)
	{   
		variant = "Aruz 1.5 AV(Auto)";   
		switch (location)
		{
			case 1: price = 77900;
					break;
			case 2: price = 79900;
					break;
			case 3: price = 71800;
					break;
			case 4: price = 70900;
					break;
		}
	}

	else if (variants==2)
	{   
		variant = "Aruz 1.5 X(Auto)";    
		switch (location)
		{
			case 1: price = 72900;
					break;
			case 2: price = 74900;
					break;
			case 3: price = 67400;
					break;
			case 4: price = 66500;
					break;
		}
	
	}	
	cout<<"Variant: "<<variant<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int BezzaPrice()
{
	int variants, location, price;
	string model, variant, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Bezza 1.3 AV(Auto)"<<endl;
		cout<<"2. Bezza 1.3 X(Auto)"<<endl;
		cout<<"3. Bezza 1.0 G(Auto)"<<endl;
		cout<<"4. Bezza 1.0 G(Manual)"<<endl;
		cout<<"Enter the car variant (1-4): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2)||(variants==3)||(variants==4))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-4 only."<<endl<<endl;
	}
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Bezza"<<endl;
	if (variants==1)
	{   
		variant = "Bezza 1.3 AV(Auto)";   
		switch (location)
		{
			case 1: price = 49980;
					break;
			case 2: price = 51980;
					break;
			case 3: price = 49580;
					break;
			case 4: price = 48280;
					break;
		}
	}

	else if (variants==2)
	{   
		variant = "Bezza 1.3 X(Auto)";    
		switch (location)
		{
			case 1: price = 43980;
					break;
			case 2: price = 45980;
					break;
			case 3: price = 44180;
					break;
			case 4: price = 42980;
					break;
		}
	
	}	
	else if (variants==3)
	{   
		variant = "Bezza 1.0 G(Auto)";    
		switch (location)
		{
			case 1: price = 36580;
					break;
			case 2: price = 38580;
					break;
			case 3: price = 36780;
					break;
			case 4: price = 35580;
					break;
		}
	
	}
	else if (variants==4)
	{   
		variant = "Bezza 1.0 G(Manual)";    
		switch (location)
		{
			case 1: price = 34580;
					break;
			case 2: price = 36580;
					break;
			case 3: price = 34580;
					break;
			case 4: price = 33380;
					break;
		}
	
	}
	cout<<"Variant: "<<variant<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int MyviPrice()
{
	int variants, location, price;
	string model, variant, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Myvi 1.5L AV(CVT)"<<endl;
		cout<<"2. Myvi 1.5L H(CVT)"<<endl;
		cout<<"3. Myvi 1.5L X(CVT)"<<endl;
		cout<<"4. Myvi 1.3L G(CVT)"<<endl;
		cout<<"5. Myvi 1.3L G(CVT)(Without PSDA)"<<endl;
		cout<<"Enter the car variant (1-5): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2)||(variants==3)||(variants==4)||(variants==5))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-5 only."<<endl<<endl;
	}
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Myvi"<<endl;
	if (variants==1)
	{   
		variant = "Myvi 1.5L AV(CVT)";   
		switch (location)
		{
			case 1: price = 59900;
					break;
			case 2: price = 61900;
					break;
			case 3: price = 58810;
					break;
			case 4: price = 58010;
					break;
		}
	}

	else if (variants==2)
	{   
		variant = "Myvi 1.5L H(CVT)";    
		switch (location)
		{
			case 1: price = 54900;
					break;
			case 2: price = 56900;
					break;
			case 3: price = 53980;
					break;
			case 4: price = 53180;
					break;
		}
	
	}	
	else if (variants==3)
	{   
		variant = "Myvi 1.5L X(CVT)";    
		switch (location)
		{
			case 1: price = 50900;
					break;
			case 2: price = 52900;
					break;
			case 3: price = 50050;
					break;
			case 4: price = 49250;
					break;
		}
	
	}
	else if (variants==4)
	{   
		variant = "Myvi 1.3L G(CVT)";    
		switch (location)
		{
			case 1: price = 48500;
					break;
			case 2: price = 50500;
					break;
			case 3: price = 47860;
					break;
			case 4: price = 47060;
					break;
		}
	
	}
	else if (variants==5)
	{   
		variant = "Myvi 1.3L G(CVT)(Without PSDA)";    
		switch (location)
		{
			case 1: price = 46500;
					break;
			case 2: price = 48500;
					break;
			case 3: price = 45860;
					break;
			case 4: price = 45060;
					break;
		}
	
	}
	cout<<"Variant: "<<variant<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int AlzaPrice()
{
	int variants, location, price;
	string model, variant, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Alza 1.5L AV (D-CVT)"<<endl;
		cout<<"2. Alza 1.5L H (D-CVT)"<<endl;
		cout<<"3. Alza 1.5L X (D-CVT)"<<endl;
		cout<<"Enter the car variant (1-3): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2)||(variants==3))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-3 only."<<endl<<endl;
	}
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Alza"<<endl;
	if (variants==1)
	{   
		variant = "Alza 1.5L AV (D-CVT)";   
		switch (location)
		{
			case 1: price = 75500;
					break;
			case 2: price = 78000;
					break;
			case 3: price = 73930;
					break;
			case 4: price = 72600;
					break;
		}
	}

	else if (variants==2)
	{   
		variant = "Alza 1.5L H (D-CVT)";    
		switch (location)
		{
			case 1: price = 68000;
					break;
			case 2: price = 70500;
					break;
			case 3: price = 66980;
					break;
			case 4: price = 65650;
					break;
		}
	
	}	
	else if (variants==3)
	{   
		variant = "Alza 1.5L X (D-CVT)";    
		switch (location)
		{
			case 1: price = 62500;
					break;
			case 2: price = 65000;
					break;
			case 3: price = 61610;
					break;
			case 4: price = 60280;
					break;
		}
	
	}
	cout<<"Variant: "<<variant<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int AxiaPrice()
{
	int variants, location, price;
	string model, variant, region;
	while (1)
	{
		cout<<"Select Car Variant"<<endl;
		cout<<"1. Axia 1.0L AV(D-CVT)"<<endl;
		cout<<"2. Axia 1.0L SE(D-CVT)"<<endl;
		cout<<"3. Axia 1.0L X(D-CVT)"<<endl;
		cout<<"4. Axia 1.0L G(D-CVT)"<<endl;
		cout<<"5. Axia 1.0L E(5MT)"<<endl;
		cout<<"Enter the car variant (1-5): ";
		cin>>variants;
		cout<<endl;
		
		if((variants==1)||(variants==2)||(variants==3)||(variants==4)||(variants==5))
		{
			break;
		}
		
		cout<<"Invalid choice. Please enter 1-5 only."<<endl<<endl;
	}
	
	location=carLocation();
	region=carRegion(location);
	
	cout<<endl;
	
	cout<<"Car Info"<<endl;
	cout<<"Model: Axia"<<endl;
	if (variants==1)
	{   
		variant = "Axia 1.0L AV(D-CVT)";   
		switch (location)
		{
			case 1: price = 49500;
					break;
			case 2: price = 51500;
					break;
			case 3: price = 50090;
					break;
			case 4: price = 48490;
					break;
		}
	}

	else if (variants==2)
	{   
		variant = "Axia 1.0L SE(D-CVT)";    
		switch (location)
		{
			case 1: price = 44000;
					break;
			case 2: price = 46000;
					break;
			case 3: price = 44590;
					break;
			case 4: price = 42990;
					break;
		}
	
	}	
	else if (variants==3)
	{   
		variant = "Axia 1.0L X(D-CVT)";    
		switch (location)
		{
			case 1: price = 40000;
					break;
			case 2: price = 42000;
					break;
			case 3: price = 40590;
					break;
			case 4: price = 38990;
					break;
		}
	
	}
	else if (variants==4)
	{   
		variant = "Axia 1.0L G(D-CVT)";    
		switch (location)
		{
			case 1: price = 38600;
					break;
			case 2: price = 40600;
					break;
			case 3: price = 39190;
					break;
			case 4: price = 37590;
					break;
		}
	
	}
	else if (variants==5)
	{   
		variant = "Axia 1.0L E(5MT)";    
		switch (location)
		{
			case 1: price = 22000;
					break;
			case 2: price = 22000;
					break;
			case 3: price = 22000;
					break;
			case 4: price = 22000;
					break;
		}
	
	}
	cout<<"Variant: "<<variant<<endl;
	cout<<"Region: "<<region<<endl;
	return price;
}

int otrPrice(int choice)
{
	int price;
	switch (choice)
	{
		case 1: price = AtivaPrice();
				break;
		case 2: price = AruzPrice();
				break;
		case 3: price = BezzaPrice();
				break;
		case 4: price = MyviPrice();
				break;
		case 5: price = AlzaPrice();
				break;
		case 6: price = AxiaPrice();
				break;
	}

	return price;
}

int main()
{
	char ans;
	float price;
	do{
		int model, choice, amount, period;
		float rate, instalment;
		choice=carModel();
		price=otrPrice(choice);
		cout<<endl<<endl<<endl;
		cout<<setw(27)<<"2. Loan Details"<<endl;
		cout<<setw(27)<<left<<"OTR Price "<<"= RM "<<fixed<<setprecision(2)<<price<<endl;
		
		do
		{
			cout<<setw(27)<<left<<"Deposit Amount"<<": RM ";
			cin>>amount;
			if (amount<0)
			{
				cout<<"Deposit amount cannot be negative! Try again"<<endl;	 
			}
			else if (amount<=100000)
			{
				break;
			}
			else 
			{
				cout<<"Deposit amount cannot more than RM100 000! Try again"<<endl;
			}
		}while (true);
	
		do
		{
			cout<<setw(27)<<left<<"Interest Rates (in %)"<<": ";
			cin>>rate;
			if (rate<0)
			{
				cout<<"Interest rate cannot be negative! Try again"<<endl;
			}
			else if (rate<=5)
			{
				break;
			}
			else
			{
				cout<<"Interest rate cannot more than 5! Try again"<<endl;
			}
			
		}while (true);
		
		do{
			cout<<setw(27)<<left<<"Repayment Period (in years)"<<": ";
			cin>>period;
			if (period<0)
			{
				cout<<"Repayment period cannot be negative! Try again"<<endl;
			}
			else if (period<=9)
			{
				break;
			}
			else
			{
				cout<<"Repayment period cannot more than 9! Try again"<<endl;
			}
		}while (true);
		
		instalment = ((price - amount)*((rate*period)+100)/100)/(period*12);
		if (instalment - floor(instalment) >= 0.5) 
		{
        	instalment = floor(instalment) + 1;
    	} else 
		{
        	instalment = floor(instalment);
    	}
		cout<<setw(27)<<left<<"Monthly Instalment"<<": RM "<<instalment<<endl;
		
		
		cout<<"Do you want to calculate again? If yes, enter'Y'/'y'.";
		cin>>ans;
		cout<<endl;
		
	}while((ans=='Y')||(ans=='y'));
	return 0;
}
