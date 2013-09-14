#include "Manager.h"

class Employee
   {
   private:
      int ID;
      char* name;
      Manager* boss;
      int hours;
   protected:
   public:
      Employee();
	  Employee(int id, char* name);
      ~Employee();
      void setBoss(Manager* newBoss);
      void work(int numOfHours);
      void report();
      int getHours();
      int getID();
      char* getName();
   };