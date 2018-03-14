/* Generated by RuntimeBrowser.
 */

@protocol TSWPTopicNumberHints <NSObject, NSCopying>

@required

- (unsigned long long)charIndex;
- (unsigned long long)charIndexValidThrough;
- (NSDictionary *)entries;
- (bool)isEquivalentStateToTopicNumberHints:(NSObject<TSWPTopicNumberHints> *)arg1;
- (unsigned long long)nextTopicNumberForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;
- (unsigned long long)previousCharIndexForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;

@end