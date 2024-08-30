#include <iostream>
#include <vector>

int main()
{
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    /*
    Check the alphabet string for the match then use that index from alphabet string to replace with the index at key.
    The location to replace is a different index from the string that the user put in.
    */
    std::cout << "Please enter your string for encryption: ";
    std::string original{};
    std::getline(std::cin, original);
    std::string result{};
    for (auto c : original)
    {
        std::size_t position = alphabet.find(c);
        if (position != std::string::npos)
        {
            result += key.at(position);
        }
        else
        {
            result += c;
        }
    }
    // bool found(false);
    // for (int c{0}; c < original.size(); c++)
    // {
    //     for (int i{0}; i < alphabet.size(); i++)
    //     {
    //         if (original.at(c) == alphabet.at(i))
    //         {
    //             result.push_back(key.at(i));
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found){
    //         result.push_back(original.at(c));
    //     }else{
    //         found = false;
    //     }
    // }
    std::cout << "Youtr string before encryption: " << original << std::endl;
    std::cout << "Your string after encryption: " << result << std::endl
              << "===============================";
    std::cout << "Now decrypt your message." << std::endl;
    std::string decrypt{};
    for (auto c : result)
    {
        std::size_t position = key.find(c);
        if (position != std::string::npos)
        {
            decrypt += alphabet.at(position);
        }
        else
        {
            decrypt += c;
        }
    }
    // found = false;
    // for (int c{0}; c < result.size(); c++)
    // {
    //     for (int i{0}; i < key.size(); i++)
    //     {
    //         if (result.at(c) == key.at(i))
    //         {
    //             decrypt.push_back(alphabet.at(i));
    //             found = true;
    //             break;
    //         }
    //     }
    //      if(!found){
    //         decrypt.push_back(result.at(c));
    //     }else{
    //         found = false;
    //     }
    // }
    std::cout << "Youtr string before decrypt: " << result << std::endl;
    std::cout << "Your string after decrypt: " << decrypt << std::endl;

    return 0;
}
