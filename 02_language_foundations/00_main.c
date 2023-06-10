#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


// Unit 2.1 Logic Conditions and If-Else Statements

// Use an if statement with a static condition
// int main(void) {
//     // if it is true then do this
//     // if it is not true, then do not do this
//     //FALSE 0 0.0
//     //TRUE all vallues that are non-zero (positive or negative)
//     int weatherIsGood = 99; //the weather is good!
//     if(weatherIsGood){
//         printf("The weather is good!\n");
//         printf("I can go outside! Yeah!\n");
//     }
//     return 0;
// }


// Use an if statement with a dynamic condition
// int main(void) {
//     // + - * / % : arithmetic operators
//     // < > <= >= != == : comparison operators
//     int a = 5;
//     int b = 2;
//     int result;
//     printf("Check: Is a == b?\n");
//     result = a==b;
//     printf("Result is %d.\n", result);
//     if (result) {
//         printf("TRUE!\n");
//     } else {
//         printf("FALSE!\n");
//     }
//     return 0;
// }

/*
You are planning a car trip so you post on a carpooling website in order to share the cost of the trip.

If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip. 
If you have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost ($1 fee + gas) 
among the passengers and you. You want to write a program that calculates the cost you have to pay. The program should read the number 
of passengers (an integer) and the cost of gas for the trip (a decimal number). The program should then print the cost that you have to pay 
(a decimal number) with 2 digits after the decimal point.

*/
 
// int main(void){

//     int passengers = 0;
//     double gas = 0, price = 0;

//     scanf("%d %lf", &passengers, &gas);

//     if (passengers == 0){
//         printf("%.2lf", gas);

//     } else {
//         price = (1 + gas) / (1 + passengers); // splitting the cost includes driver
//         printf("%.2lf", price);
//     }
//     return 0;
// }

/*
The hostel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input arrival time.
*/

// int main(void){
    
//     int hours = 0, price = 10;

//     scanf("%d", &hours);

//     price = price + (hours * 5);

//     if (price < 53){
//         printf("%d", price);
//     } else {
//         printf("53");
//     }

//     return 0;
// }


// Comparing decimal numbers

// #include <stdio.h>
// int main(void) {
//     // + - * / % : arithmetic operations
//     // <  >  <=  >=  !=  ==  :  comparison operations
//     double a = 5.000000000001;
//     double b = 5.000000000000;
//     int result;
//     printf("Check: Is a > b ?\n");
//     result = a > b;
//     printf("result is %d\n", result);
//     if(result){
//         printf("TRUE\n");
//     }else{
//         printf("FALSE\n");
//     }
//     return 0;
// }


/*
You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.

*/

// int main(void){

//     int die1 = 0, die2 = 0;

//     scanf("%d", &die1);
//     scanf("%d", &die2);

//     int sum = die1 + die2;
//     // printf("%d %d %d", die1, die2, sum);

//     if (sum >= 10){
//         printf("Special tax\n36\n");
//     }else{
//         printf("Regular Tax\n%d\n", sum*2);
//     }

//     return 0;
// }

/*
You decide to bet on the final match of the Tug of War National Championship. 

Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each team to inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights (integers representing kilograms) alternating by team. 

After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).

You are guaranteed that the two teams will not have the same total weight.
*/

// #include <stdio.h>

// int main(void) {
//     int numPlayers = 0;

//     scanf("%d", &numPlayers);

//     int team1Weight = 0;
//     int team2Weight = 0;

//     for (int i = 0; i < numPlayers; i++) {
//         int weight = 0;
        
//         scanf("%d", &weight);
//         team1Weight += weight;

//         scanf("%d", &weight);
//         team2Weight += weight;
//     }

//     int advantage = (team1Weight > team2Weight) ? 1 : 2;

//     printf("Team %d has an advantage\n", advantage);
//     printf("Total weight for team 1: %d\n", team1Weight);
//     printf("Total weight for team 2: %d\n", team2Weight);

//     return 0;
// }





// Combining logic conditions using the logical AND and OR, Incomplete

