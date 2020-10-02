#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int base_10(int );

int main()
{
    //declaring variables
    int x_value;
    int y_value;

    //prompting user input for X and Y values
	cout << "Enter First Number: ";
	cin >> x_value;

    while(x_value < 0)
    {
        cout << "Invalid Input, Try again." << endl;
        cout << "Enter First Number: ";
        cin >> x_value;
    }

	cout << "Enter Second Number: ";
	cin >> y_value;

    while(y_value < 0)
    {
        cout << "Invalid Input, Try again." << endl;
        cout << "Enter Second Number: ";
        cin >> y_value;
    }


	int x_value_length = base_10(x_value);
	int y_value_length = base_10(y_value);


	int high_length = fmax(x_value_length, y_value_length);
    int multiplier = pow(10, high_length);
	int valX = x_value/multiplier;
	int valY = y_value / multiplier;

    cout << endl << "\t\tX = " << valX << "\t" << " Y = " << valY << endl;

	int val_of_X = valX/100;
	int val_of_X_Split = valX%100;
	int val_of_Y = valY/100;
	int val_of_Y_Split = valY%100;

	int sum_of_x = val_of_X + val_of_X_Split;
	int sum_of_y = val_of_Y + val_of_Y_Split;

	cout <<"\n\t\t" <<setw(5) << val_of_X << setw(3) << val_of_X_Split << setw(13) << val_of_Y << setw(3) << val_of_Y_Split << endl << endl
	     <<setw(10) << val_of_X << setw(3) << val_of_Y << setw(16) << sum_of_x << setw(5) << sum_of_y << setw(13) << val_of_X_Split << setw(5) << val_of_Y_Split << endl;

	///calculation for number1
	int calc1FirstNum=val_of_X/10;
	int calc2FirstNum=val_of_X%10;
	int calc3FirstNum=val_of_X_Split/10;
	int calc4FirstNum=val_of_X_Split%10;

	///calculation for number2
	int calc1SecNum=val_of_Y/10;
	int calc2SecNum=val_of_Y%10;
	int calc3SecNum=val_of_Y_Split/10;
	int calc4SecNum=val_of_Y_Split%10;

    ///chunks calculation
	int ssum1=sum_of_x/10;
	int ssum1_2=sum_of_x%10;
	int ssum2=sum_of_y/10;
	int ssum2_2=sum_of_y%10;

	int total1=ssum1+ssum1_2;
	int total2=ssum2+ssum2_2;

	int s1=((calc1FirstNum+calc2FirstNum)*(calc1SecNum+calc2SecNum))-((calc1FirstNum*calc1SecNum)+(calc2FirstNum*calc2SecNum));
	int s2=(total1*total2)-((ssum1*ssum2)+(ssum1_2*ssum2_2));
	int s3=((calc3FirstNum+calc4FirstNum)*(calc3SecNum+calc4SecNum))-((calc3FirstNum*calc3SecNum)+(calc4FirstNum*calc4SecNum));

	int sum1=((calc1FirstNum*calc1SecNum)*100)+(s1*10)+(calc2FirstNum*calc2SecNum);
	int sum2=((ssum1*ssum2)*100)+(s2*10)+(ssum1_2*ssum2_2);
	int sum3=((calc3FirstNum*calc3SecNum)*100)+(s3*10)+(calc4FirstNum*calc4SecNum);

    ///total
	int getvalue=sum2-(sum1+sum3);
	int ans=sum1*10000+getvalue*100+sum3;

    ///display output
	cout<< setw(5) << calc1FirstNum << setw(2) << calc2FirstNum << setw(7) << calc1SecNum << setw(2) << calc2SecNum
	    << setw(10) << ssum1 << setw(2) << ssum1_2 << setw(2) << setw(5) << ssum2 << setw(2) << ssum2_2 << setw(10)
	    << calc3FirstNum << setw(2) << calc4FirstNum << setw(4) << calc3SecNum << setw(2) << calc4SecNum << endl;

	cout << setw(5) << calc1FirstNum << setw(2) << calc1SecNum << setw(2) << calc1FirstNum + calc2FirstNum << setw(4)
	     << calc1SecNum + calc2SecNum << setw(2) << calc2FirstNum << setw(2) << calc2SecNum << setw(8) << ssum1
	     << setw(3) << ssum2 << setw(3) << total1 << setw(3) << total2 << setw(2) << ssum1_2 << setw(2) << ssum2_2
	     << setw(5) << calc3FirstNum << setw(2) << calc3SecNum << setw(2) <<" "<< calc3FirstNum+calc4FirstNum << setw(5)
	     << calc3SecNum + calc4SecNum << setw(2) << calc4FirstNum << setw(2)  <<calc4SecNum << endl;

	cout << setw(5) << calc1FirstNum * calc1SecNum << setw(6) << (calc1FirstNum+calc2FirstNum)*(calc1SecNum+calc2SecNum) << setw(6)
	     << calc2FirstNum*calc2SecNum << setw(9) << ssum1*ssum2 << setw(7) << total1*total2 << setw(5) << ssum1_2*ssum2_2 << setw(6)
	     << calc3FirstNum*calc3SecNum << setw(6) << (calc3FirstNum+calc4FirstNum)*(calc3SecNum+calc4SecNum) << setw(6)
	     << calc4FirstNum*calc4SecNum << endl;

    cout << setw(12) << (calc1FirstNum*calc1SecNum)+(calc2FirstNum*calc2SecNum) << setw(20) << (ssum1*ssum2)+(ssum1_2*ssum2_2) << setw(18)
	     << (calc3FirstNum*calc3SecNum)+(calc4FirstNum*calc4SecNum) << endl;

	cout << setw(12) << s1 << setw(20) << s2 << setw(18) << s3 << endl;

	cout << setw(9) << (calc1FirstNum*calc1SecNum)*100 << "+" << s1*10 << "+" << calc2FirstNum*calc2SecNum << setw(13) << (ssum1*ssum2)*100
	     << "+" << s2*10 << "+" << ssum1_2*ssum2_2 << setw(11) << (calc3FirstNum*calc3SecNum)*100 << "+" << s3*10 << "+"
	     << calc4FirstNum*calc4SecNum << endl;

	cout << setw(12) << sum1 << setw(21) << sum2 << setw(18) << sum3 << endl << setw(33) << sum1+sum3 << endl << setw(33) << getvalue << endl;
	cout << setw(28) << sum1*10000 << "+" << getvalue*100 << "+" << sum3 << endl << setw(35) << ans << endl;


    return 0;

}

int base_10(int v)
{
	while (v != 0) {
		v /= 10;
	}
}

