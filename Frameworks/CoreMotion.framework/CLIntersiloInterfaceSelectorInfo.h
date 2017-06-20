/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterfaceSelectorInfo : NSObject {
    int  _numArguments;
    int  _replyBlockIndex;
    int  _returnAddressIndex;
    int  _returnValueSize;
    SEL  _sel;
    NSMethodSignature * _sig;
    NSString * _str;
}

@property (nonatomic, readonly) int numArguments;
@property (nonatomic, readonly) int replyBlockIndex;
@property (nonatomic, readonly) int returnAddressIndex;
@property (nonatomic, readonly) int returnValueSize;
@property (nonatomic, readonly) SEL sel;
@property (nonatomic, readonly, retain) NSMethodSignature *sig;
@property (nonatomic, readonly, retain) NSString *str;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;
- (int)numArguments;
- (int)replyBlockIndex;
- (int)returnAddressIndex;
- (int)returnValueSize;
- (SEL)sel;
- (id)sig;
- (id)str;

@end