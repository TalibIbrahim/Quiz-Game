#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
const int NumOfQuestions = 30;
int score = 0;

struct Question
{
    // Our schema for the questionsdd
    string questionText;
    char correctOption;
    vector<string> options;
    bool isAsked = false;
};

struct User
{
    string name;
    int score;
};

Question footballQuestions[NumOfQuestions] = {
    {"Which country won the FIFA World Cup in 2018?", 'C', {"Brazil", "Germany", "France", "Croatia"}},
    {"Who holds the record for the most Olympic gold medals in athletics?", 'A', {"Carl Lewis", "Usain Bolt", "Michael Phelps", "Jesse Owens"}},
    {"Which football club has won the most UEFA Champions League titles?", 'B', {"FC Barcelona", "Real Madrid", "AC Milan", "Bayern Munich"}},
    {"Who is the all-time top scorer in the history of the FIFA World Cup?", 'D', {"Pele", "Diego Maradona", "Lionel Messi", "Miroslav Klose"}},
    {"Which player has won the most FIFA Ballon d'Or awards?", 'A', {"Lionel Messi", "Cristiano Ronaldo", "Zinedine Zidane", "Michel Platini"}},
    {"In what year was the first FIFA World Cup held?", 'D', {"1950", "1966", "1978", "1930"}},
    {"Who is the captain of the Portugal national football team?", 'B', {"Bruno Fernandes", "Cristiano Ronaldo", "Diogo Jota", "Bernardo Silva"}},
    {"Which stadium is known as the 'Theatre of Dreams'?", 'C', {"Anfield", "Camp Nou", "Old Trafford", "Santiago Bernabeu"}},
    {"Which country hosted the 2014 FIFA World Cup?", 'A', {"Brazil", "Germany", "France", "Italy"}},
    {"Who won the UEFA Euro 2020?", 'C', {"England", "Portugal", "Italy", "France"}},
    {"In what year did the Premier League begin?", 'D', {"1988", "2000", "1996", "1992"}},
    {"Which player is known as 'The Egyptian King'?", 'B', {"Sadio Mane", "Mohamed Salah", "Roberto Firmino", "Virgil van Dijk"}},
    {"Who won the Golden Boot at the 2018 FIFA World Cup?", 'B', {"Luka Modric", "Cristiano Ronaldo", "Harry Kane", "Kylian Mbappe"}},
    {"Which country won the Copa America 2021?", 'A', {"Argentina", "Brazil", "Uruguay", "Chile"}},
    {"Who is the manager of Manchester City as of 2024?", 'C', {"Jurgen Klopp", "Zinedine Zidane", "Pep Guardiola", "Thomas Tuchel"}},
    {"Which player is nicknamed 'The Magician'?", 'B', {"Andres Iniesta", "Lionel Messi", "David Silva", "Paul Pogba"}},
    {"In what year did Diego Maradona score the 'Hand of God' goal?", 'D', {"1990", "1982", "1994", "1986"}},
    {"Which club did David Beckham play for before joining LA Galaxy?", 'A', {"Real Madrid", "Manchester United", "AC Milan", "Paris Saint-Germain"}},
    {"Who is the all-time top scorer in the UEFA Champions League?", 'B', {"Lionel Messi", "Cristiano Ronaldo", "Raul", "Robert Lewandowski"}},
    {"Which player has won the most caps for the England national team?", 'C', {"Wayne Rooney", "David Beckham", "Peter Shilton", "Steven Gerrard"}},
    {"Who won the FIFA Women's World Cup in 2019?", 'D', {"Netherlands", "Sweden", "France", "United States"}},
    {"Which country has won the most African Cup of Nations titles?", 'C', {"Nigeria", "Cameroon", "Egypt", "Ghana"}},
    {"Who is the captain of the Brazil national football team?", 'B', {"Neymar", "Casemiro", "Thiago Silva", "Dani Alves"}},
    {"In what year did England win their only FIFA World Cup?", 'D', {"1970", "1958", "1982", "1966"}},
    {"Which goalkeeper has the most clean sheets in Premier League history?", 'B', {"Peter Schmeichel", "Petr Cech", "David De Gea", "Alisson Becker"}},
    {"Who is known as the 'Kaiser' in football?", 'A', {"Franz Beckenbauer", "Johan Cruyff", "Karl-Heinz Rummenigge", "Gerd Muller"}},
    {"Which player is nicknamed 'The Atomic Flea'?", 'B', {"Luis Suarez", "Lionel Messi", "Antoine Griezmann", "Xavi Hernandez"}},
    {"Who is the top scorer in the history of the Spanish national team?", 'D', {"Fernando Torres", "Fernando Hierro", "David Silva", "David Villa"}},
    {"Which country won the first FIFA World Cup?", 'A', {"Uruguay", "Brazil", "Germany", "Italy"}},
    {"Who won the 2021 Ballon d'Or?", 'C', {"Robert Lewandowski", "Cristiano Ronaldo", "Lionel Messi", "Mohamed Salah"}},

};

