#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure Real Time Clock
    namespace RtcTsr{    ///<RTC Time Seconds Register
        using Addr = Register::Address<0x4003d000,0x00000000,0,unsigned>;
        ///Time Seconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsr{}; 
        namespace TsrValC{
        }
    }
    namespace RtcTpr{    ///<RTC Time Prescaler Register
        using Addr = Register::Address<0x4003d004,0xffff0000,0,unsigned>;
        ///Time Prescaler Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpr{}; 
        namespace TprValC{
        }
    }
    namespace RtcTar{    ///<RTC Time Alarm Register
        using Addr = Register::Address<0x4003d008,0x00000000,0,unsigned>;
        ///Time Alarm Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
    }
    namespace RtcTcr{    ///<RTC Time Compensation Register
        using Addr = Register::Address<0x4003d00c,0x00000000,0,unsigned>;
        ///Time Compensation Register
        enum class TcrVal {
            v10000000=0x00000080,     ///<Time Prescaler Register overflows every 32896 clock cycles.
            v11111111=0x000000ff,     ///<Time Prescaler Register overflows every 32769 clock cycles.
            v0=0x00000000,     ///<Time Prescaler Register overflows every 32768 clock cycles.
            v1=0x00000001,     ///<Time Prescaler Register overflows every 32767 clock cycles.
            v1111111=0x0000007f,     ///<Time Prescaler Register overflows every 32641 clock cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,TcrVal> tcr{}; 
        namespace TcrValC{
            constexpr Register::FieldValue<decltype(tcr),TcrVal::v10000000> v10000000{};
            constexpr Register::FieldValue<decltype(tcr),TcrVal::v11111111> v11111111{};
            constexpr Register::FieldValue<decltype(tcr),TcrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcr),TcrVal::v1> v1{};
            constexpr Register::FieldValue<decltype(tcr),TcrVal::v1111111> v1111111{};
        }
        ///Compensation Interval Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cir{}; 
        namespace CirValC{
        }
        ///Time Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tcv{}; 
        namespace TcvValC{
        }
        ///Compensation Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cic{}; 
        namespace CicValC{
        }
    }
    namespace RtcCr{    ///<RTC Control Register
        using Addr = Register::Address<0x4003d010,0xffffc0f0,0,unsigned>;
        ///Software Reset
        enum class SwrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Resets all RTC registers except for the SWR bit . The SWR bit is cleared by POR and by software explicitly clearing it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SwrVal> swr{}; 
        namespace SwrValC{
            constexpr Register::FieldValue<decltype(swr),SwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swr),SwrVal::v1> v1{};
        }
        ///Wakeup Pin Enable
        enum class WpeVal {
            v0=0x00000000,     ///<Wakeup pin is disabled.
            v1=0x00000001,     ///<Wakeup pin is enabled and wakeup pin asserts if the RTC interrupt asserts or the wakeup pin is turned on.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WpeVal> wpe{}; 
        namespace WpeValC{
            constexpr Register::FieldValue<decltype(wpe),WpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wpe),WpeVal::v1> v1{};
        }
        ///Supervisor Access
        enum class SupVal {
            v0=0x00000000,     ///<Non-supervisor mode write accesses are not supported and generate a bus error.
            v1=0x00000001,     ///<Non-supervisor mode write accesses are supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SupVal> sup{}; 
        namespace SupValC{
            constexpr Register::FieldValue<decltype(sup),SupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sup),SupVal::v1> v1{};
        }
        ///Update Mode
        enum class UmVal {
            v0=0x00000000,     ///<Registers cannot be written when locked.
            v1=0x00000001,     ///<Registers can be written when locked under limited conditions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UmVal> um{}; 
        namespace UmValC{
            constexpr Register::FieldValue<decltype(um),UmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(um),UmVal::v1> v1{};
        }
        ///Oscillator Enable
        enum class OsceVal {
            v0=0x00000000,     ///<32.768 kHz oscillator is disabled.
            v1=0x00000001,     ///<32.768 kHz oscillator is enabled. After setting this bit, wait the oscillator startup time before enabling the time counter to allow the 32.768 kHz clock time to stabilize.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,OsceVal> osce{}; 
        namespace OsceValC{
            constexpr Register::FieldValue<decltype(osce),OsceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osce),OsceVal::v1> v1{};
        }
        ///Clock Output
        enum class ClkoVal {
            v0=0x00000000,     ///<The 32 kHz clock is output to other peripherals.
            v1=0x00000001,     ///<The 32 kHz clock is not output to other peripherals.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ClkoVal> clko{}; 
        namespace ClkoValC{
            constexpr Register::FieldValue<decltype(clko),ClkoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clko),ClkoVal::v1> v1{};
        }
        ///Oscillator 16pF Load Configure
        enum class Sc16pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sc16pVal> sc16p{}; 
        namespace Sc16pValC{
            constexpr Register::FieldValue<decltype(sc16p),Sc16pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc16p),Sc16pVal::v1> v1{};
        }
        ///Oscillator 8pF Load Configure
        enum class Sc8pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Sc8pVal> sc8p{}; 
        namespace Sc8pValC{
            constexpr Register::FieldValue<decltype(sc8p),Sc8pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc8p),Sc8pVal::v1> v1{};
        }
        ///Oscillator 4pF Load Configure
        enum class Sc4pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sc4pVal> sc4p{}; 
        namespace Sc4pValC{
            constexpr Register::FieldValue<decltype(sc4p),Sc4pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc4p),Sc4pVal::v1> v1{};
        }
        ///Oscillator 2pF Load Configure
        enum class Sc2pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Sc2pVal> sc2p{}; 
        namespace Sc2pValC{
            constexpr Register::FieldValue<decltype(sc2p),Sc2pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc2p),Sc2pVal::v1> v1{};
        }
    }
    namespace RtcSr{    ///<RTC Status Register
        using Addr = Register::Address<0x4003d014,0xffffffe8,0,unsigned>;
        ///Time Invalid Flag
        enum class TifVal {
            v0=0x00000000,     ///<Time is valid.
            v1=0x00000001,     ///<Time is invalid and time counter is read as zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif),TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif),TifVal::v1> v1{};
        }
        ///Time Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<Time overflow has not occurred.
            v1=0x00000001,     ///<Time overflow has occurred and time counter is read as zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof),TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof),TofVal::v1> v1{};
        }
        ///Time Alarm Flag
        enum class TafVal {
            v0=0x00000000,     ///<Time alarm has not occurred.
            v1=0x00000001,     ///<Time alarm has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TafVal> taf{}; 
        namespace TafValC{
            constexpr Register::FieldValue<decltype(taf),TafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(taf),TafVal::v1> v1{};
        }
        ///Time Counter Enable
        enum class TceVal {
            v0=0x00000000,     ///<Time counter is disabled.
            v1=0x00000001,     ///<Time counter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(tce),TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tce),TceVal::v1> v1{};
        }
    }
    namespace RtcLr{    ///<RTC Lock Register
        using Addr = Register::Address<0x4003d018,0xffffff87,0,unsigned>;
        ///Time Compensation Lock
        enum class TclVal {
            v0=0x00000000,     ///<Time Compensation Register is locked and writes are ignored.
            v1=0x00000001,     ///<Time Compensation Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TclVal> tcl{}; 
        namespace TclValC{
            constexpr Register::FieldValue<decltype(tcl),TclVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcl),TclVal::v1> v1{};
        }
        ///Control Register Lock
        enum class CrlVal {
            v0=0x00000000,     ///<Control Register is locked and writes are ignored.
            v1=0x00000001,     ///<Control Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrlVal> crl{}; 
        namespace CrlValC{
            constexpr Register::FieldValue<decltype(crl),CrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crl),CrlVal::v1> v1{};
        }
        ///Status Register Lock
        enum class SrlVal {
            v0=0x00000000,     ///<Status Register is locked and writes are ignored.
            v1=0x00000001,     ///<Status Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrlVal> srl{}; 
        namespace SrlValC{
            constexpr Register::FieldValue<decltype(srl),SrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srl),SrlVal::v1> v1{};
        }
        ///Lock Register Lock
        enum class LrlVal {
            v0=0x00000000,     ///<Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Lock Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrlVal> lrl{}; 
        namespace LrlValC{
            constexpr Register::FieldValue<decltype(lrl),LrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrl),LrlVal::v1> v1{};
        }
    }
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x4003d01c,0xffffff68,0,unsigned>;
        ///Time Invalid Interrupt Enable
        enum class TiieVal {
            v0=0x00000000,     ///<Time invalid flag does not generate an interrupt.
            v1=0x00000001,     ///<Time invalid flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TiieVal> tiie{}; 
        namespace TiieValC{
            constexpr Register::FieldValue<decltype(tiie),TiieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tiie),TiieVal::v1> v1{};
        }
        ///Time Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Time overflow flag does not generate an interrupt.
            v1=0x00000001,     ///<Time overflow flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie),ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie),ToieVal::v1> v1{};
        }
        ///Time Alarm Interrupt Enable
        enum class TaieVal {
            v0=0x00000000,     ///<Time alarm flag does not generate an interrupt.
            v1=0x00000001,     ///<Time alarm flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TaieVal> taie{}; 
        namespace TaieValC{
            constexpr Register::FieldValue<decltype(taie),TaieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(taie),TaieVal::v1> v1{};
        }
        ///Time Seconds Interrupt Enable
        enum class TsieVal {
            v0=0x00000000,     ///<Seconds interrupt is disabled.
            v1=0x00000001,     ///<Seconds interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TsieVal> tsie{}; 
        namespace TsieValC{
            constexpr Register::FieldValue<decltype(tsie),TsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsie),TsieVal::v1> v1{};
        }
        ///Wakeup Pin On
        enum class WponVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<If the wakeup pin is enabled, then the wakeup pin will assert.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WponVal> wpon{}; 
        namespace WponValC{
            constexpr Register::FieldValue<decltype(wpon),WponVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wpon),WponVal::v1> v1{};
        }
    }
}