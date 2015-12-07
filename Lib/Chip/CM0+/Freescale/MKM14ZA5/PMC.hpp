#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Controller
    namespace PmcLvdsc1{    ///<Low Voltage Detect Status And Control 1 register
        using Addr = Register::Address<0x4007d000,0xffffff0c,0,unsigned char>;
        ///Low-Voltage Detect Voltage Select
        enum class LvdvVal {
            v00=0x00000000,     ///<Low trip point selected (V LVD = V LVDL )
            v01=0x00000001,     ///<High trip point selected (V LVD = V LVDH )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LvdvVal> lvdv{}; 
        namespace LvdvValC{
            constexpr Register::FieldValue<decltype(lvdv),LvdvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lvdv),LvdvVal::v01> v01{};
        }
        ///Low-Voltage Detect Reset Enable
        enum class LvdreVal {
            v0=0x00000000,     ///<LVDF does not generate hardware resets
            v1=0x00000001,     ///<Force an MCU reset when LVDF = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LvdreVal> lvdre{}; 
        namespace LvdreValC{
            constexpr Register::FieldValue<decltype(lvdre),LvdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdre),LvdreVal::v1> v1{};
        }
        ///Low-Voltage Detect Interrupt Enable
        enum class LvdieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVDF = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LvdieVal> lvdie{}; 
        namespace LvdieValC{
            constexpr Register::FieldValue<decltype(lvdie),LvdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdie),LvdieVal::v1> v1{};
        }
        ///Low-Voltage Detect Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvdack{}; 
        namespace LvdackValC{
        }
        ///Low-Voltage Detect Flag
        enum class LvdfVal {
            v0=0x00000000,     ///<Low-voltage event not detected
            v1=0x00000001,     ///<Low-voltage event detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LvdfVal> lvdf{}; 
        namespace LvdfValC{
            constexpr Register::FieldValue<decltype(lvdf),LvdfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdf),LvdfVal::v1> v1{};
        }
    }
    namespace PmcLvdsc2{    ///<Low Voltage Detect Status And Control 2 register
        using Addr = Register::Address<0x4007d001,0xffffff1c,0,unsigned char>;
        ///Low-Voltage Warning Voltage Select
        enum class LvwvVal {
            v00=0x00000000,     ///<Low trip point selected (VLVW = VLVW1)
            v01=0x00000001,     ///<Mid 1 trip point selected (VLVW = VLVW2)
            v10=0x00000002,     ///<Mid 2 trip point selected (VLVW = VLVW3)
            v11=0x00000003,     ///<High trip point selected (VLVW = VLVW4)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LvwvVal> lvwv{}; 
        namespace LvwvValC{
            constexpr Register::FieldValue<decltype(lvwv),LvwvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lvwv),LvwvVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lvwv),LvwvVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lvwv),LvwvVal::v11> v11{};
        }
        ///Low-Voltage Warning Interrupt Enable
        enum class LvwieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVWF = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LvwieVal> lvwie{}; 
        namespace LvwieValC{
            constexpr Register::FieldValue<decltype(lvwie),LvwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwie),LvwieVal::v1> v1{};
        }
        ///Low-Voltage Warning Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvwack{}; 
        namespace LvwackValC{
        }
        ///Low-Voltage Warning Flag
        enum class LvwfVal {
            v0=0x00000000,     ///<Low-voltage warning event not detected
            v1=0x00000001,     ///<Low-voltage warning event detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LvwfVal> lvwf{}; 
        namespace LvwfValC{
            constexpr Register::FieldValue<decltype(lvwf),LvwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwf),LvwfVal::v1> v1{};
        }
    }
    namespace PmcRegsc{    ///<Regulator Status And Control register
        using Addr = Register::Address<0x4007d002,0xffffffe0,0,unsigned char>;
        ///Bandgap Buffer Enable
        enum class BgbeVal {
            v0=0x00000000,     ///<Bandgap buffer not enabled
            v1=0x00000001,     ///<Bandgap buffer enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BgbeVal> bgbe{}; 
        namespace BgbeValC{
            constexpr Register::FieldValue<decltype(bgbe),BgbeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgbe),BgbeVal::v1> v1{};
        }
        ///Bandgap Buffer Drive Select
        enum class BgbdsVal {
            v0=0x00000000,     ///<Low drive
            v1=0x00000001,     ///<High drive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BgbdsVal> bgbds{}; 
        namespace BgbdsValC{
            constexpr Register::FieldValue<decltype(bgbds),BgbdsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgbds),BgbdsVal::v1> v1{};
        }
        ///Regulator In Run Regulation Status
        enum class RegonsVal {
            v0=0x00000000,     ///<Regulator is in stop regulation or in transition to/from it
            v1=0x00000001,     ///<Regulator is in run regulation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RegonsVal> regons{}; 
        namespace RegonsValC{
            constexpr Register::FieldValue<decltype(regons),RegonsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(regons),RegonsVal::v1> v1{};
        }
        ///Acknowledge Isolation
        enum class AckisoVal {
            v0=0x00000000,     ///<Peripherals and I/O pads are in normal run state.
            v1=0x00000001,     ///<Certain peripherals and I/O pads are in an isolated and latched state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AckisoVal> ackiso{}; 
        namespace AckisoValC{
            constexpr Register::FieldValue<decltype(ackiso),AckisoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ackiso),AckisoVal::v1> v1{};
        }
        ///Bandgap Enable In VLPx Operation
        enum class BgenVal {
            v0=0x00000000,     ///<Bandgap voltage reference is disabled in VLPx , and VLLSx modes.
            v1=0x00000001,     ///<Bandgap voltage reference is enabled in VLPx , and VLLSx modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BgenVal> bgen{}; 
        namespace BgenValC{
            constexpr Register::FieldValue<decltype(bgen),BgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgen),BgenVal::v1> v1{};
        }
    }
}
