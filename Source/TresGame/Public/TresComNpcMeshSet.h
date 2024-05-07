#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcMeshSetDatas.h"
#include "TresComNpcMeshSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresComNpcMeshSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcMeshSetDatas> m_Datas;
    
    UTresComNpcMeshSet();
};

