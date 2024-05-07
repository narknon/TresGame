#pragma once
#include "CoreMinimal.h"
#include "TresComNpcScaleData.h"
#include "TresComNpcEntityLinkData.h"
#include "GameFramework/Actor.h"
#include "TresComNpcEntitySetData.h"
#include "TresComNpcBodySetupData.h"
#include "TresComNpcEntityMoveData.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcEntityVoiceData.h"
#include "TresComNpcEntityActor.generated.h"

class UTresComNpcVoiceSet;
class UTresComNpcMeshSet;

UCLASS(Blueprintable)
class TRESGAME_API ATresComNpcEntityActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MasterGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bMasterGroupUseSkelton: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcMeshSet*> m_MeshSetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcVoiceSet*> m_VoiceSetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcEntitySetData> m_Datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcEntityMoveData> m_MoveDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcEntityLinkData> m_LinkDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcBodySetupData> m_BodyDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcScaleData> m_ScaleDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_MovePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_NamePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcEntityVoiceData> m_VoiceDatas;
    
    ATresComNpcEntityActor(const FObjectInitializer& ObjectInitializer);
};

