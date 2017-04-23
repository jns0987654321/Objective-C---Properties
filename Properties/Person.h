//
//  Person.h
//  Properties
//
//  Created by Junior Samaroo on 2017-04-23.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    //instance vars or private vars
    BOOL isInsecure;
}

// THese create 3 things: getter, setter, instance var (_name)
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;

@end