// #include <stdio.h>
// int main(void) {
//     int sunny = 1;
//     int vacation = 1;
//     int sunAndVacation = sunny && vacation;
//     // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
//     if (sunAndVacation) {
//         printf("Yeah!!\n");
//     } else {
//         printf("Too bad!\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//     int sunny = 0;
//     int vacation = 0;
//     int sunORvacation = sunny || vacation;
//     //1||1:1 1||0:1 0||1:1 0||0:0
//     if(sunORvacation){
//         printf("Going well: it is sunny OR I am on vacation OR both!\n");
//     }else{
//         printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");
//     }
//     return 0;
// }



/*The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.

One room costs nothing if you are exactly 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.
*/

// int main(void) {

//     int age = 0, weight = 0, luggage = 0, cost = 0;

//     scanf("%d", &age);
//     scanf("%d", &weight);

//     int luggage = (weight > 20) ? 1 : 0;

//     if (age == 60){
//         cost = 0;

//     }else if(age < 10){
//         cost = 5;

//     }else{
//         cost = 30 + 10*luggage;
//     } 
 
//     printf("%d", cost);
//     return 0;
// }


// Negating a logic condition using the logic operator NOT

// #include <stdio.h>
// int main(void) {
//     int sunny = 0; // 0: cloudy, other value (1 for example): sunny
//     int vacation = 0; // 0: working , other value (1 for example): vacation
//     int NOTsunnyANDNOTvacation = !sunny && !vacation;
//     if (NOTsunnyANDNOTvacation){
//         printf("It's neither sunny nor am I on vacation!\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(void) {
//     int age;
//     printf("What is your age?\n");
//     scanf("%d",&age);
//     if(age >= 18 && !(age >= 65)){
//         printf("You are in the labor force\n");
//     }else{
//         printf("You are not in the labor force\n");
//     }
//     return 0;
// }

/*
As you cross a forest you can't help but admire the nature around you including the many species of trees. Despite your interest, you are a very unskilled botanist and have a lot of trouble identifying different trees. A friend gives you some guidance and you decide to write a program that will give you the name of the tree based on its characteristics.

There are 4 types of trees:

the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets

the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets

the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets

the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets

Your program should read the height and the number of leaflets of a given tree (both integers), and should be able to determine and display the name of the corresponding tree.  If the height and number of leaflets does not match any of the tree type descriptions, your program should display "Uncertain".
*/

// int main(void)
// {
//     int height, leaflets;

//     scanf("%d", &height);
//     scanf("%d", &leaflets);

//     if (height <= 5 && leaflets >= 8){
//         printf("Tinuviel");
//     }else if (height >= 10 && leaflets >=10){
//         printf("Calaelen");
//     }else if (height <= 8 && leaflets <=5){
//         printf("Falarion");
//     }else if (height >=12 && leaflets <= 7){
//         printf("Dorthonion");
//     }else{
//         printf("Uncertain");
//     }

//     return 0;
// }



// Unit 2.2: Arrays, for and while loops
// Using arrays of integers, Incomplete

// #include <stdio.h>
// int main(void) {
//     int array[3]; // creates space to hold three integers
//     array[0] = 18;
//     array[1] = 137;
//     array[2] = 8;
//     printf("First element is %d.\n", array[0]);
//     printf("Second element is %d.\n", array[1]);
//     printf("Third element is %d.\n", array[2]);
//     return 0;
// }


// Repeating instructions with a FOR loop, Incomplete

// #include <stdio.h>
// int main(void){
//     int array[3];
//     int readValue = 0;
//     int cellNumber = 0;
//     int i = 0;
//     for(i = 0 ; i < 3 ; i++){
//         printf("Enter a value:");
//         scanf("%d", &readValue);
//         array[cellNumber] = readValue;
//         printf("Cell number %d contains %d\n", cellNumber, array[cellNumber]);
//         cellNumber = cellNumber + 1;
//     }
//     return 0;
// }

/*
Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.
*/

// #define NUM_INGREDIENTS 10

// int main(void){


//     int ingriedients[NUM_INGREDIENTS];
//     int id;

//     for (int i = 0; i < NUM_INGREDIENTS; i++){
//         scanf("%d", &ingriedients[i]);
//     }

