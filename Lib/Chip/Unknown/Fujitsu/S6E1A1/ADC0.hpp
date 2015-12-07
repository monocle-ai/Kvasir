#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC0 Registers
    namespace Noneadcr{    ///<A/D Control Register
        using Addr = Register::Address<0x40027001,0xffffff10,0,unsigned char>;
        ///Scan conversion interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> scif{}; 
        namespace ScifValC{
        }
        ///Priority conversion interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcif{}; 
        namespace PcifValC{
        }
        ///Conversion result comparison interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpif{}; 
        namespace CmpifValC{
        }
        ///Scan conversion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scie{}; 
        namespace ScieValC{
        }
        ///Priority conversion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcie{}; 
        namespace PcieValC{
        }
        ///Conversion result comparison interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        namespace CmpieValC{
        }
        ///FIFO overrun interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
    }
    namespace Noneadsr{    ///<A/D Status Register
        using Addr = Register::Address<0x40027000,0xffffff38,0,unsigned char>;
        ///A/D conversion forced stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adstp{}; 
        namespace AdstpValC{
        }
        ///FIFO data placement selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdas{}; 
        namespace FdasValC{
        }
        ///Priority conversion pending flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcns{}; 
        namespace PcnsValC{
        }
        ///Priority conversion status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        ///Scan conversion status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scs{}; 
        namespace ScsValC{
        }
    }
    namespace Nonesccr{    ///<Scan Conversion Control Register
        using Addr = Register::Address<0x40027009,0xffffff08,0,unsigned char>;
        ///Scan conversion FIFO empty bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> semp{}; 
        namespace SempValC{
        }
        ///Scan conversion FIFO full bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sful{}; 
        namespace SfulValC{
        }
        ///Scan conversion overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sovr{}; 
        namespace SovrValC{
        }
        ///Scan conversion FIFO clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sfclr{}; 
        namespace SfclrValC{
        }
        ///Scan conversion repeat bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rpt{}; 
        namespace RptValC{
        }
        ///Scan conversion timer start enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shen{}; 
        namespace ShenValC{
        }
        ///Scan conversion start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstr{}; 
        namespace SstrValC{
        }
    }
    namespace Nonesfns{    ///<Scan Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027008,0xfffffff0,0,unsigned char>;
        ///Scan conversion FIFO stage count setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfs{}; 
        namespace SfsValC{
        }
    }
    namespace Nonescfd{    ///<Scan Conversion FIFO Data Register
        using Addr = Register::Address<0x4002700c,0x000fece0,0,unsigned>;
        ///Scan conversion result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
        ///A/D conversion result disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        ///Scan conversion start factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Conversion input channel bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sc{}; 
        namespace ScValC{
        }
    }
    namespace Nonescis3{    ///<Scan Conversion Input Selection Register 3
        using Addr = Register::Address<0x40027011,0xffffff00,0,unsigned char>;
        ///AN31 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        ///AN30 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        ///AN29 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        ///AN28 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        ///AN27 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        ///AN26 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        ///AN25 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        ///AN24 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
    }
    namespace Nonescis2{    ///<Scan Conversion Input Selection Register 2
        using Addr = Register::Address<0x40027010,0xffffff00,0,unsigned char>;
        ///AN23 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        ///AN22 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        ///AN21 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        ///AN20 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        ///AN19 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        ///AN18 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        ///AN17 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        ///AN16 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
    }
    namespace Nonescis1{    ///<Scan Conversion Input Selection Register 1
        using Addr = Register::Address<0x40027015,0xffffff00,0,unsigned char>;
        ///AN15 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        ///AN14 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///AN13 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///AN12 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///AN11 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        ///AN10 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        ///AN9 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        namespace An9ValC{
        }
        ///AN8 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
        namespace An8ValC{
        }
    }
    namespace Nonescis0{    ///<Scan Conversion Input Selection Register 0
        using Addr = Register::Address<0x40027014,0xffffff00,0,unsigned char>;
        ///AN7 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        namespace An7ValC{
        }
        ///AN6 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        namespace An6ValC{
        }
        ///AN5 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        ///AN4 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        ///AN3 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        ///AN2 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        ///AN1 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        ///AN0 analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonepfns{    ///<Priority Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027018,0xffffffcc,0,unsigned char>;
        ///Test bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        ///Priority conversion FIFO stage count setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pfs{}; 
        namespace PfsValC{
        }
    }
    namespace Nonepccr{    ///<Priority Conversion Control Register
        using Addr = Register::Address<0x40027019,0xffffff00,0,unsigned char>;
        ///Priority conversion FIFO empty bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pemp{}; 
        namespace PempValC{
        }
        ///Priority conversion FIFO full bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pful{}; 
        namespace PfulValC{
        }
        ///Priority conversion overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> povr{}; 
        namespace PovrValC{
        }
        ///Priority conversion FIFO clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfclr{}; 
        namespace PfclrValC{
        }
        ///External trigger analog input selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esce{}; 
        namespace EsceValC{
        }
        ///Priority conversion external start enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peen{}; 
        namespace PeenValC{
        }
        ///Priority conversion timer start enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> phen{}; 
        namespace PhenValC{
        }
        ///Priority conversion start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstr{}; 
        namespace PstrValC{
        }
    }
    namespace Nonepcfd{    ///<Priority Conversion FIFO Data Register
        using Addr = Register::Address<0x4002701c,0x000fe8e0,0,unsigned>;
        ///Priority conversion result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///A/D conversion result disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        ///Scan conversion start factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Conversion input channel bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
    }
    namespace Nonepcis{    ///<Priority Conversion Input Selection Register
        using Addr = Register::Address<0x40027020,0xffffff00,0,unsigned char>;
        ///Priority level 2 analog input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> p2a{}; 
        namespace P2aValC{
        }
        ///Priority level 1 analog input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> p1a{}; 
        namespace P1aValC{
        }
    }
    namespace Nonecmpcr{    ///<A/D Comparison Control Register
        using Addr = Register::Address<0x40027024,0xffffff00,0,unsigned char>;
        ///Conversion result comparison function operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmpen{}; 
        namespace CmpenValC{
        }
        ///Comparison mode 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmd1{}; 
        namespace Cmd1ValC{
        }
        ///Comparison mode 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmd0{}; 
        namespace Cmd0ValC{
        }
        ///Comparison target analog input channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
        namespace CchValC{
        }
    }
    namespace Nonecmpd{    ///<A/D Comparison Value Setup Register
        using Addr = Register::Address<0x40027026,0xffff003f,0,unsigned>;
        ///A/D conversion compare value setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
        namespace CmadValC{
        }
    }
    namespace Noneadss3{    ///<Sampling Time Selection Register 3
        using Addr = Register::Address<0x40027029,0xffffff00,0,unsigned char>;
        ///AN31 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        namespace Ts31ValC{
        }
        ///AN30 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        namespace Ts30ValC{
        }
        ///AN29 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        namespace Ts29ValC{
        }
        ///AN28 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        namespace Ts28ValC{
        }
        ///AN27 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        namespace Ts27ValC{
        }
        ///AN26 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        namespace Ts26ValC{
        }
        ///AN25 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        namespace Ts25ValC{
        }
        ///AN24 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
        namespace Ts24ValC{
        }
    }
    namespace Noneadss2{    ///<Sampling Time Selection Register 2
        using Addr = Register::Address<0x40027028,0xffffff00,0,unsigned char>;
        ///AN23 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        namespace Ts23ValC{
        }
        ///AN22 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        namespace Ts22ValC{
        }
        ///AN21 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        namespace Ts21ValC{
        }
        ///AN20 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        namespace Ts20ValC{
        }
        ///AN19 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        namespace Ts19ValC{
        }
        ///AN18 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        namespace Ts18ValC{
        }
        ///AN17 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        namespace Ts17ValC{
        }
        ///AN16 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
        namespace Ts16ValC{
        }
    }
    namespace Noneadss1{    ///<Sampling Time Selection Register 1
        using Addr = Register::Address<0x4002702d,0xffffff00,0,unsigned char>;
        ///AN15 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        namespace Ts15ValC{
        }
        ///AN14 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        namespace Ts14ValC{
        }
        ///AN13 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        namespace Ts13ValC{
        }
        ///AN12 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        namespace Ts12ValC{
        }
        ///AN11 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        namespace Ts11ValC{
        }
        ///AN10 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        namespace Ts10ValC{
        }
        ///AN9 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        namespace Ts9ValC{
        }
        ///AN8 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
        namespace Ts8ValC{
        }
    }
    namespace Noneadss0{    ///<Sampling Time Selection Register 0
        using Addr = Register::Address<0x4002702c,0xffffff00,0,unsigned char>;
        ///AN7 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        namespace Ts7ValC{
        }
        ///AN6 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        namespace Ts6ValC{
        }
        ///AN5 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        namespace Ts5ValC{
        }
        ///AN4 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        namespace Ts4ValC{
        }
        ///AN3 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        namespace Ts3ValC{
        }
        ///AN2 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        namespace Ts2ValC{
        }
        ///AN1 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        namespace Ts1ValC{
        }
        ///AN0 sampling time selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
        namespace Ts0ValC{
        }
    }
    namespace Noneadst1{    ///<Sampling Time Setup Register 1
        using Addr = Register::Address<0x40027030,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        namespace Stx1ValC{
        }
        ///Sampling time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st1{}; 
        namespace St1ValC{
        }
    }
    namespace Noneadst0{    ///<Sampling Time Setup Register 0
        using Addr = Register::Address<0x40027031,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        namespace Stx0ValC{
        }
        ///Sampling time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st0{}; 
        namespace St0ValC{
        }
    }
    namespace Noneadct{    ///<Frequency Division Ratio Setup Register
        using Addr = Register::Address<0x40027034,0xffffff00,0,unsigned char>;
        ///Frequency division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
    }
    namespace Noneprtsl{    ///<Priority Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027038,0xfffffff0,0,unsigned char>;
        ///Priority conversion timer trigger selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
        namespace PrtslValC{
        }
    }
    namespace Nonesctsl{    ///<Scan Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027039,0xfffffff0,0,unsigned char>;
        ///Scan conversion timer trigger selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
        namespace SctslValC{
        }
    }
    namespace Noneadcen{    ///<A/D Operation Enable Setup Register
        using Addr = Register::Address<0x4002703c,0xffff00fc,0,unsigned>;
        ///Operation enable state transition cycle selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> enbltime{}; 
        namespace EnbltimeValC{
        }
        ///A/D operation enable state bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        ///A/D operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
        namespace EnblValC{
        }
    }
    namespace Nonewcmrcif{    ///<Range Comparison Flag Register
        using Addr = Register::Address<0x40027044,0xfffffffe,0,unsigned>;
        ///Range comparison interrupt factor flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcint{}; 
        namespace RcintValC{
        }
    }
    namespace Nonewcmrcot{    ///<Range Comparison Threshold Excess Flag Register
        using Addr = Register::Address<0x40027048,0xfffffffe,0,unsigned>;
        ///Threshold excess flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcoof{}; 
        namespace RcoofValC{
        }
    }
    namespace Nonewcmpcr{    ///<Range Comparison Control Register
        using Addr = Register::Address<0x4002704c,0xffffff03,0,unsigned char>;
        ///Continuous detection specification count/state indication bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcocd{}; 
        namespace RcocdValC{
        }
        ///Selection bit of within-range and out-of- range confirmation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcoirs{}; 
        namespace RcoirsValC{
        }
        ///Range comparison interrupt request enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcoie{}; 
        namespace RcoieValC{
        }
        ///Range comparison execution enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcoe{}; 
        namespace RcoeValC{
        }
    }
    namespace Nonewcmpsr{    ///<Range Comparison Channel Select Register
        using Addr = Register::Address<0x4002704d,0xffffffc0,0,unsigned char>;
        ///Comparison mode select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wcmd{}; 
        namespace WcmdValC{
        }
        ///Comparison target analog input channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wcch{}; 
        namespace WcchValC{
        }
    }
    namespace Nonewcmpdl{    ///<Lower Limit Threshold Setup Register
        using Addr = Register::Address<0x40027050,0xffff003f,0,unsigned>;
        ///Lower limit threshold bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmld{}; 
        namespace CmldValC{
        }
    }
    namespace Nonewcmpdh{    ///<Upper Limit Setup Register
        using Addr = Register::Address<0x40027052,0xffff003f,0,unsigned>;
        ///Upper limit threshold bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmhd{}; 
        namespace CmhdValC{
        }
    }
}
