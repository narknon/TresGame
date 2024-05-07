#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcVoiceSetDatas.h"
#include "TresComNpcRandomVoiceDatas.h"
#include "TresComNpcRandomFieldVoiceDatas.h"
#include "TresComNpcVoiceSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresComNpcVoiceSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcVoiceSetDatas> m_Datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcRandomVoiceDatas> m_StaggerDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcRandomVoiceDatas> m_SpecialPerformDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcRandomVoiceDatas> m_GreetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcRandomFieldVoiceDatas> m_HeroActionDatas;
    
    UTresComNpcVoiceSet();
};

