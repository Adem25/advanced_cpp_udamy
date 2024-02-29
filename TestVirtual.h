#pragma once

class Base
{
public:
    void Method1();
    //virtual allows to overwrite
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

