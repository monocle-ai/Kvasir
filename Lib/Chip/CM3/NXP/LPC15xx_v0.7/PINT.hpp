#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Pin interrupt
and pattern match (PINT) 
    namespace Noneisel{    ///<Pin Interrupt Mode register
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmode0{}; 
        namespace Pmode0ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pmode1{}; 
        namespace Pmode1ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pmode2{}; 
        namespace Pmode2ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pmode3{}; 
        namespace Pmode3ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pmode4{}; 
        namespace Pmode4ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pmode5{}; 
        namespace Pmode5ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pmode6{}; 
        namespace Pmode6ValC{
        }
        ///Selects the interrupt mode for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Edge sensitive 1 = Level sensitive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pmode7{}; 
        namespace Pmode7ValC{
        }
    }
    namespace Noneienr{    ///<Pin interrupt level or rising edge  interrupt enable register
        using Addr = Register::Address<0x400a4004,0xffffff00,0,unsigned>;
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enrl0{}; 
        namespace Enrl0ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enrl1{}; 
        namespace Enrl1ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enrl2{}; 
        namespace Enrl2ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enrl3{}; 
        namespace Enrl3ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enrl4{}; 
        namespace Enrl4ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enrl5{}; 
        namespace Enrl5ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enrl6{}; 
        namespace Enrl6ValC{
        }
        ///Enables the rising edge or level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable rising edge or level interrupt. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enrl7{}; 
        namespace Enrl7ValC{
        }
    }
    namespace Nonesienr{    ///<Pin interrupt level or rising edge  interrupt set register
        using Addr = Register::Address<0x400a4008,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setenrl0{}; 
        namespace Setenrl0ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setenrl1{}; 
        namespace Setenrl1ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setenrl2{}; 
        namespace Setenrl2ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setenrl3{}; 
        namespace Setenrl3ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setenrl4{}; 
        namespace Setenrl4ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setenrl5{}; 
        namespace Setenrl5ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setenrl6{}; 
        namespace Setenrl6ValC{
        }
        ///Ones written to this address set bits in the IENR, thus enabling interrupts. Bit n sets bit n in the IENR register. 0 = No operation. 1 = Enable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setenrl7{}; 
        namespace Setenrl7ValC{
        }
    }
    namespace Nonecienr{    ///<Pin interrupt level (rising edge interrupt) clear register
        using Addr = Register::Address<0x400a400c,0xffffff00,0,unsigned>;
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenrl0{}; 
        namespace Cenrl0ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cenrl1{}; 
        namespace Cenrl1ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cenrl2{}; 
        namespace Cenrl2ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cenrl3{}; 
        namespace Cenrl3ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cenrl4{}; 
        namespace Cenrl4ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cenrl5{}; 
        namespace Cenrl5ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cenrl6{}; 
        namespace Cenrl6ValC{
        }
        ///Ones written to this address clear bits in the IENR, thus disabling the interrupts. Bit n clears bit n in the IENR register. 0 = No operation. 1 = Disable rising edge or level interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cenrl7{}; 
        namespace Cenrl7ValC{
        }
    }
    namespace Noneienf{    ///<Pin interrupt active level or falling edge  interrupt enable register
        using Addr = Register::Address<0x400a4010,0xffffff00,0,unsigned>;
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enaf0{}; 
        namespace Enaf0ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enaf1{}; 
        namespace Enaf1ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enaf2{}; 
        namespace Enaf2ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enaf3{}; 
        namespace Enaf3ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enaf4{}; 
        namespace Enaf4ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enaf5{}; 
        namespace Enaf5ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enaf6{}; 
        namespace Enaf6ValC{
        }
        ///Enables the falling edge or configures the active level interrupt for each pin interrupt. Bit n configures the pin interrupt selected in PINTSELn. 0 = Disable falling edge interrupt or set active interrupt level LOW. 1 = Enable falling edge interrupt enabled or set active interrupt level HIGH.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enaf7{}; 
        namespace Enaf7ValC{
        }
    }
    namespace Nonesienf{    ///<Pin interrupt active level or falling edge  interrupt set register
        using Addr = Register::Address<0x400a4014,0xffffff00,0,unsigned>;
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setenaf0{}; 
        namespace Setenaf0ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setenaf1{}; 
        namespace Setenaf1ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setenaf2{}; 
        namespace Setenaf2ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setenaf3{}; 
        namespace Setenaf3ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setenaf4{}; 
        namespace Setenaf4ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setenaf5{}; 
        namespace Setenaf5ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setenaf6{}; 
        namespace Setenaf6ValC{
        }
        ///Ones written to this address set bits in the IENF, thus enabling interrupts. Bit n sets bit n in the IENF register. 0 = No operation. 1 = Select HIGH-active interrupt or enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setenaf7{}; 
        namespace Setenaf7ValC{
        }
    }
    namespace Nonecienf{    ///<Pin interrupt active level or falling edge  interrupt clear register
        using Addr = Register::Address<0x400a4018,0xffffff00,0,unsigned>;
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenaf0{}; 
        namespace Cenaf0ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cenaf1{}; 
        namespace Cenaf1ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cenaf2{}; 
        namespace Cenaf2ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cenaf3{}; 
        namespace Cenaf3ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cenaf4{}; 
        namespace Cenaf4ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cenaf5{}; 
        namespace Cenaf5ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cenaf6{}; 
        namespace Cenaf6ValC{
        }
        ///Ones written to this address clears bits in the IENF, thus disabling interrupts. Bit n clears bit n in the IENF register. 0 = No operation. 1 = LOW-active interrupt selected or falling edge interrupt disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cenaf7{}; 
        namespace Cenaf7ValC{
        }
    }
    namespace Nonerise{    ///<Pin interrupt rising edge register
        using Addr = Register::Address<0x400a401c,0xffffff00,0,unsigned>;
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdet0{}; 
        namespace Rdet0ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rdet1{}; 
        namespace Rdet1ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdet2{}; 
        namespace Rdet2ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rdet3{}; 
        namespace Rdet3ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rdet4{}; 
        namespace Rdet4ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rdet5{}; 
        namespace Rdet5ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rdet6{}; 
        namespace Rdet6ValC{
        }
        ///Rising edge detect. Bit n detects the rising edge of the pin selected in PINTSELn. Read 0: No rising edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a rising edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear rising edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rdet7{}; 
        namespace Rdet7ValC{
        }
    }
    namespace Nonefall{    ///<Pin interrupt falling edge register
        using Addr = Register::Address<0x400a4020,0xffffff00,0,unsigned>;
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fdet0{}; 
        namespace Fdet0ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fdet1{}; 
        namespace Fdet1ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdet2{}; 
        namespace Fdet2ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fdet3{}; 
        namespace Fdet3ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fdet4{}; 
        namespace Fdet4ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fdet5{}; 
        namespace Fdet5ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdet6{}; 
        namespace Fdet6ValC{
        }
        ///Falling edge detect. Bit n detects the falling edge of the pin selected in PINTSELn. Read 0: No falling edge has been detected on this pin since Reset or the last time a one was written to this bit. Write 0: no operation. Read 1: a falling edge has been detected since Reset or the last time a one was written to this bit. Write 1: clear falling edge detection for this pin.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fdet7{}; 
        namespace Fdet7ValC{
        }
    }
    namespace Noneist{    ///<Pin interrupt status register
        using Addr = Register::Address<0x400a4024,0xffffff00,0,unsigned>;
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstat0{}; 
        namespace Pstat0ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pstat1{}; 
        namespace Pstat1ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pstat2{}; 
        namespace Pstat2ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pstat3{}; 
        namespace Pstat3ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pstat4{}; 
        namespace Pstat4ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pstat5{}; 
        namespace Pstat5ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pstat6{}; 
        namespace Pstat6ValC{
        }
        ///Pin interrupt status. Bit n returns the status, clears the edge interrupt, or inverts the active level of the pin selected in PINTSELn. Read 0: interrupt is not being requested for this interrupt pin.  Write 0: no operation. Read 1: interrupt is being requested for this interrupt pin. Write 1 (edge-sensitive): clear rising- and falling-edge detection for this pin. Write 1 (level-sensitive): switch the active level for this pin (in the IENF register).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pstat7{}; 
        namespace Pstat7ValC{
        }
    }
    namespace Nonepmctrl{    ///<Pattern match interrupt control register
        using Addr = Register::Address<0x400a4028,0x00fffffc,0,unsigned>;
        ///Specifies whether the 8 pin interrupts are controlled by the pin interrupt function or by the pattern match function.
        enum class SelpmatchVal {
            pinInterruptInter=0x00000000,     ///<Pin interrupt. Interrupts are driven in response to the standard pin interrupt function
            patternMatchInter=0x00000001,     ///<Pattern match. Interrupts are driven in response to pattern matches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SelpmatchVal> selPmatch{}; 
        namespace SelpmatchValC{
            constexpr Register::FieldValue<decltype(selPmatch),SelpmatchVal::pinInterruptInter> pinInterruptInter{};
            constexpr Register::FieldValue<decltype(selPmatch),SelpmatchVal::patternMatchInter> patternMatchInter{};
        }
        ///Enables the RXEV output to the ARM cpu and/or to a GPIO output when the specified boolean expression evaluates to true.
        enum class EnarxevVal {
            disabledRxevOutpu=0x00000000,     ///<Disabled. RXEV output to the cpu is disabled.
            enabledRxevOutput=0x00000001,     ///<Enabled. RXEV output to the cpu is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnarxevVal> enaRxev{}; 
        namespace EnarxevValC{
            constexpr Register::FieldValue<decltype(enaRxev),EnarxevVal::disabledRxevOutpu> disabledRxevOutpu{};
            constexpr Register::FieldValue<decltype(enaRxev),EnarxevVal::enabledRxevOutput> enabledRxevOutput{};
        }
        ///This field displays the current state of pattern matches. A 1 in any bit of this field indicates that the corresponding product term is matched by the current state of the appropriate inputs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pmat{}; 
        namespace PmatValC{
        }
    }
    namespace Nonepmsrc{    ///<Pattern match interrupt bit-slice source register
        using Addr = Register::Address<0x400a402c,0x000000ff,0,unsigned>;
        ///Selects the input source for bit slice 0
        enum class Src0Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects the output of pin interrupt select register 0 as the source to bit slice 0.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects the output of pin interrupt select register 1 as the source to bit slice 0.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects the output of pin interrupt select register 2 as the source to bit slice 0.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects the output of pin interrupt select register 3 as the source to bit slice 0.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects the output of pin interrupt select register 4 as the source to bit slice 0.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects the output of pin interrupt select register 5 as the source to bit slice 0.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects the output of pin interrupt select register 6 as the source to bit slice 0.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects the output of pin interrupt select register 7 as the source to bit slice 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Src0Val> src0{}; 
        namespace Src0ValC{
            constexpr Register::FieldValue<decltype(src0),Src0Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src0),Src0Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 1
        enum class Src1Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 1.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 1.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 1.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 1.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 1.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 1.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 1.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Src1Val> src1{}; 
        namespace Src1ValC{
            constexpr Register::FieldValue<decltype(src1),Src1Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src1),Src1Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 2
        enum class Src2Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 2.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 2.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 2.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 2.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 2.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 2.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 2.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Src2Val> src2{}; 
        namespace Src2ValC{
            constexpr Register::FieldValue<decltype(src2),Src2Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src2),Src2Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 3
        enum class Src3Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 3.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 3.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 3.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 3.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 3.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 3.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 3.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Src3Val> src3{}; 
        namespace Src3ValC{
            constexpr Register::FieldValue<decltype(src3),Src3Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src3),Src3Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 4
        enum class Src4Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 4.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 4.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 4.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 4.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 4.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 4.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 4.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Src4Val> src4{}; 
        namespace Src4ValC{
            constexpr Register::FieldValue<decltype(src4),Src4Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src4),Src4Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 5
        enum class Src5Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 5.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 5.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 5.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 5.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 5.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 5.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 5.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Src5Val> src5{}; 
        namespace Src5ValC{
            constexpr Register::FieldValue<decltype(src5),Src5Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src5),Src5Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 6
        enum class Src6Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 6.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 6.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 6.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 6.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 6.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 6.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 6.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Src6Val> src6{}; 
        namespace Src6ValC{
            constexpr Register::FieldValue<decltype(src6),Src6Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src6),Src6Val::input7SelectsPin> input7SelectsPin{};
        }
        ///Selects the input source for bit slice 7
        enum class Src7Val {
            input0SelectsPin=0x00000000,     ///<Input 0. Selects pin interrupt input 0 as the source to bit slice 7.
            input1SelectsPin=0x00000001,     ///<Input 1. Selects pin interrupt input 1 as the source to bit slice 7.
            input2SelectsPin=0x00000002,     ///<Input 2. Selects pin interrupt input 2 as the source to bit slice 7.
            input3SelectsPin=0x00000003,     ///<Input 3. Selects pin interrupt input 3 as the source to bit slice 7.
            input4SelectsPin=0x00000004,     ///<Input 4. Selects pin interrupt input 4 as the source to bit slice 7.
            input5SelectsPin=0x00000005,     ///<Input 5. Selects pin interrupt input 5 as the source to bit slice 7.
            input6SelectsPin=0x00000006,     ///<Input 6. Selects pin interrupt input 6 as the source to bit slice 7.
            input7SelectsPin=0x00000007,     ///<Input 7. Selects pin interrupt input 7 as the source to bit slice 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Src7Val> src7{}; 
        namespace Src7ValC{
            constexpr Register::FieldValue<decltype(src7),Src7Val::input0SelectsPin> input0SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input1SelectsPin> input1SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input2SelectsPin> input2SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input3SelectsPin> input3SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input4SelectsPin> input4SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input5SelectsPin> input5SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input6SelectsPin> input6SelectsPin{};
            constexpr Register::FieldValue<decltype(src7),Src7Val::input7SelectsPin> input7SelectsPin{};
        }
    }
    namespace Nonepmcfg{    ///<Pattern match interrupt bit slice configuration register
        using Addr = Register::Address<0x400a4030,0x00000080,0,unsigned>;
        ///A 1 in any bit of this field causes the corresponding bit slice to be the final component of a product term in the boolean expression. This has two effects: 1. The interrupt request associated with this bit-slice will be asserted whenever a match to that product term is detected. 2. The next bit slice will start a new, independent product term in the boolean expression (i.e. an OR will be inserted in the boolean expression following the element controlled by this bit slice).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prodEndpts{}; 
        namespace ProdendptsValC{
        }
        ///Specifies the match contribution condition for bit slice 0.
        enum class Cfg0Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Cfg0Val> cfg0{}; 
        namespace Cfg0ValC{
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg0),Cfg0Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 1.
        enum class Cfg1Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,Cfg1Val> cfg1{}; 
        namespace Cfg1ValC{
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg1),Cfg1Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 2.
        enum class Cfg2Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,Cfg2Val> cfg2{}; 
        namespace Cfg2ValC{
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg2),Cfg2Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 3.
        enum class Cfg3Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,Cfg3Val> cfg3{}; 
        namespace Cfg3ValC{
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg3),Cfg3Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 4.
        enum class Cfg4Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Cfg4Val> cfg4{}; 
        namespace Cfg4ValC{
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg4),Cfg4Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 5.
        enum class Cfg5Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,Cfg5Val> cfg5{}; 
        namespace Cfg5ValC{
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg5),Cfg5Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 6.
        enum class Cfg6Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Cfg6Val> cfg6{}; 
        namespace Cfg6ValC{
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg6),Cfg6Val::eventNonStickyRi> eventNonStickyRi{};
        }
        ///Specifies the match contribution condition for bit slice 7.
        enum class Cfg7Val {
            constantHighThis=0x00000000,     ///<Constant HIGH. This bit slice always contributes to a product term match.
            stickyRisingEdgema=0x00000001,     ///<Sticky rising edgeMatch occurs if a rising edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyFallingEdge=0x00000002,     ///<Sticky falling edge. Match occurs if a falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            stickyRisingOrFal=0x00000003,     ///<Sticky rising or falling edge. Match occurs if either a rising or falling edge on the specified input has occurred since the last time the edge detection for this bit slice was cleared. This bit is only cleared when the PMCFG or the PMSRC registers are written to.
            highLevelMatchF=0x00000004,     ///<High level. Match (for this bit slice) occurs when there is a high level on the input specified for this bit slice in the PMSRC register.
            lowLevelMatchOcc=0x00000005,     ///<Low level. Match occurs when there is a low level on the specified input.
            constant0ThisBit=0x00000006,     ///<Constant 0. This bit slice never contributes to a match (should be used to disable any unused bit slices).
            eventNonStickyRi=0x00000007,     ///<Event. Non-sticky rising or falling edge. Match occurs on an event - i.e. when either a rising or falling edge is first detected on the specified input (this is a non-sticky version of option 3) . This bit is cleared after one clock cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Cfg7Val> cfg7{}; 
        namespace Cfg7ValC{
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::constantHighThis> constantHighThis{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::stickyRisingEdgema> stickyRisingEdgema{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::stickyFallingEdge> stickyFallingEdge{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::stickyRisingOrFal> stickyRisingOrFal{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::highLevelMatchF> highLevelMatchF{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::lowLevelMatchOcc> lowLevelMatchOcc{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::constant0ThisBit> constant0ThisBit{};
            constexpr Register::FieldValue<decltype(cfg7),Cfg7Val::eventNonStickyRi> eventNonStickyRi{};
        }
    }
}
