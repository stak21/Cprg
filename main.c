// #include <stdio.h>
// #include <stdbool.h>
// struct days {
//   int number;
//   char name[3];
// };
// struct date {
//   int month;
//   int day;
//   int year;
// };
// struct time {
//   int seconds;
//   int minutes;
//   int hours;
// };
// struct dateAndTime {
//   struct date sdate;
//   struct time stime;
// };

// //function to calc tommorow's date
// struct date dateUpdate(struct date today) {
//   struct date tommorow;
//   int numberOfDays(struct date d);

//   if (today.day != numberOfDays(today)) {
//     tommorow = (struct date) { today.day + 1, today.month, today.year};
//   } else if (today.month == 12) {
//       tommorow = (struct date) {1, 1, today.year + 1};
//   } else {
//       tommorow = (struct date) {
//         today.month + 1, 1, today.year
//       };
//   }
//   return tommorow;
// }
// struct time timeUpdate(struct time now) {
//   ++now.seconds;
//   if (now.seconds == 60) {
//     now.seconds = 0;
//     ++now.minutes;

//     if (now.minutes == 60) {
//       now.minutes = 0;
//       ++now.hours;

//       if (now.hours == 24) {
//         now.hours = 0;
//       }
//     }
//   }
//   return now;
// }

// //function to find the number of days in a month
// int numberOfDays(struct date d) {
//   int days;
//   bool isLeapYear(struct date d);
//   const int daysPerMonth[12] = {
//     31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
//   };

//   if (isLeapYear(d) && d.month == 2) {
//     days = 29;
//   } else {
//     days = daysPerMonth[d.month - 1];
//   }

//   return days;
// }

// //function to determine if it's a leap year
// bool isLeapYear(struct date d) {
//   bool leapYearFlag;

//   if ( (d.year % 4 == 0 && d.year %100 != 0) || 
//           d.year % 400 == 0) {
//             leapYearFlag = true;
//           } else {
//             leapYearFlag = false;
//           }
//   return leapYearFlag;
// }

// int f(struct date dates) {
//   if (dates.month <= 2) {
//     dates.year -= 1;
//   }
//   return dates.year;
// }
// int g(struct date dates) {
//   if (dates.month <= 2) {
//     dates.month += 13;
//   } else {
//     dates.month += 1;
//   }

//   return dates.month;
// }
// int calcN(struct date d) {
//   void printDay(int N);
//   int f(struct date dates);
//   int g(struct date dates);
//   int f1 = f(d);
//   int g1 = g(d);
//   int N = (1461 * f1 / 4) + (153 * g1 / 5) + d.day;

//   return N;
// }

// void printDay(int N) {
//   int i;
//   N = N % 7;
//   const struct days printDay[7] =
//   {
//       {1, {'M', 'o', 'n'}}, {2, {'T', 'u', 'e'}}, {3, {'W', 'e', 'd'}}, {4, {'T', 'h', 'u'}},
//       {5, {'F', 'r', 'i'}}, {6, {'S', 'a', 't'}}, {7, {'S', 'u', 'n'}},
//   };
//   for (i = 0; i < 3; i += 1) {
//     printf("%c", printDay[N].name[i]);
//   }
//   printf ("\n");
  
// }
// struct dateAndTime clockKeeper(struct dateAndTime dT) {
// struct time timeUpdate(struct time now);
// struct date dateUpdate(struct date today);
// dT.stime = timeUpdate(dT.stime);
// if (dT.stime.hours == 0) {
//   dT.sdate = dateUpdate(dT.sdate);
// }
// printf("date: %.2i/%.2i/%.4i\n", dT.sdate.month, dT.sdate.day, dT.sdate.year);
// printf("time: %.2i:%.2i:%.2i\n", dT.stime.hours, dT.stime.minutes, dT.stime.seconds);
// return dT;
// }
// int main (void) {
// struct dateAndTime clockKeeper(struct dateAndTime dT);
// struct dateAndTime dT;
// // dT.sdate.day = 8;
// // dT.sdate.month = 8;
// // dT.sdate.year = 2018;
// // dT.stime.hours = 23;
// // dT.stime.minutes = 59;
// // dT.stime.seconds = 59;
// // clockKeeper(dT);
// scanf ("%i%i%i", &dT.sdate.month, &dT.sdate.day, &dT.sdate.year);
// scanf ("%i%i%i", &dT.stime.hours, &dT.stime.minutes, &dT.stime.seconds);
// printf("time: %.2i:%.2i:%.2i\n", dT.stime.hours, dT.stime.minutes, dT.stime.seconds);
// clockKeeper(dT);
// return 0;
// }

