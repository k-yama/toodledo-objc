//
//  TDTasksParser.h
//  ToodledoAPI
//
//  Created by Michael Petritsch on 17.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDParser.h"
#import "GtdTask.h"


@interface TDTasksParser : TDParser {
@private
	GtdTask *currentTask;
	
	NSDateFormatter *dateTime24Formatter;
	NSDateFormatter *dateFormatter;
	NSDateFormatter *dateTime12Formatter;
	
	NSString *startTime;
	NSString *startDate;
	NSString *dueTime;
	NSString *dueDate;
}

@end