//     scanf("%d", &id);

//     printf("%d", ingriedients[id]);
// }

// #include <stdio.h>
// int main(void){
//     double array[3];
//     double readValue = 0.0;
//     int cellNumber = 0;
//     int i = 0;
//     for(i=0;i<3;i++){
//         printf("Enter a decimal value:");
//         scanf("%lf",&readValue);
//         array[cellNumber] = readValue;
//         printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
//         cellNumber = cellNumber + 1;
//     }
//     return 0;
// }


/*
You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 
*/

// int main(void){

//     int cars, sum = 0;
//     scanf("%d", &cars);

//     double weight[cars];

//     for (int i = 0; i < cars; i++){
//         scanf("%lf", &weight[i]);
//         sum += weight[i];
//     } 

//     double even = (double)sum/(double)cars;

//     for (int j = 0; j < cars; j++){
//         weight[j] =  even - weight[j];
//         printf("%.1lf\n", weight[j]);
//     }  


// }


// Find the largest array element
// #include <stdio.h>
// int main(void) {
//     //! showArray(ages, cursors=[i])
//     int ages[10];
//     int i;
//     int ageMax = 0;
//     for (i=0; i<10; i++) {
//         scanf("%d", &ages[i]);
//         if (ages[i] > ageMax) {
//             ageMax = ages[i];
//         }
//     }
//     printf("The maximum age is %d.\n", ageMax);
//     return 0;
// }



// Using an IF statement inside a FOR loop, Incomplete

// Compute with arrays
// #include <stdio.h>
// int main(void) {
//     //! showArray(ages, cursors=[i])
//     int ages[10];
//     int i;
//     int ageMax = 0;
//     for (i=0; i<10; i++) {
//         scanf("%d", &ages[i]);
//         if (ages[i] > ageMax) {
//             ageMax = ages[i];
//         }
//     }
//     printf("The maximum age is %d.\n", ageMax);
//     printf("Age differences with the eldest person:\n");
//     for(i=0;i<10;i++){
//         printf("%d:%d ", ages[i],ageMax-ages[i]);
//     }
//     return 0;
// }


/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.
*/

// #include <stdio.h>

// int main(void) {
//     int quantity;
//     scanf("%d", &quantity);

//     double cost = 0, price[10], weight[10];

//     for (int i = 0; i < quantity; i++)
//         scanf("%lf", &price[i]);

//     for (int j = 0; j < quantity; j++)
//         scanf("%lf", &weight[j]);

//     for (int k = 0; k < quantity; k++)
//         cost += price[k] * weight[k];

//     printf("%lf", cost);

//     return 0;
// }



// Nesting IF and FOR, Incomplete
// Nest if and for
// #include <stdio.h>
// int main(void) 
// {
//     int target;
//     int i;
//     printf("Please enter a target number: ");
//     scanf("%d", &target);
//     if (target >= 0) 
//     {
//         for (i=0; i<target; i++) 
//         {
//             if (i%2) 
//             {
//                 printf("%d ", i);
//             }
//         }
//     } 
//     else 
//     {
//         printf("Nothing to do!\n");
//     }
//     return 0;
// }

/*
You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).
*/
// #include <stdio.h>

// int main(void) {
//     int quantity, i, counter = 0;
//     scanf("%d", &quantity);

//     int population[quantity];

//     for (i = 0; i < quantity; i++) {
//         scanf("%d", &population[i]);

//         if (population[i] > 10000) {
//             counter += 1;
//         }
//     }

//     printf("%d", counter);

//     return 0;
// }

// Nest FOR loops
// #include <stdio.h>
// int main(void){
//     int nbThrows = 0;
//     int nbDice = 0;
//     int diceValue = 0;
//     int throwSum = 0;
//     int throw = 0;
//     int dice = 0;
//     scanf("%d %d", &nbThrows, &nbDice);
//     for(throw = 0; throw<nbThrows; throw++){
//         for(dice = 0; dice<nbDice; dice++){
//             scanf("%d", &diceValue);
//             throwSum = throwSum + diceValue;
//         }
//         printf("throw %d sum equals %d\n", throw, throwSum);
//         throwSum = 0;
//     }
//     return 0;
// }

