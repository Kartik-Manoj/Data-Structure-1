/*Write a program to track rainfall data for 3 cities over 4 months. 
 Using a 2D array, we can store the data, calculate the average rainfall 
 for each city, and display the rainfall data in a tabular format.*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"PRN:B24CE1087\n";
    float rain[3][4];
    float total=0.0, average=0; 
    cout<<"Enter Rainfall for 3 cities:\n";
    for(int c=0;c<3;c++)
   {
     cout<<"Enter data for city"<<c+1<<":\n";
     printf("\n");
     for(int m=0;m<4;m++)
     {
		 cout<<"\tMonth"<<m+1<<":";
		 cin>>rain[c][m];
      }
    printf("\n");
}
cout<<"Rainfall Tracking\n";
cout<<"SNo.\tCity\t\tM1\t\tM2\t\tM3\t\tM4\t\tAvg Rainfall(in mm)\n";
for(int c=0;c<3;c++)
{
	total=0.0;
	cout<<c+1<<"\tCity"<<c+1<<"\t\t";
	 for(int m=0;m<4;m++)
	 {
		 cout<<rain[c][m]<<"\t\t";
		 total+=rain[c][m];
	 }
average=total/4;
cout<<average<<"\n";
}
}

/*Write a program for Tracking daily temperatures of 3 cities for a week .
 The program calculates the average temperature for each day and for the 
 week.*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"PRN:B24CE1087\n";
    float temp[3][7];
    float total=0.0, average=0;
    float dayTotal[7]={0};
    
    cout<<"Enter Temperature for 3 cities:\n";
    for (int c=0;c<3;c++)
    {
        cout<<"\nEnter data for city"<<c+1 <<":\n\n";
        for (int d=0;d<7;d++)
        {
            cout<<"\tDay"<<d+1<<":";
            cin>>temp[c][d];
            dayTotal[d]+=temp[c][d]; 
        }
        printf("\n");
    }

    cout<<"Temperature Tracking\n";
    cout<<"SNo.\tCity\tD1\tD2\tD3\tD4\tD5\tD6\tD7\tAvg Temp(Week)\n";
    for (int c=0;c<3;c++)
    {
        total=0.0;
        cout<<c+1<<"\tCity"<<c+1<<"\t";
        for (int d=0;d<7;d++)
        {
            cout<<temp[c][d]<<"\t";
            total+=temp[c][d];
        }
        average=total/7;
        cout<<average<<"\n";
    }
    cout<<"\nAverage Temp (Daywise)\n";
    for (int d=0;d<7;d++)
    {
        average=dayTotal[d]/3;
        cout<<"Day"<<d+1<<":\t"<<average<<"\n";
    }

    return 0;
}
