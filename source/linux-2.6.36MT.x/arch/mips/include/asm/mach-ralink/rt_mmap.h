/**************************************************************************
 *
 *  BRIEF MODULE DESCRIPTION
 *     register definition for Ralink RT-series SoC
 *
 *  Copyright 2007 Ralink Inc.
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED   ``AS  IS'' AND   ANY  EXPRESS OR IMPLIED
 *  WARRANTIES,   INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO  EVENT  SHALL   THE AUTHOR  BE    LIABLE FOR ANY   DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED   TO, PROCUREMENT OF  SUBSTITUTE GOODS  OR SERVICES; LOSS OF
 *  USE, DATA,  OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 **************************************************************************
 */

#ifndef __RALINK_MMAP__
#define __RALINK_MMAP__

#if defined (CONFIG_RALINK_RT2880_SHUTTLE)

#define RALINK_SYSCTL_BASE 		0xA0300000
#define RALINK_TIMER_BASE		0xA0300100
#define RALINK_INTCL_BASE		0xA0300200
#define RALINK_MEMCTRL_BASE		0xA0300300
#define RALINK_UART_BASE		0xA0300500
#define RALINK_PIO_BASE			0xA0300600
#define RALINK_I2C_BASE			0xA0300900
#define RALINK_SPI_BASE			0xA0300B00
#define RALINK_UART_LITE_BASE		0xA0300C00
#define RALINK_FRAME_ENGINE_BASE	0xA0310000
#define RALINK_EMBEDD_ROM_BASE		0xA0400000
#define RALINK_PCI_BASE			0xA0500000
#define RALINK_11N_MAC_BASE		0xA0600000

//Interrupt Controller
#define RALINK_INTCTL_TIMER0		(1<<0)
#define RALINK_INTCTL_WDTIMER		(1<<1)
#define RALINK_INTCTL_UART		(1<<2)
#define RALINK_INTCTL_PIO		(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UARTLITE		(1<<8)
#define RALINK_INTCTL_ILL_ACCESS	(1<<23)

//Reset Control Register
#define RALINK_TIMER_RST		(1<<1)
#define RALINK_INTC_RST			(1<<2)
#define RALINK_MC_RST			(1<<3)
#define RALINK_CPU_RST			(1<<4)
#define RALINK_UART_RST			(1<<5)
#define RALINK_PIO_RST			(1<<6)
#define RALINK_I2C_RST			(1<<9)
#define RALINK_SPI_RST			(1<<11)
#define RALINK_UART2_RST		(1<<12)
#define RALINK_PCI_RST			(1<<16)
#define RALINK_2860_RST			(1<<17)
#define RALINK_FE_RST			(1<<18)
#define RALINK_PCM_RST			(1<<19)


#elif defined (CONFIG_RALINK_RT2880_MP)

#define RALINK_SYSCTL_BASE 		0xA0300000
#define RALINK_TIMER_BASE		0xA0300100
#define RALINK_INTCL_BASE		0xA0300200
#define RALINK_MEMCTRL_BASE		0xA0300300
#define RALINK_UART_BASE		0xA0300500
#define RALINK_PIO_BASE			0xA0300600
#define RALINK_I2C_BASE			0xA0300900
#define RALINK_SPI_BASE			0xA0300B00
#define RALINK_UART_LITE_BASE		0x00300C00
#define RALINK_FRAME_ENGINE_BASE	0xA0400000
#define RALINK_EMBEDD_ROM_BASE		0xA0410000
#define RALINK_PCI_BASE			0xA0440000
#define RALINK_11N_MAC_BASE		0xA0480000

//Interrupt Controller
#define RALINK_INTCTL_TIMER0		(1<<0)
#define RALINK_INTCTL_WDTIMER		(1<<1)
#define RALINK_INTCTL_UART		(1<<2)
#define RALINK_INTCTL_PIO		(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UARTLITE		(1<<8)
#define RALINK_INTCTL_ILL_ACCESS	(1<<23)

