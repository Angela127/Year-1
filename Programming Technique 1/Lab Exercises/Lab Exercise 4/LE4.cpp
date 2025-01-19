//Name: Angela Ngu Xin Yi
//Matric No: A24CS0226
//Section: 3
//Date: 11/1/2025

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(double F[], int SIZE)
{
	fstream infile("input_LE4.txt", ios::in);
	if (!infile.is_open()) {
        cout << "Error: Unable to open file " << endl;
        exit(1); 
    }
    for(int i=0; i<SIZE; i++)
    {
    	infile>>F[i];
	}
	infile.close();
}

void computeC(double F[], double C[], int SIZE)
{
	for (int i = 0; i < SIZE; i++) {
        C[i] = 5.0 / 9.0 * (F[i] - 32);
    }
}

double average(double C[], int SIZE)
{
	double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += C[i];
    }
    return sum / SIZE;
}

char grade(double C) {
    if (C >= 35)
        return 'H';
    else if (C >= 20)
        return 'M';
    else
        return 'L';
}

void writeFile(double F[], double C[], int SIZE, char g[])
{
	fstream outfile("output_Le4.txt", ios::out);
	outfile<<setw(14)<<"C(Celsius)"<<setw(14)<<"F(Farenheit)"<<setw(14)<<"Description"<<endl;
	outfile<<setw(14)<<"=========="<<setw(14)<<"============"<<setw(14)<<"==========="<<endl;
	for(int j = 0; j<SIZE; j++)
	{
		outfile<<fixed << setprecision(2)<<setw(12)<<C[j]<<setw(13)<<F[j];
		outfile<<setw(12)<<g[j]<<endl;
	}
}

int main()
{
	const int SIZE = 8;
	double F[SIZE], C[SIZE];
	readFile(F, SIZE);
	computeC(F, C, SIZE);
	double avg = average(C, SIZE);
	int high = 0, medium = 0, low = 0;
	char g[SIZE];
    for (int i = 0; i < SIZE; i++) {
        g[i] = grade(C[i]);
        if (g[i] == 'H') 
		{
			high++;
		}
        else if (g[i] == 'M') 
		{
			medium++;
		}
        else if (g[i] == 'L') 
		{
			low++;
		}
    }
    cout << fixed << setprecision(1);
    cout << "Average of the temperature in Celsius: " << avg << endl;
    cout << "Number of high temperatures: " << high << endl;
    cout << "Number of medium temperatures: " << medium << endl;
    cout << "Number of low temperatures: " << low << endl;
    
    writeFile(F, C, SIZE, g);
    return 0;
}
