#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset and clock control
    namespace Nonecr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcf00004,0,unsigned>;
        ///Internal High Speed clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsion{}; 
        namespace HsionValC{
        }
        ///Internal High Speed clock ready               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsirdy{}; 
        namespace HsirdyValC{
        }
        ///Internal High Speed clock               trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> hsitrim{}; 
        namespace HsitrimValC{
        }
        ///Internal High Speed clock               Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> hsical{}; 
        namespace HsicalValC{
        }
        ///External High Speed clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        namespace HseonValC{
        }
        ///External High Speed clock ready               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hserdy{}; 
        namespace HserdyValC{
        }
        ///External High Speed clock               Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        namespace HsebypValC{
        }
        ///Clock Security System               enable
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
    namespace Nonecfgr{    ///<Clock configuration register           (RCC_CFGR)
        using Addr = Register::Address<0x40021004,0xe800c000,0,unsigned>;
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
        ///APB Low speed prescaler               (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        namespace Ppre1ValC{
        }
        ///APB high speed prescaler               (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        namespace Ppre2ValC{
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
        ///USB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> usbpres{}; 
        namespace UsbpresValC{
        }
        ///Microcontroller clock               output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> mco{}; 
        namespace McoValC{
        }
        ///Microcontroller Clock Output               Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mcof{}; 
        namespace McofValC{
        }
        ///I2S external clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> i2ssrc{}; 
        namespace I2ssrcValC{
        }
    }
    namespace Nonecir{    ///<Clock interrupt register           (RCC_CIR)
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
        ///Clock Security System Interrupt               flag
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
        ///Clock security system interrupt               clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cssc{}; 
        namespace CsscValC{
        }
    }
    namespace Noneapb2rstr{    ///<APB2 peripheral reset register           (RCC_APB2RSTR)
        using Addr = Register::Address<0x4002100c,0xfff887fe,0,unsigned>;
        ///SYSCFG and COMP reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
        namespace SyscfgrstValC{
        }
        ///TIM1 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1rst{}; 
        namespace Tim1rstValC{
        }
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///TIM8 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8rst{}; 
        namespace Tim8rstValC{
        }
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        namespace Usart1rstValC{
        }
        ///TIM15 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15rst{}; 
        namespace Tim15rstValC{
        }
        ///TIM16 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16rst{}; 
        namespace Tim16rstValC{
        }
        ///TIM17 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17rst{}; 
        namespace Tim17rstValC{
        }
    }
    namespace Noneapb1rstr{    ///<APB1 peripheral reset register           (RCC_APB1RSTR)
        using Addr = Register::Address<0x40021010,0xcd0137c8,0,unsigned>;
        ///Timer 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        namespace Tim2rstValC{
        }
        ///Timer 3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        namespace Tim3rstValC{
        }
        ///Timer 14 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4rst{}; 
        namespace Tim4rstValC{
        }
        ///Timer 6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        namespace Tim6rstValC{
        }
        ///Timer 7 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        namespace Tim7rstValC{
        }
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgrst{}; 
        namespace WwdgrstValC{
        }
        ///SPI2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        namespace Spi2rstValC{
        }
        ///SPI3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3rst{}; 
        namespace Spi3rstValC{
        }
        ///USART 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2rst{}; 
        namespace Usart2rstValC{
        }
        ///USART3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart3rst{}; 
        namespace Usart3rstValC{
        }
        ///UART 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> uart4rst{}; 
        namespace Uart4rstValC{
        }
        ///UART 5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> uart5rst{}; 
        namespace Uart5rstValC{
        }
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///I2C2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        namespace I2c2rstValC{
        }
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///CAN reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> canrst{}; 
        namespace CanrstValC{
        }
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        namespace PwrrstValC{
        }
        ///DAC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
        namespace DacrstValC{
        }
    }
    namespace Noneahbenr{    ///<AHB Peripheral Clock enable register           (RCC_AHBENR)
        using Addr = Register::Address<0x40021014,0xce81ffa8,0,unsigned>;
        ///DMA1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///DMA2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dma2en{}; 
        namespace Dma2enValC{
        }
        ///SRAM interface clock               enable
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
        ///I/O port A clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iopaen{}; 
        namespace IopaenValC{
        }
        ///I/O port B clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iopben{}; 
        namespace IopbenValC{
        }
        ///I/O port C clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iopcen{}; 
        namespace IopcenValC{
        }
        ///I/O port D clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iopden{}; 
        namespace IopdenValC{
        }
        ///I/O port E clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iopeen{}; 
        namespace IopeenValC{
        }
        ///I/O port F clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iopfen{}; 
        namespace IopfenValC{
        }
        ///Touch sensing controller clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tscen{}; 
        namespace TscenValC{
        }
        ///ADC1 and ADC2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc12en{}; 
        namespace Adc12enValC{
        }
        ///ADC3 and ADC4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> adc34en{}; 
        namespace Adc34enValC{
        }
    }
    namespace Noneapb2enr{    ///<APB2 peripheral clock enable register           (RCC_APB2ENR)
        using Addr = Register::Address<0x40021018,0xfff887fe,0,unsigned>;
        ///SYSCFG clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
        namespace SyscfgenValC{
        }
        ///TIM1 Timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tim1en{}; 
        namespace Tim1enValC{
        }
        ///SPI 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        namespace Spi1enValC{
        }
        ///TIM8 Timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim8en{}; 
        namespace Tim8enValC{
        }
        ///USART1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        namespace Usart1enValC{
        }
        ///TIM15 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim15en{}; 
        namespace Tim15enValC{
        }
        ///TIM16 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tim16en{}; 
        namespace Tim16enValC{
        }
        ///TIM17 timer clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tim17en{}; 
        namespace Tim17enValC{
        }
    }
    namespace Noneapb1enr{    ///<APB1 peripheral clock enable register           (RCC_APB1ENR)
        using Addr = Register::Address<0x4002101c,0xcd1d37c8,0,unsigned>;
        ///Timer 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        namespace Tim2enValC{
        }
        ///Timer 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        namespace Tim3enValC{
        }
        ///Timer 4 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim4en{}; 
        namespace Tim4enValC{
        }
        ///Timer 6 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        namespace Tim6enValC{
        }
        ///Timer 7 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        namespace Tim7enValC{
        }
        ///Window watchdog clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        namespace WwdgenValC{
        }
        ///SPI 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        namespace Spi2enValC{
        }
        ///SPI 3 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3en{}; 
        namespace Spi3enValC{
        }
        ///USART 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        namespace Usart2enValC{
        }
        ///I2C 1 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        namespace I2c1enValC{
        }
        ///I2C 2 clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        namespace I2c2enValC{
        }
        ///USB clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        namespace UsbenValC{
        }
        ///CAN clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> canen{}; 
        namespace CanenValC{
        }
        ///Power interface clock               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        namespace PwrenValC{
        }
        ///DAC interface clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
        namespace DacenValC{
        }
    }
    namespace Nonebdcr{    ///<Backup domain control register           (RCC_BDCR)
        using Addr = Register::Address<0x40021020,0xfffe7ce0,0,unsigned>;
        ///External Low Speed oscillator               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lseon{}; 
        namespace LseonValC{
        }
        ///External Low Speed oscillator               ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdy{}; 
        namespace LserdyValC{
        }
        ///External Low Speed oscillator               bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        namespace LsebypValC{
        }
        ///LSE oscillator drive               capability
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        namespace LsedrvValC{
        }
        ///RTC clock source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        namespace RtcselValC{
        }
        ///RTC clock enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///Backup domain software               reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bdrst{}; 
        namespace BdrstValC{
        }
    }
    namespace Nonecsr{    ///<Control/status register           (RCC_CSR)
        using Addr = Register::Address<0x40021024,0x00fffffc,0,unsigned>;
        ///Internal low speed oscillator               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
        namespace LsionValC{
        }
        ///Internal low speed oscillator               ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        namespace LsirdyValC{
        }
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        namespace RmvfValC{
        }
        ///Option byte loader reset               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        namespace OblrstfValC{
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
        ///Independent watchdog reset               flag
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
    namespace Noneahbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40021028,0xce81ffff,0,unsigned>;
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ioparst{}; 
        namespace IoparstValC{
        }
        ///I/O port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        namespace IopbrstValC{
        }
        ///I/O port C reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        namespace IopcrstValC{
        }
        ///I/O port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        namespace IopdrstValC{
        }
        ///I/O port E reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ioperst{}; 
        namespace IoperstValC{
        }
        ///I/O port F reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iopfrst{}; 
        namespace IopfrstValC{
        }
        ///Touch sensing controller               reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tscrst{}; 
        namespace TscrstValC{
        }
        ///ADC1 and ADC2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adc12rst{}; 
        namespace Adc12rstValC{
        }
        ///ADC3 and ADC4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> adc34rst{}; 
        namespace Adc34rstValC{
        }
    }
    namespace Nonecfgr2{    ///<Clock configuration register 2
        using Addr = Register::Address<0x4002102c,0xffffc000,0,unsigned>;
        ///PREDIV division factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prediv{}; 
        namespace PredivValC{
        }
        ///ADC1 and ADC2 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,4),Register::ReadWriteAccess,unsigned> adc12pres{}; 
        namespace Adc12presValC{
        }
        ///ADC3 and ADC4 prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,9),Register::ReadWriteAccess,unsigned> adc34pres{}; 
        namespace Adc34presValC{
        }
    }
    namespace Nonecfgr3{    ///<Clock configuration register 3
        using Addr = Register::Address<0x40021030,0xff00fccc,0,unsigned>;
        ///USART1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> usart1sw{}; 
        namespace Usart1swValC{
        }
        ///I2C1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> i2c1sw{}; 
        namespace I2c1swValC{
        }
        ///I2C2 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> i2c2sw{}; 
        namespace I2c2swValC{
        }
        ///USART2 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> usart2sw{}; 
        namespace Usart2swValC{
        }
        ///USART3 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> usart3sw{}; 
        namespace Usart3swValC{
        }
        ///Timer1 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim1sw{}; 
        namespace Tim1swValC{
        }
        ///Timer8 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tim8sw{}; 
        namespace Tim8swValC{
        }
        ///UART4 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> uart4sw{}; 
        namespace Uart4swValC{
        }
        ///UART5 clock source               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> uart5sw{}; 
        namespace Uart5swValC{
        }
    }
}
