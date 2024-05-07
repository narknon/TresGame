#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcActionSetDatas.h"
#include "TresComNpcActionSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresComNpcActionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActionSetDatas> m_Datas;
    
    UTresComNpcActionSet();
};

