#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackIndirectLightingCacheQualityControlKey.h"
#include "TresInterpTrackIndirectLightingCacheQualityControl.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackIndirectLightingCacheQualityControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackIndirectLightingCacheQualityControlKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IncludeChildActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Restore;
    
    UTresInterpTrackIndirectLightingCacheQualityControl();
};

