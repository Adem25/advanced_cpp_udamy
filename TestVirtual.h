#pragma once

class Base
{
public:
    void Method1();
    //virtual allows to overwrite if you have something like Base* basePtr = new Derived();
    virtual void Method2();
};

class Derived : public Base
{
public:
    void Method1();
    void Method2();
};

class TestVirtual
{
public:
    void Run();
};