Question movieQuestions[NumOfQuestions] = {
    {"In which year does Marty McFly travel to the past in 'Back to the Future'?", 'B', {"1985", "1955", "1965", "1995"}},
    {"Who directed 'Back to the Future' trilogy?", 'C', {"Steven Spielberg", "James Cameron", "Robert Zemeckis", "Christopher Nolan"}},
    {"Which actor plays Marty McFly in 'Back to the Future'?", 'B', {"Christopher Lloyd", "Michael J. Fox", "Tom Hanks", "Robert Downey Jr."}},
    {"What is the name of Doc Brown's time-traveling DeLorean in 'Back to the Future'?", 'A', {"The Flux Capacitor", "Time Machine", "Warp Drive", "Chrono Cruiser"}},
    {"Which Marvel superhero wields a hammer named Mjolnir?", 'C', {"Iron Man", "Captain America", "Thor", "Hulk"}},
    {"Who is the main villain in the movie 'The Dark Knight'?", 'D', {"Bane", "Two-Face", "The Riddler", "The Joker"}},
    {"Which film features the character Jack Dawson and Rose DeWitt Bukater?", 'B', {"Gone with the Wind", "Titanic", "Avatar", "Pirates of the Caribbean"}},
    {"In 'Forrest Gump', what does Forrest's mother say life is like?", 'A', {"A box of chocolates", "A puzzle", "A marathon", "A feather"}},
    {"Who played the role of Tony Stark in the Marvel Cinematic Universe?", 'B', {"Chris Evans", "Robert Downey Jr.", "Chris Hemsworth", "Mark Ruffalo"}},
    {"Which movie is known for the line 'You can't handle the truth!'?", 'C', {"The Shawshank Redemption", "Gladiator", "A Few Good Men", "Jurassic Park"}},
    {"What is the name of the computer system in '2001: A Space Odyssey'?", 'D', {"Ava", "Skynet", "C-3PO", "HAL 9000"}},
    {"In 'The Matrix', what pill does Neo take?", 'B', {"The blue pill", "The red pill", "The green pill", "The yellow pill"}},
    {"Who directed the 'Jurassic Park' series?", 'A', {"Steven Spielberg", "James Cameron", "Michael Bay", "Christopher Nolan"}},
    {"Which film features a character named Don Vito Corleone?", 'D', {"Goodfellas", "Scarface", "Casablanca", "The Godfather"}},
    {"Who played the character Jack in 'Titanic'?", 'C', {"Johnny Depp", "Tom Cruise", "Leonardo DiCaprio", "Brad Pitt"}},
    {"In 'The Shawshank Redemption', what is Andy Dufresne's profession?", 'B', {"Lawyer", "Banker", "Engineer", "Doctor"}},
    {"Who is the voice actor for Woody in 'Toy Story'?", 'A', {"Tom Hanks", "Tim Allen", "Jim Carrey", "Will Smith"}},
    {"Which movie features the character Ellen Ripley battling aliens?", 'D', {"Predator", "Blade Runner", "The Terminator", "Aliens"}},
    {"What is the name of the wizarding school in 'Harry Potter'?", 'B', {"Durmstrang", "Hogwarts", "Beauxbatons", "Ilvermorny"}},
    {"Who directed the film 'Avatar'?", 'C', {"Peter Jackson", "Christopher Nolan", "James Cameron", "George Lucas"}},
    {"Which actor played the role of Neo in 'The Matrix' series?", 'A', {"Keanu Reeves", "Hugo Weaving", "Lawrence Fishburne", "Carrie-Anne Moss"}},
    {"In 'The Godfather', what is the signature line of Don Vito Corleone?", 'D', {"Keep your friends close, but your enemies closer.", "Say hello to my little friend!", "Here's looking at you, kid.", "I'm gonna make him an offer he can't refuse."}},
    {"Who directed the film 'Inception'?", 'B', {"Quentin Tarantino", "Christopher Nolan", "Martin Scorsese", "Steven Spielberg"}},
    {"Which film features the character Maximus Decimus Meridius?", 'C', {"Braveheart", "Troy", "Gladiator", "300"}},
    {"Who played the character Katniss Everdeen in 'The Hunger Games' series?", 'B', {"Emma Watson", "Jennifer Lawrence", "Shailene Woodley", "Daisy Ridley"}},
    {"What is the name of the fictional African country in 'Black Panther'?", 'D', {"Zamunda", "Genovia", "Elbonia", "Wakanda"}},
    {"Which film won the Academy Award for Best Picture in 2020?", 'C', {"1917", "Joker", "Parasite", "Once Upon a Time in Hollywood"}},
    {"Who directed the film 'E.T. the Extra-Terrestrial'?", 'A', {"Steven Spielberg", "George Lucas", "Tim Burton", "Ron Howard"}},
    {"Which actor played the character James Bond in 'Skyfall'?", 'B', {"Pierce Brosnan", "Daniel Craig", "Sean Connery", "Roger Moore"}},
    {"In 'The Wizard of Oz', what color is Dorothy's magical shoes?", 'B', {"Silver", "Ruby", "Gold", "Emerald"}},
};

