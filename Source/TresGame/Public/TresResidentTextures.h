#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresTaggedTextureSet.h"
#include "TresResidentTextures.generated.h"

class AActor;

UCLASS(Blueprintable)
class TRESGAME_API UTresResidentTextures : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTaggedTextureSet> m_TaggedTextureSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> m_CurrentResidentTags;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> m_CurrentResidentActors;
    
    UTresResidentTextures();
};