// Repeating inside repetition, Incomplete
//Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

// int main(void){

//     int rows;
//     scanf("%d", &rows);

//     for (int i = 0; i < rows; i++) {

//         for (int j = 0; j < rows; j++)
//             printf("*");
//         printf("\n");

//     }
//     return 0;

// }

// // Repeating using a WHILE loop, Incomplete
// #include <stdio.h>
// int main(void) {
//     int diceValue;
//     int notSix;
//     scanf("%d", &diceValue);
//     notSix = diceValue != 6;    //notSix is the truth statement whether or not diceValue is not equal to 6
//     while (notSix) {
//         scanf("%d", &diceValue);
//         notSix = diceValue != 6;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//     int diceValue = 0;
//     int nbThrows = 0;
//     scanf("%d", &diceValue);
//     while(diceValue != 6){
//         scanf("%d", &diceValue);
//         nbThrows = nbThrows + 1;
//     }
//     printf("We needed %d throws to get the value 6\n", nbThrows+1);
//     return 0;
// }

// Much of the work of a university administration (in addition to managing teachers, researchers, students, courses, etc.) is to ensure the proper functioning of the university and in particular that the accounting job is well done. Once a year, an annual report of expenditures must be made.

// All expenses for the year have been recorded and classified in a multitude of files and the sum of all these expenses must now be calculated. But no one knows exactly how many different expenses have been made in the past year!

// Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).

// Example 1
// Input
// 1000
// 2000
// 500
// -1
// Output
// 3500
// Example 2
// Input
// -1
// Output
// 0
// Example 3
// Input
// 150
// 250
// 350
// 4500
// 240
// 120
// -1
// Output
// 5610

// int main(void) {

//     int expense = 0, sum = 0;

    
//     while (expense != -1){
//         sum += expense;
//         scanf("%d", &expense);
//     }
//     printf("%d", sum);


// }




// Efficiently using a WHILE loop, Incomplete

// Check a logic statement to continue looping
// #include <stdio.h>
// int main(void) {
//     int signaturesNeeded = 1000;
//     int day = 0;
//     int newSignatures = 3;
//     int totalSignatures = 3;
//     while (totalSignatures < 1000) {
//         day++;
//         newSignatures = 2*newSignatures;
//         printf("Day %d: %d new signatures! ", day, newSignatures);
//         totalSignatures = totalSignatures + newSignatures;
//         printf("Total: %d\n", totalSignatures);
//     }
//     return 0;
// }


// chatgpt
// #include <stdio.h>

// int main(void) {
//     int totalExpenses = 0;
//     int expense;

//     do {
//         scanf("%d", &expense);
//         totalExpenses += expense;
//     } while (expense != -1);

//     printf("%d", totalExpenses);

//     return 0;
// }

// Practicing WHILE loops

// int main(void) {
//     int totalPopulation, days = 0;
//     double infected = 1;

//     scanf("%d", &totalPopulation);


//     while (infected < totalPopulation) {
//         // printf("Infected = %lf, Day: %d\n", infected, days);
//         infected = pow(3, (double)days);
//         days++;
        
//     }

//     printf("%d", days);
//     return 0;
// }

/*
We would like you to develop a program capable of making a child play automatically the game of "more or less" -- the child must try to guess a secret number. The program should respond to each guess with "it is more" or "it is less" until the child finds the right number.

Your program must first read an integer indicating the number that the child will have to find during the game. Next the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted a larger number. Once the correct number is reached, the program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took the guesser.
*/

// int main(int argc, char const *argv[])
// {
//     int tries = 1, answer, guess;

//     scanf("%d", &answer);
//     scanf("%d", &guess);

//     while(guess != answer){
         
//         if (answer>guess){
//                 printf("it is more\n");
//         }else{
//             printf("it is less\n");\
//         } 
//         tries++;
//         scanf("%d", &guess);
//     }

    
    
//     printf("Number of tries needed:\n%d", tries);
//     return 0;
// }

