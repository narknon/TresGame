#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcActionSeqDatas.h"
#include "TresComNpcActionSeq.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresComNpcActionSeq : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActionSeqDatas> m_SeqDatas;
    
    UTresComNpcActionSeq();
};

