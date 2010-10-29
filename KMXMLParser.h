//
//  KMXMLParser.h
//  KMXMLClass
//
//  Created by Kieran McGrady http://www.kieranmcgrady.me
//  Use this class freely but please maintain my name and website above
//

#import <Foundation/Foundation.h>


@interface KMXMLParser : NSObject {

	NSXMLParser *parser;
	NSMutableArray *posts;
	NSMutableDictionary *elements;
	NSString *element;
	NSMutableString *title;
	NSMutableString *date;
	NSMutableString *summary;
	NSMutableString *link;
	
}

- (void)parseURL:(NSString *)URL;
-(void)beginParsing:(NSURL *)xmlURL;
-(NSMutableArray *)posts;
@end
