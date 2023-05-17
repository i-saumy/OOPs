#include <iostream>

using namespace std;

class dimension_825
{
    private:
    float length_825;
    float breadth_825;  
    
    public:
    
    float getlength_825(void)
    
        {
            
            cout << "Enter length : ";
            cin >> length_825;
            return length_825;
        }
        
    float getbreadth_825(void)

        {
            
            cout << "Enter breadth : ";
            cin >> breadth_825;
            return breadth_825;

        }
};

    class Sheet_825 : public dimension_825

    {
        
    public:
    float costOfSheet_825()
    
    {
                
        cout << "\n**For Plastic Sheet**\n";
        float area_825 = getlength_825() * getbreadth_825();
        float cost_825 = 40 * area_825;
        
return cost_825;

    }
};

        class Box_825 : public dimension_825

    {
    
        float height_825;
        public:
        float costOfBox_825()
        
     {
         
        cout << "\n**For Plastic Box**\n";
        cout << "Enter Height of Box : ";
        cin >> height_825;
        float volume_825 = getlength_825() * getbreadth_825() * height_825;
        float cost_825 = 60 * volume_825;
        
        return cost_825;
    }
    
};

int main()

    {
        do
    {
        
        int choice_825;
                        
        cout << "\nSelect operation to Perform:\n";
        cout << "1. Calculate Cost of 2D Sheet (Rs. 40 per square ft\n";
        cout << "2. Calculate Cost of 3D Box (Rs. 60 per cubic ft\n";
        cout << "3. Exit\n";
        cout << "\nEnter Chice : ";
        cin >> choice_825;
        
        switch (choice_825)

            {
        
                    case 1:
                    
                    Sheet_825 s_825;

                    cout << "Cost of Plastic Sheet : " << s_825.costOfSheet_825() << endl;
                    break;
                    
                    case 2:
                    
                    Box_825 b_825;
                    
                    cout << "Cost of Plastic Box : " << b_825.costOfBox_825() << endl;
                    break;
                    
                    case 3:
                    
                    exit(0);
                    
                    break;

                    default:

                    cout << "Wrong Input. Please Try Again\n";
                    
                    break;
            }

        }     
        
        while (1);
        
return 0;
}
