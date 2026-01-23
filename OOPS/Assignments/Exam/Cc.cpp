// constructor
class ClassName
{
private:
    datatype a, b;

public:
    ClassName(datatype x, datatype y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};

// operator overloading
ClassName operator+(ClassName obj)
{
    ClassName temp;
    temp.a = a + obj.a;
    temp.b = b + obj.b;
    return temp;
}

// Array of objects
ClassName obj[3];

for (int i = 0; i < 3; i++)
{
    obj[i].input();
}

for (int i = 0; i < 3; i++)
{
    obj[i].display();
}


// Single inheritance
class Base
{
protected:
    int a;

public:
    Base(int x)
    {
        a = x;
    }
};

// Multilevel inheritance
class Derived : public Base
{
    int b;

public:
    Derived(int x, int y) : Base(x)
    {
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};


// Multiple inheritance
class A
{
protected:
    int x;

public:
    A(int a) { x = a; }
};

class B : public A
{
protected:
    int y;

public:
    B(int a, int b) : A(a) { y = b; }
};

class C : public B
{
    int z;

public:
    C(int a, int b, int c) : B(a, b)
    {
        z = c;
    }

    void display()
    {
        cout << x << " " << y << " " << z << endl;
    }
};


// Virtual function
class Base
{
public:
    virtual void display()
    {
        cout << "Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->display();
}