Question scienceQuestions[NumOfQuestions] = {
    {"What is the chemical symbol for water?", 'A', {"H2O", "CO2", "O2", "CH4"}},
    {"Who developed the theory of relativity?", 'C', {"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Stephen Hawking"}},
    {"What is the smallest unit of matter?", 'B', {"Molecule", "Atom", "Element", "Cell"}},
    {"Which gas do plants absorb from the atmosphere during photosynthesis?", 'D', {"Oxygen", "Nitrogen", "Hydrogen", "Carbon Dioxide"}},
    {"What is the powerhouse of the cell?", 'D', {"Nucleus", "Endoplasmic Reticulum", "Golgi Apparatus", "Mitochondria"}},
    {"What is the speed of light in a vacuum?", 'C', {"150,000 kilometers per second", "450,000 kilometers per second", "299,792 kilometers per second", "600,000 kilometers per second"}},
    {"Which planet is known as the Red Planet?", 'A', {"Mars", "Venus", "Jupiter", "Saturn"}},
    {"What is the chemical symbol for gold?", 'B', {"Ag", "Au", "Fe", "Cu"}},
    {"What is the main function of the human respiratory system?", 'A', {"Breathing and exchanging gases", "Circulating blood", "Digesting food", "Filtering waste"}},
    {"Which scientist is known for the laws of motion?", 'C', {"Albert Einstein", "Galileo Galilei", "Isaac Newton", "Nikola Tesla"}},
    {"What is the largest organ in the human body?", 'C', {"Liver", "Heart", "Skin", "Brain"}},
    {"What is the chemical symbol for the element oxygen?", 'D', {"O2", "H2O", "CO2", "O"}},
    {"Which gas makes up the majority of Earth's atmosphere?", 'A', {"Nitrogen", "Oxygen", "Carbon Dioxide", "Hydrogen"}},
    {"What is the process by which plants make their own food?", 'B', {"Respiration", "Photosynthesis", "Transpiration", "Digestion"}},
    {"What is the unit of measurement for electric current?", 'D', {"Volt", "Watt", "Ohm", "Ampere"}},
    {"Which element has the chemical symbol 'Na'?", 'A', {"Sodium", "Nickel", "Nitrogen", "Neon"}},
    {"What is the chemical formula for table salt?", 'C', {"H2O", "CO2", "NaCl", "O2"}},
    {"Which planet is known as the 'Morning Star' or 'Evening Star'?", 'B', {"Mars", "Venus", "Jupiter", "Saturn"}},
    {"What is the process by which a liquid turns into a gas at its boiling point?", 'D', {"Osmosis", "Condensation", "Freezing", "Evaporation"}},
    {"Which scientist is known for the theory of evolution by natural selection?", 'A', {"Charles Darwin", "Gregor Mendel", "Louis Pasteur", "Alfred Wegener"}},
    {"What is the chemical symbol for carbon dioxide?", 'B', {"O2", "CO2", "H2O", "N2"}},
    {"What is responsible for the green color of plants?", 'D', {"Nitrogen", "Oxygen", "Carbon Dioxide", "Chlorophyll"}},
    {"What is the chemical symbol for silver?", 'C', {"Au", "Cu", "Ag", "Fe"}},
    {"Which subatomic particle has a positive charge?", 'A', {"Proton", "Neutron", "Electron", "Photon"}},
    {"What is the pH of pure water at room temperature?", 'B', {"5", "7", "10", "14"}},
    {"Which planet is known as the 'Blue Planet'?", 'B', {"Earth", "Uranus", "Neptune", "Mars"}},
    {"What is the chemical symbol for helium?", 'C', {"H", "Li", "He", "Be"}},
    {"Which gas is most abundant in the Earth's atmosphere?", 'A', {"Nitrogen", "Oxygen", "Carbon Dioxide", "Argon"}},
    {"What is the main component of the Earth's core?", 'B', {"Nickel", "Iron", "Silicon", "Aluminum"}},
    {"What is the chemical symbol for potassium?", 'D', {"P", "Pt", "Kr", "K"}},

};

