#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulation Controller
    namespace PwmMr{    ///<PWM Mode Register
        using Addr = Register::Address<0x40020000,0xf000f000,0,unsigned>;
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        namespace DivaValC{
        }
        ///None
        enum class PreaVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,PreaVal> prea{}; 
        namespace PreaValC{
            constexpr Register::FieldValue<decltype(prea),PreaVal::mck> mck{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(prea),PreaVal::mckdiv1024> mckdiv1024{};
        }
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> divb{}; 
        namespace DivbValC{
        }
        ///None
        enum class PrebVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PrebVal> preb{}; 
        namespace PrebValC{
            constexpr Register::FieldValue<decltype(preb),PrebVal::mck> mck{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(preb),PrebVal::mckdiv1024> mckdiv1024{};
        }
    }
    namespace PwmEna{    ///<PWM Enable Register
        using Addr = Register::Address<0x40020004,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmDis{    ///<PWM Disable Register
        using Addr = Register::Address<0x40020008,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmSr{    ///<PWM Status Register
        using Addr = Register::Address<0x4002000c,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmIer{    ///<PWM Interrupt Enable Register
        using Addr = Register::Address<0x40020010,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmIdr{    ///<PWM Interrupt Disable Register
        using Addr = Register::Address<0x40020014,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmImr{    ///<PWM Interrupt Mask Register
        using Addr = Register::Address<0x40020018,0xfffffff0,0,unsigned>;
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmIsr{    ///<PWM Interrupt Status Register
        using Addr = Register::Address<0x4002001c,0xfffffff0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
    }
    namespace PwmCmr0{    ///<PWM Channel Mode Register (ch_num = 0)
        using Addr = Register::Address<0x40020200,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
        namespace CpdValC{
        }
    }
    namespace PwmCdty0{    ///<PWM Channel Duty Cycle Register (ch_num = 0)
        using Addr = Register::Address<0x40020204,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCprd0{    ///<PWM Channel Period Register (ch_num = 0)
        using Addr = Register::Address<0x40020208,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCcnt0{    ///<PWM Channel Counter Register (ch_num = 0)
        using Addr = Register::Address<0x4002020c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmCupd0{    ///<PWM Channel Update Register (ch_num = 0)
        using Addr = Register::Address<0x40020210,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
        namespace CupdValC{
        }
    }
    namespace PwmCmr1{    ///<PWM Channel Mode Register (ch_num = 1)
        using Addr = Register::Address<0x40020220,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
        namespace CpdValC{
        }
    }
    namespace PwmCdty1{    ///<PWM Channel Duty Cycle Register (ch_num = 1)
        using Addr = Register::Address<0x40020224,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCprd1{    ///<PWM Channel Period Register (ch_num = 1)
        using Addr = Register::Address<0x40020228,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCcnt1{    ///<PWM Channel Counter Register (ch_num = 1)
        using Addr = Register::Address<0x4002022c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmCupd1{    ///<PWM Channel Update Register (ch_num = 1)
        using Addr = Register::Address<0x40020230,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
        namespace CupdValC{
        }
    }
    namespace PwmCmr2{    ///<PWM Channel Mode Register (ch_num = 2)
        using Addr = Register::Address<0x40020240,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
        namespace CpdValC{
        }
    }
    namespace PwmCdty2{    ///<PWM Channel Duty Cycle Register (ch_num = 2)
        using Addr = Register::Address<0x40020244,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCprd2{    ///<PWM Channel Period Register (ch_num = 2)
        using Addr = Register::Address<0x40020248,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCcnt2{    ///<PWM Channel Counter Register (ch_num = 2)
        using Addr = Register::Address<0x4002024c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmCupd2{    ///<PWM Channel Update Register (ch_num = 2)
        using Addr = Register::Address<0x40020250,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
        namespace CupdValC{
        }
    }
    namespace PwmCmr3{    ///<PWM Channel Mode Register (ch_num = 3)
        using Addr = Register::Address<0x40020260,0xfffff8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master Clock
            mckdiv2=0x00000001,     ///<Master Clock divided by 2
            mckdiv4=0x00000002,     ///<Master Clock divided by 4
            mckdiv8=0x00000003,     ///<Master Clock divided by 8
            mckdiv16=0x00000004,     ///<Master Clock divided by 16
            mckdiv32=0x00000005,     ///<Master Clock divided by 32
            mckdiv64=0x00000006,     ///<Master Clock divided by 64
            mckdiv128=0x00000007,     ///<Master Clock divided by 128
            mckdiv256=0x00000008,     ///<Master Clock divided by 256
            mckdiv512=0x00000009,     ///<Master Clock divided by 512
            mckdiv1024=0x0000000a,     ///<Master Clock divided by 1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv2> mckdiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv4> mckdiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv8> mckdiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv16> mckdiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv32> mckdiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv64> mckdiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv128> mckdiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv256> mckdiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv512> mckdiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckdiv1024> mckdiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Channel Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpd{}; 
        namespace CpdValC{
        }
    }
    namespace PwmCdty3{    ///<PWM Channel Duty Cycle Register (ch_num = 3)
        using Addr = Register::Address<0x40020264,0x00000000,0,unsigned>;
        ///Channel Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCprd3{    ///<PWM Channel Period Register (ch_num = 3)
        using Addr = Register::Address<0x40020268,0x00000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCcnt3{    ///<PWM Channel Counter Register (ch_num = 3)
        using Addr = Register::Address<0x4002026c,0x00000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmCupd3{    ///<PWM Channel Update Register (ch_num = 3)
        using Addr = Register::Address<0x40020270,0x00000000,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cupd{}; 
        namespace CupdValC{
        }
    }
}
