/**
 * downloadmanager-ios
 *
 * Module developed by Napp ApS
 * www.napp.dk
 * Mads Møller
 *
 * Updated and modified by Kosso
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */

#import <Foundation/Foundation.h>
#import "DownloadInformation.h"

@interface CompletedDownloadCatalog : NSObject
{
}

-(void)deleteCompletedDownload:(NSString*)url;
-(void)addCompletedDownload:(DownloadInformation*)downloadInformation;
-(DownloadInformation*)getDownloadInformation:(NSString*)url;
-(void)persistToStorage;
-(void)loadFromStorage;
-(void)resetStorage;

-(NSString*)MD5:(NSString*)value;

@end
