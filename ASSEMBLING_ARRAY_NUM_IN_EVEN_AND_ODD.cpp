
 #include <iostream>
 
 using namespace std;
 
    int main()
    {
 
        int a[100], i, num;
        
        cout<<"Enter the size of an array \n";
        cin>>num;
        
        cout<<"Enter the elements of the array \n";
 
        for (i = 0; i < num; i++) 
        {
            cin>>a[i];
        }
 
        cout<<"The numbers assembled as: ";
        
        for (i = 0; i < num; i++) 
        {
            if (a[i] % 2 == 0) 
            
            {
                cout<<" "<<a[i];
            }
           
        }
        
        for (i = 0; i < num; i++) 
        
        {
            if (a[i] % 2!=0)
            
            {
                cout<<" "<<a[i];
            }
            
        }
        return 0;
    }


