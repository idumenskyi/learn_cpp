#include <iostream>
using namespace std;

//abstract product A
class IProductA {
public:
    virtual void testA() = 0;
};

//abstract product B
class IProductB {
public:
    virtual void testB() = 0;
};

//concrete product A1
class ProductA1: public IProductA {
public:
    void testA() {
        cout << "test A1\n";
    }
};

//concrete product A2
class ProductA2: public IProductA {
public:
    void testA() {
        cout << "test A2\n";
    }
};

//concrete product B1
class ProductB1: public IProductB {
public:
    void testB() {
        cout << "test B1\n";
    }
};

//concrete product B2
class ProductB2: public IProductB {
public:
    void testB() {
        cout << "test B2\n";
    }
};

//abstract factory
class IFactory {
public:
    virtual IProductA* createA() = 0;
    virtual IProductB* createB() = 0;
};

//concrete factory 1
class Factory1: public IFactory {
public:
    IProductA* createA() {
        return new ProductA1();
    }
    IProductB* createB() {
        return new ProductB1();
    }
};

//concrete factory 2
class Factory2: public IFactory {
public:
    IProductA* createA() {
        return new ProductA2();
    }
    IProductB* createB() {
        return new ProductB2();
    }
};

//client code
static void testFactory(IFactory* factory) {
    IProductA* productA = factory->createA();
    IProductB* productB = factory->createB();
    productA->testA();
    productB->testB();
}


int main()
{

    testFactory(new Factory1());
    //printed: test A1
    //         test B1
    testFactory(new Factory2());
    //printed: test A2
    //         test B2
    return 0;
}
