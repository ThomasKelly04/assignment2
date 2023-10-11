#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, int employee_id);

    virtual double calculate_weekly_salary() const = 0;
    virtual double compute_healthcare_contributions() const = 0;
    virtual int compute_vacation_days() const = 0;

protected:
    std::string name;
    int employee_id;
};

class Professional : public Employee {
public:
    Professional(const std::string& name, int employee_id, double monthly_salary, int vacation_days);

    double calculate_weekly_salary() const override;
    double compute_healthcare_contributions() const override;
    int compute_vacation_days() const override;

private:
    double monthly_salary;
    int vacation_days;
};

class Nonprofessional : public Employee {
public:
    Nonprofessional(const std::string& name, int employee_id, double hourly_rate, int hours_worked);

    double calculate_weekly_salary() const override;
    double compute_healthcare_contributions() const override;
    int compute_vacation_days() const override;

private:
    double hourly_rate;
    int hours_worked;
};

#endif
