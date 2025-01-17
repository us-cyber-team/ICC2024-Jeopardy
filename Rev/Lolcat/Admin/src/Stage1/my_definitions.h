#pragma once

#include <winternl.h>
#include <Windows.h>
#include <libloaderapi.h>
#include <stdlib.h>


#define BUFSIZE 1024
#define RVA2VA(type, base, rva)(type)((ULONG_PTR) base + rva)


typedef void* LPVOID;
typedef unsigned __int64 QWORD;

typedef struct BASE_RELOCATION_ENTRY {
    USHORT Offset : 12;
    USHORT Type : 4;
} BASE_RELOCATION_ENTRY, * PBASE_RELOCATION_ENTRY;

typedef struct BASE_RELOCATION_BLOCK {
    DWORD PageAddress;
    DWORD BlockSize;
} BASE_RELOCATION_BLOCK, * PBASE_RELOCATION_BLOCK;

typedef enum _SECTION_INHERIT {
    ViewShare = 1,
    ViewUnmap = 2
} SECTION_INHERIT, * PSECTION_INHERIT;


typedef NTSTATUS(NTAPI* _NtMapViewOfSection)(
    HANDLE          SectionHandle,
    HANDLE          ProcessHandle,
    PVOID* BaseAddress,
    ULONG_PTR       ZeroBits,
    SIZE_T          CommitSize,
    PLARGE_INTEGER  SectionOffset,
    PSIZE_T         ViewSize,
    SECTION_INHERIT InheritDisposition,
    ULONG           AllocationType,
    ULONG           Win32Protect
    );

typedef NTSTATUS(NTAPI* _NtUnmapViewOfSection)(
    HANDLE ProcessHandle,
    PVOID  BaseAddress
    );


using myCreateProcessA = BOOL(NTAPI*) (
    LPCSTR                lpApplicationName,
    LPSTR                 lpCommandLine,
    LPSECURITY_ATTRIBUTES lpProcessAttributes,
    LPSECURITY_ATTRIBUTES lpThreadAttributes,
    BOOL                  bInheritHandles,
    DWORD                 dwCreationFlags,
    LPVOID                lpEnvironment,
    LPCSTR                lpCurrentDirectory,
    LPSTARTUPINFOA        lpStartupInfo,
    LPPROCESS_INFORMATION lpProcessInformation
    );

using myNtQueryInformationProcess = BOOL(NTAPI*)(
    HANDLE           ProcessHandle,
    DWORD            ProcessInformationClass,
    PVOID            ProcessInformation,
    ULONG            ProcessInformationLength,
    PULONG           ReturnLength
    );

using myNtUnmapViewOfSection = BOOL(NTAPI*)(
    HANDLE ProcessHandle,
    PVOID  BaseAddress
    );

using myVirtualAllocEx = LPVOID(NTAPI*) (
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
    );

using myWriteProcessMemory = BOOL(NTAPI*)(
    HANDLE  hProcess,
    LPCVOID lpBuffer,
    LPVOID  lpBaseAddress,
    SIZE_T  nSize,
    SIZE_T* lpNumberOfBytesWritten
    );

using myReadProcessMemory = BOOL(NTAPI*)(

    HANDLE  hProcess,
    LPCVOID lpBaseAddress,
    LPVOID  lpBuffer,
    SIZE_T  nSize,
    SIZE_T* lpNumberOfBytesRead
    );

using mySetThread = BOOL(NTAPI*)(
    HANDLE        hThread,
    const CONTEXT* lpContext
    );

using myGetThread = BOOL(NTAPI*)(
    HANDLE    hThread,
    LPCONTEXT lpContext
    );

using myResumeThread = DWORD(NTAPI*)(
    HANDLE hThread
    );

using myCreateFile = HANDLE(NTAPI*)(
    LPCSTR                lpFileName,
    DWORD                 dwDesiredAccess,
    DWORD                 dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD                 dwCreationDisposition,
    DWORD                 dwFlagsAndAttributes,
    HANDLE                hTemplateFile
    );

using myFileSize = DWORD(NTAPI*)(
    HANDLE  hFile,
    LPDWORD lpFileSizeHigh
    );

using myHeapAlloc = LPVOID(NTAPI*)(
    HANDLE hHeap,
    DWORD  dwFlags,
    SIZE_T dwBytes
    );

using myGetProcessHeap = HANDLE(NTAPI*)();

using myReadFile = BOOL(NTAPI*)(
    HANDLE       hFile,
    LPVOID       lpBuffer,
    DWORD        nNumberOfBytesToRead,
    LPDWORD      lpNumberOfBytesRead,
    LPOVERLAPPED lpOverlapped
    );


using myVirtualAlloc = LPVOID (NTAPI*)(

    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
);

using mySetEnvironmentVariableA = BOOL (NTAPI *)(
    LPCSTR lpName,
    LPCSTR lpValue
);

using myLoadResource = HGLOBAL (NTAPI *)(
   HMODULE hModule,
   HRSRC   hResInfo
);

using mySizeofResource = DWORD (NTAPI *)(
    HMODULE hModule,
    HRSRC   hResInfo
);

using myLockResource = LPVOID(NTAPI*)(
    HGLOBAL hResData
);

using myFindResourceW = HRSRC (NTAPI *)(
 HMODULE hModule,
 LPCWSTR lpName,
 LPCWSTR lpType
);

using myLoadLibraryA = HMODULE(NTAPI*)(
    LPCSTR lpLibFileName
);

using myGetProcAddress = FARPROC(NTAPI*)(
HMODULE hModule,
LPCSTR  lpProcName
);

using myTlsAlloc = DWORD(NTAPI*)();

using myTlsSetValue = BOOL(NTAPI*)(
    DWORD dwTlsIndex,
    LPVOID lpTlsValue
    );



using myCryptAcquireContextW = BOOL (NTAPI *)(
   HCRYPTPROV* phProv,
    LPCWSTR    szContainer,
    LPCWSTR    szProvider,
    DWORD      dwProvType,
    DWORD      dwFlags
);

using myCryptCreateHash = BOOL(NTAPI*)(
     HCRYPTPROV hProv,
     ALG_ID     Algid,
     HCRYPTKEY  hKey,
     DWORD      dwFlags,
     HCRYPTHASH* phHash
);

using myCryptHashData = BOOL (NTAPI*)(
    HCRYPTHASH hHash,
    const BYTE* pbData,
    DWORD      dwDataLen,
    DWORD      dwFlags
);

using myCryptDeriveKey = BOOL (NTAPI *)(
     HCRYPTPROV hProv,
     ALG_ID     Algid,
     HCRYPTHASH hBaseData,
     DWORD      dwFlags,
     HCRYPTKEY* phKey
);

using myCryptDestroyHash = BOOL(NTAPI *)(
    HCRYPTHASH hHash
);

using myCryptReleaseContext = BOOL (NTAPI *)(
    HCRYPTPROV hProv,
    DWORD      dwFlags
);

using myCryptDestroyKey = BOOL(NTAPI *)(
    HCRYPTKEY hKey
);

using myCryptDecrypt = BOOL(NTAPI *)(
    HCRYPTKEY  hKey,
    HCRYPTHASH hHash,
    BOOL       Final,
    DWORD      dwFlags,
    BYTE* pbData,
    DWORD* pdwDataLen
);