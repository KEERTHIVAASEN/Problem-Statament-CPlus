// Define an abstract class with a method
class AbstractClass {
public:
    virtual void abstract_method() = 0;
};

// Define a concrete subclass that implements the abstract method
class ConcreteClass : public AbstractClass {
public:
    void abstract_method() {
        std::cout << "Method implementation in concrete class" << std::endl;
    }
};

// Create an instance of the concrete subclass and call the method
int main() {
    ConcreteClass obj;
    obj.abstract_method();  // Output: Method implementation in concrete class
}


