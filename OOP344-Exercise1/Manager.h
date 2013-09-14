class Employee;

class Manager
   {
   private:
      int totalHours;
	  Employee* employee;
   protected:
   public:
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };