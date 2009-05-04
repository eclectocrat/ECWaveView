////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
// Arkonnekt AppKit, Cocoa classes for audio programming. 
// Copyright (C) 2005 Jeremy Jurksztowicz
//
// This library is free software; you can redistribute it and/or modify it under the terms of the 
// GNU Lesser General Public License as published by the Free Software Foundation; either version 
// 2.1 of the License, or (at your option) any later version. This library is distributed in the 
// hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License 
// for more details. 
//
// You should have received a copy of the GNU Lesser General Public License along with this library; 
// if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 
// 02111-1307 USA
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#import <Cocoa/Cocoa.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////																		/////////////////////
// ArkLinePrefs
//
@interface ArkLinePrefs : NSObject
{
	BOOL		drawLine;
	float		width;
	BOOL		isDashed;
	float *		dash;
	int			dashLength;
	NSColor *	color;
	
	// Delagate.
	id		del;
	BOOL	notifyDelegate;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
//	Accessors
//
- (id)			delegate;

- (void)		setDelegate:(id)newDel;

- (BOOL)		drawLine;

- (void)		setDrawLine:(BOOL)draw;

- (float)		width;

- (void)		setWidth:(float)newWidth;

- (BOOL)		isDashed;

- (BOOL)		getDash:(float**)dashPtr count:(int*)len;

- (void)		setDash:(float*)newDash count:(int)len;

- (NSColor*)	color;

- (void)		setColor:(NSColor*)newColor;

@end
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
// Delegate Interface
//
@interface NSObject(ArkLinePrefs_Delegate)

- (void) linePrefsDidChange:(ArkLinePrefs*)prefs;

@end