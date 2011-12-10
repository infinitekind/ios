//
//  DDGViewController.h
//  DuckDuckGo2
//
//  Created by Chris Heimark on 12/9/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DDGSearchController.h"

@interface DDGViewController : UIViewController<UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, DDGSearchProtocol>
{
	IBOutlet UITableViewCell		*loadedCell;
	IBOutlet UITableView			*tableView;
	IBOutlet DDGSearchController	*searchController;
}

@property (nonatomic, retain) IBOutlet UITableViewCell		*loadedCell;
@property (nonatomic, retain) IBOutlet UITableView			*tableView;
@property (nonatomic, retain) IBOutlet DDGSearchController	*searchController;

@end
