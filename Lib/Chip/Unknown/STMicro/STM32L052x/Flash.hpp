#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Access control register
        using Addr = Register::Address<0x40022000,0xffffff84,0,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prften{}; 
        namespace PrftenValC{
        }
        ///Flash mode during Sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        namespace SleeppdValC{
        }
        ///Flash mode during Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> runPd{}; 
        namespace RunpdValC{
        }
        ///Disable Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> desabBuf{}; 
        namespace DesabbufValC{
        }
        ///Pre-read data address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> preRead{}; 
        namespace PrereadValC{
        }
    }
    namespace Nonepecr{    ///<Program/erase control register
        using Addr = Register::Address<0x40022004,0xfff878e0,0,unsigned>;
        ///FLASH_PECR and data EEPROM
              lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pelock{}; 
        namespace PelockValC{
        }
        ///Program memory lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prglock{}; 
        namespace PrglockValC{
        }
        ///Option bytes block lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> optlock{}; 
        namespace OptlockValC{
        }
        ///Program memory selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> prog{}; 
        namespace ProgValC{
        }
        ///Data EEPROM selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///Fixed time data write for Byte, Half
              Word and Word programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ftdw{}; 
        namespace FtdwValC{
        }
        ///Page or Double Word erase
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erase{}; 
        namespace EraseValC{
        }
        ///Half Page/Double Word programming
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fprg{}; 
        namespace FprgValC{
        }
        ///Parallel bank mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> parallelbank{}; 
        namespace ParallelbankValC{
        }
        ///End of programming interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Launch the option byte
              loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
        namespace ObllaunchValC{
        }
    }
    namespace Nonepdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
        namespace PdkeyrValC{
        }
    }
    namespace Nonepekeyr{    ///<Program/erase key register
        using Addr = Register::Address<0x4002200c,0x00000000,0,unsigned>;
        ///FLASH_PEC and data EEPROM
              key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pekeyr{}; 
        namespace PekeyrValC{
        }
    }
    namespace Noneprgkeyr{    ///<Program memory key register
        using Addr = Register::Address<0x40022010,0x00000000,0,unsigned>;
        ///Program memory key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prgkeyr{}; 
        namespace PrgkeyrValC{
        }
    }
    namespace Noneoptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x40022014,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
        namespace OptkeyrValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40022018,0xfffcb0f0,0,unsigned>;
        ///Write/erase operations in
              progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///End of high voltage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endhv{}; 
        namespace EndhvValC{
        }
        ///Flash memory module ready after low
              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        ///Write protected error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wrperr{}; 
        namespace WrperrValC{
        }
        ///Programming alignment
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        namespace PgaerrValC{
        }
        ///Size error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sizerr{}; 
        namespace SizerrValC{
        }
        ///Option validity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> optverr{}; 
        namespace OptverrValC{
        }
        ///RDERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rderr{}; 
        namespace RderrValC{
        }
        ///NOTZEROERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notzeroerr{}; 
        namespace NotzeroerrValC{
        }
        ///FWWERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fwwerr{}; 
        namespace FwwerrValC{
        }
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x4002201c,0xfff0fe00,0,unsigned>;
        ///Read protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdprt{}; 
        namespace RdprtValC{
        }
        ///BOR_LEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> borLev{}; 
        namespace BorlevValC{
        }
        ///Selection of protection mode of WPR
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sprmod{}; 
        namespace SprmodValC{
        }
    }
    namespace Nonewrpr{    ///<Write protection register
        using Addr = Register::Address<0x40022020,0xffff0000,0,unsigned>;
        ///Write protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wrp{}; 
        namespace WrpValC{
        }
    }
}
