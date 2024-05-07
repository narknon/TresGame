#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlashTextureRescale.h"
#include "SwfMovie.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class USwfMovie : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bUseGFxExport: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bOptimizeForMobiles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bSetSRGBOnImportedTextures: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bPackTextures: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 PackTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bForceSquarePacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<FlashTextureRescale> TextureRescale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString TextureFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bReplaceImages: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FString SourceFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> FontMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SourceFileTimestamp;
    
    UPROPERTY(Transient)
    uint64 ImportTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ReferencedAssetNames;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> References;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<UObject*> UserReferences;
    
    USwfMovie();
};

