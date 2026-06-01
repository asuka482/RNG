#include <cstdio>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <random>

class random_number_generator
{
  public:
    int randnum = 0;
     std::uniform_int_distribution<> range();

     random_number_generator () {
      
       std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> uni(0,100);

       // BINDING /
          randnum = uni(gen);

          

     } 
};

 void typewriter (const std::string& text, int delay_ms) {
   for (char c : text) {
     std::cout << c << std::flush;
      std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
   }
 }


//* failed inheritence? ()
// class distro_diff : public random_number_generator {
  
//   public:
     
    //distro_diff (int x, int y) {
   //  unii(x,y)
  // }
 // };


 
 int main () {
   random_number_generator engine;

       std::random_device rd;
        std::mt19937 gen(rd());
         
   system("clear");
  
  
  int diff_select;
  int mode;
  int guess;
  std::string diff[7][1] = {
    { "0. EASY (CPU range: 0,50)" },
    {"1. NORMAL (CPU range: 0,100)"},
    {"2. HARD (CPU range: 0,200)"},
    {"3. VERY HARD (CPU: range 0,300)"},
    {"4. EXTREME (CPU range: 0,400)"},
    {"5. RANDOM (CPU range: 0,?)"}, 
    {"6. IMPOSSIBLE (CPU range: 0,5000)"},
     
  };


  size_t rows = std::size(diff);
  size_t FAKE_indices = std::size(*diff); 
   
while (true) {
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
    std::cout << "================================================" << '\n';
      std::cout << '\n';
       std::cout << "RANDOM NUMBER GAME" << '\n';
        std::cout << '\n';
          std::cout << "================================================" << '\n';

      std::cout << '\n';
      std::this_thread::sleep_for(std::chrono::milliseconds(900));
      std::cout << "1. OFFLINE (CPU)" << std::string(2,'\n');
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      std::cout << "2. ONLINE (NOT DONE)" << std::string(2,'\n');
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      std::cout << "3. QUIT" << std::string(2,'\n');
      

      std::cin >> mode;
       std::this_thread::sleep_for(std::chrono::milliseconds(300));
        
        switch (mode) {
         
           case 1:
 
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
             system("clear");
             break;
         
          case 2:

             
              return 0;
             break;

          case 3:

              return 0;
              break;


          default:

              system("clear");
               continue;


        }
        
        break;

}


// --- OFFLINE --- //


 for (int j = 0; j < rows; j++) {
   
   for (int k = 0; k < FAKE_indices; k++) {
     std::cout << diff[j][k] << std::string(2,'\n');
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   }
 }

std::string(2,'\n');

while (true) {

 std::cin >> diff_select;
 

   switch (diff_select) {


     case 0: {
       std::uniform_int_distribution<> uni(0,50);
        int random = uni(gen);

        system("clear");
         typewriter("Please Enter A Number beetween(0-50)",50);
           std::cout << '\n';
         std::cout << '\n';


          
          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
                std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);


       break;
    }

      case 1: {
       std::uniform_int_distribution<> uni(0,100);
        int random = uni(gen);
        system("clear");
         typewriter("Please Enter A Number beetween(0-100)",50);
           std::cout << '\n';
         std::cout << '\n';



            
          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);



                      
       break;
    }

       case 2: {
       std::uniform_int_distribution<> uni(0,200);
        int random = uni(gen);

        system("clear");
         typewriter("Please Enter A Number beetween(0-200)", 50);
         std::cout << '\n';
         std::cout << '\n';


          
          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);



       break;
    }


      case 3: {
       std::uniform_int_distribution<> uni(0,300);
        int random = uni(gen);

        system("clear");
         typewriter("Please Enter A Number beetween(0-300)",50);
           std::cout << '\n';
         std::cout << '\n';

          

          
          
          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);




       break;
 
    }

              
       case 4: {
       std::uniform_int_distribution<> uni(0,400);
        int random = uni(gen);

        system("clear");
         typewriter("Please Enter A Number beetween(0-400)",50);
           std::cout << '\n';
         std::cout << '\n';

          

          
          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW"; 
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
                 std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);



       break;
    }


       case 5: {
       std::uniform_int_distribution<> uni(0, engine.randnum);
        int random = uni(gen);

        system("clear");
         typewriter("Please Enter A Number As Your Guess(0-?)", 50);
           std::cout << '\n';
         std::cout << '\n';

          

          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH"; 
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);


       break;
    }

       case 6: {
       std::uniform_int_distribution<> uni(0,5000);
        int random = uni(gen);
        system("clear");
         typewriter("Please Enter A Number beetween(0-5000)",50); 
           std::cout << '\n';
         std::cout << '\n';

          
           

          do {
            std::cin >> guess;

            if (guess == random) {
               std::this_thread::sleep_for(std::chrono::milliseconds(50));
              std::cout << "CORRECT!";
                return 0;

            } else if (guess < random) {
              std::cout << "INCORRECT! Too LOW";
               std::cout << '\n';
                std::cout << '\n';

            } else if (guess > random) {
              std::cout << "INCORRECT! Too HIGH";
               std::cout << '\n';
                std::cout << '\n';

            } else {
              std::cout << "please only use numbers in responses";
               std::cout << '\n';
                std::cout << '\n';

            }
          } while (guess != random);

         


       break;

    }

      default:
       
        system("clear");       
      continue;
      break;

   }

   break;
  
}
 

    
  
    return 0;
 }