// //solution
// // intersting cuz i was trying to find a way around the do while because its like what if the guess is right firs try
// int main()
// {
//     int secretNumber;
//     scanf("%d",&secretNumber);
//     int proposal = secretNumber + 1;
//     int nbTries = 0;
//     while (proposal != secretNumber)
//     {
//         scanf("%d",&proposal);
//         if (proposal < secretNumber)
//             printf("it is more\n");
//         if (proposal > secretNumber)
//             printf("it is less\n");
//         nbTries = nbTries + 1;
//     }
//     printf("Number of tries needed:\n%d\n",nbTries);

//     return 0;
// }


/*
University chemists have developed a new process for the manufacturing of a drug that heals wounds extremely quickly. The manufacturing process is very lengthy and requires monitoring the chemicals at all times, sometimes for hours! Entrusting this task to a student is not possible; students tend to fall asleep or not pay close attention after a while. Therefore you need to program an automatic device to monitor the manufacturing of the drug. The device measures the temperature every 15 seconds and provides these measurement to your program. 

Your program should first read two integers representing the minimum and maximum safe temperatures. Next, your program should continuously read temperatures (integers) that are being provided by the device. Once the chemical reaction is complete the device will send a value of -999, indicating to you that temperature readins are done. For each recorded temperature that is in the correct range (it could also be equal to the min or max values), your program should display the text "Nothing to report". But as soon as a temperature reaches an unsafe level your program must display the text "Alert!" and stop reading temperatures (although the device may continue sending temperature values).
*/
// #define DONE -999

// int main(int argc, char const *argv[])
// {
     

//     int min, max, input;
//     scanf("%d%d", &min, &max);

//     while (1) {
//         scanf("%d", &input);

//         // Check if the temperature is within the safe range
//         if (input == DONE) {
//             break; // Exit the loop when -999 is encountered
//         } else if (input < min || input > max) {
//             printf("Alert!\n");
//             break; // Exit the loop when an unsafe temperature is encountered
//         } else {
//             printf("Nothing to report\n");
//         }
//     }
    
//     return 0;
// }

// Unit 2.3: Strings, sort and search algorithms

// Store, print and read strings as arrays of characters
// #include <stdio.h>
// int main(void) {
//     //! showArray(word, cursors[i])
//     char word[51]; //arrray of characters (string)
//     printf("Please enter a word with 50 letters: ");
//     scanf("%s", word);
//     printf("The word read is: %s.\n", word);
//     printf("The characters are: <%c> <%c> <%c> <%c>\n", word[0], word[1], word[2], word[3]);
//     word[1] = 'a';
//     printf("The new word is %s\n", word);
//     return 0;
// }


// Using strings (arrays of characters), Incomplete
/*
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).
*/
// #define MAX 101
// int main(void) {

//     int repeat, i = 0;
//     char array[MAX];

//     scanf("%d %s", &repeat, array);

//     while (i<repeat){
//         printf("%s\n", array);
//         i++;
//     }

// }



// Using the special null terminator (\0) to identify the end of a string, Incomplete





// Finding the length of a string, Incomplete
// #include <stdio.h>
// int main(void) {
//     //! word1 = showArray(word1, cursors=[i], width=0.5)
//     //! word2 = showArray(word2, cursors=[i], width=0.5)
//     char word1[5];
//     char word2[8];
//     scanf("%s %s", word1, word2);
//     word1[3] = '\0';
//     word2[2] = '\0';
//     printf("%s %s\n", word1, word2);
//     return 0;
// }




// Activity: swap first and last name
/*
Your local public library keeps a record of all of its patrons, consisting of index cards that hold a person's last name followed by their first name (so that the cards can easily be sorted alphabetically by last name). Unfortunately a computer error led to incorrectly printed forms last month, resulting in a number of cards that list the patron's first name followed by their last name rather than the other way around. Your job is to read these pairs of first and last names and display them in the correct order (last name followed by first name). You may assume that each first and last name has at most 100 characters and does not contain any spaces.

Your program should first read the total number of names (an integer) in order to know how many index cards need to be processed altogether. Next,  for each index card, your program should read a patron's first name and last name and then display these names correctly, that is on one line, the last name followed by one space, followed by the first name.  Your program should print the reversed name immediately after reading the patron's names (ie, it should not wait until it has read all of the index cards to begin printing). 

Note that, for ease of viewing, the example below shows all of the inputs in one block and all of the outputs in another block, despite the fact that programmatically these will be interspersed.  
*/

