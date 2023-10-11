#include <iostream>
#include "employee.h"

int main() {
    Professional professional_employee("John Doe", 1001, 6000, 10);
    Nonprofessional nonprofessional_employee("Jane Smith", 2001, 20, 45);

    std::cout << "Professional Employee:" << std::endl;
    std::cout << "Weekly Salary: " << professional_employee.calculate_weekly_salary() << std::endl;
    std::cout << "Healthcare Contributions: " << professional_employee.compute_healthcare_contributions() << std::endl;
    std::cout << "Vacation Days: " << professional_employee.compute_vacation_days() << std::endl;

    std::cout << "\nNonprofessional Employee:" << std::endl;
    std::cout << "Weekly Salary: " << nonprofessional_employee.calculate_weekly_salary() << std::endl;
    std::cout << "Healthcare Contributions: " << nonprofessional_employee.compute_healthcare_contributions() << std::endl;
    std::cout << "Vacation Days: " << nonprofessional_employee.compute_vacation_days() << std::endl;

    return 0;
}
