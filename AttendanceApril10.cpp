// AttendanceApril10.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "AttendanceApril10.h"


// This is an example of an exported variable
ATTENDANCEAPRIL10_API int nAttendanceApril10=0;

// This is an example of an exported function.
ATTENDANCEAPRIL10_API int fnAttendanceApril10(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CAttendanceApril10::CAttendanceApril10()
{
    return;
}

ATTENDANCEAPRIL10_API int testMe(int i) {
    return i + 1;
}