// int main(int argc, char const *argv[])
// {
//     char firstName[101], lastName[101];
//     int quantity;

//     scanf("%d", &quantity);


//     for (int i = 0; i<quantity; i++){
//         scanf("%s %s", firstName, lastName);
//         printf("%s %s\n", lastName, firstName);

//     }

//     return 0;
// }



// Working with string lengths, Incomplete

// Find the length of a string
// #include <stdio.h>
// int main(void) {
//     //! showArray(word, cursors=[i])
//     char word[30];
//     int i = 0;
//     printf("Please enter a word: ");
//     scanf("%s", word);
//     while (word[i]!='\0') 
//         i++;
//     printf("%s has word length %d.\n", word, i);
//     return 0;
// }


/*
Activity: even or odd number of letters in a word?

At the annual meeting of MOOC fans, participants register on the first day of the event in order to receive their name tags, brochures and banquet vouchers. Unfortunately this often results in long lines. In an attempt to speed things up, there are now two people working the registration desk: one person who has the registration materials for those fans whose names contain an odd number of letters, the other for those whose names have an even number of letters. Your job is to write a C-program that will tell a fan which line to stand in.

To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters) or line 2 (name has odd number of letters).

*/

// int main(int argc, char const *argv[])
// {
//     char name[51];
//     scanf("%s", name);
//     if (strlen(name)%2)
//         printf("2");
//     else
//         printf("1");

//     return 0;
// }

// Find the frequencies of word lengths

// #include <stdio.h>
// int main(void) {
//     //! showArray(word, cursors=[t])
//     //! showArray(length, cursors=[i])
//     int i = 0;
//     int t = 0;
//     int l = 0;
//     int j = 0;
//     int nbWords = 0;
//     char word[11];
//     int length[10];//length[5] number of 5-letter-long words in the text
//     for(i=0;i<10;i++){
//         length[i]=0;
//     }
//     scanf("%d", &nbWords);
//     for(t=0;t<nbWords;t++){
//         scanf("%s", word);
//         l = 0;
//         while(word[l]!='\0'){
//             l++;
//         }
//         length[l] = length[l] + 1;
//         printf("%s %d ", word,l);
//     }
//     for(j=0;j<10;j++){
//         printf("There are %d words with %d letters.\n", length[j], j);
//     }
//     return 0;   
// }

