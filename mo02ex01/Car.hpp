#pragma once
#include <iostream>
#include <string>
#include "Engine.hpp"
#include "Wheel.hpp"
#include "Brake.hpp"
#include "Transmission.hpp"
#include "Accelerator.hpp"
using namespace std;

class Car
{
    private:
        Engine* engine_;
        Wheel* wheels_;
        Brake* brakes_;
        Transmission* transmission_;
        Accelerator* accelerator_;

        string make;
        string model;
        int year;
        int topSpeed;

    public:
        Car(string make_, string model_, int year_, int topSpeed_)
        : make(make_), model(model_), year(year_), topSpeed(topSpeed_)
        {
            engine_ = new Engine();
            wheels_ = new Wheel[4];
            brakes_ = new Brake[4];
            transmission_ = new Transmission();
            accelerator_ = new Accelerator();
        }
        
        void printParts()
        {
            engine_->print();
            for (int i = 0; i < 4; ++i) {
                wheels_[i].print();
                brakes_[i].print();
            }
            transmission_->print();
            accelerator_->print();

            cout << "Car Info: " << make << ' ' <<
            model << ' ' << year << ' ' << topSpeed << endl;
        }
        
        ~Car()
        {
            delete engine_;
            delete [] wheels_;
            delete [] brakes_;
            delete transmission_;
            delete accelerator_;
        }
};