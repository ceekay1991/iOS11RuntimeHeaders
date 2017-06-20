/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    GEODownloadMetadata * _metadata;
    GEOResources * _resources;
}

@property (nonatomic, readonly) bool hasResources;
@property (nonatomic, retain) GEODownloadMetadata *metadata;
@property (nonatomic, retain) GEOResources *resources;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResources;
- (unsigned long long)hash;
- (id)initWithResourceManifestData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)resources;
- (void)setMetadata:(id)arg1;
- (void)setResources:(id)arg1;
- (void)writeTo:(id)arg1;

@end