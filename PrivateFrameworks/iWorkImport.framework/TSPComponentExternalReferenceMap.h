/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {
    struct unordered_map<const long long, TSP::ComponentExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentExternalReferenceInfo> > > { struct __hash_table<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentExternalReferenceInfo>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _map;
}

- (void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)enumerateExternalReferences:(id /* block */)arg1;
- (struct ComponentExternalReferenceInfo { long long x1; bool x2; })externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initFromMessage:(const struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)initWithMapSize:(unsigned long long)arg1;
- (void)saveToMessage:(struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x1; int x2; int x3; int x4; }*)arg1;

@end