//Reset Control Register
#define RALINK_TIMER_RST		(1<<1)
#define RALINK_INTC_RST			(1<<2)
#define RALINK_MC_RST			(1<<3)
#define RALINK_CPU_RST			(1<<4)
#define RALINK_UART_RST			(1<<5)
#define RALINK_PIO_RST			(1<<6)
#define RALINK_I2C_RST			(1<<9)
#define RALINK_SPI_RST			(1<<11)
#define RALINK_UART2_RST		(1<<12)
#define RALINK_PCI_RST			(1<<16)
#define RALINK_2860_RST			(1<<17)
#define RALINK_FE_RST			(1<<18)
#define RALINK_PCM_RST			(1<<19)

#elif defined (CONFIG_RALINK_RT3052) 

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_PCM_BASE			0xB0000400
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_GDMA_BASE		0xB0000700
#define RALINK_NAND_CTRL_BASE		0xB0000800
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_OTG_BASE		0x101C0000

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_NAND		(1<<8)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_OTG		(1<<18)
#define RALINK_INTCTL_OTG_IRQN		18
#define RALINK_INTCTL_GLOBAL		(1<<31)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_CPU_RST			(1<<1)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_RT2872_RST		(1<<20)
#define RALINK_FE_RST			(1<<21)
#define RALINK_OTG_RST			(1<<22)
#define RALINK_SW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)

#elif defined (CONFIG_RALINK_RT3352)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_NAND_CTRL_BASE		0xB0000800
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_USB_DEV_BASE		0x10120000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_HOST_BASE		0x101C0000

#define RALINK_MCNT_CFG			0xB0000D00
#define RALINK_COMPARE			0xB0000D04
#define RALINK_COUNT			0xB0000D08

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_OTG		(1<<18)
#define RALINK_INTCTL_GLOBAL		(1<<31)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_WLAN_RST			(1<<20)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)


//Clock Conf Register
#define RALINK_UPHY1_CLK_EN		(1<<20)
#define RALINK_UPHY0_CLK_EN		(1<<18)
#define RALINK_GE1_CLK_EN		(1<<16)


#elif defined (CONFIG_RALINK_RT5350)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_USB_DEV_BASE		0x10120000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_HOST_BASE		0x101C0000

#define RALINK_MCNT_CFG			0xB0000D00
#define RALINK_COMPARE			0xB0000D04
#define RALINK_COUNT			0xB0000D08

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_USB_HOST		(1<<18)
#define RALINK_INTCTL_USB_DEV		(1<<19)
#define RALINK_INTCTL_GLOBAL		(1<<31)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_WLAN_RST			(1<<20)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)
#define RALINK_MIPSC_RST		(1<<28)

//Clock Conf Register
#define RALINK_UPHY0_CLK_EN		(1<<18)
#define RALINK_GE1_CLK_EN		(1<<16)

#elif defined (CONFIG_RALINK_RT2883)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_PCM_BASE			0xB0000400
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_GDMA_BASE		0xB0000700
#define RALINK_NAND_CTRL_BASE		0xB0000800
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_PCI_BASE			0xB0140000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_OTG_BASE		0x101C0000

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_NAND		(1<<8)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_OTG		(1<<18)
#define RALINK_INTCTL_OTG_IRQN		18
#define RALINK_INTCTL_GLOBAL		(1<<31)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_CPU_RST			(1<<1)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_WLAN_RST			(1<<20)
#define RALINK_FE_RST			(1<<21)
#define RALINK_OTG_RST			(1<<22)
#define RALINK_PCIE_RST			(1<<23)

#elif defined (CONFIG_RALINK_RT3883)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_NOR_CTRL_BASE		0xB0000700
#define RALINK_NAND_CTRL_BASE		0xB0000810
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_CODEC1_BASE		0xB0003000
#define RALINK_CODEC2_BASE		0xB0003800
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_USB_DEV_BASE		0x10120000
#define RALINK_PCI_BASE			0xB0140000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_HOST_BASE		0x101C0000
#define RALINK_PCIE_BASE		0xB0200000

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_NAND		(1<<8)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_UHST		(1<<18)
#define RALINK_INTCTL_UDEV		(1<<19)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_NAND_RST			(1<<15)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_WLAN_RST			(1<<20)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_PCIE_RST			(1<<23)
#define RALINK_PCI_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)
#define RALINK_FLASH_RST		(1<<26)

