#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2 (Direct memory
      access)
    namespace Nonesc2Dmarxbegaddar{    ///<Serial controller receive DMA begin address
          channel A register
        using Addr = Register::Address<0x4000c000,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxendaddar{    ///<Serial controller receive DMA end address
          channel A register
        using Addr = Register::Address<0x4000c004,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxbegaddbr{    ///<Serial controller receive DMA begin address
          channel B register
        using Addr = Register::Address<0x4000c008,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxendaddbr{    ///<Serial controller receive DMA end address
          channel B register
        using Addr = Register::Address<0x4000c00c,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmatxbegaddar{    ///<Serial controller transmit DMA begin address
          channel A register
        using Addr = Register::Address<0x4000c010,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmatxendaddar{    ///<Serial controller transmit DMA end address
          channel A register
        using Addr = Register::Address<0x4000c014,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmatxbegaddbr{    ///<Serial controller transmit DMA begin address
          channel B register
        using Addr = Register::Address<0x4000c018,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmatxendaddbr{    ///<Serial controller transmit DMA end address
          channel B register
        using Addr = Register::Address<0x4000c01c,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxcntar{    ///<Serial controller receive DMA counter
          channel A register
        using Addr = Register::Address<0x4000c020,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc2Dmarxcntbr{    ///<Serial controller receive DMA count channel
          B register
        using Addr = Register::Address<0x4000c024,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc2Dmatxcntr{    ///<Serial controller transmit DMA counter
          register
        using Addr = Register::Address<0x4000c028,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonesc2Dmasr{    ///<Serial controller DMA status
          register
        using Addr = Register::Address<0x4000c02c,0xffffe000,0,unsigned>;
        ///NSSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> nsss{}; 
        namespace NsssValC{
        }
        ///FEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> feb{}; 
        namespace FebValC{
        }
        ///FEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fea{}; 
        namespace FeaValC{
        }
        ///PEB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> peb{}; 
        namespace PebValC{
        }
        ///PEA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pea{}; 
        namespace PeaValC{
        }
        ///OVRB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrb{}; 
        namespace OvrbValC{
        }
        ///OVRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovra{}; 
        namespace OvraValC{
        }
        ///TXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txback{}; 
        namespace TxbackValC{
        }
        ///TXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txaack{}; 
        namespace TxaackValC{
        }
        ///RXBACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxback{}; 
        namespace RxbackValC{
        }
        ///RXAACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxaack{}; 
        namespace RxaackValC{
        }
    }
    namespace Nonesc2Dmacr{    ///<Serial controller DMA control
          register
        using Addr = Register::Address<0x4000c030,0xffffffc0,0,unsigned>;
        ///TXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrst{}; 
        namespace TxrstValC{
        }
        ///RXRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrst{}; 
        namespace RxrstValC{
        }
        ///TXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txlodb{}; 
        namespace TxlodbValC{
        }
        ///TXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txloda{}; 
        namespace TxlodaValC{
        }
        ///RXLODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxlodb{}; 
        namespace RxlodbValC{
        }
        ///RXLODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxloda{}; 
        namespace RxlodaValC{
        }
    }
    namespace Nonesc2Dmarxerrar{    ///<Serial controller receive DMA channel A
          first error register
        using Addr = Register::Address<0x4000c034,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxerrbr{    ///<Serial controller receive DMA channel B
          first error register
        using Addr = Register::Address<0x4000c038,0xffffe000,0,unsigned>;
        ///ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> add{}; 
        namespace AddValC{
        }
    }
    namespace Nonesc2Dmarxcntsavedr{    ///<Serial controller receive DMA saved counter
          channel B register
        using Addr = Register::Address<0x4000c070,0xffffe000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
}
