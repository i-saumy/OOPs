 #include <iostream> using namespace std; class polynomial_5825 { private: float x_5825[100]; int no_5825; public: inline void setdata_5825(int ar_5825[], int n_5825); void add_5825(polynomial_5825 p1_5825, polynomial_5825 p2_5825); void display_5825(); }; inline void polynomial_5825::setdata_5825(int arr_5825[], int n_5825) { for (int i_5825 = 0; i_5825 < 100; i_5825++) { x_5825[i_5825] = 0; } no_5825 = n_5825; for (int i_5825 = 0; i_5825 < n_5825; i_5825++) { x_5825[i_5825] = arr_5825[i_5825]; } } inline void polynomial_5825::add_5825(polynomial_5825 p1_5825, polynomial_5825 p2_5825) { for (int i_5825 = 0; i_5825 < 100; i_5825++) { x_5825[i_5825] = 0; } no_5825 = max(p1_5825.no_5825, p2_5825.no_5825); for (int i_5825 = 0; i_5825 < no_5825; i_5825++) { x_5825[i_5825] = p1_5825.x_5825[i_5825] + p2_5825.x_5825[i_5825]; } } inline void polynomial_5825::display_5825() { for (int i_5825 = 0; i_5825 < no_5825; i_5825++) { if (x_5825[i_5825] != 0) { cout << x_5825[i_5825] << "x^" << i_5825 << " "; } } cout << endl; } int main() { polynomial_5825 p_5825[2], sum_5825, prod_5825; int n_5825; cout << "\nEnter the no of terms in the first polynomial : "; cin >> n_5825; int arr_5825[n_5825]; for (int i_5825 = 0; i_5825 < n_5825; i_5825++) { cout << "Enter the coefficients of x raised to the power " << i_5825 << endl; cin >> arr_5825[i_5825]; } int n2_5825; cout << "\nEnter the no of terms in the second polynomial : "; cin >> n2_5825; int arr2_5825[n2_5825]; for (int i_5825 = 0; i_5825 < n2_5825; i_5825++) { cout << "Enter the coefficients of x raised to the power " << i_5825 << endl; cin >> arr2_5825[i_5825]; cout << "\n"; } p_5825[0].setdata_5825(arr_5825, n_5825); p_5825[1].setdata_5825(arr2_5825, n2_5825); sum_5825.add_5825(p_5825[0], p_5825[1]); cout << "First polynomial :\n"; p_5825[0].display_5825(); cout << "Second polynomial :\n"; p_5825[1].display_5825(); cout << "Sum : "; sum_5825.display_5825(); }