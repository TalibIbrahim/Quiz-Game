#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int NumOfQuestions = 30;

struct Question
{
    // Our schema for the questionsdd
    string questionText;
    char correctOption;
    vector<string> options;
};

Question sportsQuestions[NumOfQuestions] = {
    {"Which country won the FIFA World Cup in 2018?", 'C', {"Brazil", "Germany", "France", "Croatia"}},
    {"Who holds the record for the most Olympic gold medals in athletics?", 'A', {"Usain Bolt", "Michael Phelps", "Carl Lewis", "Jesse Owens"}},
    {"Which football club has won the most UEFA Champions League titles?", 'B', {"Real Madrid", "FC Barcelona", "AC Milan", "Bayern Munich"}},
    {"Who is the all-time top scorer in the history of the FIFA World Cup?", 'D', {"Miroslav Klose", "Pele", "Diego Maradona", "Lionel Messi"}},
    {"Which player has won the most FIFA Ballon d'Or awards?", 'A', {"Lionel Messi", "Cristiano Ronaldo", "Zinedine Zidane", "Michel Platini"}},
    {"In what year was the first FIFA World Cup held?", 'D', {"1930", "1950", "1966", "1978"}},
    {"Who is the captain of the Portugal national football team?", 'B', {"Cristiano Ronaldo", "Bruno Fernandes", "Diogo Jota", "Bernardo Silva"}},
    {"Which stadium is known as the 'Theatre of Dreams'?", 'C', {"Old Trafford", "Anfield", "Camp Nou", "Santiago Bernabeu"}},
    {"Which country hosted the 2014 FIFA World Cup?", 'A', {"Brazil", "Germany", "France", "Italy"}},
    {"Who won the UEFA Euro 2020?", 'C', {"Italy", "England", "Portugal", "France"}},
    {"In what year did the Premier League begin?", 'B', {"1992", "1988", "2000", "1996"}},
    {"Which player is known as 'The Egyptian King'?", 'A', {"Mohamed Salah", "Sadio Mane", "Roberto Firmino", "Virgil van Dijk"}},
    {"Who won the Golden Boot at the 2018 FIFA World Cup?", 'B', {"Harry Kane", "Luka Modric", "Cristiano Ronaldo", "Kylian Mbappe"}},
    {"Which country won the Copa America 2021?", 'A', {"Argentina", "Brazil", "Uruguay", "Chile"}},
    {"Who is the manager of Manchester City as of 2024?", 'D', {"Pep Guardiola", "Jurgen Klopp", "Zinedine Zidane", "Thomas Tuchel"}},
    {"Which player is nicknamed 'The Magician'?", 'C', {"Andres Iniesta", "Lionel Messi", "David Silva", "Paul Pogba"}},
    {"In what year did Diego Maradona score the 'Hand of God' goal?", 'A', {"1986", "1990", "1982", "1994"}},
    {"Which club did David Beckham play for before joining LA Galaxy?", 'B', {"Real Madrid", "Manchester United", "AC Milan", "Paris Saint-Germain"}},
    {"Who is the all-time top scorer in the UEFA Champions League?", 'A', {"Cristiano Ronaldo", "Lionel Messi", "Raul", "Robert Lewandowski"}},
    {"Which player has won the most caps for the England national team?", 'D', {"Peter Shilton", "Wayne Rooney", "David Beckham", "Steven Gerrard"}},
    {"Who won the FIFA Women's World Cup in 2019?", 'A', {"United States", "Netherlands", "Sweden", "France"}},
    {"Which country has won the most African Cup of Nations titles?", 'C', {"Egypt", "Nigeria", "Cameroon", "Ghana"}},
    {"Who is the captain of the Brazil national football team?", 'B', {"Neymar", "Casemiro", "Thiago Silva", "Dani Alves"}},
    {"In what year did England win their only FIFA World Cup?", 'D', {"1966", "1970", "1958", "1982"}},
    {"Which goalkeeper has the most clean sheets in Premier League history?", 'A', {"Peter Schmeichel", "Petr Cech", "David De Gea", "Alisson Becker"}},
    {"Who is known as the 'Kaiser' in football?", 'C', {"Franz Beckenbauer", "Johan Cruyff", "Karl-Heinz Rummenigge", "Gerd Muller"}},
    {"Which player is nicknamed 'The Atomic Flea'?", 'B', {"Lionel Messi", "Luis Suarez", "Antoine Griezmann", "Xavi Hernandez"}},
    {"Who is the top scorer in the history of the Spanish national team?", 'D', {"David Villa", "Fernando Torres", "Fernando Hierro", "David Silva"}},
    {"Which country won the first FIFA World Cup?", 'A', {"Uruguay", "Brazil", "Germany", "Italy"}},
    {"Who won the 2021 Ballon d'Or?", 'B', {"Lionel Messi", "Robert Lewandowski", "Cristiano Ronaldo", "Mohamed Salah"}},

};

