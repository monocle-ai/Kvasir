#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Timer_Event Counter (TB)
    namespace Noneen{    ///<TB Enable Register
        using Addr = Register::Address<0x400c4000,0xffffff3f,0,unsigned>;
        ///TBHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbhalt{}; 
        namespace TbhaltValC{
        }
        ///TBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tben{}; 
        namespace TbenValC{
        }
    }
    namespace Nonerun{    ///<TB RUN Register
        using Addr = Register::Address<0x400c4004,0xfffffffa,0,unsigned>;
        ///TBRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbrun{}; 
        namespace TbrunValC{
        }
        ///TBPRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbprun{}; 
        namespace TbprunValC{
        }
    }
    namespace Nonecr{    ///<TB Control Register
        using Addr = Register::Address<0x400c4008,0xffffff50,0,unsigned>;
        ///CSSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cssel{}; 
        namespace CsselValC{
        }
        ///TRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        namespace TrgselValC{
        }
        ///TBINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbinsel{}; 
        namespace TbinselValC{
        }
        ///I2TB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> i2tb{}; 
        namespace I2tbValC{
        }
        ///TBSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tbsync{}; 
        namespace TbsyncValC{
        }
        ///TBWBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tbwbf{}; 
        namespace TbwbfValC{
        }
    }
    namespace Nonemod{    ///<TB Mode Register
        using Addr = Register::Address<0x400c400c,0xffffff80,0,unsigned>;
        ///TBCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbclk{}; 
        namespace TbclkValC{
        }
        ///TBCLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbcle{}; 
        namespace TbcleValC{
        }
        ///TBCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tbcpm{}; 
        namespace TbcpmValC{
        }
        ///TBCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tbcp{}; 
        namespace TbcpValC{
        }
    }
    namespace Noneffcr{    ///<TB Flip-Flop Control Register
        using Addr = Register::Address<0x400c4010,0xffffffc0,0,unsigned>;
        ///TBFF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tbff0c{}; 
        namespace Tbff0cValC{
        }
        ///TBE0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbe0t1{}; 
        namespace Tbe0t1ValC{
        }
        ///TBE1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tbe1t1{}; 
        namespace Tbe1t1ValC{
        }
        ///TBC0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbc0t1{}; 
        namespace Tbc0t1ValC{
        }
        ///TBC1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tbc1t1{}; 
        namespace Tbc1t1ValC{
        }
    }
    namespace Nonest{    ///<TB Status Register
        using Addr = Register::Address<0x400c4014,0xfffffff8,0,unsigned>;
        ///INTTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttb0{}; 
        namespace Inttb0ValC{
        }
        ///INTTB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttb1{}; 
        namespace Inttb1ValC{
        }
        ///INTTBOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inttbof{}; 
        namespace InttbofValC{
        }
    }
    namespace Noneim{    ///<TB Interrupt Mask Register
        using Addr = Register::Address<0x400c4018,0xfffffff8,0,unsigned>;
        ///TBIM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbim0{}; 
        namespace Tbim0ValC{
        }
        ///TBIM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tbim1{}; 
        namespace Tbim1ValC{
        }
        ///TBIMOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbimof{}; 
        namespace TbimofValC{
        }
    }
    namespace Noneuc{    ///<TB Read Capture Register
        using Addr = Register::Address<0x400c401c,0xffff0000,0,unsigned>;
        ///TBUC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbuc{}; 
        namespace TbucValC{
        }
    }
    namespace Nonerg0{    ///<TB RG0 Timer Register
        using Addr = Register::Address<0x400c4020,0xffff0000,0,unsigned>;
        ///TBRG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg0{}; 
        namespace Tbrg0ValC{
        }
    }
    namespace Nonerg1{    ///<TB RG1 Timer Register
        using Addr = Register::Address<0x400c4024,0xffff0000,0,unsigned>;
        ///TBRG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbrg1{}; 
        namespace Tbrg1ValC{
        }
    }
    namespace Nonecp0{    ///<TB CP0 Capture Register
        using Addr = Register::Address<0x400c4028,0xffff0000,0,unsigned>;
        ///TBCP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbcp0{}; 
        namespace Tbcp0ValC{
        }
    }
    namespace Nonecp1{    ///<TB CP1 Capture Register
        using Addr = Register::Address<0x400c402c,0xffff0000,0,unsigned>;
        ///TBCP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tbcp1{}; 
        namespace Tbcp1ValC{
        }
    }
    namespace Nonedma{    ///<TB DMA Enable Register
        using Addr = Register::Address<0x400c4030,0xfffffff8,0,unsigned>;
        ///DMAEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen0{}; 
        namespace Dmaen0ValC{
        }
        ///DMAEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        namespace Dmaen1ValC{
        }
        ///DMAEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        namespace Dmaen2ValC{
        }
    }
}