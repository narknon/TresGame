#pragma once
#include "CoreMinimal.h"
#include "TresWearformTextureReplaceData.h"
#include "TresWearformSetUnit.generated.h"

class UTresAnimSet;

USTRUCT(BlueprintType)
struct FTresWearformSetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FormName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bTextureReplace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWearformTextureReplaceData> m_TextureReplaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bPlayFaceAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayFaceAnimName;
    
    TRESGAME_API FTresWearformSetUnit();
};

