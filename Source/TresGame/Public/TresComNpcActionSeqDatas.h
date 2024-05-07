#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActMotion.h"
#include "TresComNpcActTarget.h"
#include "TresComNpcActMoveNormal.h"
#include "TresComNpcActLookTarget.h"
#include "TresComNpcActRandomValue.h"
#include "TresComNpcActSelectBranch.h"
#include "TresComNpcFaceMotion.h"
#include "TresComNpcActGreet.h"
#include "TresComNpcActionSeqDatas.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActionSeqDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LinkActorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LookAtMax;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<uint32> m_Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActMotion> m_Motions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActTarget> m_Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActMoveNormal> m_MoveNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActRandomValue> m_RandomValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActSelectBranch> m_Branchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActLookTarget> m_LookTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcFaceMotion> m_FaceMotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActGreet> m_GreetActions;
    
    TRESGAME_API FTresComNpcActionSeqDatas();
};