Question movieQuestions[NumOfQuestions] = {
    {"In which year does Marty McFly travel to the past in 'Back to the Future'?", 'B', {"1955", "1985", "1965", "1995"}},
    {"Who directed 'Back to the Future' trilogy?", 'C', {"Robert Zemeckis", "Steven Spielberg", "James Cameron", "Christopher Nolan"}},
    {"Which actor plays Marty McFly in 'Back to the Future'?", 'A', {"Michael J. Fox", "Christopher Lloyd", "Tom Hanks", "Robert Downey Jr."}},
    {"What is the name of Doc Brown's time-traveling DeLorean in 'Back to the Future'?", 'D', {"Time Machine", "Warp Drive", "Chrono Cruiser", "The Flux Capacitor"}},
    {"Which Marvel superhero wields a hammer named Mjolnir?", 'B', {"Thor", "Iron Man", "Captain America", "Hulk"}},
    {"Who is the main villain in the movie 'The Dark Knight'?", 'A', {"The Joker", "Bane", "Two-Face", "The Riddler"}},
    {"Which film features the character Jack Dawson and Rose DeWitt Bukater?", 'C', {"Titanic", "Gone with the Wind", "Avatar", "Pirates of the Caribbean"}},
    {"In 'Forrest Gump', what does Forrest's mother say life is like?", 'D', {"A box of chocolates", "A puzzle", "A marathon", "A feather"}},
    {"Who played the role of Tony Stark in the Marvel Cinematic Universe?", 'B', {"Robert Downey Jr.", "Chris Evans", "Chris Hemsworth", "Mark Ruffalo"}},
    {"Which movie is known for the line 'You can't handle the truth!'?", 'A', {"A Few Good Men", "The Shawshank Redemption", "Gladiator", "Jurassic Park"}},
    {"What is the name of the computer system in '2001: A Space Odyssey'?", 'C', {"HAL 9000", "Ava", "Skynet", "C-3PO"}},
    {"In 'The Matrix', what pill does Neo take?", 'B', {"The blue pill", "The red pill", "The green pill", "The yellow pill"}},
    {"Who directed the 'Jurassic Park' series?", 'A', {"Steven Spielberg", "James Cameron", "Michael Bay", "Christopher Nolan"}},
    {"Which film features a character named Don Vito Corleone?", 'D', {"The Godfather", "Goodfellas", "Scarface", "Casablanca"}},
    {"Who played the character Jack in 'Titanic'?", 'A', {"Leonardo DiCaprio", "Johnny Depp", "Tom Cruise", "Brad Pitt"}},
    {"In 'The Shawshank Redemption', what is Andy Dufresne's profession?", 'C', {"Banker", "Lawyer", "Engineer", "Doctor"}},
    {"Who is the voice actor for Woody in 'Toy Story'?", 'D', {"Tom Hanks", "Tim Allen", "Jim Carrey", "Will Smith"}},
    {"Which movie features the character Ellen Ripley battling aliens?", 'A', {"Aliens", "Predator", "Blade Runner", "The Terminator"}},
    {"What is the name of the wizarding school in 'Harry Potter'?", 'B', {"Hogwarts", "Durmstrang", "Beauxbatons", "Ilvermorny"}},
    {"Who directed the film 'Avatar'?", 'A', {"James Cameron", "Peter Jackson", "Christopher Nolan", "George Lucas"}},
    {"Which actor played the role of Neo in 'The Matrix' series?", 'C', {"Keanu Reeves", "Hugo Weaving", "Lawrence Fishburne", "Carrie-Anne Moss"}},
    {"In 'The Godfather', what is the signature line of Don Vito Corleone?", 'A', {"I'm gonna make him an offer he can't refuse.", "Keep your friends close, but your enemies closer.", "Say hello to my little friend!", "Here's looking at you, kid."}},
    {"Who directed the film 'Inception'?", 'D', {"Christopher Nolan", "Quentin Tarantino", "Martin Scorsese", "Steven Spielberg"}},
    {"Which film features the character Maximus Decimus Meridius?", 'C', {"Gladiator", "Braveheart", "Troy", "300"}},
    {"Who played the character Katniss Everdeen in 'The Hunger Games' series?", 'B', {"Jennifer Lawrence", "Emma Watson", "Shailene Woodley", "Daisy Ridley"}},
    {"What is the name of the fictional African country in 'Black Panther'?", 'A', {"Wakanda", "Zamunda", "Genovia", "Elbonia"}},
    {"Which film won the Academy Award for Best Picture in 2020?", 'D', {"Parasite", "1917", "Joker", "Once Upon a Time in Hollywood"}},
    {"Who directed the film 'E.T. the Extra-Terrestrial'?", 'C', {"Steven Spielberg", "George Lucas", "Tim Burton", "Ron Howard"}},
    {"Which actor played the character James Bond in 'Skyfall'?", 'A', {"Daniel Craig", "Pierce Brosnan", "Sean Connery", "Roger Moore"}},
    {"In 'The Wizard of Oz', what color is Dorothy's magical shoes?", 'B', {"Ruby", "Silver", "Gold", "Emerald"}},
};

