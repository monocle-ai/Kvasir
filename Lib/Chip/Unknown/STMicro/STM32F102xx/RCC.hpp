#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcf00004,0,unsigned>;
        ///Internal High Speed clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        namespace HsionValC{
        }
        ///Internal High Speed clock ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        namespace HsirdyValC{
        }
        ///Internal High Speed clock
              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        namespace HsitrimValC{
        }
        ///Internal High Speed clock
              Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsical{}; 
        namespace HsicalValC{
        }
        ///External High Speed clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        namespace HseonValC{
        }
        ///External High Speed clock ready
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        namespace HserdyValC{
        }
        ///External High Speed clock
              Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        namespace HsebypValC{
        }
        ///Clock Security System
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csson{}; 
        namespace CssonValC{
        }
        ///PLL enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        namespace PllonValC{
        }
        ///PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pllrdy{}; 
        namespace PllrdyValC{
        }
    }
    namespace Nonecfgr{    ///<Clock configuration register
          (RCC_CFGR)
        using Addr = Register::Address<0x40021004,0xf8c00000,0,unsigned>;
        ///System clock Switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
        namespace SwValC{
        }
        ///System Clock Switch Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sws{}; 
        namespace SwsValC{
        }
        ///AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        namespace HpreValC{
        }
        ///APB Low speed prescaler
              (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        namespace Ppre1ValC{
        }
        ///APB High speed prescaler
              (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        namespace Ppre2ValC{
        }
        ///ADC prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> adcpre{}; 
        namespace AdcpreValC{
        }
        ///PLL entry clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        namespace PllsrcValC{
        }
        ///HSE divider for PLL entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pllxtpre{}; 
        namespace PllxtpreValC{
        }
        ///PLL Multiplication Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        namespace PllmulValC{
        }
        ///Microcontroller clock
              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mco{}; 
        namespace McoValC{
        }
    }
    namespace Nonecir{    ///<Clock interrupt register
          (RCC_CIR)
        using Addr = Register::Address<0x40021008,0xff60e060,0,unsigned>;
        ///LSI Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
        namespace LsirdyfValC{
        }
        ///LSE Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        namespace LserdyfValC{
        }
        ///HSI Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsirdyf{}; 
        namespace HsirdyfValC{
        }
        ///HSE Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        namespace HserdyfValC{
        }
        ///PLL Ready Interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        namespace PllrdyfValC{
        }
        ///Clock Security System Interrupt
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cssf{}; 
        namespace CssfValC{
        }
        ///LSI Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
        namespace LsirdyieValC{
        }
        ///LSE Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        namespace LserdyieValC{
        }
        ///HSI Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsirdyie{}; 
        namespace HsirdyieValC{
        }
        ///HSE Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        namespace HserdyieValC{
        }
        ///PLL Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        namespace PllrdyieValC{
        }
        ///LSI Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
        namespace LsirdycValC{
        }
        ///LSE Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        namespace LserdycValC{
        }
        ///HSI Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsirdyc{}; 
        namespace HsirdycValC{
        }
        ///HSE Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        namespace HserdycValC{
        }
        ///PLL Ready Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        namespace PllrdycValC{
        }
        ///Clock security system interrupt
              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
        namespace CsscValC{
        }
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register
          (RCC_APB2RSTR)
        using Addr = Register::Address<0x4002100c,0xffffadc2,0,unsigned>;
        ///Alternate function I/O
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> afiorst{}; 
        namespace AfiorstValC{
        }
        ///IO port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ioparst{}; 
        namespace IoparstValC{
        }
        ///IO port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        namespace IopbrstValC{
        }
        ///IO port C reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        namespace IopcrstValC{
        }
        ///IO port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        namespace IopdrstValC{
        }
        ///ADC 1 interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1rst{}; 
        namespace Adc1rstValC{
        }
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        namespace Usart1rstValC{
        }
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register
          (RCC_APB1RSTR)
        using Addr = Register::Address<0x40021010,0xe7ddf7fc,0,unsigned>;
        ///Timer 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        namespace Tim2rstValC{
        }
        ///Timer 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        namespace Tim3rstValC{
        }
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgrst{}; 
        namespace WwdgrstValC{
        }
        ///USART 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        namespace Usart2rstValC{
        }
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///Backup interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bkprst{}; 
        namespace BkprstValC{
        }
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        namespace PwrrstValC{
        }
    }
    namespace Noneahbenr{    ///<AHB Peripheral Clock enable register
          (RCC_AHBENR)
        using Addr = Register::Address<0x40021014,0xffffffa8,0,unsigned>;
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dma1en{}; 
        namespace Dma1enValC{
        }
        ///DMA2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        namespace Dma2enValC{
        }
        ///SRAM interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sramen{}; 
        namespace SramenValC{
        }
        ///FLITF clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flitfen{}; 
        namespace FlitfenValC{
        }
        ///CRC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> crcen{}; 
        namespace CrcenValC{
        }
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable register
          (RCC_APB2ENR)
        using Addr = Register::Address<0x40021018,0xffffadc2,0,unsigned>;
        ///Alternate function I/O clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> afioen{}; 
        namespace AfioenValC{
        }
        ///I/O port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopaen{}; 
        namespace IopaenValC{
        }
        ///I/O port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopben{}; 
        namespace IopbenValC{
        }
        ///I/O port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopcen{}; 
        namespace IopcenValC{
        }
        ///I/O port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iopden{}; 
        namespace IopdenValC{
        }
        ///ADC 1 interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adc1en{}; 
        namespace Adc1enValC{
        }
        ///SPI 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        namespace Spi1enValC{
        }
        ///USART1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        namespace Usart1enValC{
        }
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable register
          (RCC_APB1ENR)
        using Addr = Register::Address<0x4002101c,0xe7ddf7fc,0,unsigned>;
        ///Timer 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        namespace Tim2enValC{
        }
        ///Timer 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        namespace Tim3enValC{
        }
        ///Window watchdog clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        namespace WwdgenValC{
        }
        ///USART 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        namespace Usart2enValC{
        }
        ///I2C 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        namespace I2c1enValC{
        }
        ///Backup interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bkpen{}; 
        namespace BkpenValC{
        }
        ///Power interface clock
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        namespace PwrenValC{
        }
    }
    namespace Nonebdcr{    ///<Backup domain control register
          (RCC_BDCR)
        using Addr = Register::Address<0x40021020,0xfffe7cf8,0,unsigned>;
        ///External Low Speed oscillator
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        namespace LseonValC{
        }
        ///External Low Speed oscillator
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///External Low Speed oscillator
              bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        namespace LsebypValC{
        }
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        namespace RtcselValC{
        }
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///Backup domain software
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
        namespace BdrstValC{
        }
    }
    namespace Nonecsr{    ///<Control/status register
          (RCC_CSR)
        using Addr = Register::Address<0x40021024,0x02fffffc,0,unsigned>;
        ///Internal low speed oscillator
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        namespace LsionValC{
        }
        ///Internal low speed oscillator
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        namespace LsirdyValC{
        }
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        namespace RmvfValC{
        }
        ///PIN reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        namespace PinrstfValC{
        }
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        namespace PorrstfValC{
        }
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        namespace SftrstfValC{
        }
        ///Independent watchdog reset
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        namespace IwdgrstfValC{
        }
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        namespace WwdgrstfValC{
        }
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrrstf{}; 
        namespace LpwrrstfValC{
        }
    }
}
