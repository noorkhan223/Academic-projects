#include<iostream> //full flej wala code
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<string>
using namespace std;
void roadsignal(); // signals wala start
void roadsignal()
{
system("cls");
int chose;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" SIGNALS SYSTEM ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Enter your choice..._"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Press 1 for without emergency.."<<endl;
cout<<"--> press 2 for with emergency.."<<endl;
cout<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cin>>chose;
switch(chose) //switch start
{
case 1: // case 01
{
system("cls");
int r1,r2,r3,r4;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" SIGNALS SYSTEM ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Enter no of vehicles on each road..._"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cin>>r1;
cout<<endl;
cin>>r2;
cout<<endl;
cin>>r3;
cout<<endl;
cin>>r4;
cout<<endl;
if(r1>r2 && r1>r3 && r1>r4) //pehli if condition
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> GREEN LIGHT ON ROAD 1 "<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else if(r2>r1 && r2>r3 && r2>r4) // second if 
con..
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl; 
cout<<"Green light on road 2"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else if(r3>r1 && r3>r2 && r3>r4) //third if con..
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"green light on road 3"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else //end of condition
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"Green light on road road 4"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
getch();
}
break; //case 01 khatam
case 2: // case 2 start
{
system("cls");
string s1,s2,s3,s4;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" SIGNALS SYSTEM ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Enter no of vehicles on each road..._"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cin>>s1;
cout<<endl;
cin>>s2;
cout<<endl;
cin>>s3;
cout<<endl;
cin>>s4;
cout<<endl;
if(s1=="emergency") //pehli if 
cond...
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
 cout<<endl<<endl;
cout<<"--> Green light on road 1";
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else if(s2=="emergency")
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
 cout<<endl<<endl;
cout<<"--> Green on road 2";
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else if(s3=="emergency")
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
 cout<<endl<<endl;
cout<<"--> Green on road 3";
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
else //last if wali cond..
{
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
 cout<<endl<<endl;
cout<<"Green on road 4";
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
}
getch();
}
break; //khatam
default :
cout<<"--> Please enter correct choice"<<endl;
}
}
struct emergency //emergency wala 
{
string v_name,v_place,v_time;
int platenumber;
};
int a=5;
emergency e[5]={{"Tyota Civic","Rawalpindi","12:40:49",1234}, //globally 
initial
 {"Honda Civic","Taxila","01:20:15",5678},
{"BMW T56","Near Museum","11:20:59",9123},
{"Mehran","Near Nehar Stop","02:45:45",4567},
{"Vivo L26","Near Shalimar Garden","01:45:34",8912}};
void emergencysituation(emergency); //function declear
void emergencysituation(emergency e[5]) //function definition
{
system("cls");
int option;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" EMERGENCY SERVICE ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Enter your choice..._"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Press 1 for sensor response.."<<endl;
cout<<"--> press 2 for management help.."<<endl;
cout<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cin>>option;
cout<<endl;
switch (option) //switch start from here
{
case 1: //case 01
{
system("cls");
int ascii=175; //pehly waly
 char ch=ascii;
 cout<<"\n ";
 for(int i=0 ; i<29 ; i++)
 cout<<ch; 
 cout<<" EMERGENCY SERVICE ";
 for(int i=0 ; i<29 ; i++)
 cout<<ch;
 cout<<endl<<endl;
int i,ring=0;
int pnumber;
cout<<endl;
cout<<"--> Scanned plate number..._ ";
cin>>pnumber;
cout<<endl<<endl;
int asci=94; //dusra wala
char chh=asci;
for(int i=0 ; i<80 ; i++)
cout<<chh;
cout<<endl;
for(i=0 ; i<5 ; i++)
{
if(pnumber==e[i].platenumber) 
//first if condition
{
ring++;
}
if(ring==1) //second 
if condition
{
string str;
cout<<"--> MANAGEMANT CALL....._ "<<endl;
cout<<"Ringing!!! ?"<<endl<<endl;
cout<<"What type of emergency situation you are facing 
"<<endl<<endl<<endl;
cout<<"--> ";
cin>>str;
cout<<endl<<endl;
cout<<"Sensor installed on that location where your vehicle stuck 
informed your "<<endl;
cout<<"location to our management now please wait for our 
service :)";
cout<<"THNAKS"<<endl<<endl;
break;
}
}
if(pnumber!=e[i].platenumber) 
//third if condition
{
cout<<"--> No vehicle found yet..._"<<endl;
}
getch();
}
break;
case 2: //case 2 start sensor 
wala
{
system("cls");
int ascii=175; //pehly waly
 char ch=ascii;
 cout<<"\n ";
 for(int i=0 ; i<29 ; i++)
 cout<<ch; 
 cout<<" EMERGENCY SERVICE ";
 for(int i=0 ; i<29 ; i++)
 cout<<ch;
 cout<<endl<<endl;
int number;
cout<<"--> Please dial \"1111\""" for emergency situation"<<endl;
cin>>number;
cout<<endl<<endl;
int asci=94; //dusra wala
char chh=asci;
for(int i=0 ; i<80 ; i++)
cout<<chh;
cout<<endl;
if(number==1111) //pehli 
condition
{
cout<<"RINGING!!!"<<endl;
cout<<"Wait for our service___ THANKS :)"<<endl;
break;
}
else
{
cout<<"--> Please dial appropriate number for emergency 
"<<endl;
}
break;
}
default:
cout<<"Please select correct option"<<endl;
}
getch();
}
struct police //police wala
{
string colour,vehicle_type;
float height;
 int plate_number;
 string date,time;
};
police p[10]={{"Black","Car",24.5,3456,"20 May, 2023","12:45:54 PM"}, 
//globally initialization
 {"White","Car",24.5,7891,"21 May, 2023","11:50:10 AM"}, // for 
entring vehicles
 {"Balck","Truck",89.5,1234,"22 May, 2023","01:20:10 PM"},
 {"Black","Truck",89.5,3456,"23 May, 2023","10:20:10 AM"},
 {"White","Bike",12.5,6789,"24 May, 2023","09:20:20 AM"},
 {"White","Car",24.5,9876,"25 May, 2023","08:40:10 AM"},
 {"White","Car",24.5,6783,"26 May, 2023","09:20:00 AM"},
 {"White","Bike",12.5,4532,"27 May, 2023","12:20:00 PM"},
 {"White","Bike",12.5,6789,"28 May, 2023","02:20:20 PM"},
 {"Black","Bike",12.5,6789,"29 May, 2023","01:40:30 PM"}};
 
