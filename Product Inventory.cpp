#include<bits/stdc++.h>
using namespace std;

class Product
{
private:
    int price, stock;
public:
    string pro_name, cate;

    Product(int cost, int rem, string name, string cat)
    {
        price = cost;
        stock = rem;
        pro_name = name;
        cate = cat;
    }

    // void SetPrice(int cost)
    // {
    //     price = cost;
    // }

    void GetPrice()
    {
        cout << "Price: " << price << endl;
    }

    // void SetStock(int rem)
    // {
    //     stock = rem;
    // }

    void GetStock()
    {
        cout << "Stock: " << stock << endl;
    }
};

int main()
{
    Product p1 = {10000,5,"Mobile","Electronics"};
    p1.GetPrice();
    p1.GetStock();
}