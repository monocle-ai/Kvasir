#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time clock
    namespace Nonetr{    ///<time register
        using Addr = Register::Address<0x40002800,0xff808080,0,unsigned>;
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        namespace MntValC{
        }
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        namespace MnuValC{
        }
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        namespace SuValC{
        }
    }
    namespace Nonedr{    ///<date register
        using Addr = Register::Address<0x40002804,0xff0000c0,0,unsigned>;
        ///Year tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> yt{}; 
        namespace YtValC{
        }
        ///Year units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> yu{}; 
        namespace YuValC{
        }
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        namespace WduValC{
        }
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        namespace MtValC{
        }
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        namespace MuValC{
        }
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
        namespace DuValC{
        }
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40002808,0xff000080,0,unsigned>;
        ///Wakeup clock selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> wcksel{}; 
        namespace WckselValC{
        }
        ///Time-stamp event active
              edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsedge{}; 
        namespace TsedgeValC{
        }
        ///Reference clock detection enable (50 or
              60 Hz)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> refckon{}; 
        namespace RefckonValC{
        }
        ///Bypass the shadow
              registers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bypshad{}; 
        namespace BypshadValC{
        }
        ///Hour format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fmt{}; 
        namespace FmtValC{
        }
        ///Alarm A enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alrae{}; 
        namespace AlraeValC{
        }
        ///Alarm B enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbe{}; 
        namespace AlrbeValC{
        }
        ///Wakeup timer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wute{}; 
        namespace WuteValC{
        }
        ///Time stamp enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tse{}; 
        namespace TseValC{
        }
        ///Alarm A interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> alraie{}; 
        namespace AlraieValC{
        }
        ///Alarm B interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alrbie{}; 
        namespace AlrbieValC{
        }
        ///Wakeup timer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wutie{}; 
        namespace WutieValC{
        }
        ///Time-stamp interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsie{}; 
        namespace TsieValC{
        }
        ///Add 1 hour (summer time
              change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> add1h{}; 
        namespace Add1hValC{
        }
        ///Subtract 1 hour (winter time
              change)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sub1h{}; 
        namespace Sub1hValC{
        }
        ///Backup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
        ///Calibration output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cosel{}; 
        namespace CoselValC{
        }
        ///Output polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pol{}; 
        namespace PolValC{
        }
        ///Output selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> osel{}; 
        namespace OselValC{
        }
        ///Calibration output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> coe{}; 
        namespace CoeValC{
        }
    }
    namespace Noneisr{    ///<initialization and status
          register
        using Addr = Register::Address<0x4000280c,0xfffe0000,0,unsigned>;
        ///Alarm A write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alrawf{}; 
        namespace AlrawfValC{
        }
        ///Alarm B write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrbwf{}; 
        namespace AlrbwfValC{
        }
        ///Wakeup timer write flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wutwf{}; 
        namespace WutwfValC{
        }
        ///Shift operation pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> shpf{}; 
        namespace ShpfValC{
        }
        ///Initialization status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inits{}; 
        namespace InitsValC{
        }
        ///Registers synchronization
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsf{}; 
        namespace RsfValC{
        }
        ///Initialization flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> initf{}; 
        namespace InitfValC{
        }
        ///Initialization mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
        ///Alarm A flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> alraf{}; 
        namespace AlrafValC{
        }
        ///Alarm B flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> alrbf{}; 
        namespace AlrbfValC{
        }
        ///Wakeup timer flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wutf{}; 
        namespace WutfValC{
        }
        ///Time-stamp flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tsf{}; 
        namespace TsfValC{
        }
        ///Time-stamp overflow flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tsovf{}; 
        namespace TsovfValC{
        }
        ///Tamper detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tamp1f{}; 
        namespace Tamp1fValC{
        }
        ///RTC_TAMP2 detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tamp2f{}; 
        namespace Tamp2fValC{
        }
        ///RTC_TAMP3 detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamp3f{}; 
        namespace Tamp3fValC{
        }
        ///Recalibration pending Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> recalpf{}; 
        namespace RecalpfValC{
        }
    }
    namespace Noneprer{    ///<prescaler register
        using Addr = Register::Address<0x40002810,0xff808000,0,unsigned>;
        ///Asynchronous prescaler
              factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> predivA{}; 
        namespace PredivaValC{
        }
        ///Synchronous prescaler
              factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> predivS{}; 
        namespace PredivsValC{
        }
    }
    namespace Nonewutr{    ///<wakeup timer register
        using Addr = Register::Address<0x40002814,0xffff0000,0,unsigned>;
        ///Wakeup auto-reload value
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wut{}; 
        namespace WutValC{
        }
    }
    namespace Nonealrmar{    ///<alarm A register
        using Addr = Register::Address<0x4000281c,0x00000000,0,unsigned>;
        ///Alarm A date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        namespace WdselValC{
        }
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///Date units or day in BCD
              format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        namespace DuValC{
        }
        ///Alarm A hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
        ///Alarm A minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        namespace MntValC{
        }
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        namespace MnuValC{
        }
        ///Alarm A seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        namespace SuValC{
        }
    }
    namespace Nonealrmbr{    ///<alarm B register
        using Addr = Register::Address<0x40002820,0x00000000,0,unsigned>;
        ///Alarm B date mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        ///Week day selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wdsel{}; 
        namespace WdselValC{
        }
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///Date units or day in BCD
              format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> du{}; 
        namespace DuValC{
        }
        ///Alarm B hours mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
        ///Alarm B minutes mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        namespace MntValC{
        }
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        namespace MnuValC{
        }
        ///Alarm B seconds mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        namespace SuValC{
        }
    }
    namespace Nonewpr{    ///<write protection register
        using Addr = Register::Address<0x40002824,0xffffff00,0,unsigned>;
        ///Write protection key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace Nonessr{    ///<sub second register
        using Addr = Register::Address<0x40002828,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
        namespace SsValC{
        }
    }
    namespace Noneshiftr{    ///<shift control register
        using Addr = Register::Address<0x4000282c,0x7fff8000,0,unsigned>;
        ///Add one second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> add1s{}; 
        namespace Add1sValC{
        }
        ///Subtract a fraction of a
              second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> subfs{}; 
        namespace SubfsValC{
        }
    }
    namespace Nonetstr{    ///<time stamp time register
        using Addr = Register::Address<0x40002830,0xff808080,0,unsigned>;
        ///Second units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> su{}; 
        namespace SuValC{
        }
        ///Second tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///Minute units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mnu{}; 
        namespace MnuValC{
        }
        ///Minute tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> mnt{}; 
        namespace MntValC{
        }
        ///Hour units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
        ///Hour tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
        ///AM/PM notation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
    }
    namespace Nonetsdr{    ///<time stamp date register
        using Addr = Register::Address<0x40002834,0xffff00c0,0,unsigned>;
        ///Week day units
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> wdu{}; 
        namespace WduValC{
        }
        ///Month tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mt{}; 
        namespace MtValC{
        }
        ///Month units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mu{}; 
        namespace MuValC{
        }
        ///Date tens in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///Date units in BCD format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> du{}; 
        namespace DuValC{
        }
    }
    namespace Nonetsssr{    ///<timestamp sub second register
        using Addr = Register::Address<0x40002838,0xffff0000,0,unsigned>;
        ///Sub second value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ss{}; 
        namespace SsValC{
        }
    }
    namespace Nonecalr{    ///<calibration register
        using Addr = Register::Address<0x4000283c,0xffff1e00,0,unsigned>;
        ///Increase frequency of RTC by 488.5
              ppm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> calp{}; 
        namespace CalpValC{
        }
        ///Use an 8-second calibration cycle
              period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> calw8{}; 
        namespace Calw8ValC{
        }
        ///Use a 16-second calibration cycle
              period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> calw16{}; 
        namespace Calw16ValC{
        }
        ///Calibration minus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> calm{}; 
        namespace CalmValC{
        }
    }
    namespace Nonetafcr{    ///<tamper and alternate function configuration
          register
        using Addr = Register::Address<0x40002840,0xff030000,0,unsigned>;
        ///Tamper 1 detection enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tamp1e{}; 
        namespace Tamp1eValC{
        }
        ///Active level for tamper 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tamp1trg{}; 
        namespace Tamp1trgValC{
        }
        ///Tamper interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tampie{}; 
        namespace TampieValC{
        }
        ///Tamper 2 detection enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tamp2e{}; 
        namespace Tamp2eValC{
        }
        ///Active level for tamper 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamp2trg{}; 
        namespace Tamp2trgValC{
        }
        ///Tamper 3 detection enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tamp3e{}; 
        namespace Tamp3eValC{
        }
        ///Active level for tamper 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tamp3trg{}; 
        namespace Tamp3trgValC{
        }
        ///Activate timestamp on tamper detection
              event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tampts{}; 
        namespace TamptsValC{
        }
        ///Tamper sampling frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tampfreq{}; 
        namespace TampfreqValC{
        }
        ///Tamper filter count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> tampflt{}; 
        namespace TampfltValC{
        }
        ///Tamper precharge duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> tampprch{}; 
        namespace TampprchValC{
        }
        ///TAMPER pull-up disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tamppudis{}; 
        namespace TamppudisValC{
        }
        ///PC13 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pc13value{}; 
        namespace Pc13valueValC{
        }
        ///PC13 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pc13mode{}; 
        namespace Pc13modeValC{
        }
        ///PC14 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pc14value{}; 
        namespace Pc14valueValC{
        }
        ///PC 14 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pc14mode{}; 
        namespace Pc14modeValC{
        }
        ///PC15 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pc15value{}; 
        namespace Pc15valueValC{
        }
        ///PC15 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pc15mode{}; 
        namespace Pc15modeValC{
        }
    }
    namespace Nonealrmassr{    ///<alarm A sub second register
        using Addr = Register::Address<0x40002844,0xf0ff8000,0,unsigned>;
        ///Mask the most-significant bits starting
              at this bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
        namespace MaskssValC{
        }
        ///Sub seconds value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
        namespace SsValC{
        }
    }
    namespace Nonealrmbssr{    ///<alarm B sub second register
        using Addr = Register::Address<0x40002848,0xf0ff8000,0,unsigned>;
        ///Mask the most-significant bits starting
              at this bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> maskss{}; 
        namespace MaskssValC{
        }
        ///Sub seconds value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> ss{}; 
        namespace SsValC{
        }
    }
    namespace Nonebkp0r{    ///<backup register
        using Addr = Register::Address<0x40002850,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp1r{    ///<backup register
        using Addr = Register::Address<0x40002854,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp2r{    ///<backup register
        using Addr = Register::Address<0x40002858,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp3r{    ///<backup register
        using Addr = Register::Address<0x4000285c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp4r{    ///<backup register
        using Addr = Register::Address<0x40002860,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp5r{    ///<backup register
        using Addr = Register::Address<0x40002864,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp6r{    ///<backup register
        using Addr = Register::Address<0x40002868,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp7r{    ///<backup register
        using Addr = Register::Address<0x4000286c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp8r{    ///<backup register
        using Addr = Register::Address<0x40002870,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp9r{    ///<backup register
        using Addr = Register::Address<0x40002874,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp10r{    ///<backup register
        using Addr = Register::Address<0x40002878,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp11r{    ///<backup register
        using Addr = Register::Address<0x4000287c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp12r{    ///<backup register
        using Addr = Register::Address<0x40002880,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp13r{    ///<backup register
        using Addr = Register::Address<0x40002884,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp14r{    ///<backup register
        using Addr = Register::Address<0x40002888,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp15r{    ///<backup register
        using Addr = Register::Address<0x4000288c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp16r{    ///<backup register
        using Addr = Register::Address<0x40002890,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp17r{    ///<backup register
        using Addr = Register::Address<0x40002894,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp18r{    ///<backup register
        using Addr = Register::Address<0x40002898,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp19r{    ///<backup register
        using Addr = Register::Address<0x4000289c,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp20r{    ///<backup register
        using Addr = Register::Address<0x400028a0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp21r{    ///<backup register
        using Addr = Register::Address<0x400028a4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp22r{    ///<backup register
        using Addr = Register::Address<0x400028a8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp23r{    ///<backup register
        using Addr = Register::Address<0x400028ac,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp24r{    ///<backup register
        using Addr = Register::Address<0x400028b0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp25r{    ///<backup register
        using Addr = Register::Address<0x400028b4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp26r{    ///<backup register
        using Addr = Register::Address<0x400028b8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp27r{    ///<backup register
        using Addr = Register::Address<0x400028bc,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp28r{    ///<backup register
        using Addr = Register::Address<0x400028c0,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp29r{    ///<backup register
        using Addr = Register::Address<0x400028c4,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp30r{    ///<backup register
        using Addr = Register::Address<0x400028c8,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
    namespace Nonebkp31r{    ///<backup register
        using Addr = Register::Address<0x400028cc,0x00000000,0,unsigned>;
        ///BKP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bkp{}; 
        namespace BkpValC{
        }
    }
}