Question scienceQuestions[NumOfQuestions] = {
    {"What is the chemical symbol for water?", 'A', {"H2O", "CO2", "O2", "CH4"}},
    {"Who developed the theory of relativity?", 'C', {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Stephen Hawking"}},
    {"What is the smallest unit of matter?", 'B', {"Atom", "Molecule", "Element", "Cell"}},
    {"Which gas do plants absorb from the atmosphere during photosynthesis?", 'D', {"Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen"}},
    {"What is the powerhouse of the cell?", 'A', {"Mitochondria", "Nucleus", "Endoplasmic Reticulum", "Golgi Apparatus"}},
    {"What is the speed of light in a vacuum?", 'D', {"299,792 kilometers per second", "150,000 kilometers per second", "450,000 kilometers per second", "600,000 kilometers per second"}},
    {"Which planet is known as the Red Planet?", 'C', {"Mars", "Venus", "Jupiter", "Saturn"}},
    {"What is the chemical symbol for gold?", 'B', {"Au", "Ag", "Fe", "Cu"}},
    {"What is the main function of the human respiratory system?", 'A', {"Breathing and exchanging gases", "Circulating blood", "Digesting food", "Filtering waste"}},
    {"Which scientist is known for the laws of motion?", 'A', {"Isaac Newton", "Albert Einstein", "Galileo Galilei", "Nikola Tesla"}},
    {"What is the largest organ in the human body?", 'C', {"Skin", "Liver", "Heart", "Brain"}},
    {"What is the chemical symbol for the element oxygen?", 'D', {"O", "O2", "H2O", "CO2"}},
    {"Which gas makes up the majority of Earth's atmosphere?", 'B', {"Nitrogen", "Oxygen", "Carbon Dioxide", "Hydrogen"}},
    {"What is the process by which plants make their own food?", 'A', {"Photosynthesis", "Respiration", "Transpiration", "Digestion"}},
    {"What is the unit of measurement for electric current?", 'B', {"Ampere", "Volt", "Watt", "Ohm"}},
    {"Which element has the chemical symbol 'Na'?", 'A', {"Sodium", "Nickel", "Nitrogen", "Neon"}},
    {"What is the chemical formula for table salt?", 'C', {"NaCl", "H2O", "CO2", "O2"}},
    {"Which planet is known as the 'Morning Star' or 'Evening Star'?", 'D', {"Venus", "Mars", "Jupiter", "Saturn"}},
    {"What is the process by which a liquid turns into a gas at its boiling point?", 'A', {"Boiling", "Evaporation", "Condensation", "Freezing"}},
    {"Which scientist is known for the theory of evolution by natural selection?", 'C', {"Charles Darwin", "Gregor Mendel", "Louis Pasteur", "Alfred Wegener"}},
    {"What is the chemical symbol for carbon dioxide?", 'B', {"CO2", "O2", "H2O", "N2"}},
    {"Which gas is responsible for the green color of plants?", 'A', {"Chlorophyll", "Nitrogen", "Oxygen", "Carbon Dioxide"}},
    {"What is the chemical symbol for silver?", 'D', {"Ag", "Au", "Cu", "Fe"}},
    {"Which subatomic particle has a positive charge?", 'C', {"Proton", "Neutron", "Electron", "Photon"}},
    {"What is the pH of pure water at room temperature?", 'A', {"7", "5", "10", "14"}},
    {"Which planet is known as the 'Blue Planet'?", 'B', {"Earth", "Uranus", "Neptune", "Mars"}},
    {"What is the chemical symbol for helium?", 'D', {"He", "H", "Li", "Be"}},
    {"Which gas is most abundant in the Earth's atmosphere?", 'A', {"Nitrogen", "Oxygen", "Carbon Dioxide", "Argon"}},
    {"What is the main component of the Earth's core?", 'B', {"Iron", "Nickel", "Silicon", "Aluminum"}},
    {"What is the chemical symbol for potassium?", 'A', {"K", "P", "Pt", "Kr"}},

};

int main()
{
    int questionChoice;
    cout << "Welcome to the Quiz Game!" << endl;
questionSelect:
    cout << "Please select one of the following genres to start the game." << endl;
    cout << "Press 1 for Football Questions." << endl;
    cout << "Press 2 for Movies Questions." << endl;
    cout << "Press 3 for Science Questions." << endl;
    cout << "Enter your choice: ";
    cin >> questionChoice;
    switch (questionChoice)
    {
    case 1:
        cout << "Starting Football Trivia..." << endl;
        break;
    case 2:
        cout << "Starting Movies Trivia..." << endl;
        break;
    case 3:
        cout << "Starting Science Trivia..." << endl;
        break;
    default:
        cout << "Please enter a valid option!" << endl;
        goto questionSelect;
    }
}