police pe[10]={{"Black","Car",24.5,3456,"12 June, 2023","09:20:20 AM"}, //for 
exit vehicles
 {"White","Car",24.5,7891,"13 June, 2023","01:10:00 PM"},
{"Balck","Truck",89.5,1234,"14 June, 2023","02:50:30 PM"},
{"Black","Truck",89.5,3456,"15 June, 2023","05:20:30 PM"},
{"White","Bike",12.5,6789,"16 June, 2023","06:40:50 PM"},
{"White","Car",24.5,9876,"17 June, 2023","07:20:30 AM"},
{"White","Car",24.5,6783,"24 June, 2023","11:20:10 AM"},
{"White","Bike",12.5,4532,"25 June, 2023","10:10:20 PM"},
{"White","Car",24.5,6789,"26 June, 2023","09:20:20 AM"},
{"Black","Car",24.5,6789,"27 June, 2023","11:20:20 AM"}};
void policeinvestigation(police); //function of vehicals record 
void policeinvestigation(police p[10])
{
system("cls");
int car=0,bike=0,truck=0;
float car_hight=24.5,bike_hight=12.5,truck_hight=89.5;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" POLICE INVESTGATION ";
for(int i=0 ; i<26 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"RECORD -->TOTAL NUMBER OF VEHICLES ENTERED AND EXIT IN 
CITY..._"<<endl;
cout<<endl;
cout<<endl;
int asii=118;
char ac=asii;
for(int i=0 ; i<80 ; i++)
cout<<ac;
cout<<endl;
cout<<" ENTERED VEHICLE"<<endl;
cout<<endl;
int asci=94; //dusra wala
char chh=asci;
for(int i=0 ; i<80 ; i++)
cout<<chh;
cout<<endl;
cout<<endl;
cout<<"Vehicle Type "<<setw(7)<<"Colour "<<setw(6)<<"Height "<<setw(6)<<"Plate 
Number "<<setw(7)<<"Date "<<setw(16)<<"Time "<<endl;
cout<<endl<<endl;
cout<<p[0].vehicle_type<<setw(17)<<p[0].colour<<setw(8)<<p[0].height<<setw(10)<<p[0].plat
e_number<<" "<<setw(10)<<p[0].date<<" "<<setw(10)<<p[0].time<<endl;
cout<<p[1].vehicle_type<<setw(17)<<p[1].colour<<setw(8)<<p[1].height<<setw(10)<<p[1].plat
e_number<<" "<<setw(10)<<p[1].date<<" "<<setw(10)<<p[1].time<<endl;
cout<<p[2].vehicle_type<<setw(15)<<p[2].colour<<setw(8)<<p[2].height<<setw(10)<<p[2].plat
e_number<<" "<<setw(10)<<p[2].date<<" "<<setw(10)<<p[2].time<<endl;
cout<<p[3].vehicle_type<<setw(15)<<p[3].colour<<setw(8)<<p[3].height<<setw(10)<<p[3].plat
e_number<<" "<<setw(10)<<p[3].date<<" "<<setw(10)<<p[3].time<<endl;
cout<<p[4].vehicle_type<<setw(16)<<p[4].colour<<setw(8)<<p[4].height<<setw(10)<<p[4].plat
e_number<<" "<<setw(10)<<p[4].date<<" "<<setw(10)<<p[4].time<<endl;
cout<<p[5].vehicle_type<<setw(17)<<p[5].colour<<setw(8)<<p[5].height<<setw(10)<<p[5].plat
e_number<<" "<<setw(10)<<p[5].date<<" "<<setw(10)<<p[5].time<<endl;
cout<<p[6].vehicle_type<<setw(17)<<p[6].colour<<setw(8)<<p[6].height<<setw(10)<<p[6].plat
e_number<<" "<<setw(10)<<p[6].date<<" "<<setw(10)<<p[6].time<<endl;
cout<<p[7].vehicle_type<<setw(16)<<p[7].colour<<setw(8)<<p[7].height<<setw(10)<<p[7].plat
e_number<<" "<<setw(10)<<p[7].date<<" "<<setw(10)<<p[7].time<<endl;
cout<<p[8].vehicle_type<<setw(16)<<p[8].colour<<setw(8)<<p[8].height<<setw(10)<<p[8].plat
e_number<<" "<<setw(10)<<p[8].date<<" "<<setw(10)<<p[8].time<<endl;
cout<<p[9].vehicle_type<<setw(16)<<p[9].colour<<setw(8)<<p[9].height<<setw(10)<<p[9].plat
e_number<<" "<<setw(10)<<p[9].date<<" "<<setw(10)<<p[9].time<<endl;
cout<<endl;
int e_car=0,e_bike=0,e_truck=0;
for(int i=0 ; i<10 ; i++)
{
if(p[i].height==car_hight)
{
e_car=e_car+1;
}
}
cout<<"--> Total number of CARS are "<<e_car<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(p[i].height==bike_hight)
{
e_bike=e_bike+1;
}
}
cout<<"--> Total number of BIKES are "<<e_bike<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(p[i].height==truck_hight)
{
e_truck=e_truck+1;
}
}
cout<<"--> Total number of TRUCKS are "<<e_truck<<endl<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
cout<<" EXIT VEHICLES"<<endl;
cout<<endl;
int sci=94; //dusra wala
char chhh=sci;
for(int i=0 ; i<80 ; i++)
cout<<chhh;
cout<<endl;
cout<<"Vehicle Type "<<setw(6)<<"Colour "<<setw(6)<<"Height "<<setw(6)<<"Plate 
Number "<<setw(7)<<"Date "<<setw(9)<<"Time "<<endl;
cout<<pe[0].vehicle_type<<setw(17)<<pe[0].colour<<setw(8)<<pe[0].height<<setw(10)<<pe[0]
.plate_number<<" "<<setw(7)<<p[0].date<<" "<<setw(9)<<p[0].time<<endl;
cout<<pe[1].vehicle_type<<setw(17)<<pe[1].colour<<setw(8)<<pe[1].height<<setw(10)<<pe[1]
.plate_number<<" "<<setw(7)<<p[1].date<<" "<<setw(9)<<p[1].time<<endl;
cout<<pe[2].vehicle_type<<setw(15)<<pe[2].colour<<setw(8)<<pe[2].height<<setw(10)<<pe[2]
.plate_number<<" "<<setw(7)<<p[2].date<<" "<<setw(9)<<p[2].time<<endl;
cout<<pe[3].vehicle_type<<setw(15)<<pe[3].colour<<setw(8)<<pe[3].height<<setw(10)<<pe[3]
.plate_number<<" "<<setw(7)<<p[3].date<<" "<<setw(9)<<p[3].time<<endl;
cout<<pe[4].vehicle_type<<setw(16)<<pe[4].colour<<setw(8)<<pe[4].height<<setw(10)<<pe[4]
.plate_number<<" "<<setw(7)<<p[4].date<<" "<<setw(9)<<p[4].time<<endl;
cout<<pe[5].vehicle_type<<setw(17)<<pe[5].colour<<setw(8)<<pe[5].height<<setw(10)<<pe[5]
.plate_number<<" "<<setw(7)<<p[5].date<<" "<<setw(9)<<p[5].time<<endl;
cout<<pe[6].vehicle_type<<setw(17)<<pe[6].colour<<setw(8)<<pe[6].height<<setw(10)<<pe[6]
.plate_number<<" "<<setw(7)<<p[6].date<<" "<<setw(9)<<p[6].time<<endl;
cout<<pe[7].vehicle_type<<setw(16)<<pe[7].colour<<setw(8)<<pe[7].height<<setw(10)<<pe[7]
.plate_number<<" "<<setw(7)<<p[7].date<<" "<<setw(9)<<p[7].time<<endl;
cout<<pe[8].vehicle_type<<setw(17)<<pe[8].colour<<setw(8)<<pe[8].height<<setw(10)<<pe[8]
.plate_number<<" "<<setw(7)<<p[8].date<<" "<<setw(9)<<p[8].time<<endl;
cout<<pe[9].vehicle_type<<setw(17)<<pe[9].colour<<setw(8)<<pe[9].height<<setw(10)<<pe[9]
.plate_number<<" "<<setw(7)<<p[9].date<<" "<<setw(9)<<p[9].time<<endl;
cout<<endl;
for(int i=0 ; i<10 ; i++)
{
if(pe[i].height==car_hight)
{
car=car+1;
}
}
cout<<"--> Total number of cars are "<<car<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(pe[i].height==bike_hight)
{
bike=bike+1;
}
}
cout<<"--> Total number of bikes are "<<bike<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(pe[i].height==truck_hight)
{
truck=truck+1;
}
}
cout<<"--> Total number of trucks are "<<truck<<endl<<endl;
for(int i=0 ; i<80 ; i++)
cout<<ac;
cout<<endl<<endl;
getch();
}
struct userinfo //license hai ya nhe 
{
string name,father_name,city,vehicle_name;
int license_number,plate_number;
};
userinfo u[10]={{"Kaleem Akram","M.Akram","Taxial","HONDA CIVIC",345678,1234},
 {"Waseem Akram","M.Akram","Taxila","Audi A4",456789,5678},
 {"Shehzad Ali","Iqbal Ali","Hafizabad","Ford Mustang",123456,9123},
{"Ali Hassan","Hassan Iqbal","Hafizabad","Nissan 
Altima",786545,4567},
{"Waleed Ali","Nazeer Ahmed","Lahore","Audi 
A4",879046,8912},
{"Yasir Ahmed","Nazeer Ahmed","Lahode","HONDA 
CIVIC",674587,3456},
{"Abubakar","Ali Raza","Hafizabad","VXR Alto",567890,7891},
{"Babar Ali","Usama Bin","Karachi","Alto B56",663478,2345},
{"Rizwam Ahmed","Ahmed Ali","Taxila","Ford 
R56",871234,6789},
{"Sahan Ali","Masood Aln","Taxila","COROLLA 
Gt67",879034,1235}};
void license(userinfo);
void license(userinfo u[10])
{
system("cls");
int match=0;
int p_number;
int ascii=175;
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" LICENSE RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"--> Scanned plate number of comming vehicle..._ ";
cout<<endl;
cout<<"\n ";
for(int i=0 ; i<74 ; i++)
 cout<<ch;
 cout<<endl<<endl;
cin>>p_number;
 int i;
for(i=0 ; i<10 ; i++)
{
if(p_number==u[i].plate_number)
{
match++;
}
 if(match==1)
 {
 cout<<"NAME --> "<<u[i].name<<endl;
cout<<"FATHER NAME --> "<<u[i].father_name<<endl;
cout<<"CITY NAME --> "<<u[i].city<<endl;
cout<<"LICENSE NUMBER --> "<<u[i].license_number<<endl;
cout<<"PLATE NUMBER --> "<<u[i].plate_number<<endl;
cout<<"ALLOWED VEHICLE --> "<<u[i].vehicle_name<<endl;
cout<<endl<<endl;
cout<<"YOUR RECORD IS FOUND, YOU ARE ALLOWED TO 
DRIVE ON THIS ROAD thanks:)";
 break;
}
}
if(p_number!=u[i].plate_number)
{
cout<<"--> STOP!!!___it's dangerous, You can't Derive without 
license..."<<endl;
}
getch();
}
struct platenumber //mtag wala
{
int plate_number;
};
int row=10;
platenumber po[10]={{1234},{5678},
 {9123},{4567},
 {8912},{3456},
 {7891},{2345},
 {6789},{1245}};
void Mtag(platenumber);
void Mtag(platenumber po[10])
{
system("cls");
int match=0;
int p_number;
int ascii=175;
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" TAX RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"--> Scanned plate number of comming vehicle..._ ";
cin>>p_number;
cout<<endl;
cout<<"\n ";
for(int i=0 ; i<70 ; i++)
 cout<<ch;
 cout<<endl<<endl;
 int i;
for(i=0 ; i<10 ; i++)
{
if(p_number==po[i].plate_number)
{
match++;
}
 if(match==1)
 {
 cout<<"--> Allowed to go, Your tax has been received ::))";
 break;
}
}
if(p_number!=po[i].plate_number)
{
cout<<"--> Sorry you have to stop here, Your tax yet not received"<<endl;
}
getch();
}
int r=10;
struct vehicle //vehicales record start
{
string company_name,colour,vehicle_type;
float height,width;
 int plate_number;
};
vehicle v[10]={{"Honde Civic","Black","Car",24.5,34.5,3456},
 {"Audi A4","White","Car",24.5,34.5,7891},
 {"Toyota Hilux","Balck","Truck",89.5,34.5,1234},
 {"GMC Sierra","Black","Truck",89.5,34.5,3456},
 {"Triumph Street","White","Bike",12.5,34.5,6789},
 {"Toyota Camry","White","Car",24.5,34.5,9876},
 {"Tesla Model S","White","Car",24.5,34.5,6783},
 {"Honda CBR1000RR","White","Bike",12.5,34.5,4532},
 {"Ducati Panigale V4","White","Bike",12.5,34.5,6789},
 {"KTM Duke 390","White","Bike",12.5,34.5,6789}};
 
vehicle ve[10]={{"Toyota Camry","Black","Car",24.5,34.5,3456}, //for exit vehicles
 {"BMW 3 Series","White","Car",24.5,34.5,7891},
{"Toyota Hilux","Balck","Truck",89.5,34.5,1234},
{"GMC Sierra","Black","Truck",89.5,34.5,3456},
{"KTM Duke 390","White","Bike",12.5,34.5,6789},
{"Porsche 911","White","Car",24.5,34.5,9876},
{"Tesla Model S","White","Car",24.5,34.5,6783},
{"Honda CBR1000RR","White","Bike",12.5,34.5,4532},
{"Honda Civic","White","Car",24.5,34.5,6789},
{"Honda Civic","Black","Car",24.5,34.5,6789}}; 
void vehiclerecord(vehicle); //function of vehicals record 
void vehiclerecord(vehicle v[3])
{
system("cls");
int chois;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Enter your choice..._"<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<"--> Press 1 to check entering vehicles.."<<endl;
cout<<"--> press 2 to check exit vehicles.."<<endl;
cout<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<75 ; i++)
 cout<<ch;
cin>>chois;
switch(chois)
{
case 1: //case 1
{
system("cls");
int car=0,bike=0,truck=0; //simple output
float car_hight=24.5,bike_hight=12.5,truck_hight=89.5;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"RECORD -->TOTAL NUMBER OF VEHICLES ENTERED IN CITY..._"<<endl;
cout<<endl<<endl;
int asci=94; //dusra wala
char chh=asci;
for(int i=0 ; i<80 ; i++)
cout<<chh;
cout<<endl;
cout<<setw(22)<<"Vehical Company Name "<<setw(6)<<"Vehicle Type 
"<<setw(6)<<"Colour "<<setw(6)<<"Height "<<setw(6)<<"Width "<<setw(6)<<"Plate 
Number ";
cout<<endl<<endl;
cout<<setw(12)<<v[0].company_name<<setw(16)<<v[0].vehicle_type<<setw(13)<<v[0].colour
<<setw(8)<<v[0].height<<setw(8)<<v[0].width<<setw(10)<<v[0].plate_number<<endl;
cout<<setw(12)<<v[1].company_name<<setw(16)<<v[1].vehicle_type<<setw(13)<<v[1].colour
<<setw(8)<<v[1].height<<setw(8)<<v[1].width<<setw(10)<<v[1].plate_number<<endl;
cout<<setw(12)<<v[2].company_name<<setw(16)<<v[2].vehicle_type<<setw(13)<<v[2].colour
<<setw(8)<<v[2].height<<setw(8)<<v[2].width<<setw(10)<<v[2].plate_number<<endl;
cout<<setw(12)<<v[3].company_name<<setw(16)<<v[3].vehicle_type<<setw(13)<<v[3].colour
<<setw(8)<<v[3].height<<setw(8)<<v[3].width<<setw(10)<<v[3].plate_number<<endl;
cout<<setw(12)<<v[4].company_name<<setw(14)<<v[4].vehicle_type<<setw(13)<<v[4].colour
<<setw(8)<<v[4].height<<setw(8)<<v[4].width<<setw(10)<<v[4].plate_number<<endl;
cout<<setw(12)<<v[5].company_name<<setw(15)<<v[5].vehicle_type<<setw(14)<<v[5].colour
<<setw(8)<<v[5].height<<setw(8)<<v[5].width<<setw(10)<<v[5].plate_number<<endl;
cout<<setw(12)<<v[6].company_name<<setw(14)<<v[6].vehicle_type<<setw(14)<<v[6].colour
<<setw(8)<<v[6].height<<setw(8)<<v[6].width<<setw(10)<<v[6].plate_number<<endl;
cout<<setw(12)<<v[7].company_name<<setw(13)<<v[7].vehicle_type<<setw(13)<<v[7].colour
<<setw(8)<<v[7].height<<setw(8)<<v[7].width<<setw(10)<<v[7].plate_number<<endl;
cout<<setw(12)<<v[8].company_name<<setw(10)<<v[8].vehicle_type<<setw(13)<<v[8].colour
<<setw(8)<<v[8].height<<setw(8)<<v[8].width<<setw(10)<<v[8].plate_number<<endl;
cout<<setw(12)<<v[9].company_name<<setw(16)<<v[9].vehicle_type<<setw(13)<<v[9].colour
<<setw(8)<<v[9].height<<setw(8)<<v[9].width<<setw(10)<<v[9].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(v[i].height==car_hight)
{
car=car+1;
}
}
cout<<"--> Total number of CARS are "<<car<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(v[i].height==bike_hight)
{
bike=bike+1;
}
}
cout<<"--> Total number of BIKES are "<<bike<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(v[i].height==truck_hight)
{
truck=truck+1;
}
}
cout<<"--> Total number of TRUCKS are "<<truck<<endl<<endl;
char choice;
int tt;
do
{
 int e_car=0,e_bike=0,e_truck=0; //for 60
int a_car=0,a_bike=0,a_truck=0; //for 30
cout<<"After 30 or 60 minutes??"<<endl<<endl;
cin>>tt;
if(tt==30) //first condition
{
system("cls");
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"RECORD-->Total vehicals after half an hour..._"<<endl;
cout<<endl<<endl;
for(int i=0 ; i<80 ; i++)
 cout<<chh;
 cout<<endl;
cout<<setw(22)<<"vehical company name "<<setw(6)<<"vehicle type "<<setw(6)<<"colour 
"<<setw(6)<<"height "<<setw(6)<<"width "<<setw(6)<<"plate number ";
cout<<endl<<endl;
cout<<setw(12)<<v[0].company_name<<setw(16)<<v[0].vehicle_type<<setw(13)<<v[0].colour
<<setw(8)<<v[0].height<<setw(8)<<v[0].width<<setw(10)<<v[0].plate_number<<endl;
cout<<setw(12)<<v[1].company_name<<setw(16)<<v[1].vehicle_type<<setw(13)<<v[1].colour
<<setw(8)<<v[1].height<<setw(8)<<v[1].width<<setw(10)<<v[1].plate_number<<endl;
cout<<setw(12)<<v[2].company_name<<setw(16)<<v[2].vehicle_type<<setw(13)<<v[2].colour
<<setw(8)<<v[2].height<<setw(8)<<v[2].width<<setw(10)<<v[2].plate_number<<endl;
cout<<setw(12)<<v[3].company_name<<setw(16)<<v[3].vehicle_type<<setw(13)<<v[3].colour
<<setw(8)<<v[3].height<<setw(8)<<v[3].width<<setw(10)<<v[3].plate_number<<endl;
cout<<setw(12)<<v[4].company_name<<setw(14)<<v[4].vehicle_type<<setw(13)<<v[4].colour
<<setw(8)<<v[4].height<<setw(8)<<v[4].width<<setw(10)<<v[4].plate_number<<endl;
cout<<setw(12)<<v[5].company_name<<setw(16)<<v[5].vehicle_type<<setw(13)<<v[5].colour
<<setw(8)<<v[5].height<<setw(8)<<v[5].width<<setw(10)<<v[5].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(v[i].height==car_hight)
{
a_car=a_car+1;
}
}
cout<<"--> Total number of cars are "<<a_car<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(v[i].height==bike_hight)
{
a_bike=a_bike+1;
}
}
cout<<"--> Total number of bikes are "<<a_bike<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(v[i].height==truck_hight)
{
a_truck=a_truck+1;
}
}
cout<<"--> Total number of trucks are "<<a_truck<<endl<<endl;
}
else if(tt==60) //second condition
{
system("cls");
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"--> Total vehicals after half an hour..._"<<endl;
cout<<endl<<endl;
cout<<endl<<endl;
for(int i=0 ; i<80 ; i++)
 cout<<chh;
 cout<<endl; 
cout<<setw(22)<<"vehical company name "<<setw(6)<<"vehicle type "<<setw(6)<<"colour 
"<<setw(6)<<"height "<<setw(6)<<"width "<<setw(6)<<"plate number ";
cout<<endl<<endl;
cout<<setw(12)<<v[5].company_name<<setw(15)<<v[5].vehicle_type<<setw(14)<<v[5].colour
<<setw(8)<<v[5].height<<setw(8)<<v[5].width<<setw(10)<<v[5].plate_number<<endl;
cout<<setw(12)<<v[6].company_name<<setw(14)<<v[6].vehicle_type<<setw(14)<<v[6].colour
<<setw(8)<<v[6].height<<setw(8)<<v[6].width<<setw(10)<<v[6].plate_number<<endl;
cout<<setw(12)<<v[7].company_name<<setw(13)<<v[7].vehicle_type<<setw(13)<<v[7].colour
<<setw(8)<<v[7].height<<setw(8)<<v[7].width<<setw(10)<<v[7].plate_number<<endl;
cout<<setw(12)<<v[8].company_name<<setw(10)<<v[8].vehicle_type<<setw(13)<<v[8].colour
<<setw(8)<<v[8].height<<setw(8)<<v[8].width<<setw(10)<<v[8].plate_number<<endl;
cout<<setw(12)<<v[9].company_name<<setw(16)<<v[9].vehicle_type<<setw(13)<<v[9].colour
<<setw(8)<<v[9].height<<setw(8)<<v[9].width<<setw(10)<<v[9].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=5 ; i<10 ; i++)
{
if(v[i].height==car_hight)
{
e_car=e_car+1;
}
}
cout<<"--> Total number of cars "<<e_car<<endl;
for(int i=5 ; i<10 ; i++)
{
if(v[i].height==bike_hight)
{
e_bike=e_bike+1;
}
}
cout<<"--> Total number of bikes are "<<e_bike<<endl;
for(int i=5 ; i<10 ; i++)
{
if(v[i].height==truck_hight)
{
e_truck=e_truck+1;
}
}
cout<<"--> Total number of trucks are "<<e_truck<<endl;
}
cout<<"Do you want to check no of vehicles before few moments(y/n)";
cin>>choice;
}while(choice!='n');
}
break;
case 2: //case 2
 { 
 system("cls");
 int car=0,bike=0,truck=0;
float car_hight=24.5,bike_hight=12.5,truck_hight=89.5;
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"RECORD -->TOTAL NUMBER OF VEHICLES EXIT FROM CITY..._"<<endl; 
cout<<endl<<endl<<endl;
int asci=94; //dusra wala
char chh=asci;
for(int i=0 ; i<80 ; i++)
cout<<chh;
cout<<endl;
cout<<setw(22)<<"vehical company name "<<setw(6)<<"vehicle type "<<setw(6)<<"colour 
"<<setw(6)<<"height "<<setw(6)<<"width "<<setw(6)<<"plate number ";
cout<<endl<<endl;
cout<<setw(12)<<ve[0].company_name<<setw(16)<<ve[0].vehicle_type<<setw(13)<<ve[0].col
our<<setw(8)<<ve[0].height<<setw(8)<<ve[0].width<<setw(10)<<ve[0].plate_number<<endl;
cout<<setw(12)<<ve[1].company_name<<setw(16)<<ve[1].vehicle_type<<setw(13)<<ve[1].col
our<<setw(8)<<ve[1].height<<setw(8)<<ve[1].width<<setw(10)<<ve[1].plate_number<<endl;
cout<<setw(12)<<ve[2].company_name<<setw(16)<<ve[2].vehicle_type<<setw(13)<<ve[2].col
our<<setw(8)<<ve[2].height<<setw(8)<<ve[2].width<<setw(10)<<ve[2].plate_number<<endl;
cout<<setw(12)<<ve[3].company_name<<setw(16)<<ve[3].vehicle_type<<setw(13)<<ve[3].col
our<<setw(8)<<ve[3].height<<setw(8)<<ve[3].width<<setw(10)<<ve[3].plate_number<<endl;
cout<<setw(12)<<ve[4].company_name<<setw(16)<<ve[4].vehicle_type<<setw(13)<<ve[4].col
our<<setw(8)<<ve[4].height<<setw(8)<<ve[4].width<<setw(10)<<ve[4].plate_number<<endl;
cout<<setw(12)<<ve[5].company_name<<setw(15)<<ve[5].vehicle_type<<setw(14)<<ve[5].col
our<<setw(8)<<ve[5].height<<setw(8)<<ve[5].width<<setw(10)<<ve[5].plate_number<<endl;
cout<<setw(12)<<ve[6].company_name<<setw(14)<<ve[6].vehicle_type<<setw(14)<<ve[6].col
our<<setw(8)<<ve[6].height<<setw(8)<<ve[6].width<<setw(10)<<ve[6].plate_number<<endl;
cout<<setw(12)<<ve[7].company_name<<setw(13)<<ve[7].vehicle_type<<setw(13)<<ve[7].col
our<<setw(8)<<ve[7].height<<setw(8)<<ve[7].width<<setw(10)<<ve[7].plate_number<<endl;
cout<<setw(12)<<ve[8].company_name<<setw(16)<<ve[8].vehicle_type<<setw(13)<<ve[8].col
our<<setw(8)<<ve[8].height<<setw(8)<<ve[8].width<<setw(10)<<ve[8].plate_number<<endl;
cout<<setw(12)<<ve[9].company_name<<setw(16)<<ve[9].vehicle_type<<setw(13)<<ve[9].col
our<<setw(8)<<ve[9].height<<setw(8)<<ve[9].width<<setw(10)<<ve[9].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(ve[i].height==car_hight)
{
car=car+1;
}
}
cout<<"--> Total number of cars are "<<car<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(ve[i].height==bike_hight)
{
bike=bike+1;
}
}
cout<<"--> Total number of bikes are "<<bike<<endl<<endl;
for(int i=0 ; i<10 ; i++)
{
if(ve[i].height==truck_hight)
{
truck=truck+1;
}
}
cout<<"--> Total number of trucks are "<<truck<<endl<<endl;
char choice;
int tt;
do
{
 int e_car=0,e_bike=0,e_truck=0;
int a_car=0,a_bike=0,a_truck=0;
cout<<"BEFORE 30 or 60 minutes??"<<endl<<endl;
cin>>tt;
if(tt==30) //first condition
{
system("cls");
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"--> Total vehicals after half an hour are..._"<<endl;
cout<<endl<<endl;
for(int i=0 ; i<80 ; i++)
 cout<<chh;
 cout<<endl;
cout<<setw(22)<<"vehical company name "<<setw(6)<<"vehicle type "<<setw(6)<<"colour 
"<<setw(6)<<"height "<<setw(6)<<"width "<<setw(6)<<"plate number ";
cout<<endl<<endl;
cout<<setw(12)<<ve[0].company_name<<setw(16)<<ve[0].vehicle_type<<setw(13)<<ve[0].col
our<<setw(8)<<ve[0].height<<setw(8)<<ve[0].width<<setw(10)<<ve[0].plate_number<<endl;
cout<<setw(12)<<ve[1].company_name<<setw(16)<<ve[1].vehicle_type<<setw(13)<<ve[1].col
our<<setw(8)<<ve[1].height<<setw(8)<<ve[1].width<<setw(10)<<ve[1].plate_number<<endl;
cout<<setw(12)<<ve[2].company_name<<setw(16)<<ve[2].vehicle_type<<setw(13)<<ve[2].col
our<<setw(8)<<ve[2].height<<setw(8)<<ve[2].width<<setw(10)<<ve[2].plate_number<<endl;
cout<<setw(12)<<ve[3].company_name<<setw(16)<<ve[3].vehicle_type<<setw(13)<<ve[3].col
our<<setw(8)<<ve[3].height<<setw(8)<<ve[3].width<<setw(10)<<ve[3].plate_number<<endl;
cout<<setw(12)<<ve[4].company_name<<setw(16)<<ve[4].vehicle_type<<setw(13)<<ve[4].col
our<<setw(8)<<ve[4].height<<setw(8)<<ve[4].width<<setw(10)<<ve[4].plate_number<<endl;
cout<<setw(12)<<ve[5].company_name<<setw(16)<<ve[5].vehicle_type<<setw(13)<<ve[5].col
our<<setw(8)<<ve[5].height<<setw(8)<<ve[5].width<<setw(10)<<ve[5].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(ve[i].height==car_hight)
{
a_car=a_car+1;
}
}
cout<<"--> Total number of cars are "<<a_car<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(ve[i].height==bike_hight)
{
a_bike=a_bike+1;
}
}
cout<<"--> Total number of bikes are "<<a_bike<<endl<<endl;
for(int i=0 ; i<6 ; i++)
{
if(ve[i].height==truck_hight)
{
a_truck=a_truck+1;
}
}
cout<<"--> Total number of trucks are "<<a_truck<<endl<<endl;
}
else if(tt==60) //second condition
{
system("cls");
int ascii=175; //pehly waly
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<" VEHICLES RECORD ";
for(int i=0 ; i<29 ; i++)
 cout<<ch;
cout<<endl<<endl<<endl;
cout<<"--> Total vehicals after half an hour are..._"<<endl;
cout<<endl<<endl;
for(int i=0 ; i<80 ; i++)
 cout<<chh;
 cout<<endl;
cout<<setw(22)<<"vehical company name "<<setw(6)<<"vehicle type "<<setw(6)<<"colour 
"<<setw(6)<<"height "<<setw(6)<<"width "<<setw(6)<<"plate number ";
cout<<endl<<endl;
cout<<setw(12)<<ve[5].company_name<<setw(15)<<ve[5].vehicle_type<<setw(14)<<ve[5].col
our<<setw(8)<<ve[5].height<<setw(8)<<ve[5].width<<setw(10)<<ve[5].plate_number<<endl;
cout<<setw(12)<<ve[6].company_name<<setw(14)<<ve[6].vehicle_type<<setw(14)<<ve[6].col
our<<setw(8)<<ve[6].height<<setw(8)<<ve[6].width<<setw(10)<<ve[6].plate_number<<endl;
cout<<setw(12)<<ve[7].company_name<<setw(13)<<ve[7].vehicle_type<<setw(13)<<ve[7].col
our<<setw(8)<<ve[7].height<<setw(8)<<ve[7].width<<setw(10)<<ve[7].plate_number<<endl;
cout<<setw(12)<<ve[8].company_name<<setw(16)<<ve[8].vehicle_type<<setw(13)<<ve[8].col
our<<setw(8)<<ve[8].height<<setw(8)<<ve[8].width<<setw(10)<<ve[8].plate_number<<endl;
cout<<setw(12)<<ve[9].company_name<<setw(16)<<ve[9].vehicle_type<<setw(13)<<ve[9].col
our<<setw(8)<<ve[9].height<<setw(8)<<ve[9].width<<setw(10)<<ve[9].plate_number<<endl;
cout<<endl;
int asciii=118;
char c=asciii;
for(int i=0 ; i<80 ; i++)
cout<<c;
cout<<endl<<endl;
for(int i=5 ; i<10 ; i++)
{
if(ve[i].height==car_hight)
{
e_car=e_car+1;
}
}
cout<<"--> Total number of cars are "<<e_car<<endl<<endl;
for(int i=5 ; i<10 ; i++)
{
if(ve[i].height==bike_hight)
{
e_bike=e_bike+1;
}
}
cout<<"--> Total number of bikes are "<<e_bike<<endl<<endl;
for(int i=5 ; i<10 ; i++)
{
if(ve[i].height==truck_hight)
{
e_truck=e_truck+1;
}
}
cout<<"--> Total number of trucks are "<<e_truck<<endl<<endl;
}
cout<<"Do you want to check no of vehicles before few moments(y/n)";
cin>>choice;
}while(choice!='n');
 } 
