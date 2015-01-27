//
//  Grid.h
//  GameOfLife
//
//  Created by Robert von Stange on 1/26/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)evolveStep;

-(void)countNeighbors;
-(void)updateCreatures;

@end
