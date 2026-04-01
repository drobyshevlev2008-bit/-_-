#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() const {
        cout << "Engine started\n";
    }

    virtual double getMaxSpeed() const {
        return 0;
    }

    virtual void info() const {
        cout << "Vehicle\n";
    }

    virtual ~Vehicle() = default;
};

//Car
class Car : public Vehicle {
public:
    void startEngine() const override {
        cout << "Car engine started\n";
    }

    double getMaxSpeed() const override {
        return 180;
    }

    void info() const override {
        cout << "I am a car\n";
    }
};

//ElectricCar
class ElectricCar : public Car {
public:
    void startEngine() const override {
        cout << "Electric motor silently started" << endl;
    }
    double getMaxSpeed() const final {
        return 180;
    }
};

//SportsCar
class SportsCar : public Car {};

//Bicycle
class Bicycle final : public Vehicle {
public:
    void info() const override {
        cout << "I am a bicycle\n";
    }
};