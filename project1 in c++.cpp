#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
class choices{
	char fcolor[20];
	int style;
	int pattern;
	int gender;
	int age;
	int exstrenth;
	float height;
	float weight;
	public:
	void getData(){
 cout<<" enter your favourite color"<<endl<<"******************************"<<endl;
 cin.getline(fcolor,20);strlwr(fcolor);
 cout<<" enter your favourite dressing style\n 1.western\n 2.indian"<<endl<<"******************************"<<endl;cin>>style;while(style>2||style<1){
 	cout<<"---------"<<"\a Please select a right option"<<"-----------"<<endl;cin>>style;
 }
cout<<"what is your favourite pattern in clothes \n1. Polka Dots\n2. Stripes\n3. Animal print\n4. Floral\n5.Other's"<<endl<<"******************************"<<endl;cin>>pattern;
while(pattern>5||pattern<1){
	cout<<"---------"<<"\a Please select a right option"<<"-----------"<<endl;cin>>pattern;

	}
cout<<"choose your gender\n1. Male\n2. Female\n3. Transgender"<<endl<<"**********************************"<<endl;cin>>gender;if(gender>3||gender<=0){
while(gender>3||gender<=0){cout<<"---------"<<"\a Please select a right option"<<"-----------"<<endl; cin>>gender;}
}
cout<<"Enter your age(in digits)"<<endl<<"*********************"<<endl;cin>>age;
cout<<"Enter your budget limit(rupees)"<<endl<<"***************************"<<endl;cin>>exstrenth;while(exstrenth<1000){
cout<<endl<<"| Please enter a feassible amount more than 1000"<<endl;
cin>>exstrenth;	
}
cout<<"enter your height:example-56(In inches)"<<endl<<"**************************"<<endl;cin>>height;
cout<<"Enter your weight:example-34(Kg)"<<endl<<"********************************"<<endl;cin>>weight;

}
void showData(){
	cout<<"Your entered information is"<<endl<<"_______________________________";
	cout<<endl<<"| Favourite color:-"<<fcolor;
	cout<<endl<<"| your height:-"<<height<<endl;
	cout<<"| your weight:-"<<weight<<endl;
	cout<<"| your Budget limit:-"<<exstrenth<<endl;
	cout<<"| your age:-"<<age<<endl;
	if(gender==1)
	cout<<"| Gender:- Male   "<<endl;
	else if(gender==2)
	cout<<"| Gender:- Female  "<<endl;
	else 
			cout<<"| Gender:- Transgender "<<endl;
         	if(style==1)
		    cout<<"| Style:-Western     "<<endl;
		    else if(style==2)
			cout<<"| Style:- indian    "<<endl;
			else
			cout<<"| you havn't selected a given style"<<endl;
		if(pattern==1)
		cout<<"| Favourite Pattern:- Polka Dots"<<endl;
			else if(pattern==2)
		cout<<"| Favourite Pattern:- Stripes"<<endl;
		else	if(pattern==3)
		cout<<"| Favourite Pattern:- Animal Print"<<endl;
		else	if(pattern==4)
		cout<<"| Favourite Pattern:- Floral"<<endl;
		else	if(pattern==5)
		cout<<"| Favourite Pattern:- Other's"<<endl;
		else
			cout<<"| you havn't selected a given pattern "<<endl;
			cout<<"________________________________"<<endl; }
           
void operator +();
void NewValue();
void Read();
void append();
};
void choices::operator +(){
	if(strcmp(fcolor,"black")==0||strcmp(fcolor,"red")||strcmp(fcolor,"green")||strcmp(fcolor,"orange")||strcmp(fcolor,"blue")||strcmp(fcolor,"brown")||strcmp(fcolor,"pink")||strcmp(fcolor,"yellow")||strcmp(fcolor,"purple")||strcmp(fcolor,"light red")||strcmp(fcolor,"tomato red")||strcmp(fcolor,"Dusty blue")||strcmp(fcolor,"maroon")||strcmp(fcolor,"light blue")||strcmp(fcolor,"dark green"))
	{
	even:	if(exstrenth>=1000&&exstrenth<=5000){
      	switch(gender){
				case 1:{
			if(style==1){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and jean's(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Puma)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Nike)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==2){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and striped coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve striped T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and polka-dotted jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and striped coat-pant(being human)"<<endl<<"|3."<<fcolor<<" striped shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(Spykar)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Park Avenue)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Nike)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							if(pattern==3){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and animal print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" animal print shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve animal print T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and animal print coat-pant(NIke)"<<endl<<"|3."<<fcolor<<" animal print shirt and shinnig trouser(Gucci)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print striped T-shirt and trouser(hunk)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and animal print striped trouser(Park Avenue)"<<endl<<"|4.Full animal print  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and animal print coat-pant(Van Heusen)"<<endl<<"|3. shir"<<fcolor<<"t and animal print shinnig  trouser(Nike)"<<endl<<"|4.Full "<<fcolor<<" sleve animal print striped T-shirt and trouser(Allen Solley)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==4){
					
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt and floral print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" floral shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve floral T-shirt and trouser(Allen Solly)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<" shirt and Floral coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig trouser(Park Avenue)"<<endl<<"|4.Full sleve black floral striped T-shirt and trouser(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped floral shirt and jean's(reebook)"<<endl<<"|2."<<fcolor<<" animal print shirt and floral coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and floral print striped trouser(Park Avenue)"<<endl<<"|4.Full Floral "<<fcolor<<" T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Floral T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and floral coat-pant(Numero Uno)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig  trouser(Nike)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral striped T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==5){
							
								if(height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Flying Machine)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(spyker)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Yuvican)"<<endl<<"|2."<<fcolor<<" casual shirt blazer and  pant (Nike)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and trouser(Human Being)"<<endl<<"---------------------------------"<<endl;
							}
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Flying Machine)"<<endl<<"|2."<<fcolor<<" shirt casual blazer and  pant (Nike)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Reebook)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant with black cap(Allen Solly)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(spyker)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
						if(age>=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and Trouser(yuvican)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and pants(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig trouser(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and white trouser(Spykar)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant's(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt,pant's and blazer(reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser with cap(Wrangler)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser with blezer(gucci)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted jean's(Numero uno)"<<endl<<"|2."<<fcolor<<" Ploka dotted T-shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser with cap(Flying Machine)"<<endl<<"|4.half sleve "<<fcolor<<" dotted T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted pant's()"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==2){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and striped coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and polka-dotted jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and striped coat-pant(being human)"<<endl<<"|3."<<fcolor<<" striped shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(Spykar)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Park Avenue)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Nike)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							if(pattern==3){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and animal print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" animal print shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve animal print T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and animal print coat-pant(NIke)"<<endl<<"|3."<<fcolor<<" animal print shirt and shinnig trouser(Gucci)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print striped T-shirt and trouser(hunk)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and animal print striped trouser(Park Avenue)"<<endl<<"|4.Full animal print  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and animal print coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and animal print shinnig  trouser(Nike)"<<endl<<"|4.Full "<<fcolor<<" sleve animal print striped T-shirt and trouser(Allen Solley)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==4){
					
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt and floral print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" floral shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve floral T-shirt and trouser(Allen Solly)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<" shirt and Floral coat-pant(yuvican)"<<endl<<"|3."<<fcolor<<" shirt and floral trouser(Park Avenue)"<<endl<<"|4.Full sleve "<<fcolor<<" floral striped T-shirt and trouser(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped floral shirt and jean's(reebook)"<<endl<<"|2."<<fcolor<<" animal print shirt and floral coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and floral print striped pant's(Park Avenue)"<<endl<<"|4.Full "<<fcolor<<" Floral  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Floral T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and floral coat-pant(Numero Uno)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig  trouser(Nike)"<<endl<<"|4.Full sleve Floral striped T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==5){
							
								if(height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Reebook)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Spyker)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser()"<<endl<<"---------------------------------"<<endl;
							}
							if(height>56||weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Reebook)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Spyker)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser()"<<endl<<"---------------------------------"<<endl;
							}
											if(height<56||weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Reebook)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Spyker)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser()"<<endl<<"---------------------------------"<<endl;
							}
							if(height>56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Reebook)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Spyker)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser()"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
					}
						if(style==2){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and pant(Lev's)"<<endl<<"|2."<<fcolor<<" Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Polka Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant(Siyaram)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig polka dotted lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and polka-dotted churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and black lungi(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and polka-dotted salwar (khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted lungi and kurta(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted dhoti(khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" Kurta and striped Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped white Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" striped shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped dhoti pant(Siyaram)"<<endl<<"|2."<<fcolor<<"  striped shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig  striped lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<"  striped kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and striped churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" striped kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<"  striped kurta and black lungi(khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and striped salwar (siyaram)"<<endl<<"|2."<<fcolor<<" Ploka striped lungi and kurta(Enna)"<<endl<<"|3."<<fcolor<<" shirt and shinnig  striped dhoti(siyaram)"<<endl<<"|4.Full sleve "<<fcolor<<" striped kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" animal print Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and animal print white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" animal print Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print pant(Siyaram)"<<endl<<"|2."<<fcolor<<" animal print shirt and kurta,pyjama and gandhi toppi(siyaram)"<<endl<<"|3."<<fcolor<<" kurta and shinnig animal print lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and animal print churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" animal print kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and animal print dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print  and black lungi(Siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and animal print salwar (khadi)"<<endl<<"|2."<<fcolor<<" animal print lungi and kurta(khadi)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print  dhoti(khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta animal print and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" floral Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and floral pant(Siyaram)"<<endl<<"|2."<<fcolor<<" floral shirt and kurta,pyjama and gandhi toppi(siyaram)"<<endl<<"|3."<<fcolor<<" kurta and shinnig floral lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" floral kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and floral churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" floral kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and floral dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" floral  and black lungi(Siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and floral salwar (khadi)"<<endl<<"|2."<<fcolor<<" animal print lungi and floral kurta(khadi)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral dhoti(khadi)"<<endl<<"|4.Full sleve floral "<<fcolor<<" kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
								if(height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Levi's)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(Khadi)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Levi's)"<<endl<<"|2."<<fcolor<<" casual white Kurta and pyajama(Baba)"<<endl<<"|3."<<fcolor<<" casual shirt and floral white casual Lungi(Baba)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(Nike)"<<endl<<"---------------------------------"<<endl;
							}
									if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Levi's)"<<endl<<"|2.Black casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3.black shirt and floral white casual Lungi(Khadi)"<<endl<<"|4.Full Black Floral Dotted casual shervani(Biba)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Flying Machine)"<<endl<<"|2.Black casual white Kurta and pyajama(Baba)"<<endl<<"|3.black casual shirt and floral white casual Lungi(Baba)"<<endl<<"|4.Full Black Floral Dotted casual shervani(Nike)"<<endl<<"---------------------------------"<<endl;
							}
						}
					}
	if(age>40){
								 if(pattern==1){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and pant(Lev's)"<<endl<<"|2."<<fcolor<<" Kurta and Churi-dar pyajama(Nike)"<<endl<<"|3."<<fcolor<<" shirt and white Lungi(Siyaram)"<<endl<<"|4.Full "<<fcolor<<" Polka Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant(Khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and kurta,pyjama and gandhi toppi(Spykar)"<<endl<<"|3."<<fcolor<<" kurta and shinnig polka dotted lungi(Khadi)"<<endl<<"|4.Full sleve black dotted kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==2){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and pant(Khadi)"<<endl<<"|2."<<fcolor<<" Kurta and striped Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped white Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<"  striped shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped dhoti pant(Siyaram)"<<endl<<"|2."<<fcolor<<"  striped shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig  striped lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<"  kurta and striped Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
						
							 if(pattern==3){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" animal print Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3.black shirt and animal print white Lungi(Khadi)"<<endl<<"|4.Full Black animal print Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print pant(Siyaram)"<<endl<<"|2."<<fcolor<<" animal print shirt and khadi kurta pyjama and gandhi toppi(siyaram)"<<endl<<"|3.black kurta and shinnig animal print lungi(Siyaram)"<<endl<<"|4.Full sleve black animal print kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 	 if(pattern==4){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" floral Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and floral pant(Siyaram)"<<endl<<"|2."<<fcolor<<" floral shirt and kurta,pyjama and gandhi toppi(spykar)"<<endl<<"|3."<<fcolor<<" kurta and shinnig floral lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" floral kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							} 
							}
						 
			
						
						 if(pattern==5){
								if(height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Siyaram)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Nike)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Dhoti(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Siyaram)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Nike)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Nike)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Pyjama(Rebook)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
						}
					}
					}
				break;
				}
				case 2:{
						if(style==1){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted shift dress(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted lage(Spykar)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Frook (gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted Slip dress(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Puma)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" polka dotted cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" Ploka dotted Mix Dress(Park Avenue)"<<endl<<"|3.black dotted Denim skirt(being human)"<<endl<<"|4.Full sleve black dotted T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
													 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shift dress(NIke)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and striped lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Striped Frook (Reebook)"<<endl<<"|2."<<fcolor<<" striped top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and Striped jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" striped cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" striped overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" striped Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" striped Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
													 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(gucci)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook (Reebook)"<<endl<<"|2."<<fcolor<<" animal print top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and animal print  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" animal print T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" animal print cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" animal print Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" animal print Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
					 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shift dress(gucci)"<<endl<<"|2."<<fcolor<<" floral shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and floral lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and floral jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Frook (Reebook)"<<endl<<"|2."<<fcolor<<" floral top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" floral Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and floral  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" floral T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" floral cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" floral overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" floral Mix Dress(Allen Solly)"<<endl<<"|3."<<fcolor<<" Floral Denim skirt(Yuvican)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==5){
								if(height>56&&weight<50||height<56&&weight>50||height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Flying Machine)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
										if(age>40){
								 if(pattern==1){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted shift dress(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted lage(Spykar)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Frook (gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted Slip dress(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
													 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shift dress(NIke)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and striped lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Striped Frook (Reebook)"<<endl<<"|2."<<fcolor<<" striped top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and Striped jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" striped cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" striped overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" striped Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" striped Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
													 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(gucci)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook (Reebook)"<<endl<<"|2."<<fcolor<<" animal print top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and animal print  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" animal print T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" animal print cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" animal print Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" animal print Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
					 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shift dress(gucci)"<<endl<<"|2."<<fcolor<<" floral shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and floral lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and floral jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Frook (Reebook)"<<endl<<"|2."<<fcolor<<" floral top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" floral Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and floral  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" floral T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" floral cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" floral overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" floral Mix Dress(Allen Solly)"<<endl<<"|3."<<fcolor<<" Floral Denim skirt(Yuvican)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==5){
								if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Flying Machine)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
									if(height>56&&weight<50||height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Reebook)"<<endl<<"|2."<<fcolor<<" casual striped shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
					}
						if(style==2){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted Frook(Levi's)"<<endl<<"|2."<<fcolor<<" Ploka dotted salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Polka dotted Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Polka dotted Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and pokla dotted salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" polka dotted Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Polka dotted Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Ploka dotted Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" polka dotted salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" striped salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" striped saree(Banarsi )"<<endl<<"|4."<<fcolor<<" striped Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and striped salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" striped Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" striped saree(Biba)"<<endl<<"|4.Full sleve striped kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" striped Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and striped Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" striped salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" animal print salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" animal print saree(Banarsi )"<<endl<<"|4."<<fcolor<<" animal print Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" animal print Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and animal print  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" animal print Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" animal print saree(Biba)"<<endl<<"|4.Full sleve animal print kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" animal print Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and animal print Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2.Black Floral salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Floral saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Floral Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and Floral  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" Floral Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Floral saree(Biba)"<<endl<<"|4.Full sleve Floral kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Floral Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Floral Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
											if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" plane salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" plane shining yellow saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50||height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and white plane  salwar(Biba)"<<endl<<"|4.Full sleve Floral "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						}
					}
if(age>40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted Frook(Levi's)"<<endl<<"|2."<<fcolor<<" Ploka dotted salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Polka dotted Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Polka dotted Suit and slawar(Banarsi)"<<endl<<"|3."<<fcolor<<" kurta and pokla dotted salwar(Baba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
						
							 	 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" striped salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" striped saree(Banarsi )"<<endl<<"|4."<<fcolor<<" striped Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and striped salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" striped Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" striped saree(Biba)"<<endl<<"|4.Full sleve striped kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" striped Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and striped Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" striped salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" animal print salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" animal print saree(Banarsi )"<<endl<<"|4."<<fcolor<<" animal print Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" animal print Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and animal print  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" animal print Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" animal print saree(Biba)"<<endl<<"|4.Full sleve animal print kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" animal print Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and animal print Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" Floral salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Floral saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Floral Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and Floral  salwar(Biba)"<<endl<<"|4.Full sleve animal print black kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" Floral Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Floral saree(Biba)"<<endl<<"|4.Full sleve Floral kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Floral Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Floral Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
											if(height<56&&weight>50||height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" plane salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" plane shining yellow saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height<56&&weight<50||height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and white plane  salwar(Biba)"<<endl<<"|4.Full sleve Floral "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						}
					}
					}
					break;
				}
				default:{
                 	cout<<endl<<"|which Gender clothes  you want to wear|"<<endl<<"|1.Men\n|2.Women"<<endl;
					int n;
					cin>>n;
					gender=n;
					goto even;
					
				}
			}
}
	odd:	if(exstrenth>5000){
      	switch(gender){
				case 1:{
			if(style==1){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and jean's(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Puma)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Reebook)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==2){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and striped coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve striped T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and polka-dotted jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and striped coat-pant(being human)"<<endl<<"|3."<<fcolor<<" striped shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(Spykar)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Park Avenue)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Nike)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							if(pattern==3){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and animal print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" animal print shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve animal print T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and animal print coat-pant(NIke)"<<endl<<"|3."<<fcolor<<" animal print shirt and shinnig trouser(Gucci)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print striped T-shirt and trouser(hunk)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and animal print striped trouser(Park Avenue)"<<endl<<"|4.Full animal print  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and animal print coat-pant(Van Heusen)"<<endl<<"|3. shir"<<fcolor<<"t and animal print shinnig  trouser(Nike)"<<endl<<"|4.Full "<<fcolor<<" sleve animal print striped T-shirt and trouser(Allen Solley)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==4){
					
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt and floral print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" floral shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve floral T-shirt and trouser(Allen Solly)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<" shirt and Floral coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig trouser(Park Avenue)"<<endl<<"|4.Full sleve black floral striped T-shirt and trouser(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped floral shirt and jean's(reebook)"<<endl<<"|2."<<fcolor<<" animal print shirt and floral coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and floral print striped trouser(Park Avenue)"<<endl<<"|4.Full Floral "<<fcolor<<" T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Floral T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and floral coat-pant(Numero Uno)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig  trouser(Nike)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral striped T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==5){
							
								if(height<20&&weight>20||height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Flying Machine)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(spyker)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
								if(height>20&&weight>20||height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Allen Solly)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Nike)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and striped trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
						if(age>=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and Trouser(yuvican)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and pants(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig trouser(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and white trouser(Spykar)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant's(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt,pant's and blazer(reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser with cap(Wrangler)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser with blezer(gucci)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted jean's(Numero uno)"<<endl<<"|2."<<fcolor<<" Ploka dotted T-shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser with cap(Flying Machine)"<<endl<<"|4.half sleve "<<fcolor<<" dotted T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted pant's()"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==2){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and striped coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and trouser(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and polka-dotted jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and striped coat-pant(being human)"<<endl<<"|3."<<fcolor<<" striped shirt and shinnig polka dotted trouser(Allen Solly)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(Spykar)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Park Avenue)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" Striped shirt and coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(Nike)"<<endl<<"|4.Full sleve striped T-shirt and trouser(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							if(pattern==3){
						
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and jean's(yuvican)"<<endl<<"|2."<<fcolor<<" shirt and animal print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" animal print shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve animal print T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<"  shirt and animal print coat-pant(NIke)"<<endl<<"|3."<<fcolor<<" animal print shirt and shinnig trouser(Gucci)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print striped T-shirt and trouser(hunk)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and animal print striped trouser(Park Avenue)"<<endl<<"|4.Full animal print  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped animal print T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and animal print coat-pant(Van Heusen)"<<endl<<"|3."<<fcolor<<" shirt and animal print shinnig  trouser(Nike)"<<endl<<"|4.Full "<<fcolor<<" sleve animal print striped T-shirt and trouser(Allen Solley)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==4){
					
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and jean's(being human)"<<endl<<"|2."<<fcolor<<" shirt and floral print coat-pant(Flying Machine)"<<endl<<"|3."<<fcolor<<" floral shirt and striped trouser(Levi's)"<<endl<<"|4.Full sleve floral T-shirt and trouser(Allen Solly)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral T-shirt and animal print jean's(Wrangler)"<<endl<<"|2."<<fcolor<<" shirt and Floral coat-pant(yuvican)"<<endl<<"|3."<<fcolor<<" shirt and floral trouser(Park Avenue)"<<endl<<"|4.Full sleve "<<fcolor<<" floral striped T-shirt and trouser(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped floral shirt and jean's(reebook)"<<endl<<"|2."<<fcolor<<" animal print shirt and floral coat-pant(Pepe jean's)"<<endl<<"|3."<<fcolor<<" shirt and floral print striped pant's(Park Avenue)"<<endl<<"|4.Full "<<fcolor<<" Floral  T-shirt and trouser(van heusen)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Floral T-shirt and jean's(wrangler)"<<endl<<"|2."<<fcolor<<" Striped shirt and floral coat-pant(Numero Uno)"<<endl<<"|3."<<fcolor<<" shirt and floral shinnig  trouser(Nike)"<<endl<<"|4.Full sleve Floral striped T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
						if(pattern==5){
							
								if(height>56&&weight<50||height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Reebook)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Spyker)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							}
							if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and jean's(Levi's)"<<endl<<"|2."<<fcolor<<" shirt,blazer and  pant (Nike)"<<endl<<"|3."<<fcolor<<" T-shirt and striped trouser(Reebook)"<<endl<<"|4.Full sleve floral "<<fcolor<<" T-shirt and trouser(Levi's)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
					}
						if(style==2){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and pant(Lev's)"<<endl<<"|2."<<fcolor<<" Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Polka Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant(Siyaram)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig polka dotted lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and polka-dotted churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and black lungi(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and polka-dotted salwar (khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted lungi and kurta(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted dhoti(khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" Kurta and striped Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped white Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" striped shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped dhoti pant(Siyaram)"<<endl<<"|2."<<fcolor<<"  striped shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig  striped lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<"  striped kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and striped churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" striped kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<"  striped kurta and black lungi(khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and striped salwar (siyaram)"<<endl<<"|2."<<fcolor<<" Ploka striped lungi and kurta(Enna)"<<endl<<"|3."<<fcolor<<" shirt and shinnig  striped dhoti(siyaram)"<<endl<<"|4.Full sleve "<<fcolor<<" striped kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" animal print Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and animal print white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" animal print Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print pant(Siyaram)"<<endl<<"|2."<<fcolor<<" animal print shirt and kurta,pyjama and gandhi toppi(siyaram)"<<endl<<"|3."<<fcolor<<" kurta and shinnig animal print lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and animal print churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" animal print kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and animal print dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print  and black lungi(Siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and animal print salwar (khadi)"<<endl<<"|2."<<fcolor<<" animal print lungi and kurta(khadi)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print  dhoti(khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta animal print and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" floral Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and floral pant(Siyaram)"<<endl<<"|2."<<fcolor<<" floral shirt and kurta,pyjama and gandhi toppi(siyaram)"<<endl<<"|3."<<fcolor<<" kurta and shinnig floral lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" floral kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and floral churidar pyjama(Khadi)"<<endl<<"|2."<<fcolor<<" floral kurta and churidar pyjama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and floral dotted shervani(Levi's)"<<endl<<"|4.Full sleve "<<fcolor<<" floral  and black lungi(Siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" kurta and floral salwar (khadi)"<<endl<<"|2."<<fcolor<<" animal print lungi and floral kurta(khadi)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral dhoti(khadi)"<<endl<<"|4.Full sleve floral "<<fcolor<<" kurta and churidar pyjama(siyaram)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
								if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Levi's)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(Khadi)"<<endl<<"---------------------------------"<<endl;
							}
										if(height>56&&weight<50||height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Nike)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Reebok)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(Baba)"<<endl<<"---------------------------------"<<endl;
							}
						}
					}
	if(age>40){
								 if(pattern==1){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted T-shirt and pant(Lev's)"<<endl<<"|2."<<fcolor<<" Kurta and Churi-dar pyajama(Nike)"<<endl<<"|3."<<fcolor<<" shirt and white Lungi(Siyaram)"<<endl<<"|4.Full "<<fcolor<<" Polka Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted pant(Khadi)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and kurta,pyjama and gandhi toppi(Spykar)"<<endl<<"|3."<<fcolor<<" kurta and shinnig polka dotted lungi(Khadi)"<<endl<<"|4.Full sleve black dotted kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==2){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shirt and pant(Khadi)"<<endl<<"|2."<<fcolor<<" Kurta and striped Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and  striped white Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<"  striped shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped dhoti pant(Siyaram)"<<endl<<"|2."<<fcolor<<"  striped shirt and kurta,pyjama and gandhi toppi(Khadi)"<<endl<<"|3."<<fcolor<<" kurta and shinnig  striped lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<"  kurta and striped Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
						
							 if(pattern==3){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" animal print Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3.black shirt and animal print white Lungi(Khadi)"<<endl<<"|4.Full Black animal print Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print pant(Siyaram)"<<endl<<"|2."<<fcolor<<" animal print shirt and khadi kurta pyjama and gandhi toppi(siyaram)"<<endl<<"|3.black kurta and shinnig animal print lungi(Siyaram)"<<endl<<"|4.Full sleve black animal print kurta and Dhoti(Nike)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 	 if(pattern==4){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and pant(Levi's)"<<endl<<"|2."<<fcolor<<" floral Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white Lungi(Khadi)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted shervani(Siyaram)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and floral pant(Siyaram)"<<endl<<"|2."<<fcolor<<" floral shirt and kurta,pyjama and gandhi toppi(spykar)"<<endl<<"|3."<<fcolor<<" kurta and shinnig floral lungi(Khadi)"<<endl<<"|4.Full sleve "<<fcolor<<" floral kurta and Dhoti(Khadi)"<<endl<<"---------------------------------"<<endl;
							
							} 
							}
						 
			
						
						 if(pattern==5){
								if(height>56&&weight<50||height<56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Siyaram)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Khadi)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(siyaram)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
							if(height>56&&weight>50||height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shirt and casual pant(Khadi)"<<endl<<"|2."<<fcolor<<" casual white Kurta and Churi-dar pyajama(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and floral white casual Lungi(Spykar)"<<endl<<"|4.Full "<<fcolor<<" Floral Dotted casual shervani(spykar)"<<endl<<"---------------------------------"<<endl;
							}
						}
					}
					}
				break;
				}
				case 2:{
						if(style==1){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted shift dress(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted lage(Spykar)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Frook (gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted Slip dress(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and polka-dotted jean's(Puma)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebok)"<<endl<<"|3."<<fcolor<<" polka dotted cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" Ploka dotted Mix Dress(Park Avenue)"<<endl<<"|3.black dotted Denim skirt(being human)"<<endl<<"|4.Full sleve black dotted T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
													 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shift dress(NIke)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and striped lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Striped Frook (Reebook)"<<endl<<"|2."<<fcolor<<" striped top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and Striped jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" striped cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" striped overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" striped Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" striped Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
													 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(gucci)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook (Reebook)"<<endl<<"|2."<<fcolor<<" animal print top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and animal print  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" animal print T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" animal print cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" animal print Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" animal print Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
					 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shift dress(gucci)"<<endl<<"|2."<<fcolor<<" floral shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and floral lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and floral jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Frook (Reebook)"<<endl<<"|2."<<fcolor<<" floral top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" floral Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and floral  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" floral T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" floral cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" floral overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" floral Mix Dress(Allen Solly)"<<endl<<"|3."<<fcolor<<" Floral Denim skirt(Yuvican)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==5){
								if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Flying Machine)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
								if(height<56&&weight>50||height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(spykar)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Siyaram)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
										if(age>40){
								 if(pattern==1){
								if(height<56||weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted shift dress(gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and polka dotted lage(Spykar)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(yuvican)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56||weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted Frook (gucci)"<<endl<<"|2."<<fcolor<<" Ploka dotted top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig polka dotted trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted Slip dress(Flying Machine)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
													 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped shift dress(NIke)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Reebook)"<<endl<<"|3."<<fcolor<<" shirt and striped lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Striped Frook (Reebook)"<<endl<<"|2."<<fcolor<<" striped top and squirt(Nike)"<<endl<<"|3."<<fcolor<<" shirt and shinnig striped trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and Striped jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" striped shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" striped cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" striped overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Sheth dress(Nike)"<<endl<<"|2."<<fcolor<<" striped Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" striped Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" striped T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
													 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(gucci)"<<endl<<"|2."<<fcolor<<" animal print shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook (Reebook)"<<endl<<"|2."<<fcolor<<" animal print top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig animal print trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and animal print  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" animal print T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" animal print cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" animal print Mix Dress(Park Avenue)"<<endl<<"|3."<<fcolor<<" animal print Denim skirt(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
					 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral shift dress(gucci)"<<endl<<"|2."<<fcolor<<" floral shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and floral lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and floral jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Frook (Reebook)"<<endl<<"|2."<<fcolor<<" floral top and squirt(Park Avenue)"<<endl<<"|3."<<fcolor<<" shirt and shinnig floral trouser(being human)"<<endl<<"|4.Full sleve "<<fcolor<<" floral Slip dress(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" T-shirt and floral  jean's(Allen Solly)"<<endl<<"|2."<<fcolor<<" floral T-shirt and coat-pant(Yuvican)"<<endl<<"|3."<<fcolor<<" floral cocktail dress(Allen Solly)"<<endl<<"|4.Full sleve "<<fcolor<<" floral overskirt(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" floral Sheth dress(Reebook)"<<endl<<"|2."<<fcolor<<" floral Mix Dress(Allen Solly)"<<endl<<"|3."<<fcolor<<" Floral Denim skirt(Yuvican)"<<endl<<"|4.Full sleve "<<fcolor<<" floral T-shirt and pencil skirt(Levi's)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 if(pattern==5){
								if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Flying Machine)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Nike)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(flying Machine)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Reebook)"<<endl<<"---------------------------------"<<endl;
							}
										if(height<56||weight>50||height>56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print shift dress(Reebook)"<<endl<<"|2."<<fcolor<<" casual shirt and coat-pant(Alle Solly)"<<endl<<"|3."<<fcolor<<" shirt and animal print lage(Real World)"<<endl<<"|4.Full sleve "<<fcolor<<" T-shirt and animal print jean's(Spykar)"<<endl<<"---------------------------------"<<endl;
							}
					}
					}
					}
						if(style==2){
						           
							if(age>=20&&age<=40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted Frook(Levi's)"<<endl<<"|2."<<fcolor<<" Ploka dotted salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Polka dotted Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Polka dotted Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and pokla dotted salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka dotted kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" polka dotted Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" dotted kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Polka dotted Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Ploka dotted Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" polka dotted salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" striped salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" striped saree(Banarsi )"<<endl<<"|4."<<fcolor<<" striped Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and striped salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" striped Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" striped saree(Biba)"<<endl<<"|4.Full sleve striped kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" striped Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and striped Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" striped salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" animal print salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" animal print saree(Banarsi )"<<endl<<"|4."<<fcolor<<" animal print Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" animal print Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and animal print  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" animal print Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" animal print saree(Biba)"<<endl<<"|4.Full sleve animal print kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" animal print Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and animal print Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2.Black Floral salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Floral saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Floral Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and Floral  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" Floral Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Floral saree(Biba)"<<endl<<"|4.Full sleve Floral kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Floral Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Floral Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
											if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" plane salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" plane shining yellow saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50||height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and white plane  salwar(Biba)"<<endl<<"|4.Full sleve Floral "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						}
					}
if(age>40){
								 if(pattern==1){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" polka-dotted Frook(Levi's)"<<endl<<"|2."<<fcolor<<" Ploka dotted salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Polka dotted saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Polka dotted Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and polka-dotted Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Polka dotted Suit and slawar(Banarsi)"<<endl<<"|3."<<fcolor<<" kurta and pokla dotted salwar(Baba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						
							}
						
							 	 if(pattern==2){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" striped salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" striped saree(Banarsi )"<<endl<<"|4."<<fcolor<<" striped Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and striped Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and striped salwar(Biba)"<<endl<<"|4.Full sleve "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" striped Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" striped saree(Biba)"<<endl<<"|4.Full sleve striped kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" striped Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" striped Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and striped Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" striped salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						
							 	 if(pattern==3){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" animal print salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" animal print saree(Banarsi )"<<endl<<"|4."<<fcolor<<" animal print Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and animal print Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" animal print Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and animal print  salwar(Biba)"<<endl<<"|4.Full sleve animal print "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" animal print Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" animal print saree(Biba)"<<endl<<"|4.Full sleve animal print kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" animal print Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" animal print Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and animal print Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" animal print salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
 	 if(pattern==4){
								if(height<56&&weight<50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" Floral salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" Floral saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" Floral Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and Floral  salwar(Biba)"<<endl<<"|4.Full sleve animal print black kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height>56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral kurti and lehnga(Spykar)"<<endl<<"|2."<<fcolor<<" Floral Ghagra and choli(levi's)"<<endl<<"|3."<<fcolor<<" Floral saree(Biba)"<<endl<<"|4.Full sleve Floral kurta and salwar(Provogue)"<<endl<<"---------------------------------"<<endl;
							
							}
							else if(height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Kurta and lehnga (Global desi)"<<endl<<"|2."<<fcolor<<" Floral Patiala suit(Baba)"<<endl<<"|3."<<fcolor<<" blouze and Floral Ghagra(Zara)"<<endl<<"|4.Full sleve "<<fcolor<<" Floral salwar-kameez(Chumbak)"<<endl<<"---------------------------------"<<endl;
							
							}
							}
						 
			
						
						 if(pattern==5){
											if(height<56&&weight<50||height>56&&weight>50){
								
								cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" Floral Frook(Fabindia)"<<endl<<"|2."<<fcolor<<" plane salwar and kammez(Baba)"<<endl<<"|3."<<fcolor<<" plane shining yellow saree(Banarsi )"<<endl<<"|4."<<fcolor<<" Floral Lehnga-choli(Febindia)"<<endl<<"---------------------------------"<<endl;
							}
							else if(height>56&&weight<50||height<56&&weight>50){
									cout<<"____________________________________"<<endl<<"|Accornding to your input data these cloths are best for you:"<<endl<<" If height:-"<<height<<"(inches) "<<"And weight:-"<<weight<<"(Kg)"<<endl<<"|1."<<fcolor<<" shirt and Floral Kurti and salwar(Westside source)"<<endl<<"|2."<<fcolor<<" striped Suit and slawar(Fabindia)"<<endl<<"|3."<<fcolor<<" kurta and white plane  salwar(Biba)"<<endl<<"|4.Full sleve Floral "<<fcolor<<" kurta and Salwar(W for women)"<<endl<<"---------------------------------"<<endl;
							
							}
						}
					}
					}
					break;
				}
				default:{
                 	cout<<endl<<"|which Gender clothes  you want to wear|"<<endl<<"|1.Men\n|2.Women"<<endl;
					int n;
					cin>>n;
					gender=n;
					goto odd;
					
				}
			}
		}
	}
}
void choices::NewValue(){
	choices obj1;
fstream fout;
fout.open("project1.text",ios::out);
obj1.getData();
fout.write((char*)&obj1,sizeof(obj1));
fout.close();
fout.open("project1.text",ios::in);
fout.read((char*)&obj1,sizeof(obj1));
obj1.showData();
+obj1;
fout.close();
}
void choices::Read(){
		choices obj;
	ifstream fin("project1.text");
	fin.seekg(0,ios::end);
		int lenth=fin.tellg();
		int size=sizeof(obj);
		int position=lenth/size;
		fin.seekg(0,ios::beg);
	for(int i=0;i<position;i++){                   //while(!fin.eof()){
   	   fin.read((char*)&obj,sizeof(obj));        //fin.read((char*)&obj,sizeof(obj));
 obj.showData();
 +obj;
}


fin.close();
}
void choices::append(){
	choices obj3;
	fstream fout;
	fout.open("project1.text",ios::out|ios::app);
	fout.seekp(0,ios::end);
	obj3.getData();
	fout.write((char*)&obj3,sizeof(obj3));
	fout.close();
	fout.open("project1.text",ios::in);
	fout.seekg(0,ios::beg);
	while(!fout.eof()){
		fout.read((char*)&obj3,sizeof(obj3));
	} 
    cout<<endl<<"| THIS IS INFORMATION IS APPENDED IN THE FILE |"<<endl<<endl;
    obj3.showData();
	+obj3;
	fout.close();
}
main()
{
	choices obj2;
int option;cout<<"   |  *-WHAT YOU WANT TO DO-*  |"<<endl<<"1. |-- WANT TO CHOOSE SOME NEW OPTIONS --|"<<endl<<"2. |-- WANT TO READ PREVIOUS STORED OPTIONS --|"<<endl<<"3. |-- WANT TO APPEND IN NEW INFORMATION IN THE FILE --|"<<endl;
even: cin>>option;

if(option>3||option<1)
{
	cout<<"----*PLEASE CHOOSE A GIVEN OPTION*---"<<endl;
	goto even;
}
cin.ignore();
if(option==1){
	obj2.NewValue();
}
 else if(option==2){
 	obj2.Read();
 }
 else{
 
 	obj2.append();
 }
}
