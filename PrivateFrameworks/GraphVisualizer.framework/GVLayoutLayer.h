/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

@interface GVLayoutLayer : NSObject {
    NSMutableArray * nodes;
    double  separation;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;

+ (id)layerWithSeparation:(double)arg1;

- (void)addNode:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (double)height;
- (id)initWithSeparation:(double)arg1;
- (void)initializeNodePositions;
- (void)minimizeCrossingWithLayer:(id)arg1;
- (id)neighborsOfNode:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForDummy;
- (void)updateNodePositionsBasedOnLayer:(id)arg1;
- (void)updateNodePositionsByCenterLine:(double)arg1;
- (void)updateNodePrioritiesBasedOnLayer:(id)arg1;
- (double)width;

@end