/*
Activity: find longest string length (External resource)

Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

// int main(int argc, char const *argv[])
// {
//     int length, i = 0, max = 0;
//     char word[101];
    
//     scanf("%d", &length);
    
//     while (i<length){
//         scanf("%s", word);
//         if (strlen(word) > max){
//             max = strlen(word);
//         }
//         i++;
//     }

//     printf("%d", max);
    
//     return 0;
// }




// Sorting strings, Incomplete
// Sort strings alphabetically


// #include <stdio.h>
// int main(void) {
//     char word1[50];
//     char word2[50];
//     int i = 0;
    
//     printf("Please enter a word: ");
//     scanf("%s", word1);
//     printf("And another: ");
//     scanf("%s", word2);
//     // Find first letter in which words differ
//     while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i]) 
//         i++;
//     if (word1[i] < word2[i])
//         printf("%s comes before %s in the alphabet.\n", word1, word2);
//     else if (word1[i]>word2[i])
//         printf("%s comes after %s in the alphabet.\n", word1, word2);
//     else printf("You entered the same word, %s, twice.\n", word1);
        
//     return 0;
// }

// Search for a number in an array using linear search
// #include <stdio.h>
// int main(void) {
//     //! showArray(list, cursors=[i])
//     int list[] = {6, -2, 5, 12, 7, 3, 8, 18, -10, 1};
//     int n = 10;
//     int item, i, found;
    
//     printf("Which number are you looking for? ");
//     scanf("%d", &item);
//     found = 0;
//     i = 0;
//     while (!found && i<n) {
//         if (item == list[i]) { 
//             found = 1;
//         } else {
//             i++;
//         }
//     }
    
//     if (!found) {
//         printf("%d is not a member of this list. \n", item);
//     } else {
//         printf("I found %d at index %d in the list. \n", item, i);
//     }
    
// 	return 0;
// }




/*
Activity: searching for letter in word

You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/

// #define MAX 51
// #define LETTER 't'

// int main(void)
// {
//     char word[MAX];

//     scanf("%s", word);

//     int length = strlen(word);
    
//     // making everything lowercase
//     for (int i = 0; word[i] != '\0'; i++) {
//         word[i] = tolower(word[i]);
//     }

//     // Search for the letter in the word
//     char* result = strchr(word, LETTER);

//     if (result != NULL) {
//         // subtracts memory address of start of string from address of found character
//         int index = result - word;
//         if (index <= length/2)
//             printf("1");
//         else
//             printf("2");
//     } else 
//         printf("-1");
    

//     return 0;
// }



// Searching with bisection and sorting with bubble sort
// Search for a number in a sorted list using bisection
// #include<stdio.h>
// int main(void) {
//     //! showArray(list, cursors=[ia, ib, mid])
//     int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
//     int n = 10;
//     int item; 
//     int ia, ib, mid, found;
    
//     printf("Which number are you looking for? ");
//     scanf("%d", &item);
//     ia = 0;
//     ib = n-1;
//     found = 0;
    
//     while (!found && (ia <= ib)) {
//         mid = (ia + ib)/2; // middle index
//         if (item == list[mid]) {
//             found = 1;  // found item!
//         } else if (item<list[mid]) {
//             ib = mid-1; // toss the top half
//         } else {
//             ia = mid + 1; // toss the bottom half
//         }
//     }
    
//     if (!found) {
//         printf("Number %d was not found in the array. \n", item);
//     } else {
//         printf("Number %d was found at index %d in the array.\n", item, mid);
//     }
    
// 	return 0;
// }


// Sort an array using bubble sort
// #include<stdio.h>
// int main(void) {
//     //! showArray(list, cursors=[i])
//     // Sorting from smallest to largest
//     int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
//     int n = 10;
//     int i, j;
//     int swap;
    
//     printf("Unsorted list: \n");
//     for (i=0; i<n; i++) {
//         printf("%d ", list[i]);
//     }
    
//     for (j=0; j<n-1; j++) {
//         for (i=0; i<n-1; i++) {
//             if (list[i] > list[i+1]) {
//                 swap = list[i];
//                 list[i] = list[i+1];
//                 list[i+1] = swap;
//             }
//         }
//     }
    
//     printf("\nSorted list: \n");
//     for (i=0; i<n; i++) {
//         printf("%d ", list[i]);
//     }

//     return 0;
// }




/*
Activity: find repeat letters in a word
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/

// #define MAX 51

// int search(char word[], char letter, int index)
// {
//     int length = strlen(word);
    
//     // making everything lowercase
//     for (int i = 0; word[i] != '\0'; i++) {
//         word[i] = tolower(word[i]);
//     }

//     // Search for the letter in the word
//     char* result = strchr(word, letter);

//     if (result != NULL) {
//         // subtracts memory address of start of string from address of found character
//         index = result - word;
//         return index;
//     } else 
//         return -1;
    

// }



// int main(void)
// {
//     char word[MAX];

//     scanf("%s", word);

//     int length = strlen(word);
//     char temp;
//     int counter = 0, index;

    

//     for (int i = 0; i < length-1; i++){
//         temp = search(word, word[i], index);
        
//         if (temp != -1);
//         else{
//             word[i] = ' ';

//         }
            



//     }






















//     // checking each letter of the word for duplicates
//     // deleting duplicates
//     // deleting the original character
//     for (int i = 0; i < length-1; i++){// -1 because you don't need to compare the last letter to anything (already has been compared in previous iterations)
        
//         if (word[i] != ' ') // skip over blanks
//             temp = word[i]; 
//             printf("i = %d -> %c\n", i, word[i]);

//         for (int j = 0; j < length; j++){

        
//             printf("j = %d -> %c\n", j, word[j]);

//             if (i == j) //comparing the same letter or is a blank
//                 printf("same letter\n");
//             else if (word[j] == ' ')
//                 printf("is blank\n");
//             else{
//                 printf("comparing: %c and %c\n", temp, word[j]);

//                 if (temp == word[j]){
//                     printf("multiple occurences of letter: %c\n", word[j]);
//                     word[j] = ' ';
//                     counter++;
//                 }
//             }
                
//         }
        
//     }
//     printf("%d", counter);


//     return 0;
// }







// int main()
// {
//     char str[51];
//     char toSearch;
//     int i = 0;

//     /* Input string and character to search from user */
//     printf("Enter any string: ");
//     scanf("%s", str);

