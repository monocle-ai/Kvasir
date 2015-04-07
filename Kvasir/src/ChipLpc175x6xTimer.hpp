#pragma once
#include "ChipLpc175x6xInterrupt.hpp"

namespace Kvasir{
namespace Timer{
	namespace Detail{
		template<int BaseAddress, typename InterruptIndex>
		struct TimerN{
			static constexpr InterruptIndex isr{};
			struct InterruptRegister{
				static constexpr int address = BaseAddress + 0x00;
			};
			struct ControlRegister{
				static constexpr int address = BaseAddress + 0x04;
			};
			struct Counter{
				static constexpr int address = BaseAddress + 0x08;
			};
			struct Prescale{
				static constexpr int address = BaseAddress + 0x0C;
			};
			struct PrescaleCounter{
				static constexpr int address = BaseAddress + 0x10;
			};
			struct MatchControl{
				static constexpr int address = BaseAddress + 0x14;
				static constexpr Register::WriteActionT<address,(1<<0),(1<<0)> reg0InterruptEnable{};
				static constexpr Register::WriteActionT<address,(1<<1),(1<<1)> reg0ResetOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<2),(1<<2)> reg0StopOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<3),(1<<3)> reg1InterruptEnable{};
				static constexpr Register::WriteActionT<address,(1<<4),(1<<4)> regResetOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<5),(1<<5)> reg1StopOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<6),(1<<6)> reg2InterruptEnable{};
				static constexpr Register::WriteActionT<address,(1<<7),(1<<7)> reg2ResetOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<8),(1<<8)> reg2StopOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<9),(1<<9)> reg3InterruptEnable{};
				static constexpr Register::WriteActionT<address,(1<<10),(1<<10)> reg3ResetOnMatch{};
				static constexpr Register::WriteActionT<address,(1<<11),(1<<11)> reg3StopOnMatch{};
			};
			struct MatchRegister0{
				static constexpr int address = BaseAddress + 0x18;
				template<int I>
				using MakeSetValueT = Register::BlindWriteActionT<address,0xFFFFFFFF,I>;
				template<int I>
				static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
			};
			struct MatchRegister1{
				static constexpr int address = BaseAddress + 0x1C;
				template<int I>
				using MakeSetValueT = Register::BlindWriteActionT<address,0xFFFFFFFF,I>;
				template<int I>
				static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
			};
			struct MatchRegister2{
				static constexpr int address = BaseAddress + 0x20;
				template<int I>
				using MakeSetValueT = Register::BlindWriteActionT<address,0xFFFFFFFF,I>;
				template<int I>
				static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
			};
			struct MatchRegister3{
				static constexpr int address = BaseAddress + 0x24;
				template<int I>
				using MakeSetValueT = Register::BlindWriteActionT<address,0xFFFFFFFF,I>;
				template<int I>
				static constexpr auto makeSetValue(){ return MakeSetValueT<I>{};}
			};

			//TODO implement other registers

			static constexpr int prescaleValue = 1000;
			static constexpr MPL::List<> matchReg0Init{};
			static constexpr MPL::List<> matchReg1Init{};
			static constexpr MPL::List<> matchReg2Init{};
			static constexpr MPL::List<> matchReg3Init{};
			static constexpr MPL::List<> captureReg0Init{};
			static constexpr MPL::List<> captureReg1Init{};
			static constexpr MPL::List<> captureReg2Init{};
		};
	}
	using TC0DefaultConfig = Detail::TimerN<0x400400,Core::Interrupt::Uart0>;
	using TC1DefaultConfig = Detail::TimerN<0x400800,Core::Interrupt::Uart1>;
	using TC2DefaultConfig = Detail::TimerN<0x409000,Core::Interrupt::Uart2>;
	using TC3DefaultConfig = Detail::TimerN<0x409400,Core::Interrupt::Uart3>;
}
}
