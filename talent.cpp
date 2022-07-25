#include <string>
#include <iostream>
#include <vector>

class Talent {
    private: 
        std::string name;
    public:
        Talent(std::string inName = "") : name(inName) {}
        std::string get_name() { return name; }
        virtual void show_talent() = 0;
};

class Swimming: public Talent {

    public:
        Swimming(std::string inName = "") : Talent(inName) {}
        virtual void show_talent() override {
            std:: cout << "Swim" << std::endl;
        }
};

class Dancing: public Talent {

    public:
        Dancing(std::string inName = "") : Talent(inName) {}
        virtual void show_talent() override {
            std::cout << "Dancing" << std::endl;
        }
};

class Counting: public Talent {
    
    public:
        Counting(std::string inName = "") : Talent(inName) {}
        virtual void show_talent() override {
            std::cout << "Counting" << std::endl;
        }
};


class Dog {
    private:
        std::string name;
        std::vector<Talent*> talents;
    public:
        Dog(std::string inName = "") : name(inName) {}
        void add_talent (Talent* inTalent) {
            talents.push_back(inTalent);
        }
        void show_talents() {
            std::cout << "This is " << name << " and it has some talents:" << std::endl;
            for (auto i: talents) {
                std::cout << "It can ";
                i->show_talent();
            }
        }
};


int main() {
    Dog *dog = new Dog("Steve");
    Talent *swim = new Swimming("Swim");
    Talent *dance = new Dancing("Dance");
    Talent *count = new Counting("Count"); 
    dog->add_talent(swim);
    dog->add_talent(dance);
    dog->add_talent(count);
    dog->show_talents();
    return 0;
}
