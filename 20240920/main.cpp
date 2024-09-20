
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

struct student
{
    student(const std::string &n, const std::string &a) : name{n}, answer{a} {};
    std::string name;
    std::string answer;
    unsigned int score = 0;
};
void grading(std::vector<student> &students, std::string &key_answer, std::size_t &count);

int main()
{

    std::ifstream in_file;
    in_file.open("./responses.txt");

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string key_answer{};
    in_file >> key_answer;
    std::vector<student> students;
    std::string name;
    std::string answer;
    std::size_t count{}; // Keep track of number of student

    // Get data in
    while (in_file >> name >> answer)
    {
        student a(name, answer);
        students.push_back(a);
        ++count;
    }

    // Grade individualy and display the score
    grading(students, key_answer, count);

    return 0;
}

void grading(std::vector<student> &students, std::string &key_answer, std::size_t &count)
{
    // Loop through all the student in file
    for (auto &a : students)
    {
        // Loop through all the answer
        for (int i{}; i < key_answer.length(); i++)
        {
            a.answer[i] == key_answer[i] ? a.score++ : a.score;
        }
    }

    // Format data
    int width1{20}, width2{10}, range{30};
    double total_score{};
    // Print out the result
    std::cout << std::setw(width1) << std::left << "Student" << std::setw(width2) << std::right << "Score" << std::endl
              << std::setw(range) << std::setfill('-') << "" << std::setfill(' ') << std::endl;
    for (auto &a : students)
    {
        std::cout << std::setw(width1) << std::left << a.name << std::setw(width2) << std::right << a.score << std::endl;
        total_score += a.score;
    }
    std::cout << std::setw(range) << std::setfill('-') << "" << std::setfill(' ') << std::endl
              << std::setw(width1) << std::left << "Average score: " << std::setw(width2) << std::right
              << std::setprecision(1) << std::fixed << total_score / count << std::endl;
}
