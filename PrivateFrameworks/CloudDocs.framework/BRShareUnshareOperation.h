/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareUnshareOperation : BROperation {
    CKShare * _share;
    id /* block */  _unshareCompletionBlock;
}

@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ unshareCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setUnshareCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)unshareCompletionBlock;

@end