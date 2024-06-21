
class  Car 
{
private:
   float fuel{0.0} ;
   float speed{0.0} ;
   int passengers {0};
   int array[5]={1, 2, 3};
   char *p {};
public:
   Car();
   Car (float amount);
   void Accelerate ();
   void Brake();
   void FillFuel(float amount);   
   void AddPassengers(int count);
   void Dashboard ();
   ~Car ();
};
