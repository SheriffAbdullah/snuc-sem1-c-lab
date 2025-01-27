/* Program to count the number of days, weeks, months, and years between 2 dates */

#include <stdio.h>
#include <math.h>

int is_leap(year)
{
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int main() {
    int start_date, end_date;
    printf("Enter start date (DDMMYYYY): ");
    scanf("%d", &start_date);
    printf("Enter end date (DDMMYYYY): ");
    scanf("%d", &end_date);
    int start_day = 0, start_month = 0, start_year = 0;
    int end_day = 0, end_month = 0, end_year = 0;
    int i;

    // Get values for year - YYYY
    for (i=0; i<4; i++)
    {
        start_year = start_year + ((start_date % 10) * pow(10, i));
        end_year = end_year + ((end_date % 10) * pow(10, i));
        start_date /= 10;
        end_date /= 10;
    }

    //Get values for month - MM
    for (i=0; i<2; i++)
    {
        start_month += ((start_date % 10) * pow(10, i));
        end_month += ((end_date % 10) * pow(10, i));
        start_date /= 10;
        end_date /= 10;
    }

    // Get values for day - DD
    for (i=0; i<2; i++)
    {
        start_day += ((start_date % 10) * pow(10, i));
        end_day += ((end_date % 10) * pow(10, i));
        start_date /= 10;
        end_date /= 10;
    }

    int normal_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap_year[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int years, months, days;
    years = 0;
    months = 0;
    days = 0;
    int total_days, month_days, year_days, rem_days;
    total_days = 0;
    month_days = 0;
    year_days = 0;
    rem_days = 0;


    if (end_year - start_year == 0 && start_month - end_month == 0)
    {
        rem_days += end_day - start_day;
        goto output;
    }

    else if (end_year - start_year == 0 && start_month - end_month != 0)
    {
        // Leap year
        if (is_leap(start_year) == 1)
        {
            // Number of days in complete months between two dates
            for (i = start_month; i < end_month - 1; i++)
            {
                month_days += leap_year[i];
                months += 1;
            }

            rem_days += leap_year[start_month-1] - start_day;
            rem_days += end_day;

            goto output;
        }
            // Non-leap year
        else
        {
            for (i = start_month; i < end_month - 1; i++)
            {
                month_days += normal_year[i];
                months += 1;
            }
            rem_days += normal_year[start_month-1] - start_day;
            rem_days += end_day;

            goto output;
        }
    }
    else
    {
        // Number of days in complete years between two dates
        for (i = start_year + 1; i < end_year; i++)
        {
            if (is_leap(i) == 1)
            {
                year_days += 366;
            }
            else
            {
                year_days += 365;
            }
            years += 1;
        }

        // Number of days after given date in start year
        if (is_leap(start_year) == 1)
        {
            for (i = start_month; i < 12; i++)
            {
                month_days += leap_year[i];
                months += 1;
            }
            rem_days += leap_year[start_month-1] - start_day;
        }
        else
        {
            for (i = start_month; i < 12; i++)
            {
                month_days += normal_year[i];
                months += 1;
            }
            rem_days += normal_year[start_month-1] - start_day;
        }

        // Number of days before given date in end year
        if (is_leap(end_year) == 1)
        {
            for (i = end_month - 2; i >= 0; i--)
            {
                month_days += leap_year[i];
                months += 1;
            }
            rem_days += end_day;
            goto output;
        }
        else
        {
            for (i = end_month - 2; i >= 0; i--)
            {
                month_days += normal_year[i];
                months += 1;
            }
            rem_days += end_day;
            goto output;
        }
    }

    output:
    total_days = year_days + month_days + rem_days;
    printf("\nThe duration between - \n");
    printf("%d/%d/%d \n", start_day, start_month, start_year);
    printf("%d/%d/%d is\n\n", end_day, end_month, end_year);
    printf("= %d day(s). \n", total_days);
    printf("Or %d year(s), %d month(s) and %d day(s). \n", years + months / 12, (months + rem_days / 31) % 12, rem_days % 31);
    // Month is calculated as remaining days / 31 days
    printf("Or %d week(s) and %d day(s). \n", total_days / 7, total_days % 7);


    return 0;
}

/*
start_month += ((start_date % 10) * i);
is same as
start_month = start_month + ((start_date % 10) * i);
*/


