/*	$OpenBSD: xmphyreg.h,v 1.6 2015/07/19 06:28:12 yuo Exp $	*/
/*
 * Copyright (c) 2000
 *	Bill Paul <wpaul@ee.columbia.edu>.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Bill Paul.
 * 4. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Bill Paul AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Bill Paul OR THE VOICES IN HIS HEAD
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: src/sys/dev/mii/xmphyreg.h,v 1.1 2000/04/22 01:58:18 wpaul Exp $
 */

#ifndef _DEV_MII_XMPHYREG_H_
#define	_DEV_MII_XMPHYREG_H_

/*
 * XaQti XMAC II PHY registers
 */

#define XMPHY_MII_RESAB		0x10	/* Resolved ability */
#define XMPHY_RESAB_PAUSEBITS	0x0180	/* Pause bits */
#define XMPHY_RESAB_HDX		0x0040	/* Half duplex selected */
#define XMPHY_RESAB_FDX		0x0020	/* Full duplex selected */
#define XMPHY_RESAB_ABLMIS	0x0010	/* Ability mismatch */
#define XMPHY_RESAB_PAUSEMIS	0x0008	/* Pause mismatch */

#endif /* _DEV_MII_XMPHYREG_H_ */
