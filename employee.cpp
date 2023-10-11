#include "employee.h"

Employee::Employee(const std::string& name, int employee_id) : name(name), employee_id(employee_id) {}

Professional::Professional(const std::string& name, int employee_id, double monthly_salary, int vacation_days)
    : Employee(name, employee_id), monthly_salary(monthly_salary), vacation_days(vacation_days) {}

double Professional::calculate_weekly_salary() const {
    return monthly_salary / 4;  // Assuming 4 weeks in a month
}

double Professional::compute_healthcare_contributions() const {
    return 0.1 * monthly_salary;  // 10% of the monthly salary
}

int Professional::compute_vacation_days() const {
    return vacation_days;
}

Nonprofessional::Nonprofessional(const std::string& name, int employee_id, double hourly_rate, int hours_worked)
    : Employee(name, employee_id), hourly_rate(hourly_rate), hours_worked(hours_worked) {}

double Nonprofessional::calculate_weekly_salary() const {
    return hourly_rate * hours_worked;
}

double Nonprofessional::compute_healthcare_contributions() const {
    return 0.05 * calculate_weekly_salary();  // 5% of the weekly salary
}

int Nonprofessional::compute_vacation_days() const {
    return hours_worked / 20;  // Assuming 20 hours of work for 1 vacation day
}
