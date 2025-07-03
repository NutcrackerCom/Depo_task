#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>

EFI_STATUS EFIAPI UefiMain(
    IN EFI_HANDLE        ImageHandle,
    IN EFI_SYSTEM_TABLE  *SystemTable)
{
  for (UINTN i = 1; i <= 20; i++) {
    // Используем простой вывод с %d - это должно работать
    Print(L"Hello, Depo! (%d)\n", i);
  }
  return EFI_SUCCESS;
}
