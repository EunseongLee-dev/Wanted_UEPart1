// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Person.h"
#include "LessonInterface.h"
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class UEPART1_API UStudent : public UPerson, public ILessonInterface // 다중 상속
{
	GENERATED_BODY()

public:
	UStudent();

	virtual void DoLesson() override;

private:
	UPROPERTY()
	int32 Id;
	
};
