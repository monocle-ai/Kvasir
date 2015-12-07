#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Integration Module
    namespace SimSopt1{    ///<System Options Register 1
        using Addr = Register::Address<0x40047000,0x1ff3ffff,0,unsigned>;
        ///32K oscillator clock select
        enum class Osc32kselVal {
            v00=0x00000000,     ///<System oscillator (OSC32KCLK)
            v10=0x00000002,     ///<RTC_CLKIN
            v11=0x00000003,     ///<LPO 1kHz
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Osc32kselVal> osc32ksel{}; 
        namespace Osc32kselValC{
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(osc32ksel),Osc32kselVal::v11> v11{};
        }
        ///USB voltage regulator in standby mode during VLPR and VLPW modes
        enum class UsbvstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during VLPR and VLPW modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during VLPR and VLPW modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UsbvstbyVal> usbvstby{}; 
        namespace UsbvstbyValC{
            constexpr Register::FieldValue<decltype(usbvstby),UsbvstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbvstby),UsbvstbyVal::v1> v1{};
        }
        ///USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
        enum class UsbsstbyVal {
            v0=0x00000000,     ///<USB voltage regulator not in standby during Stop, VLPS, LLS and VLLS modes.
            v1=0x00000001,     ///<USB voltage regulator in standby during Stop, VLPS, LLS and VLLS modes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,UsbsstbyVal> usbsstby{}; 
        namespace UsbsstbyValC{
            constexpr Register::FieldValue<decltype(usbsstby),UsbsstbyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsstby),UsbsstbyVal::v1> v1{};
        }
        ///USB voltage regulator enable
        enum class UsbregenVal {
            v0=0x00000000,     ///<USB voltage regulator is disabled.
            v1=0x00000001,     ///<USB voltage regulator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UsbregenVal> usbregen{}; 
        namespace UsbregenValC{
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbregen),UsbregenVal::v1> v1{};
        }
    }
    namespace SimSopt1cfg{    ///<SOPT1 Configuration Register
        using Addr = Register::Address<0x40047004,0xf8ffffff,0,unsigned>;
        ///USB voltage regulator enable write enable
        enum class UrweVal {
            v0=0x00000000,     ///<SOPT1 USBREGEN cannot be written.
            v1=0x00000001,     ///<SOPT1 USBREGEN can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UrweVal> urwe{}; 
        namespace UrweValC{
            constexpr Register::FieldValue<decltype(urwe),UrweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(urwe),UrweVal::v1> v1{};
        }
        ///USB voltage regulator VLP standby write enable
        enum class UvsweVal {
            v0=0x00000000,     ///<SOPT1 USBVSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBVSTB can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,UvsweVal> uvswe{}; 
        namespace UvsweValC{
            constexpr Register::FieldValue<decltype(uvswe),UvsweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uvswe),UvsweVal::v1> v1{};
        }
        ///USB voltage regulator stop standby write enable
        enum class UssweVal {
            v0=0x00000000,     ///<SOPT1 USBSSTB cannot be written.
            v1=0x00000001,     ///<SOPT1 USBSSTB can be written.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,UssweVal> usswe{}; 
        namespace UssweValC{
            constexpr Register::FieldValue<decltype(usswe),UssweVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usswe),UssweVal::v1> v1{};
        }
    }
    namespace SimSopt2{    ///<System Options Register 2
        using Addr = Register::Address<0x40048004,0xf0faff0f,0,unsigned>;
        ///RTC clock out select
        enum class RtcclkoutselVal {
            v0=0x00000000,     ///<RTC 1 Hz clock is output on the RTC_CLKOUT pin.
            v1=0x00000001,     ///<OSCERCLK clock is output on the RTC_CLKOUT pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RtcclkoutselVal> rtcclkoutsel{}; 
        namespace RtcclkoutselValC{
            constexpr Register::FieldValue<decltype(rtcclkoutsel),RtcclkoutselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtcclkoutsel),RtcclkoutselVal::v1> v1{};
        }
        ///CLKOUT select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> clkoutsel{}; 
        namespace ClkoutselValC{
        }
        ///PLL/FLL clock select
        enum class PllfllselVal {
            v0=0x00000000,     ///<MCGFLLCLK clock
            v1=0x00000001,     ///<MCGPLLCLK clock with fixed divide by two
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PllfllselVal> pllfllsel{}; 
        namespace PllfllselValC{
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pllfllsel),PllfllselVal::v1> v1{};
        }
        ///USB clock source select
        enum class UsbsrcVal {
            v0=0x00000000,     ///<External bypass clock (USB_CLKIN).
            v1=0x00000001,     ///<MCGPLLCLK/2 or MCGFLLCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbsrcVal> usbsrc{}; 
        namespace UsbsrcValC{
            constexpr Register::FieldValue<decltype(usbsrc),UsbsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbsrc),UsbsrcVal::v1> v1{};
        }
        ///TPM clock source select
        enum class TpmsrcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK clock or MCGPLLCLK/2
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,TpmsrcVal> tpmsrc{}; 
        namespace TpmsrcValC{
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpmsrc),TpmsrcVal::v11> v11{};
        }
        ///UART0 clock source select
        enum class Uart0srcVal {
            v00=0x00000000,     ///<Clock disabled
            v01=0x00000001,     ///<MCGFLLCLK clock or MCGPLLCLK/2 clock
            v10=0x00000002,     ///<OSCERCLK clock
            v11=0x00000003,     ///<MCGIRCLK clock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Uart0srcVal> uart0src{}; 
        namespace Uart0srcValC{
            constexpr Register::FieldValue<decltype(uart0src),Uart0srcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0src),Uart0srcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0src),Uart0srcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(uart0src),Uart0srcVal::v11> v11{};
        }
    }
    namespace SimSopt4{    ///<System Options Register 4
        using Addr = Register::Address<0x4004800c,0xf8ebffff,0,unsigned>;
        ///TPM1 channel 0 input capture source select
        enum class Tpm1ch0srcVal {
            v0=0x00000000,     ///<TPM1_CH0 signal
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Tpm1ch0srcVal> tpm1ch0src{}; 
        namespace Tpm1ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1ch0src),Tpm1ch0srcVal::v1> v1{};
        }
        ///TPM2 channel 0 input capture source select
        enum class Tpm2ch0srcVal {
            v0=0x00000000,     ///<TPM2_CH0 signal
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Tpm2ch0srcVal> tpm2ch0src{}; 
        namespace Tpm2ch0srcValC{
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2ch0src),Tpm2ch0srcVal::v1> v1{};
        }
        ///TPM0 External Clock Pin Select
        enum class Tpm0clkselVal {
            v0=0x00000000,     ///<TPM0 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM0 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tpm0clkselVal> tpm0clksel{}; 
        namespace Tpm0clkselValC{
            constexpr Register::FieldValue<decltype(tpm0clksel),Tpm0clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm0clksel),Tpm0clkselVal::v1> v1{};
        }
        ///TPM1 External Clock Pin Select
        enum class Tpm1clkselVal {
            v0=0x00000000,     ///<TPM1 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM1 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tpm1clkselVal> tpm1clksel{}; 
        namespace Tpm1clkselValC{
            constexpr Register::FieldValue<decltype(tpm1clksel),Tpm1clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1clksel),Tpm1clkselVal::v1> v1{};
        }
        ///TPM2 External Clock Pin Select
        enum class Tpm2clkselVal {
            v0=0x00000000,     ///<TPM2 external clock driven by TPM_CLKIN0 pin.
            v1=0x00000001,     ///<TPM2 external clock driven by TPM_CLKIN1 pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tpm2clkselVal> tpm2clksel{}; 
        namespace Tpm2clkselValC{
            constexpr Register::FieldValue<decltype(tpm2clksel),Tpm2clkselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2clksel),Tpm2clkselVal::v1> v1{};
        }
    }
    namespace SimSopt5{    ///<System Options Register 5
        using Addr = Register::Address<0x40048010,0xfff8ff88,0,unsigned>;
        ///UART0 transmit data source select
        enum class Uart0txsrcVal {
            v00=0x00000000,     ///<UART0_TX pin
            v01=0x00000001,     ///<UART0_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<UART0_TX pin modulated with TPM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Uart0txsrcVal> uart0txsrc{}; 
        namespace Uart0txsrcValC{
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart0txsrc),Uart0txsrcVal::v10> v10{};
        }
        ///UART0 receive data source select
        enum class Uart0rxsrcVal {
            v0=0x00000000,     ///<UART0_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Uart0rxsrcVal> uart0rxsrc{}; 
        namespace Uart0rxsrcValC{
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0rxsrc),Uart0rxsrcVal::v1> v1{};
        }
        ///UART1 transmit data source select
        enum class Uart1txsrcVal {
            v00=0x00000000,     ///<UART1_TX pin
            v01=0x00000001,     ///<UART1_TX pin modulated with TPM1 channel 0 output
            v10=0x00000002,     ///<UART1_TX pin modulated with TPM2 channel 0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Uart1txsrcVal> uart1txsrc{}; 
        namespace Uart1txsrcValC{
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(uart1txsrc),Uart1txsrcVal::v10> v10{};
        }
        ///UART1 receive data source select
        enum class Uart1rxsrcVal {
            v0=0x00000000,     ///<UART1_RX pin
            v1=0x00000001,     ///<CMP0 output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Uart1rxsrcVal> uart1rxsrc{}; 
        namespace Uart1rxsrcValC{
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1rxsrc),Uart1rxsrcVal::v1> v1{};
        }
        ///UART0 Open Drain Enable
        enum class Uart0odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART0
            v1=0x00000001,     ///<Open drain is enabled on UART0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Uart0odeVal> uart0ode{}; 
        namespace Uart0odeValC{
            constexpr Register::FieldValue<decltype(uart0ode),Uart0odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0ode),Uart0odeVal::v1> v1{};
        }
        ///UART1 Open Drain Enable
        enum class Uart1odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART1
            v1=0x00000001,     ///<Open drain is enabled on UART1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Uart1odeVal> uart1ode{}; 
        namespace Uart1odeValC{
            constexpr Register::FieldValue<decltype(uart1ode),Uart1odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1ode),Uart1odeVal::v1> v1{};
        }
        ///UART2 Open Drain Enable
        enum class Uart2odeVal {
            v0=0x00000000,     ///<Open drain is disabled on UART2
            v1=0x00000001,     ///<Open drain is enabled on UART2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Uart2odeVal> uart2ode{}; 
        namespace Uart2odeValC{
            constexpr Register::FieldValue<decltype(uart2ode),Uart2odeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2ode),Uart2odeVal::v1> v1{};
        }
    }
    namespace SimSopt7{    ///<System Options Register 7
        using Addr = Register::Address<0x40048018,0xffffff60,0,unsigned>;
        ///ADC0 trigger select
        enum class Adc0trgselVal {
            v0000=0x00000000,     ///<External trigger pin input (EXTRG_IN)
            v0001=0x00000001,     ///<CMP0 output
            v0100=0x00000004,     ///<PIT trigger 0
            v0101=0x00000005,     ///<PIT trigger 1
            v1000=0x00000008,     ///<TPM0 overflow
            v1001=0x00000009,     ///<TPM1 overflow
            v1010=0x0000000a,     ///<TPM2 overflow
            v1100=0x0000000c,     ///<RTC alarm
            v1101=0x0000000d,     ///<RTC seconds
            v1110=0x0000000e,     ///<LPTMR0 trigger
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Adc0trgselVal> adc0trgsel{}; 
        namespace Adc0trgselValC{
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(adc0trgsel),Adc0trgselVal::v1110> v1110{};
        }
        ///ADC0 pretrigger select
        enum class Adc0pretrgselVal {
            v0=0x00000000,     ///<Pre-trigger A
            v1=0x00000001,     ///<Pre-trigger B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc0pretrgselVal> adc0pretrgsel{}; 
        namespace Adc0pretrgselValC{
            constexpr Register::FieldValue<decltype(adc0pretrgsel),Adc0pretrgselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0pretrgsel),Adc0pretrgselVal::v1> v1{};
        }
        ///ADC0 alternate trigger enable
        enum class Adc0alttrgenVal {
            v0=0x00000000,     ///<TPM1 channel 0 (A) and channel 1 (B) triggers selected for ADC0.
            v1=0x00000001,     ///<Alternate trigger selected for ADC0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc0alttrgenVal> adc0alttrgen{}; 
        namespace Adc0alttrgenValC{
            constexpr Register::FieldValue<decltype(adc0alttrgen),Adc0alttrgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0alttrgen),Adc0alttrgenVal::v1> v1{};
        }
    }
    namespace SimSdid{    ///<System Device Identification Register
        using Addr = Register::Address<0x40048024,0x00000070,0,unsigned>;
        ///Pincount identification
        enum class PinidVal {
            v0000=0x00000000,     ///<16-pin
            v0001=0x00000001,     ///<24-pin
            v0010=0x00000002,     ///<32-pin
            v0100=0x00000004,     ///<48-pin
            v0101=0x00000005,     ///<64-pin
            v0110=0x00000006,     ///<80-pin
            v1000=0x00000008,     ///<100-pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PinidVal> pinid{}; 
        namespace PinidValC{
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(pinid),PinidVal::v1000> v1000{};
        }
        ///Device die number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,7),Register::ReadWriteAccess,unsigned> dieid{}; 
        namespace DieidValC{
        }
        ///Device revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> revid{}; 
        namespace RevidValC{
        }
        ///System SRAM Size
        enum class SramsizeVal {
            v0000=0x00000000,     ///<0.5 KB
            v0001=0x00000001,     ///<1 KB
            v0010=0x00000002,     ///<2 KB
            v0011=0x00000003,     ///<4 KB
            v0100=0x00000004,     ///<8 KB
            v0101=0x00000005,     ///<16 KB
            v0110=0x00000006,     ///<32 KB
            v0111=0x00000007,     ///<64 KB
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,SramsizeVal> sramsize{}; 
        namespace SramsizeValC{
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sramsize),SramsizeVal::v0111> v0111{};
        }
        ///Kinetis Series ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> seriesid{}; 
        namespace SeriesidValC{
        }
        ///Kinetis Sub-Family ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> subfamid{}; 
        namespace SubfamidValC{
        }
        ///Kinetis family ID
        enum class FamidVal {
            v0000=0x00000000,     ///<KL0x Family (low end)
            v0001=0x00000001,     ///<KL1x Family (basic)
            v0010=0x00000002,     ///<KL2x Family (USB)
            v0011=0x00000003,     ///<KL3x Family (Segment LCD)
            v0100=0x00000004,     ///<KL4x Family (USB and Segment LCD)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,FamidVal> famid{}; 
        namespace FamidValC{
            constexpr Register::FieldValue<decltype(famid),FamidVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(famid),FamidVal::v0100> v0100{};
        }
    }
    namespace SimScgc4{    ///<System Clock Gating Control Register 4
        using Addr = Register::Address<0x40048034,0xff33e33f,0,unsigned>;
        ///I2C0 Clock Gate Control
        enum class I2c0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,I2c0Val> i2c0{}; 
        namespace I2c0ValC{
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c0),I2c0Val::v1> v1{};
        }
        ///I2C1 Clock Gate Control
        enum class I2c1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,I2c1Val> i2c1{}; 
        namespace I2c1ValC{
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(i2c1),I2c1Val::v1> v1{};
        }
        ///UART0 Clock Gate Control
        enum class Uart0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Uart0Val> uart0{}; 
        namespace Uart0ValC{
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart0),Uart0Val::v1> v1{};
        }
        ///UART1 Clock Gate Control
        enum class Uart1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Uart1Val> uart1{}; 
        namespace Uart1ValC{
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart1),Uart1Val::v1> v1{};
        }
        ///UART2 Clock Gate Control
        enum class Uart2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Uart2Val> uart2{}; 
        namespace Uart2ValC{
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(uart2),Uart2Val::v1> v1{};
        }
        ///USB Clock Gate Control
        enum class UsbotgVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,UsbotgVal> usbotg{}; 
        namespace UsbotgValC{
            constexpr Register::FieldValue<decltype(usbotg),UsbotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbotg),UsbotgVal::v1> v1{};
        }
        ///Comparator Clock Gate Control
        enum class CmpVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CmpVal> cmp{}; 
        namespace CmpValC{
            constexpr Register::FieldValue<decltype(cmp),CmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmp),CmpVal::v1> v1{};
        }
        ///SPI0 Clock Gate Control
        enum class Spi0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Spi0Val> spi0{}; 
        namespace Spi0ValC{
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi0),Spi0Val::v1> v1{};
        }
        ///SPI1 Clock Gate Control
        enum class Spi1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Spi1Val> spi1{}; 
        namespace Spi1ValC{
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(spi1),Spi1Val::v1> v1{};
        }
    }
    namespace SimScgc5{    ///<System Clock Gating Control Register 5
        using Addr = Register::Address<0x40048038,0xffffc1de,0,unsigned>;
        ///Low Power Timer Access Control
        enum class LptmrVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LptmrVal> lptmr{}; 
        namespace LptmrValC{
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lptmr),LptmrVal::v1> v1{};
        }
        ///TSI Access Control
        enum class TsiVal {
            v0=0x00000000,     ///<Access disabled
            v1=0x00000001,     ///<Access enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TsiVal> tsi{}; 
        namespace TsiValC{
            constexpr Register::FieldValue<decltype(tsi),TsiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsi),TsiVal::v1> v1{};
        }
        ///Port A Clock Gate Control
        enum class PortaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,PortaVal> porta{}; 
        namespace PortaValC{
            constexpr Register::FieldValue<decltype(porta),PortaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porta),PortaVal::v1> v1{};
        }
        ///Port B Clock Gate Control
        enum class PortbVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PortbVal> portb{}; 
        namespace PortbValC{
            constexpr Register::FieldValue<decltype(portb),PortbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portb),PortbVal::v1> v1{};
        }
        ///Port C Clock Gate Control
        enum class PortcVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PortcVal> portc{}; 
        namespace PortcValC{
            constexpr Register::FieldValue<decltype(portc),PortcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portc),PortcVal::v1> v1{};
        }
        ///Port D Clock Gate Control
        enum class PortdVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PortdVal> portd{}; 
        namespace PortdValC{
            constexpr Register::FieldValue<decltype(portd),PortdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(portd),PortdVal::v1> v1{};
        }
        ///Port E Clock Gate Control
        enum class PorteVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PorteVal> porte{}; 
        namespace PorteValC{
            constexpr Register::FieldValue<decltype(porte),PorteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(porte),PorteVal::v1> v1{};
        }
    }
    namespace SimScgc6{    ///<System Clock Gating Control Register 6
        using Addr = Register::Address<0x4004803c,0x507ffffc,0,unsigned>;
        ///Flash Memory Clock Gate Control
        enum class FtfVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FtfVal> ftf{}; 
        namespace FtfValC{
            constexpr Register::FieldValue<decltype(ftf),FtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ftf),FtfVal::v1> v1{};
        }
        ///DMA Mux Clock Gate Control
        enum class DmamuxVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmamuxVal> dmamux{}; 
        namespace DmamuxValC{
            constexpr Register::FieldValue<decltype(dmamux),DmamuxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmamux),DmamuxVal::v1> v1{};
        }
        ///PIT Clock Gate Control
        enum class PitVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PitVal> pit{}; 
        namespace PitValC{
            constexpr Register::FieldValue<decltype(pit),PitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pit),PitVal::v1> v1{};
        }
        ///TPM0 Clock Gate Control
        enum class Tpm0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tpm0Val> tpm0{}; 
        namespace Tpm0ValC{
            constexpr Register::FieldValue<decltype(tpm0),Tpm0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm0),Tpm0Val::v1> v1{};
        }
        ///TPM1 Clock Gate Control
        enum class Tpm1Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tpm1Val> tpm1{}; 
        namespace Tpm1ValC{
            constexpr Register::FieldValue<decltype(tpm1),Tpm1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm1),Tpm1Val::v1> v1{};
        }
        ///TPM2 Clock Gate Control
        enum class Tpm2Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Tpm2Val> tpm2{}; 
        namespace Tpm2ValC{
            constexpr Register::FieldValue<decltype(tpm2),Tpm2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tpm2),Tpm2Val::v1> v1{};
        }
        ///ADC0 Clock Gate Control
        enum class Adc0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Adc0Val> adc0{}; 
        namespace Adc0ValC{
            constexpr Register::FieldValue<decltype(adc0),Adc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adc0),Adc0Val::v1> v1{};
        }
        ///RTC Access Control
        enum class RtcVal {
            v0=0x00000000,     ///<Access and interrupts disabled
            v1=0x00000001,     ///<Access and interrupts enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcVal> rtc{}; 
        namespace RtcValC{
            constexpr Register::FieldValue<decltype(rtc),RtcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rtc),RtcVal::v1> v1{};
        }
        ///DAC0 Clock Gate Control
        enum class Dac0Val {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Dac0Val> dac0{}; 
        namespace Dac0ValC{
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dac0),Dac0Val::v1> v1{};
        }
    }
    namespace SimScgc7{    ///<System Clock Gating Control Register 7
        using Addr = Register::Address<0x40048040,0xfffffeff,0,unsigned>;
        ///DMA Clock Gate Control
        enum class DmaVal {
            v0=0x00000000,     ///<Clock disabled
            v1=0x00000001,     ///<Clock enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DmaVal> dma{}; 
        namespace DmaValC{
            constexpr Register::FieldValue<decltype(dma),DmaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dma),DmaVal::v1> v1{};
        }
    }
    namespace SimClkdiv1{    ///<System Clock Divider Register 1
        using Addr = Register::Address<0x40048044,0x0ff8ffff,0,unsigned>;
        ///Clock 4 output divider value
        enum class Outdiv4Val {
            v000=0x00000000,     ///<Divide-by-1.
            v001=0x00000001,     ///<Divide-by-2.
            v010=0x00000002,     ///<Divide-by-3.
            v011=0x00000003,     ///<Divide-by-4.
            v100=0x00000004,     ///<Divide-by-5.
            v101=0x00000005,     ///<Divide-by-6.
            v110=0x00000006,     ///<Divide-by-7.
            v111=0x00000007,     ///<Divide-by-8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,Outdiv4Val> outdiv4{}; 
        namespace Outdiv4ValC{
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v010> v010{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v110> v110{};
            constexpr Register::FieldValue<decltype(outdiv4),Outdiv4Val::v111> v111{};
        }
        ///Clock 1 output divider value
        enum class Outdiv1Val {
            v0000=0x00000000,     ///<Divide-by-1.
            v0001=0x00000001,     ///<Divide-by-2.
            v0010=0x00000002,     ///<Divide-by-3.
            v0011=0x00000003,     ///<Divide-by-4.
            v0100=0x00000004,     ///<Divide-by-5.
            v0101=0x00000005,     ///<Divide-by-6.
            v0110=0x00000006,     ///<Divide-by-7.
            v0111=0x00000007,     ///<Divide-by-8.
            v1000=0x00000008,     ///<Divide-by-9.
            v1001=0x00000009,     ///<Divide-by-10.
            v1010=0x0000000a,     ///<Divide-by-11.
            v1011=0x0000000b,     ///<Divide-by-12.
            v1100=0x0000000c,     ///<Divide-by-13.
            v1101=0x0000000d,     ///<Divide-by-14.
            v1110=0x0000000e,     ///<Divide-by-15.
            v1111=0x0000000f,     ///<Divide-by-16.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Outdiv1Val> outdiv1{}; 
        namespace Outdiv1ValC{
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(outdiv1),Outdiv1Val::v1111> v1111{};
        }
    }
    namespace SimFcfg1{    ///<Flash Configuration Register 1
        using Addr = Register::Address<0x4004804c,0xf0fffffc,0,unsigned>;
        ///Flash Disable
        enum class FlashdisVal {
            v0=0x00000000,     ///<Flash is enabled
            v1=0x00000001,     ///<Flash is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FlashdisVal> flashdis{}; 
        namespace FlashdisValC{
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdis),FlashdisVal::v1> v1{};
        }
        ///Flash Doze
        enum class FlashdozeVal {
            v0=0x00000000,     ///<Flash remains enabled during Doze mode
            v1=0x00000001,     ///<Flash is disabled for the duration of Doze mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FlashdozeVal> flashdoze{}; 
        namespace FlashdozeValC{
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flashdoze),FlashdozeVal::v1> v1{};
        }
        ///Program flash size
        enum class PfsizeVal {
            v0000=0x00000000,     ///<8 KB of program flash memory, 0.25 KB protection region
            v0001=0x00000001,     ///<16 KB of program flash memory, 0.5 KB protection region
            v0011=0x00000003,     ///<32 KB of program flash memory, 1 KB protection region
            v0101=0x00000005,     ///<64 KB of program flash memory, 2 KB protection region
            v0111=0x00000007,     ///<128 KB of program flash memory, 4 KB protection region
            v1001=0x00000009,     ///<256 KB of program flash memory, 8 KB protection region
            v1111=0x0000000f,     ///<128 KB of program flash memory, 4 KB protection region
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,PfsizeVal> pfsize{}; 
        namespace PfsizeValC{
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(pfsize),PfsizeVal::v1111> v1111{};
        }
    }
    namespace SimFcfg2{    ///<Flash Configuration Register 2
        using Addr = Register::Address<0x40048050,0x80ffffff,0,unsigned>;
        ///Max address block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> maxaddr0{}; 
        namespace Maxaddr0ValC{
        }
    }
    namespace SimUidmh{    ///<Unique Identification Register Mid-High
        using Addr = Register::Address<0x40048058,0xffff0000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUidml{    ///<Unique Identification Register Mid Low
        using Addr = Register::Address<0x4004805c,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimUidl{    ///<Unique Identification Register Low
        using Addr = Register::Address<0x40048060,0x00000000,0,unsigned>;
        ///Unique Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace SimCopc{    ///<COP Control Register
        using Addr = Register::Address<0x40048100,0xfffffff0,0,unsigned>;
        ///COP windowed mode
        enum class CopwVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Windowed mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CopwVal> copw{}; 
        namespace CopwValC{
            constexpr Register::FieldValue<decltype(copw),CopwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copw),CopwVal::v1> v1{};
        }
        ///COP Clock Select
        enum class CopclksVal {
            v0=0x00000000,     ///<Internal 1 kHz clock is source to COP
            v1=0x00000001,     ///<Bus clock is source to COP
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CopclksVal> copclks{}; 
        namespace CopclksValC{
            constexpr Register::FieldValue<decltype(copclks),CopclksVal::v0> v0{};
            constexpr Register::FieldValue<decltype(copclks),CopclksVal::v1> v1{};
        }
        ///COP Watchdog Timeout
        enum class CoptVal {
            v00=0x00000000,     ///<COP disabled
            v01=0x00000001,     ///<COP timeout after 2^5 LPO cycles or 213 bus clock cycles
            v10=0x00000002,     ///<COP timeout after 2^8 LPO cycles or 216 bus clock cycles
            v11=0x00000003,     ///<COP timeout after 2^10 LPO cycles or 218 bus clock cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CoptVal> copt{}; 
        namespace CoptValC{
            constexpr Register::FieldValue<decltype(copt),CoptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(copt),CoptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(copt),CoptVal::v10> v10{};
            constexpr Register::FieldValue<decltype(copt),CoptVal::v11> v11{};
        }
    }
    namespace SimSrvcop{    ///<Service COP Register
        using Addr = Register::Address<0x40048104,0xffffff00,0,unsigned>;
        ///Sevice COP Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> srvcop{}; 
        namespace SrvcopValC{
        }
    }
}
