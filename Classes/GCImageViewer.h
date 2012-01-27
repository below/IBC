//
//  GCImageViewer.h
//  IBC
//
//	IBC Magazin -- An iPhone Application for the site http://www.mtb-news.de
//	Copyright (C) 2011	Stephan König (s dot konig at me dot com), Manuel Burghard
//						Alexander von Below
//						
//	This program is free software; you can redistribute it and/or
//	modify it under the terms of the GNU General Public License
//	as published by the Free Software Foundation; either version 2
//	of the License, or (at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program; if not, write to the Free Software
//	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.//
//


#import <UIKit/UIKit.h>
#import "TDHUDProgressBar.h"


@interface GCImageViewer : UIViewController <UIScrollViewDelegate> {
	NSMutableData* responseData;
	CGFloat expectedLength;
	
	NSURL* url;
	IBOutlet TDHUDProgressBar *bar;
    IBOutlet UIToolbar *topBar;
	
	IBOutlet UIImageView* imageView;
	IBOutlet UIScrollView* myScrollView;
    UIColor *navBarColor;
    NSTimer *timer;
}

- (id)initWithURL:(NSURL*)URL;
- (void)hideBars;

@property (assign) IBOutlet UIToolbar *topBar;
@property (nonatomic, retain) NSURL* url;
@property (retain) UIColor *navBarColor;
@property (nonatomic, retain, setter=setTimer:) NSTimer *timer;
@property (nonatomic, retain) UIImageView* imageView;
@property (nonatomic, retain) UIScrollView* myScrollView;


@end
