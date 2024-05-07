#pragma once
#include "CoreMinimal.h"
#include "ERaPuddingCommandType.generated.h"

UENUM(BlueprintType)
enum class ERaPuddingCommandType : uint8 {
    IDLE,
    MOVEMENT,
    ANIMATION,
    ANGRY_VANISH,
    HAPPY_VANISH,
    FAIR_VANISH,
    PANCAKE_DIVE,
    PANCAKE_HIDE,
    PANCAKE_EFFECT,
    PANCAKE_APPEAR,
    PANCAKE_VANISH,
    TTR_ESCAPE,
    TTR_START,
    TTR_KEEP,
    TTR_END,
    PUDFORCE_IDLE,
    PUDFORCE_MOVE,
    PUDFORCE_POSE_1,
    PUDFORCE_POSE_2,
    PUDFORCE_POSE_3,
    UMA_MOVE,
    UMA_RISE,
    UMA_KEEP,
    UMA_FALL,
    ICARUS_RISE,
    ICARUS_KEEP,
    ICARUS_FALL,
    ICARUS_FALL_WAIT,
    SET_MARKER_VALID,
    SET_HIGH_MARKER_VALID,
    SET_HIGH_MARKER_ON,
    SET_HIGH_MARKER_OFF,
    SET_NORMAL_MARKER_VALID,
    SET_NORMAL_MARKER_ON,
    SET_NORMAL_MARKER_OFF,
    MAX,
};

