#include<iostream>
#include<string>
using namespace std;

class Product{
    int productID;
    string name;
    int quantity;
    double price;

    public:
        Product(int id=0,string n = "",int qty=0,double pr=0.0)
        :productID(id),name(n),quantity(qty),price(pr){}

        void displayProductInfo() const{
            cout<<"Product ID:"<<productID<<" ";
            cout<<"Product Name"<<name<<" ";
            cout<<"Quantity:"<<quantity<<" ";
            cout<<"Price:"<<price<<" ";
        }

        double totalValue() const{
            return quantity*price;
        }
};

int main(){
    int numProducts;
    cout<<"Enter the no of products"<<" ";
    cin>>numProducts;
    Product inventory[100];
    
    for(int i=0;i<numProducts;i++){
        int id,qty;
        string name;
        double price;

        cout<<"Enter details for product "<<(i+1)<<":"<<" ";
        cout<<"Product Id:"<<" ";
        cin>>id;
        cout<<"Product Name";
        cin>>name;
        cout<<"Quantity"<<" ";
        cin>>qty;
        cout<<"Price:"<<" ";
        cin>>price;

        inventory[i]=Product(id,name,qty,price);
    }

    cout<<"Inventor Details"<<endl;
    double totalInventoryValue = 0.0;
    for(int i=0;i<numProducts;i++){
        inventory[i].displayProductInfo();
        totalInventoryValue+=inventory[i].totalValue();
    }

    cout<<"Total Inventory Value"<<totalInventoryValue<<" ";
    return 0;
}