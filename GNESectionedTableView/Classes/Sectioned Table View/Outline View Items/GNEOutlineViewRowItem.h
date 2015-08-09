//
//  GNEOutlineViewRowItem.h
//  GNESectionedTableView
//
//  Created by Anthony Drendel on 5/27/14.
//  Copyright (c) 2014 Gone East LLC. All rights reserved.
//
//
//  The MIT License (MIT)
//
//  Copyright (c) 2014 Gone East LLC
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import "GNEOutlineViewItem.h"

@class GNEOutlineViewSectionItem;

// ------------------------------------------------------------------------------------------

@interface GNEOutlineViewRowItem : GNEOutlineViewItem

@property (nonnull, nonatomic, copy) NSIndexPath *indexPath;
@property (nonatomic, weak) GNEOutlineViewSectionItem *sectionItem;

@property (nonatomic, assign) BOOL isFooter;

- (nonnull instancetype)initWithIndexPath:(NSIndexPath * _Nonnull)indexPath
                              sectionItem:(GNEOutlineViewSectionItem * _Nullable)sectionItem
                                tableView:(GNESectionedTableView * _Nonnull)tableView
                               dataSource:(id<GNESectionedTableViewDataSource> _Nonnull)dataSource
                                 delegate:(id<GNESectionedTableViewDelegate> _Nonnull)delegate NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)initWithCoder:(nonnull NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@end