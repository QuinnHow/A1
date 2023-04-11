#include "game.h"
#include "helper.h"

using std::string;

void showStudentInformation(string name, string id, string email){
        std::cout << "--------------------\n";
        std::cout << "Name: " << name;
        std::cout << "\nNo: " << id;
        std::cout << "\nEmail: " << email;
        std::cout << "\n--------------------\n";
}



int main()
{ 


    const string one ="1";
    const string two ="2";
    const string three ="3";

    bool cont = true;
    std::cout << "Welcome to Car Board\n";
    std::cout << "--------------------\n";

    std::cout << "1. Play Game\n";
    std::cout << "2. Show student's information\n";
    std::cout << "3. Quit\n";

    

    while (cont != false)
    {  
        
    std::cout << "Please enter your choice: ";
    string input;
    std::getline(std::cin, input);
    std::cout << std::endl;
    
    if(input == one)
    {
        std::cout << "You can use the following commands to play the game:\n";
        std::cout << "load <g>\n";
        std::cout << "  g: number of the game board to load\n";
        std::cout << "init <x>,<y>,<direction>\n";
        std::cout << "  x: horizontal position of the car on the board (between 0 and 9)\n";
        std::cout << "  y: vertical position of the car on the board (between 0 and 9)\n";    
        std::cout << "  direction: direction of the car's movement (north, south, east, west)\n";
        std::cout << "forward (or f) \n";
        std::cout << "turn left (or l) \n";
        std::cout << "turn right (or r)\n";
        std::cout << "quit\n";
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0| | | | | | | | | | |\n";
        std::cout << "|1| | | | | | | | | | |\n";
        std::cout << "|2| | | | | | | | | | |\n";
        std::cout << "|3| | | | | | | | | | |\n";
        std::cout << "|4| | | | | | | | | | |\n";
        std::cout << "|5| | | | | | | | | | |\n";
        std::cout << "|6| | | | | | | | | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | | | | | | | | | |\n";

        const string lod1 ="load 1";
        const string lod2 ="load 2";
        const string init ="init";
        const string qui ="quit";
        const string left ="turn_right";
        const string right ="turn_left";
        const string left2 ="l";
        const string right2 ="r";
        const string forward ="forward";
        bool in = false;

        
        bool cont2 = true;
        int brd = 0;
        while (cont2 != false)
        
        
    {  
    std::cout << "Please enter your choice: ";
    string input2;
    std::getline(std::cin, input2);
    std::cout << std::endl;

    std::string first = input2.substr(0, input2.find(" "));
    if(input2 == lod1)
    {
        brd = 1;
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*| | | | | | | | | |\n";
        std::cout << "|1| |*| | | | | |*| | |\n";
        std::cout << "|2| | |*| | | | | | | |\n";
        std::cout << "|3| | | | | | | |*| | |\n";
        std::cout << "|4| | | | |*| | | | | |\n";
        std::cout << "|5| | |*| | |*| |*| | |\n";
        std::cout << "|6| | | | | | |*| | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | |*| | | | | | |*|\n";
    }

    else if (input2 == lod2)
    {
        brd = 2;
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*|*|*| | | | | | | |\n";
        std::cout << "|1| |*|*| | | | | | | |\n";
        std::cout << "|2| |*|*| | | | | | | |\n";
        std::cout << "|3| | | | |*| | | | | |\n";
        std::cout << "|4| | | | |*| | | | | |\n";
        std::cout << "|5| |*|*| | | | | | | |\n";
        std::cout << "|6| | | | |*| | | | | |\n";
        std::cout << "|7| |*|*| | | | | | | |\n";
        std::cout << "|8| |*|*| | | | | | | |\n";
        std::cout << "|9| |*|*| | | | | | | |\n";
    
    }
    
    else if (input2 == qui)
    {
        cont2 = false;
    }
    
    else if (input2 == left or input2 == right or input2 == left2 or input2 == right2 or input2 == forward)
    {
        if(in == true){
        if(brd == 0)
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0| | | | | | | | | | |\n";
        std::cout << "|1| | | | | | | | | | |\n";
        std::cout << "|2| | | | | | | | | | |\n";
        std::cout << "|3| | | | | | | | | | |\n";
        std::cout << "|4| | | | | |→| | | | |\n";
        std::cout << "|5| | | | | | | | | | |\n";
        std::cout << "|6| | | | | | | | | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | | | | | | | | | |\n";
        }
        if(brd == 1)
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*| | | | | | | | | |\n";
        std::cout << "|1| |*| | | | | |*| | |\n";
        std::cout << "|2| | |*| | | | | | | |\n";
        std::cout << "|3| | | | | | | |*| | |\n";
        std::cout << "|4| | | | |*|→| | | | |\n";
        std::cout << "|5| | |*| | |*| |*| | |\n";
        std::cout << "|6| | | | | | |*| | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | |*| | | | | | |*|\n";
        }
        if(brd == 2)
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*|*|*| | | | | | | |\n";
        std::cout << "|1| |*|*| | | | | | | |\n";
        std::cout << "|2| |*|*| | | | | | | |\n";
        std::cout << "|3| | | | |*| | | | | |\n";
        std::cout << "|4| | | | |*|→| | | | |\n";
        std::cout << "|5| |*|*| | | | | | | |\n";
        std::cout << "|6| | | | |*| | | | | |\n";
        std::cout << "|7| |*|*| | | | | | | |\n";
        std::cout << "|8| |*|*| | | | | | | |\n";
        std::cout << "|9| |*|*| | | | | | | |\n";
        }
        }
        else{
            std::cout << "Invalid input.\n" << std::endl; 
        }
    }


    else if (first == "init")
    {
        in = true;
        if(brd == 1)
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*| | | | | | | | | |\n";
        std::cout << "|1| |*| | | | | |*| | |\n";
        std::cout << "|2| | |*| | | | | | | |\n";
        std::cout << "|3| | | | | | | |*| | |\n";
        std::cout << "|4| | | | |*|→| | | | |\n";
        std::cout << "|5| | |*| | |*| |*| | |\n";
        std::cout << "|6| | | | | | |*| | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | |*| | | | | | |*|\n";
        }
        else if(brd == 2)
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0|*|*|*| | | | | | | |\n";
        std::cout << "|1| |*|*| | | | | | | |\n";
        std::cout << "|2| |*|*| | | | | | | |\n";
        std::cout << "|3| | | | |*| | | | | |\n";
        std::cout << "|4| | | | |*|→| | | | |\n";
        std::cout << "|5| |*|*| | | | | | | |\n";
        std::cout << "|6| | | | |*| | | | | |\n";
        std::cout << "|7| |*|*| | | | | | | |\n";
        std::cout << "|8| |*|*| | | | | | | |\n";
        std::cout << "|9| |*|*| | | | | | | |\n";
        }
        else
        {
        std::cout << "| |0|1|2|3|4|5|6|7|8|9|\n";
        std::cout << "|0| | | | | | | | | | |\n";
        std::cout << "|1| | | | | | | | | | |\n";
        std::cout << "|2| | | | | | | | | | |\n";
        std::cout << "|3| | | | | | | | | | |\n";
        std::cout << "|4| | | | | |→| | | | |\n";
        std::cout << "|5| | | | | | | | | | |\n";
        std::cout << "|6| | | | | | | | | | |\n";
        std::cout << "|7| | | | | | | | | | |\n";
        std::cout << "|8| | | | | | | | | | |\n";
        std::cout << "|9| | | | | | | | | | |\n";
        }
    }
    
    

    else
    {
       std::cout << "Invalid input.\n" << std::endl; 
    }

    }

    }

    else if (input == two)
    {
        showStudentInformation("Quinn How", "S3899122", "S3899122@student.rmit.edu.au");
    }
    else if (input == three)
    {
        cont = false;
    }
    
    else
    {
   std::cout << "Invalid input.\n" << std::endl;
    }
    
    }
    /**
     * TODO: here's the main function. You can write the "main menu" loop/code
     * here or you can make separate functions - up to you.
     */

    std::cout << "Good bye!\n\n";

    return EXIT_SUCCESS;
}

