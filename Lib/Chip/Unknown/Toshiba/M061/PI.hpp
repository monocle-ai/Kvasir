#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PI)
    namespace Nonedata{    ///<PI Data Register
        using Addr = Register::Address<0x400c0800,0xffffff80,0,unsigned>;
        ///PI0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0{}; 
        namespace Pi0ValC{
        }
        ///PI1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1{}; 
        namespace Pi1ValC{
        }
        ///PI2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2{}; 
        namespace Pi2ValC{
        }
        ///PI3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3{}; 
        namespace Pi3ValC{
        }
        ///PI4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4{}; 
        namespace Pi4ValC{
        }
        ///PI5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5{}; 
        namespace Pi5ValC{
        }
        ///PI6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6{}; 
        namespace Pi6ValC{
        }
    }
    namespace Nonecr{    ///<PI Control Register
        using Addr = Register::Address<0x400c0804,0xffffff80,0,unsigned>;
        ///PI0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0c{}; 
        namespace Pi0cValC{
        }
        ///PI1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1c{}; 
        namespace Pi1cValC{
        }
        ///PI2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2c{}; 
        namespace Pi2cValC{
        }
        ///PI3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3c{}; 
        namespace Pi3cValC{
        }
        ///PI4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4c{}; 
        namespace Pi4cValC{
        }
        ///PI5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5c{}; 
        namespace Pi5cValC{
        }
        ///PI6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6c{}; 
        namespace Pi6cValC{
        }
    }
    namespace Nonefr1{    ///<PI Function Register 1
        using Addr = Register::Address<0x400c0808,0xffffff80,0,unsigned>;
        ///PI0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0f1{}; 
        namespace Pi0f1ValC{
        }
        ///PI1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1f1{}; 
        namespace Pi1f1ValC{
        }
        ///PI2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f1{}; 
        namespace Pi2f1ValC{
        }
        ///PI3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3f1{}; 
        namespace Pi3f1ValC{
        }
        ///PI4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4f1{}; 
        namespace Pi4f1ValC{
        }
        ///PI5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5f1{}; 
        namespace Pi5f1ValC{
        }
        ///PI6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f1{}; 
        namespace Pi6f1ValC{
        }
    }
    namespace Nonefr2{    ///<PI Function Register 2
        using Addr = Register::Address<0x400c080c,0xffffffba,0,unsigned>;
        ///PI0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0f2{}; 
        namespace Pi0f2ValC{
        }
        ///PI2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f2{}; 
        namespace Pi2f2ValC{
        }
        ///PI6F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f2{}; 
        namespace Pi6f2ValC{
        }
    }
    namespace Nonefr3{    ///<PI Function Register 3
        using Addr = Register::Address<0x400c0810,0xffffffbb,0,unsigned>;
        ///PI2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f3{}; 
        namespace Pi2f3ValC{
        }
        ///PI6F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f3{}; 
        namespace Pi6f3ValC{
        }
    }
    namespace Noneod{    ///<PI OPIn Drain Control Register
        using Addr = Register::Address<0x400c0828,0xffffff80,0,unsigned>;
        ///PI0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0od{}; 
        namespace Pi0odValC{
        }
        ///PI1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1od{}; 
        namespace Pi1odValC{
        }
        ///PI2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2od{}; 
        namespace Pi2odValC{
        }
        ///PI3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3od{}; 
        namespace Pi3odValC{
        }
        ///PI4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4od{}; 
        namespace Pi4odValC{
        }
        ///PI5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5od{}; 
        namespace Pi5odValC{
        }
        ///PI6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6od{}; 
        namespace Pi6odValC{
        }
    }
    namespace Nonepup{    ///<PI Pull-Up Control Register
        using Addr = Register::Address<0x400c082c,0xffffff80,0,unsigned>;
        ///PI0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0up{}; 
        namespace Pi0upValC{
        }
        ///PI1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1up{}; 
        namespace Pi1upValC{
        }
        ///PI2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2up{}; 
        namespace Pi2upValC{
        }
        ///PI3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3up{}; 
        namespace Pi3upValC{
        }
        ///PI4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4up{}; 
        namespace Pi4upValC{
        }
        ///PI5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5up{}; 
        namespace Pi5upValC{
        }
        ///PI6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6up{}; 
        namespace Pi6upValC{
        }
    }
    namespace Nonepdn{    ///<PI Pull-Down Control Register
        using Addr = Register::Address<0x400c0830,0xffffff80,0,unsigned>;
        ///PI0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0dn{}; 
        namespace Pi0dnValC{
        }
        ///PI1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1dn{}; 
        namespace Pi1dnValC{
        }
        ///PI2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2dn{}; 
        namespace Pi2dnValC{
        }
        ///PI3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3dn{}; 
        namespace Pi3dnValC{
        }
        ///PI4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4dn{}; 
        namespace Pi4dnValC{
        }
        ///PI5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5dn{}; 
        namespace Pi5dnValC{
        }
        ///PI6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6dn{}; 
        namespace Pi6dnValC{
        }
    }
    namespace Noneie{    ///<PI Input Enable Control Register
        using Addr = Register::Address<0x400c0838,0xffffff80,0,unsigned>;
        ///PI0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0ie{}; 
        namespace Pi0ieValC{
        }
        ///PI1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1ie{}; 
        namespace Pi1ieValC{
        }
        ///PI2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2ie{}; 
        namespace Pi2ieValC{
        }
        ///PI3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3ie{}; 
        namespace Pi3ieValC{
        }
        ///PI4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4ie{}; 
        namespace Pi4ieValC{
        }
        ///PI5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5ie{}; 
        namespace Pi5ieValC{
        }
        ///PI6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6ie{}; 
        namespace Pi6ieValC{
        }
    }
}
