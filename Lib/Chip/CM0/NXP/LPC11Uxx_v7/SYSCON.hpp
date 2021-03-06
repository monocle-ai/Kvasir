#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System control block 
    namespace SysconSysmemremap{    ///<System memory remap
        using Addr = Register::Address<0x40048000,0x00000000,0x00000000,unsigned>;
        ///System memory remap. Value 0x3 is reserved.
        enum class MapVal {
            bootLoaderModeIn=0x00000000,     ///<Boot Loader Mode. Interrupt vectors are re-mapped to Boot ROM.
            userRamModeInter=0x00000001,     ///<User RAM Mode. Interrupt vectors are re-mapped to Static RAM.
            userFlashModeInt=0x00000002,     ///<User Flash Mode. Interrupt vectors are not re-mapped and reside in Flash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MapVal> map{}; 
        namespace MapValC{
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::bootLoaderModeIn> bootLoaderModeIn{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userRamModeInter> userRamModeInter{};
            constexpr Register::FieldValue<decltype(map)::Type,MapVal::userFlashModeInt> userFlashModeInt{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPresetctrl{    ///<Peripheral reset control
        using Addr = Register::Address<0x40048004,0x00000000,0x00000000,unsigned>;
        ///SSP0 reset control
        enum class Ssp0rstnVal {
            resetsTheSsp0Peri=0x00000000,     ///<Resets the SSP0 peripheral.
            ssp0ResetDeAssert=0x00000001,     ///<SSP0 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ssp0rstnVal> ssp0RstN{}; 
        namespace Ssp0rstnValC{
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::resetsTheSsp0Peri> resetsTheSsp0Peri{};
            constexpr Register::FieldValue<decltype(ssp0RstN)::Type,Ssp0rstnVal::ssp0ResetDeAssert> ssp0ResetDeAssert{};
        }
        ///I2C reset control
        enum class I2crstnVal {
            resetsTheI2cPerip=0x00000000,     ///<Resets the I2C peripheral.
            i2cResetDeAsserte=0x00000001,     ///<I2C reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,I2crstnVal> i2cRstN{}; 
        namespace I2crstnValC{
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::resetsTheI2cPerip> resetsTheI2cPerip{};
            constexpr Register::FieldValue<decltype(i2cRstN)::Type,I2crstnVal::i2cResetDeAsserte> i2cResetDeAsserte{};
        }
        ///SSP1 reset control
        enum class Ssp1rstnVal {
            resetsTheSsp1Peri=0x00000000,     ///<Resets the SSP1 peripheral.
            ssp1ResetDeAssert=0x00000001,     ///<SSP1 reset de-asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ssp1rstnVal> ssp1RstN{}; 
        namespace Ssp1rstnValC{
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::resetsTheSsp1Peri> resetsTheSsp1Peri{};
            constexpr Register::FieldValue<decltype(ssp1RstN)::Type,Ssp1rstnVal::ssp1ResetDeAssert> ssp1ResetDeAssert{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllctrl{    ///<System PLL control
        using Addr = Register::Address<0x40048008,0x00000000,0x00000000,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
        ///Reserved. Do not write ones to reserved bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllstat{    ///<System PLL status
        using Addr = Register::Address<0x4004800c,0x00000000,0x00000000,unsigned>;
        ///PLL lock status
        enum class LockVal {
            pllNotLocked=0x00000000,     ///<PLL not locked
            pllLocked=0x00000001,     ///<PLL locked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllNotLocked> pllNotLocked{};
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllLocked> pllLocked{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbpllctrl{    ///<USB PLL control
        using Addr = Register::Address<0x40048010,0x00000000,0x00000000,unsigned>;
        ///Feedback divider value. The division value M is the programmed MSEL value + 1. 00000: Division ratio M = 1 to 11111: Division ratio M = 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Post divider ratio P. The division ratio is 2 x P.
        enum class PselVal {
            pEq1=0x00000000,     ///<P = 1
            pEq2=0x00000001,     ///<P = 2
            pEq4=0x00000002,     ///<P = 4
            pEq8=0x00000003,     ///<P = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq1> pEq1{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq2> pEq2{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq4> pEq4{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::pEq8> pEq8{};
        }
        ///Reserved. Do not write ones to reserved bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbpllstat{    ///<USB PLL status
        using Addr = Register::Address<0x40048014,0x00000000,0x00000000,unsigned>;
        ///PLL lock status
        enum class LockVal {
            pllNotLocked=0x00000000,     ///<PLL not locked
            pllLocked=0x00000001,     ///<PLL locked
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LockVal> lock{}; 
        namespace LockValC{
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllNotLocked> pllNotLocked{};
            constexpr Register::FieldValue<decltype(lock)::Type,LockVal::pllLocked> pllLocked{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysoscctrl{    ///<System oscillator control
        using Addr = Register::Address<0x40048020,0x00000000,0x00000000,unsigned>;
        ///Bypass system oscillator
        enum class BypassVal {
            oscillatorIsNotBy=0x00000000,     ///<Oscillator is not bypassed.
            bypassEnabledPll=0x00000001,     ///<Bypass enabled. PLL input (sys_osc_clk) is fed directly from the XTALIN pin bypassing the oscillator. Use this mode when using an external clock source instead of the crystal oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BypassVal> bypass{}; 
        namespace BypassValC{
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::oscillatorIsNotBy> oscillatorIsNotBy{};
            constexpr Register::FieldValue<decltype(bypass)::Type,BypassVal::bypassEnabledPll> bypassEnabledPll{};
        }
        ///Determines frequency range for Low-power oscillator.
        enum class FreqrangeVal {
            v120MhzFrequency=0x00000000,     ///<1 - 20 MHz frequency range.
            v1525MhzFrequenc=0x00000001,     ///<15 - 25 MHz frequency range
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FreqrangeVal> freqrange{}; 
        namespace FreqrangeValC{
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::v120MhzFrequency> v120MhzFrequency{};
            constexpr Register::FieldValue<decltype(freqrange)::Type,FreqrangeVal::v1525MhzFrequenc> v1525MhzFrequenc{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconWdtoscctrl{    ///<Watchdog oscillator control
        using Addr = Register::Address<0x40048024,0x00000000,0x00000000,unsigned>;
        ///Select divider for Fclkana.  wdt_osc_clk = Fclkana/ (2 x (1 + DIVSEL)) 00000: 2 x (1 + DIVSEL) = 2 00001: 2 x (1 + DIVSEL) = 4 to 11111: 2 x (1 + DIVSEL) = 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Select watchdog oscillator analog output frequency (Fclkana).
        enum class FreqselVal {
            v06Mhz=0x00000001,     ///<0.6 MHz
            v105Mhz=0x00000002,     ///<1.05 MHz
            v14Mhz=0x00000003,     ///<1.4 MHz
            v175Mhz=0x00000004,     ///<1.75 MHz
            v21Mhz=0x00000005,     ///<2.1 MHz
            v24Mhz=0x00000006,     ///<2.4 MHz
            v27Mhz=0x00000007,     ///<2.7 MHz
            v30Mhz=0x00000008,     ///<3.0 MHz
            v325Mhz=0x00000009,     ///<3.25 MHz
            v35Mhz=0x0000000a,     ///<3.5 MHz
            v375Mhz=0x0000000b,     ///<3.75 MHz
            v40Mhz=0x0000000c,     ///<4.0 MHz
            v42Mhz=0x0000000d,     ///<4.2 MHz
            v44Mhz=0x0000000e,     ///<4.4 MHz
            v46Mhz=0x0000000f,     ///<4.6 MHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,FreqselVal> freqsel{}; 
        namespace FreqselValC{
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v06Mhz> v06Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v105Mhz> v105Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v14Mhz> v14Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v175Mhz> v175Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v21Mhz> v21Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v24Mhz> v24Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v27Mhz> v27Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v30Mhz> v30Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v325Mhz> v325Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v35Mhz> v35Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v375Mhz> v375Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v40Mhz> v40Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v42Mhz> v42Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v44Mhz> v44Mhz{};
            constexpr Register::FieldValue<decltype(freqsel)::Type,FreqselVal::v46Mhz> v46Mhz{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysrststat{    ///<System reset status register
        using Addr = Register::Address<0x40048030,0x00000000,0x00000000,unsigned>;
        ///POR reset status
        enum class PorVal {
            noPorDetected=0x00000000,     ///<No POR detected
            porDetectedWritin=0x00000001,     ///<POR detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::noPorDetected> noPorDetected{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::porDetectedWritin> porDetectedWritin{};
        }
        ///External reset status
        enum class ExtrstVal {
            noResetEventDetec=0x00000000,     ///<No reset event detected.
            resetDetectedWrit=0x00000001,     ///<Reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtrstVal> extrst{}; 
        namespace ExtrstValC{
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::noResetEventDetec> noResetEventDetec{};
            constexpr Register::FieldValue<decltype(extrst)::Type,ExtrstVal::resetDetectedWrit> resetDetectedWrit{};
        }
        ///Status of the Watchdog reset
        enum class WdtVal {
            noWdtResetDetecte=0x00000000,     ///<No WDT reset detected
            wdtResetDetected=0x00000001,     ///<WDT reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,WdtVal> wdt{}; 
        namespace WdtValC{
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::noWdtResetDetecte> noWdtResetDetecte{};
            constexpr Register::FieldValue<decltype(wdt)::Type,WdtVal::wdtResetDetected> wdtResetDetected{};
        }
        ///Status of the Brown-out detect reset
        enum class BodVal {
            noBodResetDetecte=0x00000000,     ///<No BOD reset detected
            bodResetDetected=0x00000001,     ///<BOD reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodVal> bod{}; 
        namespace BodValC{
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::noBodResetDetecte> noBodResetDetecte{};
            constexpr Register::FieldValue<decltype(bod)::Type,BodVal::bodResetDetected> bodResetDetected{};
        }
        ///Status of the software system reset
        enum class SysrstVal {
            noSystemResetDete=0x00000000,     ///<No System reset detected
            systemResetDetecte=0x00000001,     ///<System reset detected. Writing a one clears this reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SysrstVal> sysrst{}; 
        namespace SysrstValC{
            constexpr Register::FieldValue<decltype(sysrst)::Type,SysrstVal::noSystemResetDete> noSystemResetDete{};
            constexpr Register::FieldValue<decltype(sysrst)::Type,SysrstVal::systemResetDetecte> systemResetDetecte{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllclksel{    ///<System PLL clock source select
        using Addr = Register::Address<0x40048040,0x00000000,0x00000000,unsigned>;
        ///System PLL clock source
        enum class SelVal {
            irc=0x00000000,     ///<IRC
            crystalOscillator=0x00000001,     ///<Crystal Oscillator (SYSOSC)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::irc> irc{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::crystalOscillator> crystalOscillator{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSyspllclkuen{    ///<System PLL clock source update enable
        using Addr = Register::Address<0x40048044,0x00000000,0x00000000,unsigned>;
        ///Enable system PLL clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbpllclksel{    ///<USB PLL clock source select
        using Addr = Register::Address<0x40048048,0x00000000,0x00000000,unsigned>;
        ///USB PLL clock source
        enum class SelVal {
            ircTheUsbPllClo=0x00000000,     ///<IRC. The USB PLL clock source must be switched to system oscillator for correct full-speed USB operation. The IRC is suitable for low-speed USB operation.
            systemOscillator=0x00000001,     ///<System oscillator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircTheUsbPllClo> ircTheUsbPllClo{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::systemOscillator> systemOscillator{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbpllclkuen{    ///<USB PLL clock source update enable
        using Addr = Register::Address<0x4004804c,0x00000000,0x00000000,unsigned>;
        ///Enable USB PLL clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconMainclksel{    ///<Main clock source select
        using Addr = Register::Address<0x40048070,0x00000000,0x00000000,unsigned>;
        ///Clock source for main clock
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC Oscillator
            pllInput=0x00000001,     ///<PLL input
            watchdogOscillator=0x00000002,     ///<Watchdog oscillator
            pllOutput=0x00000003,     ///<PLL output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::pllInput> pllInput{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::watchdogOscillator> watchdogOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::pllOutput> pllOutput{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconMainclkuen{    ///<Main clock source update enable
        using Addr = Register::Address<0x40048074,0x00000000,0x00000000,unsigned>;
        ///Enable main clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysahbclkdiv{    ///<System clock divider
        using Addr = Register::Address<0x40048078,0x00000000,0x00000000,unsigned>;
        ///System AHB clock divider values 0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSysahbclkctrl{    ///<System clock control
        using Addr = Register::Address<0x40048080,0x00000000,0x00000000,unsigned>;
        ///Enables the clock for the AHB, the APB bridge, the Cortex-M0 FCLK and HCLK, SysCon, and the PMU. This bit is read only and always reads as 1.
        enum class SysVal {
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SysVal> sys{}; 
        namespace SysValC{
            constexpr Register::FieldValue<decltype(sys)::Type,SysVal::enable> enable{};
        }
        ///Enables clock for ROM.
        enum class RomVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RomVal> rom{}; 
        namespace RomValC{
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::disable> disable{};
            constexpr Register::FieldValue<decltype(rom)::Type,RomVal::enable> enable{};
        }
        ///Enables clock for RAM.
        enum class Ram0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ram0Val> ram0{}; 
        namespace Ram0ValC{
            constexpr Register::FieldValue<decltype(ram0)::Type,Ram0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ram0)::Type,Ram0Val::enable> enable{};
        }
        ///Enables clock for flash register interface.
        enum class FlashregVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FlashregVal> flashreg{}; 
        namespace FlashregValC{
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::disable> disable{};
            constexpr Register::FieldValue<decltype(flashreg)::Type,FlashregVal::enable> enable{};
        }
        ///Enables clock for flash array access.
        enum class FlasharrayVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlasharrayVal> flasharray{}; 
        namespace FlasharrayValC{
            constexpr Register::FieldValue<decltype(flasharray)::Type,FlasharrayVal::disable> disable{};
            constexpr Register::FieldValue<decltype(flasharray)::Type,FlasharrayVal::enable> enable{};
        }
        ///Enables clock for I2C.
        enum class I2cVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,I2cVal> i2c{}; 
        namespace I2cValC{
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::disable> disable{};
            constexpr Register::FieldValue<decltype(i2c)::Type,I2cVal::enable> enable{};
        }
        ///Enables clock for GPIO port registers.
        enum class GpioVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GpioVal> gpio{}; 
        namespace GpioValC{
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::disable> disable{};
            constexpr Register::FieldValue<decltype(gpio)::Type,GpioVal::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 0.
        enum class Ct16b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ct16b0Val> ct16b0{}; 
        namespace Ct16b0ValC{
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b0)::Type,Ct16b0Val::enable> enable{};
        }
        ///Enables clock for 16-bit counter/timer 1.
        enum class Ct16b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ct16b1Val> ct16b1{}; 
        namespace Ct16b1ValC{
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct16b1)::Type,Ct16b1Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 0.
        enum class Ct32b0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ct32b0Val> ct32b0{}; 
        namespace Ct32b0ValC{
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b0)::Type,Ct32b0Val::enable> enable{};
        }
        ///Enables clock for 32-bit counter/timer 1.
        enum class Ct32b1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ct32b1Val> ct32b1{}; 
        namespace Ct32b1ValC{
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ct32b1)::Type,Ct32b1Val::enable> enable{};
        }
        ///Enables clock for SSP0.
        enum class Ssp0Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ssp0Val> ssp0{}; 
        namespace Ssp0ValC{
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp0)::Type,Ssp0Val::enable> enable{};
        }
        ///Enables clock for UART.
        enum class UsartVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,UsartVal> usart{}; 
        namespace UsartValC{
            constexpr Register::FieldValue<decltype(usart)::Type,UsartVal::disable> disable{};
            constexpr Register::FieldValue<decltype(usart)::Type,UsartVal::enable> enable{};
        }
        ///Enables clock for ADC.
        enum class AdcVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcVal> adc{}; 
        namespace AdcValC{
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::disable> disable{};
            constexpr Register::FieldValue<decltype(adc)::Type,AdcVal::enable> enable{};
        }
        ///Enables clock to the USB register interface.
        enum class UsbVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,UsbVal> usb{}; 
        namespace UsbValC{
            constexpr Register::FieldValue<decltype(usb)::Type,UsbVal::disable> disable{};
            constexpr Register::FieldValue<decltype(usb)::Type,UsbVal::enable> enable{};
        }
        ///Enables clock for WWDT.
        enum class WwdtVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,WwdtVal> wwdt{}; 
        namespace WwdtValC{
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::disable> disable{};
            constexpr Register::FieldValue<decltype(wwdt)::Type,WwdtVal::enable> enable{};
        }
        ///Enables clock for I/O configuration block.
        enum class IoconVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,IoconVal> iocon{}; 
        namespace IoconValC{
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::disable> disable{};
            constexpr Register::FieldValue<decltype(iocon)::Type,IoconVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock for SSP1.
        enum class Ssp1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ssp1Val> ssp1{}; 
        namespace Ssp1ValC{
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ssp1)::Type,Ssp1Val::enable> enable{};
        }
        ///Enables clock to GPIO Pin interrupts register interface.
        enum class PintVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,PintVal> pint{}; 
        namespace PintValC{
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::disable> disable{};
            constexpr Register::FieldValue<decltype(pint)::Type,PintVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables clock to GPIO GROUP0 interrupt register interface.
        enum class Group0intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Group0intVal> group0int{}; 
        namespace Group0intValC{
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(group0int)::Type,Group0intVal::enable> enable{};
        }
        ///Enables clock to GPIO GROUP1 interrupt register interface.
        enum class Group1intVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Group1intVal> group1int{}; 
        namespace Group1intValC{
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::disable> disable{};
            constexpr Register::FieldValue<decltype(group1int)::Type,Group1intVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Enables SRAM1 block at address 0x2000 0000. See Section 3.1 for availability of this bit.
        enum class Ram1Val {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ram1Val> ram1{}; 
        namespace Ram1ValC{
            constexpr Register::FieldValue<decltype(ram1)::Type,Ram1Val::disable> disable{};
            constexpr Register::FieldValue<decltype(ram1)::Type,Ram1Val::enable> enable{};
        }
        ///Enables USB SRAM block at address 0x2000 4000.
        enum class UsbramVal {
            disable=0x00000000,     ///<Disable
            enable=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,UsbramVal> usbram{}; 
        namespace UsbramValC{
            constexpr Register::FieldValue<decltype(usbram)::Type,UsbramVal::disable> disable{};
            constexpr Register::FieldValue<decltype(usbram)::Type,UsbramVal::enable> enable{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSsp0clkdiv{    ///<SSP0 clock divider
        using Addr = Register::Address<0x40048094,0x00000000,0x00000000,unsigned>;
        ///SPI0_PCLK clock divider values.  0: System clock disabled.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUartclkdiv{    ///<UART clock divider
        using Addr = Register::Address<0x40048098,0x00000000,0x00000000,unsigned>;
        ///UART_PCLK clock divider values 0: Disable UART_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSsp1clkdiv{    ///<SSP1 clock divider
        using Addr = Register::Address<0x4004809c,0x00000000,0x00000000,unsigned>;
        ///SSP1_PCLK clock divider values 0: Disable SSP1_PCLK.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclksel{    ///<USB clock source select
        using Addr = Register::Address<0x400480c0,0x00000000,0x00000000,unsigned>;
        ///USB clock source. Values 0x2 and 0x3 are reserved.
        enum class SelVal {
            usbPllOut=0x00000000,     ///<USB PLL out
            mainClock=0x00000001,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::usbPllOut> usbPllOut{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclkuen{    ///<USB clock source update enable
        using Addr = Register::Address<0x400480c4,0x00000000,0x00000000,unsigned>;
        ///Enable USB clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclkdiv{    ///<USB clock source divider
        using Addr = Register::Address<0x400480c8,0x00000000,0x00000000,unsigned>;
        ///USB clock divider values 0: Disable USB clock.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutsel{    ///<CLKOUT clock source select
        using Addr = Register::Address<0x400480e0,0x00000000,0x00000000,unsigned>;
        ///CLKOUT clock source
        enum class SelVal {
            ircOscillator=0x00000000,     ///<IRC oscillator
            crystalOscillator=0x00000001,     ///<Crystal oscillator (SYSOSC)
            lfOscillatorWatch=0x00000002,     ///<LF oscillator (watchdog oscillator)
            mainClock=0x00000003,     ///<Main clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::ircOscillator> ircOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::crystalOscillator> crystalOscillator{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::lfOscillatorWatch> lfOscillatorWatch{};
            constexpr Register::FieldValue<decltype(sel)::Type,SelVal::mainClock> mainClock{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutuen{    ///<CLKOUT clock source update enable
        using Addr = Register::Address<0x400480e4,0x00000000,0x00000000,unsigned>;
        ///Enable CLKOUT clock source update
        enum class EnaVal {
            noChange=0x00000000,     ///<No change
            updateClockSource=0x00000001,     ///<Update clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnaVal> ena{}; 
        namespace EnaValC{
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(ena)::Type,EnaVal::updateClockSource> updateClockSource{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconClkoutdiv{    ///<CLKOUT clock divider
        using Addr = Register::Address<0x400480e8,0x00000000,0x00000000,unsigned>;
        ///CLKOUT clock divider values 0: Disable CLKOUT clock divider.  1: Divide by 1. to 255: Divide by 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap0{    ///<POR captured PIO status 0
        using Addr = Register::Address<0x40048100,0x00000000,0x00000000,unsigned>;
        ///State of PIO0_23 through PIO0_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> piostat{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPioporcap1{    ///<POR captured PIO status 1
        using Addr = Register::Address<0x40048104,0x00000000,0x00000000,unsigned>;
        ///State of PIO1_31 through PIO1_0 at power-on reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> piostat{}; 
    }
    namespace SysconBodctrl{    ///<Brown-Out Detect
        using Addr = Register::Address<0x40048150,0x00000000,0x00000000,unsigned>;
        ///BOD reset level
        enum class BodrstlevVal {
            level0TheResetA=0x00000000,     ///<Level 0: The reset assertion threshold voltage is 1.46 V; the reset de-assertion threshold voltage is 1.63 V.
            level1TheResetA=0x00000001,     ///<Level 1: The reset assertion threshold voltage is 2.06 V; the reset de-assertion threshold voltage is 2.15 V.
            level2TheResetA=0x00000002,     ///<Level 2: The reset assertion threshold voltage is 2.35 V; the reset de-assertion threshold voltage is 2.43 V.
            level3TheResetA=0x00000003,     ///<Level 3: The reset assertion threshold voltage is 2.63 V; the reset de-assertion threshold voltage is 2.71 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,BodrstlevVal> bodrstlev{}; 
        namespace BodrstlevValC{
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level0TheResetA> level0TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level1TheResetA> level1TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level2TheResetA> level2TheResetA{};
            constexpr Register::FieldValue<decltype(bodrstlev)::Type,BodrstlevVal::level3TheResetA> level3TheResetA{};
        }
        ///BOD interrupt level
        enum class BodintvalVal {
            level0Reserved=0x00000000,     ///<Level 0: Reserved.
            level1theInterrup=0x00000001,     ///<Level 1:The interrupt assertion threshold voltage is 2.22 V; the interrupt de-assertion threshold voltage is 2.35 V.
            level2TheInterru=0x00000002,     ///<Level 2: The interrupt assertion threshold voltage is 2.52 V; the interrupt de-assertion threshold voltage is 2.66 V.
            level3TheInterru=0x00000003,     ///<Level 3: The interrupt assertion threshold voltage is 2.80 V; the interrupt de-assertion threshold voltage is 2.90 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,BodintvalVal> bodintval{}; 
        namespace BodintvalValC{
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level0Reserved> level0Reserved{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level1theInterrup> level1theInterrup{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level2TheInterru> level2TheInterru{};
            constexpr Register::FieldValue<decltype(bodintval)::Type,BodintvalVal::level3TheInterru> level3TheInterru{};
        }
        ///BOD reset enable
        enum class BodrstenaVal {
            disableResetFuncti=0x00000000,     ///<Disable reset function.
            enableResetFunctio=0x00000001,     ///<Enable reset function.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BodrstenaVal> bodrstena{}; 
        namespace BodrstenaValC{
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::disableResetFuncti> disableResetFuncti{};
            constexpr Register::FieldValue<decltype(bodrstena)::Type,BodrstenaVal::enableResetFunctio> enableResetFunctio{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconSystckcal{    ///<System tick counter calibration
        using Addr = Register::Address<0x40048154,0x00000000,0x00000000,unsigned>;
        ///System tick timer calibration value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> cal{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconIrqlatency{    ///<IQR delay. Allows trade-off between interrupt latency and determinism.
        using Addr = Register::Address<0x40048170,0x00000000,0x00000000,unsigned>;
        ///8-bit latency value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconNmisrc{    ///<NMI Source Control
        using Addr = Register::Address<0x40048174,0x00000000,0x00000000,unsigned>;
        ///The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) if bit 31 is 1. See Table 58 for the list of interrupt sources and their IRQ numbers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> irqno{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Write a 1 to this bit to enable the Non-Maskable Interrupt (NMI) source selected by bits 4:0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmien{}; 
    }
    namespace SysconUsbclkctrl{    ///<USB clock control
        using Addr = Register::Address<0x40048198,0x00000000,0x00000000,unsigned>;
        ///USB need_clock signal control
        enum class ApclkVal {
            underHardwareContr=0x00000000,     ///<Under hardware control.
            forcedHigh=0x00000001,     ///<Forced HIGH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ApclkVal> apClk{}; 
        namespace ApclkValC{
            constexpr Register::FieldValue<decltype(apClk)::Type,ApclkVal::underHardwareContr> underHardwareContr{};
            constexpr Register::FieldValue<decltype(apClk)::Type,ApclkVal::forcedHigh> forcedHigh{};
        }
        ///USB need_clock polarity for triggering the USB wake-up interrupt
        enum class PolclkVal {
            fallingEdgeOfThe=0x00000000,     ///<Falling edge of the USB need_clock triggers the USB wake-up (default).
            risingEdgeOfTheU=0x00000001,     ///<Rising edge of the USB need_clock triggers the USB wake-up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PolclkVal> polClk{}; 
        namespace PolclkValC{
            constexpr Register::FieldValue<decltype(polClk)::Type,PolclkVal::fallingEdgeOfThe> fallingEdgeOfThe{};
            constexpr Register::FieldValue<decltype(polClk)::Type,PolclkVal::risingEdgeOfTheU> risingEdgeOfTheU{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconUsbclkst{    ///<USB clock status
        using Addr = Register::Address<0x4004819c,0x00000000,0x00000000,unsigned>;
        ///USB need_clock signal status
        enum class NeedclkstVal {
            low=0x00000000,     ///<LOW
            high=0x00000001,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NeedclkstVal> needClkst{}; 
        namespace NeedclkstValC{
            constexpr Register::FieldValue<decltype(needClkst)::Type,NeedclkstVal::low> low{};
            constexpr Register::FieldValue<decltype(needClkst)::Type,NeedclkstVal::high> high{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStarterp0{    ///<Start logic 0 interrupt wake-up enable register 0
        using Addr = Register::Address<0x40048204,0x00000000,0x00000000,unsigned>;
        ///Pin interrupt 0 wake-up
        enum class Pint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pint0Val> pint0{}; 
        namespace Pint0ValC{
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint0)::Type,Pint0Val::enabled> enabled{};
        }
        ///Pin interrupt 1 wake-up
        enum class Pint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pint1Val> pint1{}; 
        namespace Pint1ValC{
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint1)::Type,Pint1Val::enabled> enabled{};
        }
        ///Pin interrupt 2 wake-up
        enum class Pint2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pint2Val> pint2{}; 
        namespace Pint2ValC{
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint2)::Type,Pint2Val::enabled> enabled{};
        }
        ///Pin interrupt 3 wake-up
        enum class Pint3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Pint3Val> pint3{}; 
        namespace Pint3ValC{
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint3)::Type,Pint3Val::enabled> enabled{};
        }
        ///Pin interrupt 4 wake-up
        enum class Pint4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pint4Val> pint4{}; 
        namespace Pint4ValC{
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint4)::Type,Pint4Val::enabled> enabled{};
        }
        ///Pin interrupt 5 wake-up
        enum class Pint5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pint5Val> pint5{}; 
        namespace Pint5ValC{
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint5)::Type,Pint5Val::enabled> enabled{};
        }
        ///Pin interrupt 6 wake-up
        enum class Pint6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pint6Val> pint6{}; 
        namespace Pint6ValC{
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint6)::Type,Pint6Val::enabled> enabled{};
        }
        ///Pin interrupt 7 wake-up
        enum class Pint7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pint7Val> pint7{}; 
        namespace Pint7ValC{
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pint7)::Type,Pint7Val::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconStarterp1{    ///<Start logic 1 interrupt wake-up enable register 1
        using Addr = Register::Address<0x40048214,0xffc00fff,0x00000000,unsigned>;
        ///WWDT interrupt wake-up
        enum class WwdtintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,WwdtintVal> wwdtint{}; 
        namespace WwdtintValC{
            constexpr Register::FieldValue<decltype(wwdtint)::Type,WwdtintVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wwdtint)::Type,WwdtintVal::enabled> enabled{};
        }
        ///Brown Out Detect (BOD) interrupt wake-up
        enum class BodintVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,BodintVal> bodint{}; 
        namespace BodintValC{
            constexpr Register::FieldValue<decltype(bodint)::Type,BodintVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bodint)::Type,BodintVal::enabled> enabled{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///USB need_clock signal wake-up
        enum class UsbwakeupVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,UsbwakeupVal> usbWakeup{}; 
        namespace UsbwakeupValC{
            constexpr Register::FieldValue<decltype(usbWakeup)::Type,UsbwakeupVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usbWakeup)::Type,UsbwakeupVal::enabled> enabled{};
        }
        ///GPIO GROUP0 interrupt wake-up
        enum class Gpioint0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Gpioint0Val> gpioint0{}; 
        namespace Gpioint0ValC{
            constexpr Register::FieldValue<decltype(gpioint0)::Type,Gpioint0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gpioint0)::Type,Gpioint0Val::enabled> enabled{};
        }
        ///GPIO GROUP1 interrupt wake-up
        enum class Gpioint1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Gpioint1Val> gpioint1{}; 
        namespace Gpioint1ValC{
            constexpr Register::FieldValue<decltype(gpioint1)::Type,Gpioint1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(gpioint1)::Type,Gpioint1Val::enabled> enabled{};
        }
    }
    namespace SysconPdsleepcfg{    ///<Power-down states in deep-sleep mode
        using Addr = Register::Address<0x40048230,0x00000037,0x00000000,unsigned>;
        ///BOD power-down control for Deep-sleep and Power-down mode
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator power-down control for Deep-sleep and Power-down mode
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdawakecfg{    ///<Power-down states for wake-up from deep-sleep
        using Addr = Register::Address<0x40048234,0x00000000,0x00000000,unsigned>;
        ///IRC oscillator output wake-up configuration
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator power-down wake-up configuration
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
        }
        ///Flash wake-up configuration
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
        }
        ///BOD wake-up configuration
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///ADC wake-up configuration
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::poweredDown> poweredDown{};
        }
        ///Crystal oscillator wake-up configuration
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator wake-up configuration
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL wake-up configuration
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL wake-up configuration
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///USB transceiver wake-up configuration
        enum class UsbpadpdVal {
            usbTransceiverPowe=0x00000000,     ///<USB transceiver powered
            usbTransceiverPowe=0x00000001,     ///<USB transceiver powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,UsbpadpdVal> usbpadPd{}; 
        namespace UsbpadpdValC{
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbTransceiverPowe> usbTransceiverPowe{};
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbTransceiverPowe> usbTransceiverPowe{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPdruncfg{    ///<Power configuration register
        using Addr = Register::Address<0x40048238,0x00000000,0x00000000,unsigned>;
        ///IRC oscillator output power-down
        enum class IrcoutpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrcoutpdVal> ircoutPd{}; 
        namespace IrcoutpdValC{
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircoutPd)::Type,IrcoutpdVal::poweredDown> poweredDown{};
        }
        ///IRC oscillator power-down
        enum class IrcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcpdVal> ircPd{}; 
        namespace IrcpdValC{
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(ircPd)::Type,IrcpdVal::poweredDown> poweredDown{};
        }
        ///Flash power-down
        enum class FlashpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashpdVal> flashPd{}; 
        namespace FlashpdValC{
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(flashPd)::Type,FlashpdVal::poweredDown> poweredDown{};
        }
        ///BOD power-down
        enum class BodpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BodpdVal> bodPd{}; 
        namespace BodpdValC{
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(bodPd)::Type,BodpdVal::poweredDown> poweredDown{};
        }
        ///ADC power-down
        enum class AdcpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdcpdVal> adcPd{}; 
        namespace AdcpdValC{
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(adcPd)::Type,AdcpdVal::poweredDown> poweredDown{};
        }
        ///Crystal oscillator power-down
        enum class SysoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SysoscpdVal> sysoscPd{}; 
        namespace SysoscpdValC{
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(sysoscPd)::Type,SysoscpdVal::poweredDown> poweredDown{};
        }
        ///Watchdog oscillator power-down
        enum class WdtoscpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WdtoscpdVal> wdtoscPd{}; 
        namespace WdtoscpdValC{
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(wdtoscPd)::Type,WdtoscpdVal::poweredDown> poweredDown{};
        }
        ///System PLL power-down
        enum class SyspllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SyspllpdVal> syspllPd{}; 
        namespace SyspllpdValC{
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(syspllPd)::Type,SyspllpdVal::poweredDown> poweredDown{};
        }
        ///USB PLL power-down
        enum class UsbpllpdVal {
            powered=0x00000000,     ///<Powered
            poweredDown=0x00000001,     ///<Powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UsbpllpdVal> usbpllPd{}; 
        namespace UsbpllpdValC{
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::powered> powered{};
            constexpr Register::FieldValue<decltype(usbpllPd)::Type,UsbpllpdVal::poweredDown> poweredDown{};
        }
        ///Reserved. Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///USB transceiver power-down configuration
        enum class UsbpadpdVal {
            usbTransceiverPowe=0x00000000,     ///<USB transceiver powered
            usbTransceiverPowe=0x00000001,     ///<USB transceiver powered down (suspend mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,UsbpadpdVal> usbpadPd{}; 
        namespace UsbpadpdValC{
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbTransceiverPowe> usbTransceiverPowe{};
            constexpr Register::FieldValue<decltype(usbpadPd)::Type,UsbpadpdVal::usbTransceiverPowe> usbTransceiverPowe{};
        }
        ///Reserved. Always write this bit as 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved.  Always write this bit as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved. Always write these bits as 111.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconDeviceId{    ///<Device ID
        using Addr = Register::Address<0x400483f4,0x00000000,0x00000000,unsigned>;
        ///Device ID numbers for LPC11Uxx parts LPC11U12FHN33/201 = 0x095C 802B/0x295C 802B LPC11U12FBD48/201 = 0x095C 802B/0x295C 802B LPC11U13FBD48/201 = 0x097A 802B/0x297A 802B LPC11U14FHN33/201 = 0x0998 802B/0x2998 802B LPC11U14FHI33/201 = 0x2998 802B LPC11U14FBD48/201 = 0x0998 802B/0x2998 802B LPC11U14FET48/201 = 0x0998 802B/0x2998 802B LPC11U23FBD48/301 = 0x2972 402B LPC11U24FHI33/301 = 0x2988 402B LPC11U24FBD48/301 = 0x2988 402B LPC11U24FET48/301 = 0x2988 402B LPC11U24FHN33/401 = 0x2980 002B LPC11U24FBD48/401 = 0x2980 002B LPC11U24FBD64/401 = 0x2980 002B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid{}; 
    }
    namespace SysconPintsel0{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048178,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel1{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004817c,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel2{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048180,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel3{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048184,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel4{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048188,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel5{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x4004818c,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel6{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048190,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SysconPintsel7{    ///<GPIO Pin Interrupt Select register 0
        using Addr = Register::Address<0x40048194,0x00000000,0x00000000,unsigned>;
        ///Pin number select for pin interrupt. (PIO0_0 to PIO0_23 correspond to numbers 0 to 23 and PIO1_0 to PIO1_31 correspond to numbers 24 to 55).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
