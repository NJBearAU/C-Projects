/**
 * @file Project 1
 * @author Jet Rhind
 * @date 01/08/2025
 * @version Version no.10
 * @brief Asignment one.
 */

 #include <iostream>                                                                //include iostream to allow printing to the terminal
 #include <cmath>                                                                   //include cmath to allow the program to do math
 #include <string>                                                                  //include string to allow use of string variable type

int main()
{
    bool Binary_Decision = 0;                                                       //Declare a bool named Binary_decision as equal to zero      

   while(Binary_Decision == 0)                                                      //Declare a while loop stating that if Binary_Decision is equal to zero than continue loop
   {                                                   
        std::cout << "\n\n\rWelcome to the Turing Moore Beam Bending Calculator 1.0.\n\n\r";        //print name of program
        std::cout << "My name is NJBearAU and I am the authour of this program.\n\n\r";      //print authour of program
        std::cout << "The due date of this asignment is 03/08/2025.\n\n\r";         //print due date of assignment
        std::cout << "The highest part of the asignment that this program has reached was part 4.\n\n\n\n\r";   //print highest part of assignment reached
        std::cout << "-----------------------------------\n\r";                     //print aesthetics
        std::cout << "Part 1 - Bending Moment Calculator!\n\r";                     //print part of assingment commencing
        std::cout << "-----------------------------------\n\n\n\r";                 //print aesthetics

        double Length = 0;                                                          //Declare float type variable named Length
        double Load = 0;                                                            //Declare float type variable named Load

        std::cout << "\n\rPlease enter the Length (L) of the beam in metres (m). "; //print request for user to enter length
        std::cin >> Length;                                                         //take user input and store it in Length variable

        while(Length <= 0)
        {
            std::cout << "\n\rPlease enter the Length (L) of the beam in metres (m) as a positive value. "; //print request for user to enter length of a positive value
            std::cin >> Length;                                                     //take user input and store it in Length variable
        }

        std::cout << "The Length you entered was " << Length << "m.\n\r";           //print user entered length
        std::cout << "\n\rPlease enter the Load (F) of the beam in newtons(N). ";   //print request for user to enter load
        std::cin >> Load;                                                           //take user input and store it in Load Variable

        while(Load <= 0)
        {
            std::cout << "\n\rPlease enter the Load (F) of the beam in newtons(N) as a positive value. ";   //print request for user to enter load as a positive value
            std::cin >> Load;                                                       //take user input and store it in Load Variable
        }

        std::cout << "The Load you entered was " << Load << "N.\n\n\r";             //print user entered load

        double Bending_Moment = Length*Load/4;                                      //multiply Length by Load and divide by 4 then store answer in variable type float named Bending_Moment
        std::cout << "The bending Moment (M) for the beam is " << Bending_Moment << "N*m.";   //print bending moment of beam

        std::cout << "\n\n\n\n\r-----------------------------------------------\n\r";           //print aesthetics
        std::cout << "Part 2 - Stress / Moment of Inertia Calculator!\n\r";         //print part of assingment commencing
        std::cout << "-----------------------------------------------\n\n\n\r";     //print aesthetics
        
        double Width = 0;                                                           //Declare variable Width
        double Height = 0;                                                          //Declare variable Height

        std::cout << "\n\rPlease enter the Width (B) of the beam in metres (m). ";  //print request for user to enter Width
        std::cin >> Width;                                                          //take user input and store it in Width variable

        while(Width <= 0)
        {
            std::cout << "\n\rPlease enter the Width (B) of the beam in metres (m) as a positive value. "; //print request for user to enter Width of a positive value
            std::cin >> Width;                                                      //take user input and store it in Width variable
        }

        std::cout << "The Width you entered was " << Width << "m.\n\n\r";           //print user entered Width
        std::cout << "Please enter the Height (B) of the beam in meters (m). ";     //print request for user to enter Height
        std::cin >> Height;                                                         //take user input and store it in Height Variable

        while(Height <= 0)
        {
            std::cout << "\n\rPlease enter the Height (H) of the beam in meters (m) as a positive value. ";   //print request for user to enter Height of a positive value
            std::cin >> Height;                                                     //take user input and store it in Height Variable
        }

        std::cout << "The Height you entered was " << Height << "N.\n\n\r";         //print user entered Height
        
        double Moment_Of_Inertia = Width*pow(Height,3)/12;                          //calculate moment of inertia
        std::cout << "The Moment Of Inertia (I) of the beam is " << Moment_Of_Inertia << "m^4.\n\r";         //print moment of inertia

        double y = Height/2;                                                        //calculate variable y
        double Stress = Bending_Moment*y/Moment_Of_Inertia;                         //calculate stress
        std::cout << "The Stress (O) of the beam is " << Stress << "Pa.";           //print stress

        std::cout << "\n\n\n\n\r---------------------------------------------\n\r"; //print aesthetics
        std::cout << "Part 3 - Deflection / Maximum Load Calcultor!\n\r";           //print part of assingment commencing
        std::cout << "---------------------------------------------\n\n\n\r";       //print aesthetics

        double Yeild_Strength = 0;
        double Youngs_Modulus = 0;

        std::cout << "Please eneter the Yeild Strength (Oyield) of the material of the beam in Mega Pascals (MPa).";        //print request for user to enter yeild strength
        std::cin >> Yeild_Strength;                                                 //take user input and store it in yeild strength variable

        while(Yeild_Strength <= 0)                                                  //while loop to disallow negative/zero values
        {
            std::cout << "\n\rPlease eneter the Yeild Strength (Oyield) of the material of the beam in mega pascals (MPa) as a postive value.";     //Print request to enter positive value
            std::cin >> Yeild_Strength;                                             //take user input and store it in yeild strength variable
        }

        std::cout << "The Yeild Strength you entered was " << Yeild_Strength << "MPa\n\n\r";        //print entered yeild strength

        Yeild_Strength = Yeild_Strength * pow(10,6);                                //convert yeild strength from MPa to Pa

        std::cout << "Please enter Youngs Modulus (E) of the material in giga pascals (GPa)";       //print request for user to enter youngs modulus
        std::cin >> Youngs_Modulus;                                                 //take user input and store it in youngs modulus variable

        while(Youngs_Modulus <= 0)                                                  //while loop to disallow negative/zero values
        {
            std::cout << "\n\rPlease enter Youngs Modulus (E) of the material in giga pascals (GPa) as a positive value.";      //print request for user to enter postive value
            std::cin >> Youngs_Modulus;                                             //take user input and store it in youngs modulus variable
        }

        std::cout << "\n\rThe Youngs Modulus you entered was " << Youngs_Modulus << "GPa.\n\n\r";       //print user entered value

        double Deflection = (Load*pow(Length,3))/(48*(Youngs_Modulus*pow(10,9))*Moment_Of_Inertia);     //calculate deflection
        std::cout << "The Deflection (S) of the beam is " << Deflection << "m\n\r"; //print deflection

        double New_Load = 100;                                                      //declare new load as a variable type double equal to 100 
        double New_Stress = 0;                                                      //declare new stress as a variable type double equal to 0

        while(Yeild_Strength > New_Stress)                                          //While loop to stop value of new stress increasing once it reaches the value of yeild strength
        {
            New_Stress = ((Length*New_Load/4)*y)/Moment_Of_Inertia;                 //calculate new stress
            New_Load += 100;                                                        //add new 100 to new load each time the loop repeats
        }

        New_Load = New_Load / 1000;                                                 //divivde new load by 1000 to get value in KN
        std::cout << "The maximum Load (F) of the beam to fail is " << New_Load <<"KN";     //print max load


        std::cout << "\n\n\n\n\r--------------------------------------\n\r";        //print aesthetics
        std::cout << "Part 4.1 - Factor of Safety Calculator\n\r";                  //print part of assingment commencing
        std::cout << "--------------------------------------\n\n\n\r";              //print aesthetics

        New_Load = (New_Load*1000)-100;                                             //convert new load to N and -100 to find point before breaking point
        Deflection = (New_Load*pow(Length,3))/(48*(Youngs_Modulus*pow(10,9))*Moment_Of_Inertia);        //calculate deflection
        std::cout << "The maximum Deflection (S) of the beam before faliure is " << Deflection << "m\n\n\r";        //print max deflection

        double FOS = 0;                                                             //declare FOS as a variable type double equal to 0
        FOS = Yeild_Strength/Stress;                                                //calculate FOS
        if (FOS > 2)                                                                //if statement to print rating as safe when FOS>2
        {
            std::cout << "The Factor Of Safety (FOS) of the beam is rated as:\n\n\rSafe. ):^D";
        }
        else if (FOS > 1 && FOS <= 2)                                               //else if statement to print rating as borderline when 2>FOS>1
        {
            std::cout << "The Factor Of Safety (FOS) of the beam is rated as:\n\n\rBorderline! |:^o";
        }
        else                                                                        //else statement for when 0>FOS
        {
            std::cout << "The Factor Of Safety (FOS) of the beam is rated as:\n\n\rUnsafe!! >:^O\n\rPlease fix this saftey concern by reducing the stress.";
        }
        
        std::cout << "\n\n\rNow I present to you...\n\n\r---------------------------------------\n\rPart 4.2 - Wdith / Height Calculator\n\r---------------------------------------\n\n\r";      //initiation of part4.2

        double Maximum_Deflection = 0;                                              //declare max deflection as variable type double equal to 0
        Youngs_Modulus = 0;                                                         //set youngs modulus equal to 0
        Stress = 0;                                                                 //set stress equal to 0
        Load = 0;                                                                   //set load equal to 0
        Length = 0; 
        

        std::cout << "Please enter Maximum Deflection (Smax) of the beam in meters (m). ";      //print request for max deflection
        std::cin >> Maximum_Deflection;                                             //take user input and store it in max deflection variable

        while(Maximum_Deflection <= 0)                                              //while loop to disallow negative/zero values 
        {
            std::cout << "\n\rPlease enter Maximum Deflection (Smax) of the beam in meters (m) as a positive value. ";      //print request for user to enter positive value
            std::cin >> Maximum_Deflection;                                         //take user input and store it in max deflection variable
        }

        std::cout << "\n\rThe Maximum Deflection you entered was " << Maximum_Deflection <<"m.\n\n\r";      //print user entered value


        std::cout << "Please enter Youngs Modulus (E) of the material in giga pascals (GPa)";               //print request for user to enter youngs modulus
        std::cin >> Youngs_Modulus;                                                 //take input and store it in youngs modulus variable

        while(Youngs_Modulus <= 0)                                                  //while loop to disallow negative/zero values 
        {
            std::cout << "\n\rPlease enter Youngs Modulus (E) of the material in giga pascals (GPa) as a positive value.";      //print request for user to enter positive value
            std::cin >> Youngs_Modulus;                                             //take input and store it in youngs modulus variable
        }

        std::cout << "\n\rThe Youngs Modulus you entered was " << Youngs_Modulus << "GPa.\n\n\r";             //print user entered value


        std::cout << "Please enter the Stress (O) of the beam in metres (Pa). ";    //print request for user to enter stress
        std::cin >> Stress;                                                         //take user input and store it in stress variable

        while(Stress <= 0)                                                          //while loop to disallow negative/zero values 
        {
            std::cout << "\n\rPlease enter the Stress (O) of the beam in metres (Pa) as a positive value. ";    //print request for user to enter positive value
            std::cin >> Stress;                                                     //take user input and store it in stress variable
        }

        std::cout << "\n\rThe Stress you entered was " << Stress << "Pa.\n\n\r";    //print user entered value


        std::cout << "Please enter the Load (F) of the beam in Newtons (N). ";      //print request for user to enter load
        std::cin >> Load;                                                           //take user input and store it in load variable

        while(Load <= 0)                                                            //while loop to disallow negative/zero values 
        {
            std::cout << "\n\rPlease enter the Load (F) of the beam in newtons (N) as a positive number. ";     //print request for user to enter positive value
            std::cin >> Load;                                                       //take user input and store it in a load variable
        }

        std::cout << "The Load you entered was " << Load << "N.\n\n\r";             //print user entered value

        
        std::cout << "Please enter the Length (L) of the beam in meters (m). ";     //print request for user to enter length
        std::cin >> Length;                                                         //take user input and store it in length variable

        while(Length <= 0)                                                          //while loop to disallow negative/zero values 
        {
            std::cout << "\n\rPlease enter the Length (L) of the beam in meters (m) as a positive value.";      //print request for user to enter postive value
            std::cin >> Length;                                                     //take user input and store it in length variable
        }

        std::cout << "\n\rThe Length you entered was " << Length << "m.\n\n\r";     //print user entered value


        Moment_Of_Inertia = (Load*pow(Length,3))/(48*Youngs_Modulus*Maximum_Deflection);    //calculate moment of inertia through rearanged equation
        Height = (8*Stress*Moment_Of_Inertia)/(Load*Length);                        //calculate height through rearanged equation
        Width = (12*Moment_Of_Inertia)/(pow(Height,3));                             //calculate width through rearanged equation

        std::cout << "The Width of the beam is " << Width << "m, and the Height of the beam is " << Height << "m.";     //print previously calculated height and width


        std::string Text_Decision;                                                  //Declare string type variable named Text_decision
        std::cout << "\n\n\rWould you like to exit the program? (yes/no) ";               //print question questioning the exiting or replaying of the program
        std::cin >> Text_Decision;                                                  //Take user input

        if(Text_Decision == "yes")
        {                                                                           //IF statement declaring that if user enters yes then the binary answer of 1 will be stored and the while loop won't be broken and will be replayed
        Binary_Decision = 1;
        }
        else if(Text_Decision == "no") 
        {                                                                           //ELSE IF statement declaring that if the user enters no then the binary answer of 0 will be stored and while loop will be broken and won't be replayed
        Binary_Decision = 0;
        }
        
    }
    std::cout << "\n\n\rThank you for using this program, have a nice day, goodbye. :)\n\n\r";          //print goodbye message
    return 0;                                                                       //exit program without any errors

}
