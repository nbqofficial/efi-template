#include "Uefi.h"
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/DevicePathLib.h>
#include <Library/PrintLib.h>
#include <Protocol/SimpleFileSystem.h>
#include <Protocol/LoadedImage.h>
#include <IndustryStandard/PeImage.h>
#include <Guid/GlobalVariable.h>

#define SEC_TO_MICRO(s) ((s) * 1000000)

CHAR8* gEfiCallerBaseName = "boot";
UINT32 _gUefiDriverRevision = 0;

EFI_STATUS EFIAPI UefiMain(EFI_HANDLE image_handle, EFI_SYSTEM_TABLE* system_table)
{
    gST->ConOut->ClearScreen(gST->ConOut);
    gST->ConOut->SetAttribute(gST->ConOut, EFI_GREEN | EFI_BACKGROUND_BLACK);

    Print(L"HELLO WORLD\n");
    gBS->Stall(SEC_TO_MICRO(2));
    return EFI_SUCCESS;
}

EFI_STATUS EFIAPI UefiUnload(EFI_HANDLE imageHandle) { return EFI_SUCCESS; }