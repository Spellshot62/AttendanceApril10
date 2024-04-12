// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ATTENDANCEAPRIL10_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ATTENDANCEAPRIL10_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ATTENDANCEAPRIL10_EXPORTS
#define ATTENDANCEAPRIL10_API __declspec(dllexport)
#else
#define ATTENDANCEAPRIL10_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ATTENDANCEAPRIL10_API CAttendanceApril10 {
public:
	CAttendanceApril10(void);
	// TODO: add your methods here.
};

extern ATTENDANCEAPRIL10_API int nAttendanceApril10;

ATTENDANCEAPRIL10_API int fnAttendanceApril10(void);

ATTENDANCEAPRIL10_API int testMe(int i);