break;
default:
cout<<"Please enter correct choice"<<endl;
}
}
void wheather(); //function of weather
void wheather()
{
system("cls");
char ch;
int time;
int ascii=175;
char chh=ascii;
cout<<"\n ";
for(int i=0 ; i<25 ; i++)
cout<<chh;
cout<<" WHEATHER UPDATES ";
for(int i=0 ; i<25 ; i++)
 cout<<chh;
 cout<<endl<<endl;
cout<<chh<<" LIVE WHEATHER IS SUNNY:) "<<endl<<endl;
cout<<endl<<endl;
cout<<chh<<" CURRENT TIMING --> "<<__TIME__<<" AHEAD--> 
Rawalpindi 24KM away"<<endl;
cout<<endl<<" AHEAD--> Taxila 35KM away"<<endl;
cout<<endl; 
cout<<chh<<" TODAY DATE --> "<<__DATE__<<" AHEAD--> Khanpur 
45KM away"<<endl<<endl;
cout<<endl;
int acii=178;
char c=acii;
cout<<"\n";
for(int i=0 ; i<80 ; i++)
 cout<<c;
cout<<endl<<endl;
cout<<" You are the driver of your own success !!! ";
cout<<endl<<endl;
do
{
cout<<"Please select time to observe wheather after 30,60 or 15 minutes... 
"<<endl;
cin>>time;
if(time==15) // if condition
{
system("cls");
cout<<"\n ";
for(int i=0 ; i<25 ; i++)
cout<<chh;
cout<<" WHEATHER UPDATES ";
for(int i=0 ; i<25 ; i++)
 cout<<chh;
cout<<endl<<endl;
cout<<endl;
cout<<chh<<" Weather after 15 minutes wil be PARTLY CLOUDY"<<endl;
cout<<endl<<endl;
cout<<chh<<" CURRENT TIMING --> "<<__TIME__<<" AHEAD--> 
Rawalpindi 24KM away"<<endl;
cout<<endl<<" AHEAD--> Taxila 35KM away"<<endl;
cout<<endl; 
cout<<chh<<" TODAY DATE --> "<<__DATE__<<" AHEAD--> Khanpur 
45KM away"<<endl<<endl;
cout<<endl;
int acii=178;
char c=acii;
cout<<"\n";
for(int i=0 ; i<80 ; i++)
 cout<<c;
cout<<endl<<endl;
cout<<" BIG DREAMS HAVE SMALL BEGINNINGS !!! ";
cout<<endl<<endl;
}
else if(time==60) //second condition
{
system("cls");
cout<<"\n ";
for(int i=0 ; i<25 ; i++)
cout<<chh;
cout<<" WHEATHER UPDATES ";
for(int i=0 ; i<25 ; i++)
 cout<<chh;
cout<<endl<<endl;
cout<<endl;
cout<<chh<<" Weather after 1 HOUR wil be LIGHTNING"<<endl;
cout<<endl<<endl;
cout<<chh<<" CURRENT TIMING --> "<<__TIME__<<" AHEAD--> 
Rawalpindi 24KM away"<<endl;
cout<<endl<<" AHEAD--> Taxila 35KM away"<<endl;
cout<<endl; 
cout<<chh<<" TODAY DATE --> "<<__DATE__<<" AHEAD--> Khanpur 
45KM away"<<endl<<endl;
cout<<endl;
int acii=178;
char c=acii;
cout<<"\n";
for(int i=0 ; i<80 ; i++)
 cout<<c;
cout<<endl<<endl;
cout<<" WORKHARD UNTILL YOUR CAR DOORS OPEN UPWARS !!! ";
cout<<endl<<endl;
}
else if(time==30)
{
system("cls");
cout<<"\n ";
for(int i=0 ; i<25 ; i++)
cout<<chh;
cout<<" WHEATHER UPDATES ";
for(int i=0 ; i<25 ; i++)
 cout<<chh;
cout<<endl<<endl;
cout<<endl;
cout<<chh<<" Weather after half hour wil be SUNSHINE"<<endl;
cout<<endl<<endl;
cout<<chh<<" CURRENT TIMING --> "<<__TIME__<<" AHEAD--> 
Rawalpindi 24KM away"<<endl;
cout<<endl<<" AHEAD--> Taxila 35KM away"<<endl;
cout<<endl; 
cout<<chh<<" TODAY DATE --> "<<__DATE__<<" AHEAD--> Khanpur 
45KM away"<<endl<<endl;
cout<<endl;
int acii=178;
char c=acii;
cout<<"\n";
for(int i=0 ; i<80 ; i++)
 cout<<c;
cout<<endl<<endl;
cout<<" BE SAFE DRIVE SMART !!! ";
cout<<endl<<endl;
}
else
{
exit(0);
}
cout<<"Do you want to check wheather after few moments... (y/n)"<<endl;
cin>>ch;
}while(ch!='n');
}
struct Register //registration
{
int ID;
string name,e_mail,password;
}R;
void registeraccount();
void registeraccount()
{
system("cls");
char d;
int ascii=178;
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<25 ; i++)
 cout<<ch;
