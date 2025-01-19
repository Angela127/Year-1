//Name: Angela Ngu Xin Yi (A24CS0226)
//Name: Toh Shee Thong (A24CS0309)
//Date: 16.1.2025

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct UniversityData{
	string university[20];
	int intake[20];
    int enrolment[20];
    int output[20];
    int sumIntake;
    int sumEnrolment;
    int sumOutput;
    int lowestIntake;
    int lowestEnrolment;
    int lowestOutput;
    int highestIntake;
    int highestEnrolment;
    int highestOutput;
    int rangeIntake;
    int rangeEnrolment;
    int rangeOutput;
};

void getInput(UniversityData &data, int size)
{
	ifstream infile;
    infile.open("input_A3.txt");
	if (!infile.is_open()) {
        cout << "Error: Unable to open file " << endl;
        exit(1); 
    }
    for(int i=0; i<size; i++)
    {
    	infile>>data.university[i]>>data.intake[i]>>data.enrolment[i]>>data.output[i];
	}
	infile.close();
}

void getSum(int array[], int &sum, int size){
	sum = 0;

for (int i = 0; i<size;i++){
		sum += array[i];
	}
}

int getLowest(const int array[], int size)
{
	int LOWEST = 0;
	for(int i=1; i<size; i++)
	{
		if(array[i]<array[LOWEST])
		{
			LOWEST = i;
		}
	}
	return LOWEST;
}


int getHighest(const int array[], int size)
{
	int HIGHEST = 0;
	for(int i=1; i<size; i++)
	{
		if(array[i]>array[HIGHEST])
		{
			HIGHEST = i;
		}
	}
	return HIGHEST;
}


int writeFile(const UniversityData &data, int size){
	ofstream outputFile;
	outputFile.open("output_A3.txt");
	outputFile<<setw(50)<<"NUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT"<<endl;
	outputFile<<setw(40)<<"IN PUBLIC UNIVERSITIES (2024)"<<endl<<endl;
	outputFile<<"-----------------------------------------------------------------"<<endl;
	outputFile<<setw(25)<<left<<"UNIVERSITY"<<right<<setw(8)<<"INTAKE"<<setw(17)<<"ENROLMENT"<<setw(14)<<"OUTPUT"<<endl;
	outputFile<<"-----------------------------------------------------------------"<<endl;
	for (int i = 0;i<size;i++){
		outputFile<<setw(25)<<left<<data.university[i]<<right<<setw(8)<<data.intake[i]<<setw(15)<<data.enrolment[i]<<setw(15)<<data.output[i]<<endl;
		
	}
	outputFile<<"-----------------------------------------------------------------"<<endl;
	outputFile<<setw(25)<<left<<"TOTAL"<<right<<setw(8)<<data.sumIntake<<setw(15)<<data.sumEnrolment<<setw(15)<<data.sumOutput<<endl;
	outputFile<<setw(25)<<left<<"AVERAGE"<<right<<setw(8)<<fixed<<setprecision(2)<<static_cast<float>(data.sumIntake) / size<<setw(15)<<static_cast<float>(data.sumEnrolment) / size<<setw(15)<<static_cast<float>(data.sumOutput) / size<<endl;
	outputFile<<"-----------------------------------------------------------------"<<endl<<endl;
	outputFile<<setw(40)<<left<<"THE LOWEST NUMBER OF STUDENTS' INTAKE"<<" = "<<data.intake[data.lowestIntake]<<" ("<<data.university[data.lowestIntake]<<")"<<endl;
	outputFile<<setw(40)<<left<<"THE LOWEST NUMBER OF STUDENTS' ENROLMENT"<<" = "<<data.enrolment[data.lowestEnrolment]<<" ("<<data.university[data.lowestEnrolment]<<")"<<endl;
	outputFile<<setw(40)<<left<<"THE LOWEST NUMBER OF STUDENTS' OUTPUT"<<" = "<<data.output[data.lowestOutput]<<" ("<<data.university[data.lowestOutput]<<")"<<endl<<endl;
	
	outputFile<<setw(40)<<left<<"THE HIGHEST NUMBER OF STUDENTS' INTAKE"<<" = "<<data.intake[data.highestIntake]<<" ("<<data.university[data.highestIntake]<<")"<<endl;
	outputFile<<setw(40)<<left<<"THE HIGHEST NUMBER OF STUDENTS' ENROLMENT"<<" = "<<data.enrolment[data.highestEnrolment]<<" ("<<data.university[data.highestEnrolment]<<")"<<endl;
	outputFile<<setw(40)<<left<<"THE HIGHEST NUMBER OF STUDENTS' OUTPUT"<<" = "<<data.output[data.highestOutput]<<" ("<<data.university[data.highestOutput]<<")"<<endl<<endl;
	
	outputFile<<setw(40)<<left<<"THE RANGE NUMBER OF STUDENTS' INTAKE"<<" = "<<data.rangeIntake<<endl;
	outputFile<<setw(40)<<left<<"THE RANGE NUMBER OF STUDENTS' ENROLMENT"<<" = "<<data.rangeEnrolment<<endl;
	outputFile<<setw(40)<<left<<"THE RANGE NUMBER OF STUDENTS' OUTPUT"<<" = "<<data.rangeOutput<<endl<<endl;
	
	outputFile<<"-----------------------------------------------------------------"<<endl<<endl;
	
	outputFile.close();
	return 0;
	
}




int main(){
	int size = 20;
	UniversityData data;
	getInput(data, size);

	getSum(data.intake, data.sumIntake, size);
	getSum(data.enrolment, data.sumEnrolment, size);
	getSum(data.output, data.sumOutput, size);
	
	
	data.lowestIntake = getLowest(data.intake, size);
	data.lowestEnrolment = getLowest(data.enrolment, size);
	data.lowestOutput = getLowest(data.output, size);
	
	data.highestIntake = getHighest(data.intake, size);
	data.highestEnrolment = getHighest(data.enrolment, size);
	data.highestOutput = getHighest(data.output, size);
	
	data.rangeIntake = data.intake[data.highestIntake]-data.intake[data.lowestIntake];
	data.rangeEnrolment = data.enrolment[data.highestEnrolment]-data.enrolment[data.lowestEnrolment];
	data.rangeOutput = data.output[data.highestOutput]-data.output[data.lowestOutput];
	
	writeFile(data,size);
	return 0;
}
