//
//  PECropRectView.h
//  PhotoCropEditor
//
//  Created by kishikawa katsumi on 2013/05/21.
//  Copyright (c) 2013 kishikawa katsumi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum TouchingControlDirection : int16_t {
//     0    1    2
//     7         3
//     6    5    4
    TopLeft,
    Top,
    TopRight,
    Right,
    BottomRight,
    Bottom,
    BottomLeft,
    Left
} TouchingControlDirection;

@interface PECropRectView : UIView

@property (nonatomic, weak) id delegate;
@property (nonatomic) BOOL showsGridMajor;
@property (nonatomic) BOOL showsGridMinor;

@property (nonatomic) BOOL keepingAspectRatio;

@property (nonatomic) TouchingControlDirection touchingControlDirection;

@end

@protocol PECropRectViewDelegate <NSObject>

- (void)cropRectViewDidBeginEditing:(PECropRectView *)cropRectView;
- (void)cropRectViewEditingChanged:(PECropRectView *)cropRectView;
- (void)cropRectViewDidEndEditing:(PECropRectView *)cropRectView;

@end

