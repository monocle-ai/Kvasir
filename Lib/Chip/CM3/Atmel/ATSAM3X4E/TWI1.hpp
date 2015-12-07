#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Two-wire Interface 1
    namespace Twi1Cr{    ///<Control Register
        using Addr = Register::Address<0x40090000,0xffffff00,0,unsigned>;
        ///Send a START Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Send a STOP Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///TWI Master Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msen{}; 
        namespace MsenValC{
        }
        ///TWI Master Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msdis{}; 
        namespace MsdisValC{
        }
        ///TWI Slave Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sven{}; 
        namespace SvenValC{
        }
        ///TWI Slave Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> svdis{}; 
        namespace SvdisValC{
        }
        ///SMBUS Quick Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> quick{}; 
        namespace QuickValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace Twi1Mmr{    ///<Master Mode Register
        using Addr = Register::Address<0x40090004,0xff80ecff,0,unsigned>;
        ///Internal Device Address Size
        enum class IadrszVal {
            none=0x00000000,     ///<No internal device address
            v1Byte=0x00000001,     ///<One-byte internal device address
            v2Byte=0x00000002,     ///<Two-byte internal device address
            v3Byte=0x00000003,     ///<Three-byte internal device address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,IadrszVal> iadrsz{}; 
        namespace IadrszValC{
            constexpr Register::FieldValue<decltype(iadrsz),IadrszVal::none> none{};
            constexpr Register::FieldValue<decltype(iadrsz),IadrszVal::v1Byte> v1Byte{};
            constexpr Register::FieldValue<decltype(iadrsz),IadrszVal::v2Byte> v2Byte{};
            constexpr Register::FieldValue<decltype(iadrsz),IadrszVal::v3Byte> v3Byte{};
        }
        ///Master Read Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mread{}; 
        namespace MreadValC{
        }
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace Twi1Smr{    ///<Slave Mode Register
        using Addr = Register::Address<0x40090008,0xff80ffff,0,unsigned>;
        ///Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace Twi1Iadr{    ///<Internal Address Register
        using Addr = Register::Address<0x4009000c,0xff000000,0,unsigned>;
        ///Internal Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> iadr{}; 
        namespace IadrValC{
        }
    }
    namespace Twi1Cwgr{    ///<Clock Waveform Generator Register
        using Addr = Register::Address<0x40090010,0xfff80000,0,unsigned>;
        ///Clock Low Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cldiv{}; 
        namespace CldivValC{
        }
        ///Clock High Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> chdiv{}; 
        namespace ChdivValC{
        }
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        namespace CkdivValC{
        }
    }
    namespace Twi1Sr{    ///<Status Register
        using Addr = Register::Address<0x40090020,0xffff0080,0,unsigned>;
        ///Transmission Completed (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Slave Read (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> svread{}; 
        namespace SvreadValC{
        }
        ///Slave Access (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        namespace SvaccValC{
        }
        ///General Call Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        namespace GaccValC{
        }
        ///Overrun Error (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Not Acknowledged (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Arbitration Lost (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        namespace ArblstValC{
        }
        ///Clock Wait State (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclws{}; 
        namespace SclwsValC{
        }
        ///End Of Slave Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        namespace EosaccValC{
        }
        ///End of RX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of TX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace Twi1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40090024,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        namespace SvaccValC{
        }
        ///General Call Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        namespace GaccValC{
        }
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Not Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Arbitration Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        namespace ArblstValC{
        }
        ///Clock Wait State Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        namespace SclwsValC{
        }
        ///End Of Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        namespace EosaccValC{
        }
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace Twi1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40090028,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        namespace SvaccValC{
        }
        ///General Call Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        namespace GaccValC{
        }
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Not Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Arbitration Lost Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        namespace ArblstValC{
        }
        ///Clock Wait State Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        namespace SclwsValC{
        }
        ///End Of Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        namespace EosaccValC{
        }
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace Twi1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4009002c,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        namespace TxcompValC{
        }
        ///Receive Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        namespace SvaccValC{
        }
        ///General Call Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        namespace GaccValC{
        }
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Not Acknowledge Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///Arbitration Lost Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        namespace ArblstValC{
        }
        ///Clock Wait State Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        namespace SclwsValC{
        }
        ///End Of Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        namespace EosaccValC{
        }
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
    }
    namespace Twi1Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0x40090030,0xffffff00,0,unsigned>;
        ///Master or Slave Receive Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Twi1Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0x40090034,0xffffff00,0,unsigned>;
        ///Master or Slave Transmit Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
    namespace Twi1Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x40090100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
        namespace RxptrValC{
        }
    }
    namespace Twi1Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x40090104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
        namespace RxctrValC{
        }
    }
    namespace Twi1Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x40090108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
        namespace TxptrValC{
        }
    }
    namespace Twi1Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4009010c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
    }
    namespace Twi1Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x40090110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
        namespace RxnptrValC{
        }
    }
    namespace Twi1Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x40090114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
        namespace RxnctrValC{
        }
    }
    namespace Twi1Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x40090118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
        namespace TxnptrValC{
        }
    }
    namespace Twi1Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4009011c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
        namespace TxnctrValC{
        }
    }
    namespace Twi1Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x40090120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        namespace RxtdisValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
        namespace TxtdisValC{
        }
    }
    namespace Twi1Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x40090124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
    }
}
