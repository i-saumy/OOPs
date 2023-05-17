  #include<iostream>
    
    using namespace std;
    
    #include<conio.h>
    
    #include<math.h>

    struct complex
    {
                float real;
                float img;
    }
                num1,num2;
    
    int main()
    {
        
            float a,b;
        
            cout<<"Enter real and imaginary part of 1st complex number:";
            cin>>num1.real>>num1.img;
            
            cout<<"Enter real and imaginary part of 2nd complex number:";
            cin>>num2.real>>num2.img;
            
            
            a=(num1.real)+(num2.real);
            b=(num1.img)+(num2.img);
            
            cout<<"\n Addition of complex numbers: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
            
            
            a=(num1.real)-(num2.real);
            b=(num1.img)-(num2.img);
            
            cout<<"\n Subtraction of complex numbers: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
            
            
            a=((num1.real)*(num2.real))-((num1.img)*(num2.img));
            b=((num1.real)*(num2.img))+((num2.real)*(num1.img));
            
            cout<<" \n Multiplication of complex numbersr: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
            
            
            
            a=(((num1.real)*(num2.real))+((num1.img)*(num2.img)))/(pow(num2.real,2)+pow(num2.img,2));
            b=(((num2.real)*(num1.img))-((num1.real)*(num2.img)))/(pow(num2.real,2)+pow(num2.img,2));
            
            cout<<" \n Division of complex numbers: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
            
    return 0;
    }