//Clock Conf Register
#define RALINK_UPHY1_CLK_EN		(1<<20)
#define RALINK_UPHY0_CLK_EN		(1<<18)
#define RALINK_GE1_CLK_EN		(1<<16)

#elif defined (CONFIG_RALINK_RT6855)

#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_UART_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_NAND_CTRL_BASE		0xB0000800
#define RALINK_UART_LITE_BASE		0x10000C00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_PCI_BASE                 0xB0140000
#define RALINK_USB_DEV_BASE		0x10120000
#define RALINK_11N_MAC_BASE		0x00000000
#define RALINK_USB_HOST_BASE		0x101C0000

#define RALINK_MCNT_CFG			0xB0000D00
#define RALINK_COMPARE			0xB0000D04
#define RALINK_COUNT			0xB0000D08

//Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_OTG		(1<<18)
#define RALINK_INTCTL_GLOBAL		(1<<31)

//Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)
#define RALINK_PCIE0_RST		(1<<26)
#define RALINK_PCIE1_RST		(1<<27)

//Clock Conf Register
#define RALINK_UPHY0_CLK_EN		(1<<25)
#define RALINK_PCIE0_CLK_EN		(1<<26)
#define RALINK_PCIE1_CLK_EN		(1<<27)


#elif defined (CONFIG_RALINK_RT6855A)

#define RALINK_SYSCTL_BASE              0xBFB00000
#define RALINK_TIMER_BASE               0xBFBF0100
#define RALINK_INTCL_BASE               0xBFB40000
#define RALINK_MEMCTRL_BASE             0xBFB20000
#define RALINK_PIO_BASE                 0xBFBF0200
#define RALINK_NAND_CTRL_BASE           0xBFBE0010
#define RALINK_I2C_BASE                 0xBFBF8000
#define RALINK_I2S_BASE                 0xBFBF8100
#define RALINK_SPI_BASE                 0xBFBC0B00
#define RALINK_UART_LITE_BASE           0xBFBF0000
#define RALINK_UART_LITE2_BASE          0xBFBF0300
#define RALINK_PCM_BASE                 0xBFBD0000
#define RALINK_GDMA_BASE                0xBFB30000
#define RALINK_FRAME_ENGINE_BASE        0xBFB50000
#define RALINK_ETH_SW_BASE              0xBFB58000
#define RALINK_11N_MAC_BASE		0x00000000
//#define RALINK_USB_DEV_BASE           0xB0120000
#define RALINK_CRYPTO_ENGINE_BASE       0xBFB70000
#define RALINK_PCI_BASE                 0xBFB80000
//#define RALINK_USB_HOST_BASE          0xB01C0000
#define RALINK_PCIE_BASE                0xBFB81000

//Interrupt Controller
#define RALINK_INTCTL_UARTLITE          (1<<0)
#define RALINK_INTCTL_PIO               (1<<10)
#define RALINK_INTCTL_PCM               (1<<11)
#define RALINK_INTCTL_DMA               (1<<14)
#define RALINK_INTCTL_GMAC2             (1<<15)
#define RALINK_INTCTL_PCI               (1<<17)
#define RALINK_INTCTL_UHST2             (1<<20)
#define RALINK_INTCTL_GMAC1             (1<<21)
#define RALINK_INTCTL_UHST1             (1<<23)
#define RALINK_INTCTL_PCIE              (1<<24)
#define RALINK_INTCTL_NAND              (1<<25)
#define RALINK_INTCTL_SPI               (1<<27)

//Reset Control Register
#define RALINK_PCM_RST                  (1<<11)
#define RALINK_DMA_RST                  (1<<14)
#define RALINK_I2C_RST                  (1<<16)
#define RALINK_I2S_RST                  (1<<2)          /* IMR1 */

//Clock Conf Register
#define RALINK_UPHY0_CLK_EN		(1<<25)
#define RALINK_PCIE0_CLK_EN		(1<<26)
#define RALINK_PCIE1_CLK_EN		(1<<27)

#endif
#endif
