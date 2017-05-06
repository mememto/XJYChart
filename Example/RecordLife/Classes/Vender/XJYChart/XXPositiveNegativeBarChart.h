//
//  XXPositiveNegativeBarChart.h
//  RecordLife
//
//  Created by 谢俊逸 on 17/04/2017.
//  Copyright © 2017 谢俊逸. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XJYBarItem.h"

@interface XXPositiveNegativeBarChart : UIView
/**
 初始化方法
 
 @param frame frame
 @param dataItemArray items
 @param topNumbser top
 @param bottomNumber buttom
 @return instancetype
 */
- (instancetype)initWithFrame:(CGRect)frame dataItemArray:(NSMutableArray<XJYBarItem *> *)dataItemArray topNumber:(NSNumber *)topNumbser bottomNumber:(NSNumber *)bottomNumber;


/**
 dataItemArray
 */
@property (nonatomic, strong) NSMutableArray<XJYBarItem *> *dataItemArray;


/**
 纵坐标最高点
 */
@property (nonatomic, strong) NSNumber *top;

/**
 纵坐标最低点
 */
@property (nonatomic, strong) NSNumber *bottom;
@end
