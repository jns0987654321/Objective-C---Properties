//
//  Person.m
//  Properties
//
//  Created by Junior Samaroo on 2017-04-23.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import "Person.h"

@implementation Person

-(void)test {
    self.firstName = @"Bob";
    
    isInsecure = YES;
    [self setLastName:@"Davis"];
    
    NSString *name = [self firstName];
}

@end
