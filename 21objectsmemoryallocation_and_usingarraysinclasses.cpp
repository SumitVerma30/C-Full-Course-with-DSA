#include <iostream>
using namespace std;

class shop{
    int item [100];
    int price [100];
    int counter;
    public:
    void initcounter (void) { counter = 0;}
        void getprice (void);
        void setprice (void);
};
void shop :: setprice (){
    cout << "Enter your item: ";
    cin >> item [counter];
    cout << "Enter your price: ";
    cin >> price [counter];
    counter ++;
}
void shop :: getprice (){
    for (int i = 0; i < counter; i++){
        cout << "The pricce of item with id " << item[i] << " is: " << price << endl;
    }
}

int main() {
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.getprice();
    
    return 0;
}