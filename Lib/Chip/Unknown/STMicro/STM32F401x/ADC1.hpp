#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-digital converter
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40012000,0xffffffc0,0,unsigned>;
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Regular channel start flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> strt{}; 
        namespace StrtValC{
        }
        ///Injected channel start               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jstrt{}; 
        namespace JstrtValC{
        }
        ///Injected channel end of               conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jeoc{}; 
        namespace JeocValC{
        }
        ///Regular channel end of               conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///Analog watchdog flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> awd{}; 
        namespace AwdValC{
        }
    }
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40012004,0xf83f0000,0,unsigned>;
        ///Overrun interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
        ///Resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
        ///Analog watchdog enable on regular               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awden{}; 
        namespace AwdenValC{
        }
        ///Analog watchdog enable on injected               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jawden{}; 
        namespace JawdenValC{
        }
        ///Discontinuous mode channel               count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> discnum{}; 
        namespace DiscnumValC{
        }
        ///Discontinuous mode on injected               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        namespace JdiscenValC{
        }
        ///Discontinuous mode on regular               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> discen{}; 
        namespace DiscenValC{
        }
        ///Automatic injected group               conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jauto{}; 
        namespace JautoValC{
        }
        ///Enable the watchdog on a single channel               in scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awdsgl{}; 
        namespace AwdsglValC{
        }
        ///Scan mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> scan{}; 
        namespace ScanValC{
        }
        ///Interrupt enable for injected               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
        ///Analog watchdog interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///Interrupt enable for EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eocie{}; 
        namespace EocieValC{
        }
        ///Analog watchdog channel select               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40012008,0x8080f0fc,0,unsigned>;
        ///Start conversion of regular               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> swstart{}; 
        namespace SwstartValC{
        }
        ///External trigger enable for regular               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> exten{}; 
        namespace ExtenValC{
        }
        ///External event select for regular               group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> extsel{}; 
        namespace ExtselValC{
        }
        ///Start conversion of injected               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> jswstart{}; 
        namespace JswstartValC{
        }
        ///External trigger enable for injected               channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///External event select for injected               group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///Data alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> align{}; 
        namespace AlignValC{
        }
        ///End of conversion               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eocs{}; 
        namespace EocsValC{
        }
        ///DMA disable selection (for single ADC               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dds{}; 
        namespace DdsValC{
        }
        ///Direct memory access mode (for single               ADC mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        ///Continuous conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cont{}; 
        namespace ContValC{
        }
        ///A/D Converter ON / OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
        namespace AdonValC{
        }
    }
    namespace Nonesmpr1{    ///<sample time register 1
        using Addr = Register::Address<0x4001200c,0x00000000,0,unsigned>;
        ///Sample time bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
        namespace SmpxxValC{
        }
    }
    namespace Nonesmpr2{    ///<sample time register 2
        using Addr = Register::Address<0x40012010,0x00000000,0,unsigned>;
        ///Sample time bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> smpxX{}; 
        namespace SmpxxValC{
        }
    }
    namespace Nonejofr1{    ///<injected channel data offset register           x
        using Addr = Register::Address<0x40012014,0xfffff000,0,unsigned>;
        ///Data offset for injected channel               x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset1{}; 
        namespace Joffset1ValC{
        }
    }
    namespace Nonejofr2{    ///<injected channel data offset register           x
        using Addr = Register::Address<0x40012018,0xfffff000,0,unsigned>;
        ///Data offset for injected channel               x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset2{}; 
        namespace Joffset2ValC{
        }
    }
    namespace Nonejofr3{    ///<injected channel data offset register           x
        using Addr = Register::Address<0x4001201c,0xfffff000,0,unsigned>;
        ///Data offset for injected channel               x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset3{}; 
        namespace Joffset3ValC{
        }
    }
    namespace Nonejofr4{    ///<injected channel data offset register           x
        using Addr = Register::Address<0x40012020,0xfffff000,0,unsigned>;
        ///Data offset for injected channel               x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> joffset4{}; 
        namespace Joffset4ValC{
        }
    }
    namespace Nonehtr{    ///<watchdog higher threshold           register
        using Addr = Register::Address<0x40012024,0xfffff000,0,unsigned>;
        ///Analog watchdog higher               threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ht{}; 
        namespace HtValC{
        }
    }
    namespace Noneltr{    ///<watchdog lower threshold           register
        using Addr = Register::Address<0x40012028,0xfffff000,0,unsigned>;
        ///Analog watchdog lower               threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt{}; 
        namespace LtValC{
        }
    }
    namespace Nonesqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x4001202c,0xff000000,0,unsigned>;
        ///Regular channel sequence               length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> l{}; 
        namespace LValC{
        }
        ///16th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq16{}; 
        namespace Sq16ValC{
        }
        ///15th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq15{}; 
        namespace Sq15ValC{
        }
        ///14th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq14{}; 
        namespace Sq14ValC{
        }
        ///13th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq13{}; 
        namespace Sq13ValC{
        }
    }
    namespace Nonesqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x40012030,0xc0000000,0,unsigned>;
        ///12th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq12{}; 
        namespace Sq12ValC{
        }
        ///11th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq11{}; 
        namespace Sq11ValC{
        }
        ///10th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq10{}; 
        namespace Sq10ValC{
        }
        ///9th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq9{}; 
        namespace Sq9ValC{
        }
        ///8th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq8{}; 
        namespace Sq8ValC{
        }
        ///7th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq7{}; 
        namespace Sq7ValC{
        }
    }
    namespace Nonesqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x40012034,0xc0000000,0,unsigned>;
        ///6th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,25),Register::ReadWriteAccess,unsigned> sq6{}; 
        namespace Sq6ValC{
        }
        ///5th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> sq5{}; 
        namespace Sq5ValC{
        }
        ///4th conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> sq4{}; 
        namespace Sq4ValC{
        }
        ///3rd conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> sq3{}; 
        namespace Sq3ValC{
        }
        ///2nd conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> sq2{}; 
        namespace Sq2ValC{
        }
        ///1st conversion in regular               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq1{}; 
        namespace Sq1ValC{
        }
    }
    namespace Nonejsqr{    ///<injected sequence register
        using Addr = Register::Address<0x40012038,0xffc00000,0,unsigned>;
        ///Injected sequence length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> jl{}; 
        namespace JlValC{
        }
        ///4th conversion in injected               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> jsq4{}; 
        namespace Jsq4ValC{
        }
        ///3rd conversion in injected               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> jsq3{}; 
        namespace Jsq3ValC{
        }
        ///2nd conversion in injected               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> jsq2{}; 
        namespace Jsq2ValC{
        }
        ///1st conversion in injected               sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> jsq1{}; 
        namespace Jsq1ValC{
        }
    }
    namespace Nonejdr1{    ///<injected data register x
        using Addr = Register::Address<0x4001203c,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
    }
    namespace Nonejdr2{    ///<injected data register x
        using Addr = Register::Address<0x40012040,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
    }
    namespace Nonejdr3{    ///<injected data register x
        using Addr = Register::Address<0x40012044,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
    }
    namespace Nonejdr4{    ///<injected data register x
        using Addr = Register::Address<0x40012048,0xffff0000,0,unsigned>;
        ///Injected data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
    }
    namespace Nonedr{    ///<regular data register
        using Addr = Register::Address<0x4001204c,0xffff0000,0,unsigned>;
        ///Regular data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
}
