//
//  Products+CoreDataProperties.h
//  UserProduct
//
//  Created by Ramesh Boosa on 27/07/16.
//  Copyright © 2016 Ramesh Boosa. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Products.h"

NS_ASSUME_NONNULL_BEGIN

@interface Products (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *make;
@property (nullable, nonatomic, retain) NSString *model;
@property (nullable, nonatomic, retain) NSDate *warranty;
@property (nullable, nonatomic, retain) NSString *buyrName;
@property (nullable, nonatomic, retain) NSNumber *buyrPhone;
@property (nullable, nonatomic, retain) NSString *productPic;
@property (nullable, nonatomic, retain) NSString *userPic;
@property (nullable, nonatomic, retain) NSDate *extendWarranty;

@end

NS_ASSUME_NONNULL_END
