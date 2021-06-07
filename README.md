# efi-template
Template for developing EFI projects

Prerequisites (from here https://github.com/ionescu007/VisualUefi)
- create a folder called "efienv" (without quotes) on your D drive
- efienv folder should contain three subfolders ("edk2", "EDK-II" and "debugger") (without quotes)
- edk2 contains include headers, EDK-II contains compiled libraries and debugger is qemu.exe
- you can get all of these from the link above and build them yourself (nasm required)
- move the two .props files to the solution folder (where the project.sln file is)

1. Create a folder called "efienv" (without quotes) on your D drive
2. efienv folder should contain three subfolders ("edk2", "EDK-II" and "debugger") (without quotes)
3. Download and install NASM at "C:\ProgramFiles\NASM\"
4. Add "C:\ProgramFiles\NASM\" to System Variables Path
5. Download VisualUefi(https://github.com/ionescu007/VisualUefi) and download edk2(https://github.com/tianocore/edk2) in the edk2 subfolder of VisualUefi
6. Open up EDK-II folder and open the solution
7. Compile and hf
