// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <ios>
// for numeric_limits
#include <limits>
// for max()
class Song
{
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;

public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const
    {
        return name;
    }
    std::string get_artist() const
    {
        return artist;
    }
    int get_rating() const
    {
        return rating;
    }

    bool operator<(const Song &rhs) const
    {
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs) const
    {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s)
{
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
    return os;
}
void clear_buffer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void display_menu()
{
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song)
{
    std::cout << "Playing:\n"
              << song << std::endl;
}
char selection()
{
    char c{};
    std::cin >> c;
    // Clear Buffer
    clear_buffer();
    return std::toupper(c);
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song)
{
    for (auto &tune : playlist)
    {
        std::cout << tune << std::endl;
    }
    std::cout << "Current song:\n"
              << current_song << std::endl;
}

int main()
{

    std::list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}};

    std::list<Song>::iterator current_song = playlist.begin();
    display_menu();
    char c = selection();
    std::string name{}, artist{};
    int rated{};
    // For display list
    auto list = playlist.begin();
    do
    {

        switch (c)
        {
        case 'F': // First song
            current_song = playlist.begin();
            play_current_song(*current_song);
            display_menu();
            c = selection();
            break;
        case 'N': // Next song
            current_song++;
            if (current_song == playlist.end())
            {
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
            display_menu();
            c = selection();
            break;
        case 'P': // Previous song
            if (current_song == playlist.begin())
            {
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
            display_menu();
            c = selection();
            break;
        case 'A': // Add a new song to the playlist
            std::cout << "Enter song name: ";
            std::getline(std::cin, name);
            std::cout << "Enter song artist: ";
            std::getline(std::cin, artist);
            std::cout << "Enter your rating(1-5): ";
            std::cin >> rated;
            clear_buffer();
            playlist.insert(current_song, Song{name, artist, rated});
            current_song--;
            play_current_song(*current_song);
            display_menu();
            c = selection();
            break;
        case 'L': // List out song in the playlist
            while (list != playlist.end())
            {
                std::cout << std::endl
                          << *list << std::endl;
                list++;
            }
            std::cout << "Current song:\n"
                      << *current_song << std::endl;
            list = playlist.begin();
            display_menu();
            c = selection();
        case 'Q': // Quit
            break;
        default: // Not an option
            std::cout << "Sorry that input is not valid please enter your command:" << std::endl;
            display_menu();
            c = selection();
            break;
        }
    } while (c != 'Q');
    std::cout << "Thanks for listening!" << std::endl;

    return 0;
}