//     int length = strlen(str); 

//     for (int j = 0; j < length; j++){

//         // toSearch = str[j];
//         toSearch = 'b';
//         while(str[i]!='\0')
//         {
//             /* If character is found in string */
//             if(str[i] == toSearch)
//             {
//                 printf("'%c' is found at index %d\n", toSearch, i);
//             }

//             i++;
//         }
//     }
    

//     /* Run loop till the last character of string */

    

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int count_duplicate_letters(const char* word) {
    int count = 0;
    int letters[26] = {0}; // Assuming the word contains only lowercase letters

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        int index = word[i] - 'a'; // Calculate the index of the letter
        letters[index]++;
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] > 1) {
            count++;
        }
    }

    return count;
}

int main() {
    char word[51]; // Assuming the word has no more than 50 letters

    scanf("%s", word);

    int result = count_duplicate_letters(word);

    printf("%d\n", result);

    return 0;
}


// int count_duplicate_letters(const char* word) {
//     char sorted_word[51]; // Assuming the word has no more than 50 letters
//     strcpy(sorted_word, word); // Copy the word to a separate array
//     int len = strlen(sorted_word);
//     int count = 0;

//     // Sort the letters alphabetically based on ASCII values
//     for (int i = 0; i < len - 1; i++) {
//         for (int j = i + 1; j < len; j++) {
//             if (sorted_word[j] < sorted_word[i]) {
//                 char temp = sorted_word[i];
//                 sorted_word[i] = sorted_word[j];
//                 sorted_word[j] = temp;
//             }
//         }
//     }

//     int i = 0;
//     while (i < len - 1) {
//         if (sorted_word[i] == sorted_word[i + 1]) {
//             count++;
//             i += 2; // Skip ahead to avoid counting the same letter again
//         } else {
//             i++;
//         }
//     }

//     return count;
// }

// int main() {
//     char word[51]; // Assuming the word has no more than 50 letters

//     printf("Enter a word: ");
//     scanf("%s", word);

//     int result = count_duplicate_letters(word);

//     printf("%d\n", result);

//     return 0;
// }

// int count_duplicate_letters(const char* word) {
//     char sorted_word[51]; // Assuming the word has no more than 50 letters
//     strcpy(sorted_word, word); // Copy the word to a separate array
//     int len = strlen(sorted_word);
//     int count = 0;

//     // Sort the letters alphabetically using bubble sort
//     for (int i = 0; i < len - 1; i++) {
//         for (int j = 0; j < len - i - 1; j++) {
//             if (sorted_word[j] > sorted_word[j + 1]) {
//                 char temp = sorted_word[j];
//                 sorted_word[j] = sorted_word[j + 1];
//                 sorted_word[j + 1] = temp;
//             }
//         }
//     }

//     int i = 0;
//     while (i < len - 1) {
//         if (sorted_word[i] == sorted_word[i + 1]) {
//             count++;
//             i += 2; // Skip ahead to avoid counting the same letter again
//         } else {
//             i++;
//         }
//     }

//     return count;
// }

// int main() {
//     char word[51]; // Assuming the word has no more than 50 letters

//     printf("Enter a word: ");
//     scanf("%s", word);

//     int result = count_duplicate_letters(word);

//     printf("%d\n", result);

//     return 0;
// }