void displayQuestions(Question questions[], int numOfQuestions, int questionsToAsk) // Takes in 2 arguments - array of questions and number of questions
{
    int randomIndex;
    srand(time(0)); // seed random number generator
    for (int i = 0; i < questionsToAsk; i++)
    {

        do
        {
            randomIndex = rand() % questionsToAsk;
        } while (questions[randomIndex].isAsked);
        // Keeps creating a random number until it finds a question that is not asked

        cout << "Question " << i + 1 << ": " << questions[randomIndex].questionText << endl;
        for (int j = 0; j < questions[randomIndex].options.size(); j++)
        {
            cout << "  " << char('A' + j) << ". " << questions[randomIndex].options[j] << endl;
        }
        questions[randomIndex].isAsked = true;
        cout << endl;
        // The following asks the user for an answer and checks if it is correct by comparing both.
        char userAnswer;
        cout << "Enter your answer: ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);
        if (userAnswer == questions[randomIndex].correctOption)
        {
            cout << "You guessed the right answer!" << endl;
            score += 10;
            cout << "Your current score is: " << score << endl;
        }
        else
        {
            cout << "Wrong answer." << endl;
            cout << "Your current score is: " << score << endl;
        }
        cout << endl;
    }

    // Resets questions after all questions are asked
    for (int i = 0; i < numOfQuestions; i++)
    {
        questions[i].isAsked = false;
    }
}
void displayLeaderboard()
{
    cout << "The current leaderboard is: " << endl;

    for (int i = 0; i < users.size(); i++)
    {
        cout << users[i].name << " : " << users[i].score << endl;
    }
}
int main()
{
    int questionsToAsk;
    vector<User>
        users; // creates an empty vector of users

    int questionChoice;
    char playAgain, newUser;
    string userName;

    cout << "Please enter your name: ";
    cin >> userName;

    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "Welcome to our Quiz Game " << userName << endl;
    cout << "----------------------------------------" << endl;

    if (users.size() > 0)
    {
        cout << "The current leaderboard is: " << endl;

        for (int i = 0; i < users.size(); i++)
        {
            cout << users[i].name << " : " << users[i].score << endl;
        }
        cout << "----------------------------------------" << endl;
    }
    else
    {
        cout << "There are no users in the leaderboard yet." << endl;
        cout << "----------------------------------------" << endl;
    }

gameModeSelect:
    cout << "Select Game Mode: " << endl;
    cout << "Press 1 for 10 Questions Mode" << endl;
    cout << "Press 2 for 15 Questions Mode" << endl;
    cout << "Press 3 for Practice Mode" << endl;
    cout << "Enter your choice: ";
    cin >> questionsToAsk;

    switch (questionsToAsk)
    {
    case 1:
        questionsToAsk = 10;
        cout << "----------------------------------------" << endl;
        cout << "You have selected 10 Questions Mode." << endl;
        cout << "----------------------------------------" << endl;
        break;
    case 2:
        questionsToAsk = 15;
        cout << "----------------------------------------" << endl;
        cout << "You have selected 15 Questions Mode." << endl;
        cout << "----------------------------------------" << endl;

        break;
    case 3:
        questionsToAsk = 30;
        cout << "----------------------------------------" << endl;
        cout << "You have selected Practice Mode. You will be asked all the questions." << endl;
        cout << "----------------------------------------" << endl;

        break;
    default:
        cout << "----------------------------------------" << endl;
        cout << "Please enter a valid option!" << endl;
        cout << "----------------------------------------" << endl;
        goto gameModeSelect;
    }

questionSelect:
    cout << "Please select one of the following genres to start the game." << endl;
    cout << "Press 1 for Football Questions." << endl;
    cout << "Press 2 for Movies Questions." << endl;
    cout << "Press 3 for Science Questions." << endl;
    cout << "Enter your choice: ";
    cin >> questionChoice;

    cout << "----------------------------------------" << endl;
    switch (questionChoice)
    {
    case 1:
        cout << "----------------------------------------" << endl;
        cout << "Starting Football Trivia..." << endl;
        cout << "----------------------------------------" << endl;

        displayQuestions(footballQuestions, NumOfQuestions, questionsToAsk); // Passes the array of questions and number of questions to the function

        cout << "----------------------------------------" << endl;
        cout << "Do you want to play again? (Y/N)" << endl;

        cin >> playAgain;
        if (playAgain == 'Y' || playAgain == 'y')
        {
            goto gameModeSelect;
        }
        else
        {
            cout << "Thank you for playing our Quiz Game!" << endl;
            cout << "Do you want another user? (Y/N)" << endl;
            cin >> newUser;
            users.push_back({userName, score});

            if (newUser == 'Y' || newUser == 'y')
            {
                score = 0;

                cout << "----------------------------------------" << endl;
                cout << "Starting a new game..." << endl;
                cout << "----------------------------------------" << endl;
                cout << "The current leaderboard is: " << endl;
                for (int i = 0; i < users.size(); i++)
                {
                    cout << users[i].name << " : " << users[i].score << endl;
                }

                cout << "Please enter your name: ";
                cin >> userName;
                goto gameModeSelect;
            }
            else
            {
                cout << "Thank you for playing our Quiz Game!" << endl;
            }
            cout << "The current leaderboard is: " << endl;
            for (int i = 0; i < users.size(); i++)
            {
                cout << users[i].name << " : " << users[i].score << endl;
            }
        }
        break;
    case 2:
        cout << "----------------------------------------" << endl;

        cout << "Starting Movies Trivia..." << endl;
        cout << "----------------------------------------" << endl;

        displayQuestions(movieQuestions, NumOfQuestions, questionsToAsk);
        cout << "----------------------------------------" << endl;
        cout << "Do you want to play again? (Y/N)" << endl;

        cin >> playAgain;
        if (playAgain == 'Y' || playAgain == 'y')
        {
            goto gameModeSelect;
        }
        else
        {
            cout << "Thank you for playing our Quiz Game!" << endl;
            cout << "Do you want another user? (Y/N)" << endl;
            cin >> newUser;
            users.push_back({userName, score});

            if (newUser == 'Y' || newUser == 'y')
            {
                score = 0;

                cout << "----------------------------------------" << endl;
                cout << "Starting a new game..." << endl;
                cout << "----------------------------------------" << endl;
                cout << "The current leaderboard is: " << endl;
                for (int i = 0; i < users.size(); i++)
                {
                    cout << users[i].name << " : " << users[i].score << endl;
                }

                cout << "Please enter your name: ";
                cin >> userName;
                goto gameModeSelect;
            }
            else
            {
                cout << "Thank you for playing our Quiz Game!" << endl;
            }
            cout << "The current leaderboard is: " << endl;
            for (int i = 0; i < users.size(); i++)
            {
                cout << users[i].name << " : " << users[i].score << endl;
            }
        }
        break;
    case 3:
        cout << "----------------------------------------" << endl;

        cout << "Starting Science Trivia..." << endl;
        cout << "----------------------------------------" << endl;
        displayQuestions(scienceQuestions, NumOfQuestions, questionsToAsk);
        cout << "----------------------------------------" << endl;
        cout << "Do you want to play again? (Y/N)" << endl;

        cin >> playAgain;
        if (playAgain == 'Y' || playAgain == 'y')
        {
            goto gameModeSelect;
        }
        else
        {
            cout << "Thank you for playing our Quiz Game!" << endl;
            cout << "Do you want another user? (Y/N)" << endl;
            cin >> newUser;
            users.push_back({userName, score});

            if (newUser == 'Y' || newUser == 'y')
            {
                score = 0;
                cout << "----------------------------------------" << endl;
                cout << "Starting a new game..." << endl;
                cout << "----------------------------------------" << endl;
                cout << "The current leaderboard is: " << endl;
                for (int i = 0; i < users.size(); i++)
                {
                    cout << users[i].name << " : " << users[i].score << endl;
                }

                cout << "Please enter your name: ";
                cin >> userName;
                goto gameModeSelect;
            }
            else
            {
                cout << "Thank you for playing our Quiz Game!" << endl;
            }
            cout << "The current leaderboard is: " << endl;
            for (int i = 0; i < users.size(); i++)
            {
                cout << users[i].name << " : " << users[i].score << endl;
            }
        }
        break;
    default:
        cout << "----------------------------------------" << endl;
        cout << "Please enter a valid option!" << endl;
        cout << "----------------------------------------" << endl;

        goto questionSelect;
    }
}