#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonepb{    ///<Output Latch
        using Addr = Register::Address<0x4002a0a0,0xffff0000,0,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
    }
    namespace Nonepbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a0b0,0xffff0000,0,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbpin{}; 
        namespace PbpinValC{
        }
    }
    namespace Nonepbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a0c0,0xffff0000,0,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
        namespace PbmdselValC{
        }
    }
    namespace Nonepbskipen{    ///<Crossbar Pin Skip Enable
        using Addr = Register::Address<0x4002a0d0,0xffff0000,0,unsigned>;
        ///Crossbar Pin Skip Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbskipen{}; 
        namespace PbskipenValC{
        }
    }
    namespace Nonepboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a0e0,0xffff0000,0,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
        namespace PboutmdValC{
        }
    }
    namespace Nonepbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a0f0,0xfffe0000,0,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        namespace PbdrvValC{
        }
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen),PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen),PbpuenVal::enabled> enabled{};
        }
    }
    namespace Nonepm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a100,0xffff0000,0,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
    }
    namespace Nonepmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a110,0xffff0000,0,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
        namespace PmenValC{
        }
    }
    namespace Nonepbpgen{    ///<Pulse Generator Pin Enable
        using Addr = Register::Address<0x4002a120,0xfffff000,0,unsigned>;
        ///Pulse Generator Pin Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> pbpgen{}; 
        namespace PbpgenValC{
        }
    }
    namespace Nonepbpgphase{    ///<Pulse Generator Phase
        using Addr = Register::Address<0x4002a130,0xf000f000,0,unsigned>;
        ///Pulse Generator Phase 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> pbpgph0{}; 
        namespace Pbpgph0ValC{
        }
        ///Pulse Generator Phase 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> pbpgph1{}; 
        namespace Pbpgph1ValC{
        }
    }
}
