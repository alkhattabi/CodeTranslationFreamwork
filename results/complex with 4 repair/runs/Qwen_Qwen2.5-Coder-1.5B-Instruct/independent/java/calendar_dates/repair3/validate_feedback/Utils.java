package com.example;

import java.util.Service;

public class Utils {

    public static int valid_date(int n) {
        if (n < 10000101 || n > 99991231) {
            return 0;
        }
        int year = n / 10000;
        int month = (n / 100) % 100;
        int day = n % 100;
        if (month < 1 || month > 12 || day < 1) {
            return 0;
        }
        int days = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30;
        }
        if (month == 2) {
            boolean leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
            days = leap ? 29 : 28;
        }
        return day <= days ? 1 : 0;
    }
}