cout<<" REGISTRATION:) ";
for(int i=0 ; i<25 ; i++)
 cout<<ch;
cout<<endl<<endl;
/* cout<<"_______________________________"<<endl;
 cout<<"|-----------Register----------|"<<endl;
 cout<<"|_____________________________|"<<endl<<endl;*/
 cout<<ch<<ch<<"~~ Please enter ID --> ";
 cin>>R.ID;
 cout<<endl;
 cout<<ch<<ch<<"~~ Please enter name --> ";
 cin>>R.name;
 cout<<endl;
 cout<<ch<<ch<<"~~ Please enter e-mail --> ";
 cin>>R.e_mail;
 cout<<endl;
 cout<<ch<<ch<<"~~ Please enter password --> ";
 do
 {
 d=getch();
 if(isdigit(d) || isalpha(d) || ispunct(d))
 {
 R.password+=d;
 cout<<"*";
}
}while(isdigit(d) || isalpha(d) || ispunct(d));
 cout<<endl<<endl<<endl;
 cout<<"\n ";
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
cout<<" Congratulation Your Account Is Registered:)";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
}
void loginaccount();
void loginaccount()
{
system("cls");
int ascii=178;
char ch=ascii;
char d;
string test_email,test_password;
cout<<ch<<ch<<"~~ Please enter e-mail --> ";
cin>>test_email;
cout<<endl;
cout<<ch<<ch<<"~~ Please enter password --> ";
do
{
d=getch();
if(isdigit(d) || isalpha(d) || ispunct(d))
{
 test_password+=d;
 cout<<"*";
}
}while(isdigit(d) || isalpha(d) || ispunct(d));
if(test_email==R.e_mail && test_password==R.password)
{
cout<<endl<<endl;
cout<<ch<<ch<<"~~ User ID --> "<<R.ID<<endl;
cout<<ch<<ch<<"~~ User name --> "<<R.name<<endl;
cout<<ch<<ch<<"~~ User e-mail --> "<<R.e_mail<<endl;
cout<<ch<<ch<<"~~ User password --> "<<R.password<<endl;
p:
system("cls");
cout<<" REAL TIME TRAFFIC MONITORING & MANAGEMENT"<<endl;
cout<<endl<<endl;
cout<<" SELECT YOUR CHOICE "<<endl;
cout<<" ____________________________________________________"<<endl;
 cout<<"| 1. To check wheather condition |"<<endl;
 cout<<"| 2. To check vehicles record |"<<endl;
 cout<<"| 3. To check M-tag of vehicle |"<<endl;
 cout<<"| 4. To check license of vehicle |"<<endl;
 cout<<"| 5. Police Investigation |"<<endl;
 cout<<"| 6. Emergency condition |"<<endl;
 cout<<"| 7. Signals System |"<<endl;
 cout<<"|_____________8. Exit________________________________|"<<endl<<endl;
cout<<endl<<endl;
int choice;
int ascii=175;
char ch=ascii;
cout<<"\n ";
for(int i=0 ; i<3 ; i++)
 cout<<ch;
cout<<" Please enter your choice -->";
cin>>choice;
switch(choice)
{
case 1:
wheather();
break;
case 2:
vehiclerecord(v);
break;
case 3:
Mtag(po);
break;
case 4:
license(u);
break;
case 5:
policeinvestigation(p);
break;
case 6:
emergencysituation(e);
break;
case 7:
roadsignal();
break;
case 8:
exit(0);
break;
default:
cout<<"Please enter correct options";
}
goto p;
}
else
{
cout<<"\n ";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
 cout<<"OOPs no such data registered..."<<endl;
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
}
}
void forgotemail();
void forgotemail()
{
system("cls");
int ascii=178;
char ch=ascii;
char d;
string test_password;
cout<<ch<<ch<<"Please enter password --> ";
do 
{
d=getch();
if(isdigit(d) || isalpha(d) || ispunct(d))
{
test_password+=d;
cout<<"*";
}
}while(isdigit(d) || isalpha(d) || ispunct(d));
if(test_password==R.password)
{
cout<<endl<<endl<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
 cout<<" Congratulations your record is found:) ";
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<ch<<ch<<"~~ User ID --> "<<R.ID<<endl;
cout<<ch<<ch<<"~~ User name --> "<<R.name<<endl;
cout<<ch<<ch<<"~~ User e-mail --> "<<R.e_mail<<endl;
cout<<ch<<ch<<"~~ User password --> "<<R.password<<endl;
}
else
{
cout<<endl<<endl<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
 cout<<" OOPs no such data registered... ";
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
}
}
void forgotpassword();
void forgotpassword()
{
system("cls");
int ascii=178;
char ch=ascii;
string test_email;
cout<<ch<<ch<<"Please enter e-mail --> ";
cin>>test_email;
if(test_email==R.e_mail)
{
cout<<endl<<endl<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
 cout<<" Congratulations your record is found:) ";
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
cout<<endl<<endl;
cout<<ch<<ch<<"~~ User ID --> "<<R.ID<<endl;
cout<<ch<<ch<<"~~ User name --> "<<R.name<<endl;
cout<<ch<<ch<<"~~ User e-mail --> "<<R.e_mail<<endl;
cout<<ch<<ch<<"~~ User password --> "<<R.password<<endl;
}
else
{
cout<<endl<<endl<<endl<<endl;
cout<<"\n ";
for(int i=0 ; i<15 ; i++)
 cout<<ch;
 cout<<" OOPs no such data registered... ";
 for(int i=0 ; i<15 ; i++)
 cout<<ch;
}
}
int main()
{
int choice;
p:
system("cls");
cout<<" REAL TIME TRAFFIC MONITORING & MANAGEMENT "<<endl;
cout<<endl<<endl;
cout<<" WELLCOME TO OUR PROJECT "<<endl;
 cout<<" _________________________________"<<endl;
 cout<<"| 1. Register |"<<endl;
 cout<<"| 2. Login |"<<endl;
 cout<<"| 3. Forgot Email |"<<endl;
 cout<<"| 4. Forgot Password |"<<endl;
 cout<<"|_____________5. Exit_____________|"<<endl<<endl;
cout<<endl<<endl;
cout<<"Please enter your choice -> ";
cin>>choice;
switch(choice)
{
case 1:
registeraccount();
break;
case 2:
loginaccount();
break;
case 3:
forgotemail();
break;
case 4:
forgotpassword();
break;
case 5:
exit(0);
break;
default :
cout<<"Please enter valid choice..."<<endl;
}
getch();
goto p;
}
