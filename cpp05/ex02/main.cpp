#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        // Step 1: Create the form
        ShrubberyCreationForm shrubForm("home");

        // Step 2: Create a bureaucrat with a sufficient grade
        Bureaucrat highRanker("Alice", 1); // Grade 1, high enough for anything

        // Step 3: Sign the form
        // std::cout << "Signing the form...\n";
		shrubForm.beSigned(highRanker);
        highRanker.signForm(shrubForm);

        // Step 4: Execute the form
        // std::cout << "Executing the form...\n";
        shrubForm.execute(highRanker);

        // Output to confirm
        // std::cout << "ShrubberyCreationForm test completed. Check 'home_shrubbery' file.\n";
    } catch (std::exception &e) {
        // Catch and print any exceptions
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
