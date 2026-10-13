// ===== 0033baf8  rive_android::GetMiterId =====

/* rive_android::GetMiterId() */

undefined8 rive_android::GetMiterId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Join");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"MITER","Landroid/graphics/Paint$Join;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bb78  rive_android::GetRoundId =====

/* rive_android::GetRoundId() */

undefined8 rive_android::GetRoundId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Join");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"ROUND","Landroid/graphics/Paint$Join;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bbf8  rive_android::GetBevelId =====

/* rive_android::GetBevelId() */

undefined8 rive_android::GetBevelId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Join");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"BEVEL","Landroid/graphics/Paint$Join;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bc78  rive_android::GetCapButtID =====

/* rive_android::GetCapButtID() */

undefined8 rive_android::GetCapButtID(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Cap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,&DAT_00246c60,"Landroid/graphics/Paint$Cap;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bcf8  rive_android::GetCapRoundId =====

/* rive_android::GetCapRoundId() */

undefined8 rive_android::GetCapRoundId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Cap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"ROUND","Landroid/graphics/Paint$Cap;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bd78  rive_android::GetCapSquareId =====

/* rive_android::GetCapSquareId() */

undefined8 rive_android::GetCapSquareId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Cap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SQUARE","Landroid/graphics/Paint$Cap;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bdf8  rive_android::GetEvenOddId =====

/* rive_android::GetEvenOddId() */

undefined8 rive_android::GetEvenOddId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path$FillType");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"EVEN_ODD","Landroid/graphics/Path$FillType;")
  ;
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033be78  rive_android::GetNonZeroId =====

/* rive_android::GetNonZeroId() */

undefined8 rive_android::GetNonZeroId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path$FillType");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"WINDING","Landroid/graphics/Path$FillType;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bef8  rive_android::GetSrcOver =====

/* rive_android::GetSrcOver() */

undefined8 rive_android::GetSrcOver(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SRC_OVER","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bf78  rive_android::GetScreen =====

/* rive_android::GetScreen() */

undefined8 rive_android::GetScreen(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SCREEN","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033bff8  rive_android::GetOverlay =====

/* rive_android::GetOverlay() */

undefined8 rive_android::GetOverlay(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"OVERLAY","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c078  rive_android::GetDarken =====

/* rive_android::GetDarken() */

undefined8 rive_android::GetDarken(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"DARKEN","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c0f8  rive_android::GetLighten =====

/* rive_android::GetLighten() */

undefined8 rive_android::GetLighten(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"LIGHTEN","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c178  rive_android::GetColorDodge =====

/* rive_android::GetColorDodge() */

undefined8 rive_android::GetColorDodge(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"COLOR_DODGE","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c1f8  rive_android::GetColorBurn =====

/* rive_android::GetColorBurn() */

undefined8 rive_android::GetColorBurn(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"COLOR_BURN","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c278  rive_android::GetHardLight =====

/* rive_android::GetHardLight() */

undefined8 rive_android::GetHardLight(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"HARD_LIGHT","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c2f8  rive_android::GetSoftLight =====

/* rive_android::GetSoftLight() */

undefined8 rive_android::GetSoftLight(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SOFT_LIGHT","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c378  rive_android::GetDifference =====

/* rive_android::GetDifference() */

undefined8 rive_android::GetDifference(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"DIFFERENCE","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c3f8  rive_android::GetExclusion =====

/* rive_android::GetExclusion() */

undefined8 rive_android::GetExclusion(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"EXCLUSION","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c478  rive_android::GetMultiply =====

/* rive_android::GetMultiply() */

undefined8 rive_android::GetMultiply(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"MULTIPLY","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c4f8  rive_android::GetHue =====

/* rive_android::GetHue() */

undefined8 rive_android::GetHue(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,&DAT_0024d164,"Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c578  rive_android::GetSaturation =====

/* rive_android::GetSaturation() */

undefined8 rive_android::GetSaturation(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SATURATION","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c5f8  rive_android::GetColor =====

/* rive_android::GetColor() */

undefined8 rive_android::GetColor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"COLOR","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c678  rive_android::GetLuminosity =====

/* rive_android::GetLuminosity() */

undefined8 rive_android::GetLuminosity(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"LUMINOSITY","Landroid/graphics/BlendMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c6f8  rive_android::GetPdClear =====

/* rive_android::GetPdClear() */

undefined8 rive_android::GetPdClear(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"CLEAR","Landroid/graphics/PorterDuff$Mode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c778  rive_android::GetPdSrcOver =====

/* rive_android::GetPdSrcOver() */

undefined8 rive_android::GetPdSrcOver(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"SRC_OVER","Landroid/graphics/PorterDuff$Mode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c7f8  rive_android::GetPdDarken =====

/* rive_android::GetPdDarken() */

undefined8 rive_android::GetPdDarken(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"DARKEN","Landroid/graphics/PorterDuff$Mode;")
  ;
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c878  rive_android::GetPdLighten =====

/* rive_android::GetPdLighten() */

undefined8 rive_android::GetPdLighten(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"LIGHTEN","Landroid/graphics/PorterDuff$Mode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c8f8  rive_android::GetPdMultiply =====

/* rive_android::GetPdMultiply() */

undefined8 rive_android::GetPdMultiply(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"MULTIPLY","Landroid/graphics/PorterDuff$Mode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c978  rive_android::GetPdScreen =====

/* rive_android::GetPdScreen() */

undefined8 rive_android::GetPdScreen(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"SCREEN","Landroid/graphics/PorterDuff$Mode;")
  ;
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033c9f8  rive_android::GetPdOverlay =====

/* rive_android::GetPdOverlay() */

undefined8 rive_android::GetPdOverlay(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"OVERLAY","Landroid/graphics/PorterDuff$Mode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ca78  rive_android::GetBitmapShaderClass =====

/* rive_android::GetBitmapShaderClass() */

void rive_android::GetBitmapShaderClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033ca98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BitmapShader");
  return;
}


// ===== 0033ca9c  rive_android::GetBitmapShaderConstructor =====

/* rive_android::GetBitmapShaderConstructor() */

undefined8 rive_android::GetBitmapShaderConstructor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BitmapShader");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"<init>",
                     "(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V"
                    );
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cb1c  rive_android::GetColorMatrixClass =====

/* rive_android::GetColorMatrixClass() */

void rive_android::GetColorMatrixClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033cb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/ColorMatrix");
  return;
}


// ===== 0033cb40  rive_android::GetColorMatrixInitMethodId =====

/* rive_android::GetColorMatrixInitMethodId() */

undefined8 rive_android::GetColorMatrixInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/ColorMatrix");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cbc0  rive_android::GetColorMatrixSetMethodId =====

/* rive_android::GetColorMatrixSetMethodId() */

undefined8 rive_android::GetColorMatrixSetMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/ColorMatrix");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,&DAT_0024033f,"([F)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cc40  rive_android::GetColorMatrixColorFilterClass =====

/* rive_android::GetColorMatrixColorFilterClass() */

void rive_android::GetColorMatrixColorFilterClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/ColorMatrixColorFilter");
  return;
}


// ===== 0033cc64  rive_android::GetColorMatrixColorFilterInitMethodId =====

/* rive_android::GetColorMatrixColorFilterInitMethodId() */

undefined8 rive_android::GetColorMatrixColorFilterInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/ColorMatrixColorFilter");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>","(Landroid/graphics/ColorMatrix;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cce4  rive_android::GetSetColorFilterMethodId =====

/* rive_android::GetSetColorFilterMethodId() */

undefined8 rive_android::GetSetColorFilterMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setColorFilter",
                     "(Landroid/graphics/ColorFilter;)Landroid/graphics/ColorFilter;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cd64  rive_android::GetAndroidBitmapClass =====

/* rive_android::GetAndroidBitmapClass() */

void rive_android::GetAndroidBitmapClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033cd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap");
  return;
}


// ===== 0033cd88  rive_android::GetAndroidBitmapConfigClass =====

/* rive_android::GetAndroidBitmapConfigClass() */

void rive_android::GetAndroidBitmapConfigClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap$Config");
  return;
}


// ===== 0033cdac  rive_android::GetAndroidBitmapFactoryClass =====

/* rive_android::GetAndroidBitmapFactoryClass() */

void rive_android::GetAndroidBitmapFactoryClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033cdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BitmapFactory");
  return;
}


// ===== 0033cdd0  rive_android::GetCreateBitmapStaticMethodId =====

/* rive_android::GetCreateBitmapStaticMethodId() */

undefined8 rive_android::GetCreateBitmapStaticMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x388))
                    (plVar1,uVar2,"createBitmap",
                     "(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ce50  rive_android::GetDecodeByteArrayStaticMethodId =====

/* rive_android::GetDecodeByteArrayStaticMethodId() */

undefined8 rive_android::GetDecodeByteArrayStaticMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BitmapFactory");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x388))
                    (plVar1,uVar2,"decodeByteArray","([BII)Landroid/graphics/Bitmap;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ced0  rive_android::GetBitmapWidthMethodId =====

/* rive_android::GetBitmapWidthMethodId() */

undefined8 rive_android::GetBitmapWidthMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"getWidth",&DAT_0024a36c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cf50  rive_android::GetBitmapHeightMethodId =====

/* rive_android::GetBitmapHeightMethodId() */

undefined8 rive_android::GetBitmapHeightMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"getHeight",&DAT_0024a36c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033cfd0  rive_android::GetARGB8888Field =====

/* rive_android::GetARGB8888Field() */

undefined8 rive_android::GetARGB8888Field(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap$Config");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"ARGB_8888","Landroid/graphics/Bitmap$Config;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033d050  rive_android::GetBitmapSetPixelsMethodId =====

/* rive_android::GetBitmapSetPixelsMethodId() */

undefined8 rive_android::GetBitmapSetPixelsMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Bitmap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setPixels","([IIIIIII)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033d0d0  rive_android::CanvasRenderer::save =====

/* rive_android::CanvasRenderer::save() */

void __thiscall rive_android::CanvasRenderer::save(CanvasRenderer *this)

{
  undefined8 *puVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  _jmethodID *p_Var13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  p_Var2 = (_jobject *)GetJNIEnv();
  p_Var13 = *(_jmethodID **)(this + 8);
  uVar3 = GetCanvasSaveMethodId();
  _JNIEnv::CallIntMethod(p_Var2,p_Var13,uVar3);
  puVar15 = *(undefined4 **)(this + 0x20);
  if (puVar15 < *(undefined4 **)(this + 0x28)) {
    puVar17 = puVar15 + 1;
    *puVar15 = puVar15[-1];
    goto LAB_0033d230;
  }
  puVar14 = *(undefined4 **)(this + 0x18);
  lVar16 = (long)puVar15 - (long)puVar14 >> 2;
  uVar6 = lVar16 + 1;
  if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0033dc4c(this + 0x18);
  }
  uVar5 = (long)*(undefined4 **)(this + 0x28) - (long)puVar14;
  uVar9 = (long)uVar5 >> 1;
  if (uVar9 <= uVar6) {
    uVar9 = uVar6;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar9 = 0x3fffffffffffffff;
  }
  if (uVar9 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar4 = operator_new(uVar9 << 2);
  }
  puVar8 = (undefined4 *)((long)pvVar4 + lVar16 * 4);
  puVar17 = puVar8 + 1;
  *puVar8 = puVar15[-1];
  if ((long)puVar15 - (long)puVar14 != 0) {
    uVar6 = ((long)puVar15 - (long)puVar14) - 4;
    puVar7 = puVar8;
    if ((0x1b < uVar6) &&
       (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar4)))) {
      puVar12 = (undefined8 *)(puVar15 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar11 = uVar6 & 0x7ffffffffffffff8;
      puVar15 = puVar15 + -uVar11;
      puVar7 = puVar8 + -uVar11;
      puVar10 = (undefined8 *)(puVar8 + -4);
      uVar5 = uVar11;
      do {
        puVar1 = puVar12 + -1;
        uVar19 = puVar12[-2];
        uVar18 = puVar12[1];
        uVar3 = *puVar12;
        uVar5 = uVar5 - 8;
        puVar12 = puVar12 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar19;
        puVar10[1] = uVar18;
        *puVar10 = uVar3;
        puVar10 = puVar10 + -4;
      } while (uVar5 != 0);
      puVar8 = puVar7;
      if (uVar6 == uVar11) goto LAB_0033d21c;
    }
    do {
      puVar15 = puVar15 + -1;
      puVar8 = puVar7 + -1;
      *puVar8 = *puVar15;
      puVar7 = puVar8;
    } while (puVar15 != puVar14);
  }
LAB_0033d21c:
  *(undefined4 **)(this + 0x18) = puVar8;
  *(undefined4 **)(this + 0x20) = puVar17;
  *(void **)(this + 0x28) = (void *)((long)pvVar4 + uVar9 * 4);
  if (puVar14 != (undefined4 *)0x0) {
    operator_delete(puVar14);
  }
LAB_0033d230:
  *(undefined4 **)(this + 0x20) = puVar17;
  return;
}


// ===== 0033d258  _JNIEnv::CallIntMethod =====

/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 400))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d2f4  rive_android::CanvasRenderer::restore =====

/* rive_android::CanvasRenderer::restore() */

void __thiscall rive_android::CanvasRenderer::restore(CanvasRenderer *this)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 8);
  uVar2 = GetCanvasRestoreMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,uVar2);
  if (4 < (ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18))) {
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + -4;
  }
  return;
}


// ===== 0033d350  rive_android::CanvasRenderer::transform =====

/* rive_android::CanvasRenderer::transform(rive::Mat2D const&) */

void __thiscall rive_android::CanvasRenderer::transform(CanvasRenderer *this,Mat2D *param_1)

{
  long lVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  _jobject *p_Var5;
  _jmethodID *p_Var6;
  _jobject *p_Var7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetMatrixClass();
  uVar4 = GetMatrixInitMethodId();
  p_Var5 = (_jobject *)_JNIEnv::NewObject(p_Var2,p_Var3,uVar4);
  uVar8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  local_54 = 0;
  uStack_50 = 0;
  local_4c = 0x3f800000;
  auVar9._12_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  auVar9._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
  auVar9 = NEON_rev64(auVar9,4);
  local_6c = *(undefined4 *)param_1;
  local_58 = *(undefined4 *)(param_1 + 0x14);
  uStack_60 = CONCAT44(auVar9._12_4_,auVar9._4_4_);
  local_68 = CONCAT44(uVar8,uVar8);
  uVar4 = (**(code **)(*(long *)p_Var2 + 0x5a8))(p_Var2,9);
  (**(code **)(*(long *)p_Var2 + 0x6a8))(p_Var2,uVar4,0,9,&local_6c);
  p_Var6 = (_jmethodID *)GetMatrixSetValuesMethodId();
  JNIExceptionHandler::CallVoidMethod((_JNIEnv *)p_Var2,p_Var5,p_Var6,uVar4);
  p_Var7 = *(_jobject **)(this + 8);
  p_Var6 = (_jmethodID *)GetCanvasConcatMatrixMethodId();
  JNIExceptionHandler::CallVoidMethod((_JNIEnv *)p_Var2,p_Var7,p_Var6,p_Var5);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar4);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d4a4  rive_android::CanvasRenderer::clipPath =====

/* rive_android::CanvasRenderer::clipPath(rive::RenderPath*) */

void __thiscall rive_android::CanvasRenderer::clipPath(CanvasRenderer *this,RenderPath *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 8);
  uVar2 = GetCanvasClipPathMethodId();
  _JNIEnv::CallBooleanMethod(p_Var1,p_Var3,uVar2,*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 0033d4ec  rive_android::CanvasRenderer::drawPath =====

/* rive_android::CanvasRenderer::drawPath(rive::RenderPath*, rive::RenderPaint*) */

void __thiscall
rive_android::CanvasRenderer::drawPath
          (CanvasRenderer *this,RenderPath *param_1,RenderPaint *param_2)

{
  long lVar1;
  _jobject *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  _jobject *p_Var5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  _jmethodID *p_Var9;
  float fVar10;
  float local_b8 [5];
  long local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  long lStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  ulong uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_jobject *)GetJNIEnv();
  p_Var9 = *(_jmethodID **)(param_2 + 0x10);
  fVar10 = *(float *)(*(long *)(this + 0x20) + -4);
  if (1.0 <= fVar10) {
    p_Var3 = *(_jmethodID **)(this + 8);
    uVar4 = GetCanvasDrawPathMethodId();
    if (*(long *)(lVar1 + 0x28) == local_68) {
      _JNIEnv::CallVoidMethod(p_Var2,p_Var3,uVar4,*(undefined8 *)(param_1 + 0x18),p_Var9);
      return;
    }
  }
  else {
    uStack_9c = 0;
    local_94 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    local_78 = 0;
    uStack_84 = 0;
    local_b8[3] = 0.0;
    local_b8[4] = 0.0;
    local_b8[1] = 0.0;
    local_b8[2] = 0.0;
    local_a4 = (ulong)(uint)fVar10 << 0x20;
    lStack_8c = (ulong)(uint)fVar10 << 0x20;
    uStack_70 = (ulong)(uint)fVar10;
    local_b8[0] = fVar10;
    p_Var3 = (_jmethodID *)GetColorMatrixClass();
    uVar4 = GetColorMatrixInitMethodId();
    p_Var5 = (_jobject *)_JNIEnv::NewObject((_jclass *)p_Var2,p_Var3,uVar4);
    uVar4 = (**(code **)(*(long *)p_Var2 + 0x5a8))(p_Var2,0x14);
    (**(code **)(*(long *)p_Var2 + 0x6a8))(p_Var2,uVar4,0,0x14,local_b8);
    p_Var6 = (_jmethodID *)GetColorMatrixSetMethodId();
    JNIExceptionHandler::CallVoidMethod((_JNIEnv *)p_Var2,p_Var5,p_Var6,uVar4);
    p_Var6 = (_jmethodID *)GetColorMatrixColorFilterClass();
    uVar7 = GetColorMatrixColorFilterInitMethodId();
    uVar7 = _JNIEnv::NewObject((_jclass *)p_Var2,p_Var6,uVar7,p_Var5);
    uVar8 = GetSetColorFilterMethodId();
    _JNIEnv::CallObjectMethod(p_Var2,p_Var9,uVar8,uVar7);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var6);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar4);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var5);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar7);
    p_Var3 = *(_jmethodID **)(this + 8);
    uVar4 = GetCanvasDrawPathMethodId();
    _JNIEnv::CallVoidMethod(p_Var2,p_Var3,uVar4,*(undefined8 *)(param_1 + 0x18),p_Var9);
    uVar4 = GetSetColorFilterMethodId();
    _JNIEnv::CallObjectMethod(p_Var2,p_Var9,uVar4,0);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d73c  rive_android::CanvasRenderer::drawImage =====

/* rive_android::CanvasRenderer::drawImage(rive::RenderImage const*, rive::ImageSampler,
   rive::BlendMode, float) */

void __thiscall
rive_android::CanvasRenderer::drawImage
          (float param_1_00,CanvasRenderer *this,long param_1,undefined8 param_4,undefined4 param_5)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  _jobject *p_Var4;
  
  p_Var4 = *(_jobject **)(param_1 + 0x38);
  CanvasRenderPaint::SetPaintAlpha
            (p_Var4,(int)(*(float *)(*(long *)(this + 0x20) + -4) * param_1_00 * 255.0));
  CanvasRenderPaint::SetBlendMode(p_Var4,param_5);
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetAntiAliasMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,(_jmethodID *)p_Var4,uVar2,1);
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 8);
  uVar2 = GetCanvasDrawBitmapMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,0,0,uVar2,*(undefined8 *)(param_1 + 0x30),p_Var4);
  return;
}


// ===== 0033d7f4  rive_android::CanvasRenderer::drawImageMesh =====

/* rive_android::CanvasRenderer::drawImageMesh(rive::RenderImage const*, rive::ImageSampler,
   rive::rcp<rive::RenderBuffer>, rive::rcp<rive::RenderBuffer>, rive::rcp<rive::RenderBuffer>,
   unsigned int, unsigned int, rive::BlendMode, float) */

void __thiscall
rive_android::CanvasRenderer::drawImageMesh
          (float param_1_00,CanvasRenderer *this,long param_1,undefined8 param_4,long *param_5,
          long *param_6,long *param_7,uint param_8,undefined4 param_9,undefined1 param_10)

{
  uint uVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  _jclass *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jobject *p_Var8;
  float *__s;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 uVar15;
  float *pfVar16;
  _jobject *p_Var17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  p_Var17 = *(_jobject **)(param_1 + 0x38);
  CanvasRenderPaint::SetPaintAlpha
            (p_Var17,(int)(*(float *)(*(long *)(this + 0x20) + -4) * param_1_00 * 255.0));
  CanvasRenderPaint::SetBlendMode(p_Var17,param_10);
  p_Var2 = (_JNIEnv *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetSetAntiAliasMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var2,p_Var17,p_Var3,1);
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  p_Var4 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetBitmapShaderClass();
  uVar5 = GetTileModeClass();
  uVar6 = GetClampId();
  uVar6 = (**(code **)(*(long *)p_Var4 + 0x488))(p_Var4,uVar5,uVar6);
  uVar7 = GetBitmapShaderConstructor();
  p_Var8 = (_jobject *)_JNIEnv::NewObject(p_Var4,p_Var3,uVar7,uVar18,uVar6,uVar6);
  (**(code **)(*(long *)p_Var4 + 0xb8))(p_Var4,uVar5);
  (**(code **)(*(long *)p_Var4 + 0xb8))(p_Var4,p_Var3);
  CanvasRenderPaint::SetShader(p_Var17,p_Var8);
  uVar5 = GetAndroidCanvasVertexModeClass();
  uVar6 = GetVertexModeTrianglesId();
  uVar6 = (**(code **)(*(long *)p_Var2 + 0x488))(p_Var2,uVar5,uVar6);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar5);
  uVar1 = param_8 << 1;
  uVar19 = (ulong)uVar1;
  uVar7 = *(undefined8 *)(*param_5 + 0x28);
  uVar5 = (**(code **)(*(long *)p_Var2 + 0x5a8))(p_Var2,uVar19);
  (**(code **)(*(long *)p_Var2 + 0x6a8))(p_Var2,uVar5,0,uVar19,uVar7);
  pfVar16 = *(float **)(*param_6 + 0x28);
  if (uVar1 == 0) {
    __s = (float *)0x0;
  }
  else {
    __s = (float *)operator_new(uVar19 << 2);
    memset(__s,0,uVar19 << 2);
  }
  if (param_8 != 0) {
    uVar9 = (ulong)param_8;
    fVar20 = (float)*(int *)(param_1 + 0x10);
    fVar21 = (float)*(int *)(param_1 + 0x14);
    if ((param_8 < 4) || ((__s < pfVar16 + uVar9 * 2 && (pfVar16 < __s + uVar9 * 2)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9 & 0xfffffffc;
      uVar12 = uVar11;
      pfVar13 = pfVar16;
      pfVar14 = __s;
      do {
        fVar22 = *pfVar13;
        fVar26 = pfVar13[1];
        fVar23 = pfVar13[2];
        fVar27 = pfVar13[3];
        fVar24 = pfVar13[4];
        fVar28 = pfVar13[5];
        fVar25 = pfVar13[6];
        fVar29 = pfVar13[7];
        pfVar13 = pfVar13 + 8;
        uVar12 = uVar12 - 4;
        *pfVar14 = fVar22 * fVar20;
        pfVar14[1] = fVar26 * fVar21;
        pfVar14[2] = fVar23 * fVar20;
        pfVar14[3] = fVar27 * fVar21;
        pfVar14[4] = fVar24 * fVar20;
        pfVar14[5] = fVar28 * fVar21;
        pfVar14[6] = fVar25 * fVar20;
        pfVar14[7] = fVar29 * fVar21;
        pfVar14 = pfVar14 + 8;
      } while (uVar12 != 0);
      if (uVar11 == uVar9) goto LAB_0033da48;
    }
    lVar10 = uVar9 - uVar11;
    uVar9 = uVar11 << 3 | 4;
    pfVar16 = (float *)((long)pfVar16 + uVar9);
    pfVar13 = (float *)((long)__s + uVar9);
    do {
      lVar10 = lVar10 + -1;
      pfVar13[-1] = pfVar16[-1] * fVar20;
      *pfVar13 = *pfVar16 * fVar21;
      pfVar16 = pfVar16 + 2;
      pfVar13 = pfVar13 + 2;
    } while (lVar10 != 0);
  }
LAB_0033da48:
  uVar7 = (**(code **)(*(long *)p_Var2 + 0x5a8))(p_Var2,uVar1);
  (**(code **)(*(long *)p_Var2 + 0x6a8))(p_Var2,uVar7,0,uVar19,__s);
  uVar15 = *(undefined8 *)(*param_7 + 0x28);
  uVar18 = (**(code **)(*(long *)p_Var2 + 0x590))(p_Var2,param_9);
  (**(code **)(*(long *)p_Var2 + 0x690))(p_Var2,uVar18,0,param_9,uVar15);
  p_Var8 = *(_jobject **)(this + 8);
  p_Var3 = (_jmethodID *)GetCanvasDrawVerticesMethodId();
  JNIExceptionHandler::CallVoidMethod
            (p_Var2,p_Var8,p_Var3,uVar6,(ulong)uVar1,uVar5,0,uVar7,0,0,0,uVar18,0,param_9,p_Var17);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar5);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar7);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar18);
  if (__s == (float *)0x0) {
    return;
  }
  operator_delete(__s);
  return;
}


// ===== 0033dbcc  rive_android::CanvasRenderer::~CanvasRenderer =====

/* rive_android::CanvasRenderer::~CanvasRenderer() */

void __thiscall rive_android::CanvasRenderer::~CanvasRenderer(CanvasRenderer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067ccb0 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0033dbf4  rive_android::CanvasRenderer::~CanvasRenderer =====

/* rive_android::CanvasRenderer::~CanvasRenderer() */

void __thiscall rive_android::CanvasRenderer::~CanvasRenderer(CanvasRenderer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined **)this = PTR_vtable_0067ccb0 + 0x10;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0033dc38  rive_android::CanvasRenderer::modulateOpacity =====

/* rive_android::CanvasRenderer::modulateOpacity(float) */

void __thiscall rive_android::CanvasRenderer::modulateOpacity(CanvasRenderer *this,float param_1)

{
  *(float *)(*(long *)(this + 0x20) + -4) = *(float *)(*(long *)(this + 0x20) + -4) * param_1;
  return;
}


// ===== 0033dc4c  FUN_0033dc4c =====

void FUN_0033dc4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0033dc60  rive_android::DimensionsHelper::computeDimensions =====

/* rive_android::DimensionsHelper::computeDimensions(rive::Fit, rive::Alignment, rive::AABB const&,
   rive::AABB const&, float) */

undefined1  [16]
rive_android::DimensionsHelper::computeDimensions
          (long *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive::computeAlignment(auStack_50,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x20))(param_1,auStack_50);
  param_1[1] = CONCAT44((float)((ulong)param_1[2] >> 0x20) *
                        ((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)*param_4 >> 0x20)),
                        (float)param_1[2] * ((float)param_4[1] - (float)*param_4));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033dcf8  rive_android::consume_egl_error_or_default =====

/* rive_android::consume_egl_error_or_default(int, char const*) */

void rive_android::consume_egl_error_or_default(int param_1,char *param_2)

{
  void *pvVar1;
  long lVar2;
  rive_android *this;
  rive_android *prVar3;
  undefined1 auVar4 [12];
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  this = (rive_android *)(ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  auVar4 = eglGetError();
  prVar3 = auVar4._0_8_;
  if (auVar4._0_4_ == 0x3000) {
    EGLErrorString(this,auVar4._8_4_);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    RiveLogW(param_2,"eglGetError() returned EGL_SUCCESS unexpectedly; falling back to %s.",pvVar1);
    prVar3 = this;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(prVar3);
  }
  return;
}


// ===== 0033dd9c  rive_android::EGLResult::FailureOperationName =====

/* rive_android::EGLResult::FailureOperationName(rive_android::EGLResult::FailureOperation) */

char * rive_android::EGLResult::FailureOperationName(uint param_1)

{
  if (param_1 < 4) {
    return (&PTR_DAT_006520f8)[param_1];
  }
  return "unknown";
}


// ===== 0033ddc0  rive_android::EGLResult::IsFatalEGLError =====

/* rive_android::EGLResult::IsFatalEGLError(int) */

bool rive_android::EGLResult::IsFatalEGLError(int param_1)

{
  return (param_1 - 0x3007U & 0xfffffff9) != 0;
}


// ===== 0033ddd4  rive_android::EGLResult::summary =====

/* WARNING: Type propagation algorithm not settling */
/* rive_android::EGLResult::summary() const */

void rive_android::EGLResult::summary(void)

{
  long lVar1;
  void *pvVar2;
  long in_x0;
  ulong *puVar3;
  undefined8 *puVar4;
  int in_w1;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_e8;
  undefined7 local_e7;
  undefined4 uStack_e0;
  undefined1 local_dc;
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EGLErrorString((rive_android *)(ulong)*(uint *)(in_x0 + 4),in_w1);
  local_e8 = 0x16;
  local_dc = 0;
  local_e7 = (undefined7)s_operation__0024d1c9._0_8_;
  uStack_e0 = CONCAT31(0x203a6e,SUB81(s_operation__0024d1c9._0_8_,7));
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_e8);
  uStack_c8 = puVar3[1];
  local_d0 = *puVar3;
  local_c0 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_d0);
  uStack_a8 = puVar3[1];
  local_b0 = *puVar3;
  local_a0 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_b0,(ulong)pvVar2);
  uStack_88 = puVar3[1];
  local_90 = *puVar3;
  local_80 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90);
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  local_60 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_70);
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar5 = puVar4[2];
  puVar4[2] = 0;
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  in_x8[2] = uVar5;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e004  rive_android::JNIFileAssetLoader::JNIFileAssetLoader =====

/* rive_android::JNIFileAssetLoader::JNIFileAssetLoader(_jobject*, _JNIEnv*) */

void __thiscall
rive_android::JNIFileAssetLoader::JNIFileAssetLoader
          (JNIFileAssetLoader *this,_jobject *param_1,_JNIEnv *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = PTR_vtable_0067ccb8;
  *(undefined4 *)(this + 8) = 1;
  lVar3 = *(long *)param_2;
  *(undefined8 *)(this + 0x10) = 0;
  pcVar4 = *(code **)(lVar3 + 0xa8);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  uVar2 = (*pcVar4)(param_2);
  lVar3 = *(long *)param_2;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = (**(code **)(lVar3 + 0xf8))(param_2,param_1);
  uVar2 = (**(code **)(*(long *)param_2 + 0x108))
                    (param_2,uVar2,"loadContents","(Lapp/rive/runtime/kotlin/core/FileAsset;[B)Z");
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}


// ===== 0033e0a4  rive_android::JNIFileAssetLoader::~JNIFileAssetLoader =====

/* rive_android::JNIFileAssetLoader::~JNIFileAssetLoader() */

void __thiscall rive_android::JNIFileAssetLoader::~JNIFileAssetLoader(JNIFileAssetLoader *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067ccb8 + 0x10;
  plVar1 = (long *)GetJNIEnv();
  if (*(long *)(this + 0x10) != 0) {
    (**(code **)(*plVar1 + 0xb0))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


// ===== 0033e0ec  rive_android::JNIFileAssetLoader::~JNIFileAssetLoader =====

/* rive_android::JNIFileAssetLoader::~JNIFileAssetLoader() */

void __thiscall rive_android::JNIFileAssetLoader::~JNIFileAssetLoader(JNIFileAssetLoader *this)

{
  ~JNIFileAssetLoader(this);
  operator_delete(this);
  return;
}


// ===== 0033e110  rive_android::JNIFileAssetLoader::loadContents =====

/* rive_android::JNIFileAssetLoader::loadContents(rive::FileAsset&, rive::Span<unsigned char const>,
   rive::Factory*) */

bool __thiscall
rive_android::JNIFileAssetLoader::loadContents
          (JNIFileAssetLoader *this,undefined8 param_1,undefined8 param_3,ulong param_4)

{
  char cVar1;
  undefined4 uVar2;
  _JNIEnv *p_Var3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  lVar4 = MakeKtAsset(p_Var3,param_1,*(undefined4 *)(this + 0x20));
  if (lVar4 == 0) {
    pcVar6 = "loadContents() failed to create FileAsset";
  }
  else {
    uVar2 = SizeTToInt(param_4);
    lVar5 = (**(code **)(*(long *)p_Var3 + 0x580))(p_Var3,uVar2);
    if (lVar5 != 0) {
      uVar2 = SizeTToInt(param_4);
      (**(code **)(*(long *)p_Var3 + 0x680))(p_Var3,lVar5,0,uVar2,param_3);
      cVar1 = JNIExceptionHandler::CallBooleanMethod
                        (p_Var3,*(_jobject **)(this + 0x10),*(_jmethodID **)(this + 0x18),lVar4,
                         lVar5);
      (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,lVar5);
      (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,lVar4);
      return cVar1 != '\0';
    }
    pcVar6 = "loadContents() failed to allocate NewByteArray";
  }
  RiveLogE("RiveLN/JNIFileAssetLoader",pcVar6);
  return false;
}


// ===== 0033e228  rive_android::JNIFileAssetLoader::MakeKtAsset =====

/* rive_android::JNIFileAssetLoader::MakeKtAsset(_JNIEnv*, rive::FileAsset&,
   rive_android::RendererType) */

long rive_android::JNIFileAssetLoader::MakeKtAsset(_jclass *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  _jmethodID *p_Var2;
  long lVar3;
  char *pcVar4;
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x69);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x8d);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x196);
      if ((uVar1 & 1) == 0) {
        RiveLogW("RiveLN/JNIFileAssetLoader","Trying to make unknown file asset type %d",0x67);
        goto LAB_0033e360;
      }
      pcVar4 = "app/rive/runtime/kotlin/core/AudioAsset";
    }
    else {
      pcVar4 = "app/rive/runtime/kotlin/core/FontAsset";
    }
  }
  else {
    pcVar4 = "app/rive/runtime/kotlin/core/ImageAsset";
  }
  p_Var2 = (_jmethodID *)(**(code **)(*(long *)param_1 + 0x30))(param_1,pcVar4);
  if (p_Var2 != (_jmethodID *)0x0) {
    lVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,p_Var2,"<init>","(JI)V");
    if (lVar3 == 0) {
      pcVar4 = "MakeKtAsset() failed to find FileAsset constructor";
    }
    else {
      lVar3 = _JNIEnv::NewObject(param_1,p_Var2,lVar3,param_2,param_3 & 0xffffffff);
      if (lVar3 != 0) {
        return lVar3;
      }
      pcVar4 = "MakeKtAsset() failed to create FileAsset";
    }
    RiveLogE("RiveLN/JNIFileAssetLoader",pcVar4);
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,p_Var2);
    return 0;
  }
LAB_0033e360:
  RiveLogE("RiveLN/JNIFileAssetLoader","MakeKtAsset() failed to find FileAsset class");
  return 0;
}


// ===== 0033e388  rive_android::JNIRenderer::JNIRenderer =====

/* rive_android::JNIRenderer::JNIRenderer(_jobject*, bool, rive_android::RendererType) */

void __thiscall
rive_android::JNIRenderer::JNIRenderer
          (JNIRenderer *this,undefined8 param_1,uint param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  bool extraout_w1;
  
  *(undefined4 *)(this + 0x18) = 0;
  RefWorker::CurrentOrFallback((RefWorker *)(this + 0x20),param_4);
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (JNIRenderer)0x0;
  *(undefined8 *)(this + 100) = 0;
  this[0x6c] = (JNIRenderer)0x0;
  makeTracer((JNIRenderer *)(ulong)param_3,extraout_w1);
  RiveLogD("RiveLN/JNIRenderer","Creating JNIRenderer.");
  return;
}


// ===== 0033e418  rive_android::JNIRenderer::makeTracer =====

/* rive_android::JNIRenderer::makeTracer(bool) */

void __thiscall rive_android::JNIRenderer::makeTracer(JNIRenderer *this,bool param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *in_x8;
  undefined *puVar6;
  char local_90 [104];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((ulong)this & 1) != 0) {
    local_90[0x54] = '\0';
    local_90[0x55] = '\0';
    local_90[0x56] = '\0';
    local_90[0x57] = '\0';
    local_90[0x58] = '\0';
    local_90[0x59] = '\0';
    local_90[0x5a] = '\0';
    local_90[0x5b] = '\0';
    local_90[0x50] = '\0';
    local_90[0x51] = '\0';
    local_90[0x52] = '\0';
    local_90[0x53] = '\0';
    local_90[0x18] = '\0';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
    local_90[0x1c] = '\0';
    local_90[0x1d] = '\0';
    local_90[0x1e] = '\0';
    local_90[0x1f] = '\0';
    local_90[0x10] = '\0';
    local_90[0x11] = '\0';
    local_90[0x12] = '\0';
    local_90[0x13] = '\0';
    local_90[0x14] = '\0';
    local_90[0x15] = '\0';
    local_90[0x16] = '\0';
    local_90[0x17] = '\0';
    local_90[0x28] = '\0';
    local_90[0x29] = '\0';
    local_90[0x2a] = '\0';
    local_90[0x2b] = '\0';
    local_90[0x2c] = '\0';
    local_90[0x2d] = '\0';
    local_90[0x2e] = '\0';
    local_90[0x2f] = '\0';
    local_90[0x20] = '\0';
    local_90[0x21] = '\0';
    local_90[0x22] = '\0';
    local_90[0x23] = '\0';
    local_90[0x24] = '\0';
    local_90[0x25] = '\0';
    local_90[0x26] = '\0';
    local_90[0x27] = '\0';
    local_90[0x38] = '\0';
    local_90[0x39] = '\0';
    local_90[0x3a] = '\0';
    local_90[0x3b] = '\0';
    local_90[0x3c] = '\0';
    local_90[0x3d] = '\0';
    local_90[0x3e] = '\0';
    local_90[0x3f] = '\0';
    local_90[0x30] = '\0';
    local_90[0x31] = '\0';
    local_90[0x32] = '\0';
    local_90[0x33] = '\0';
    local_90[0x34] = '\0';
    local_90[0x35] = '\0';
    local_90[0x36] = '\0';
    local_90[0x37] = '\0';
    local_90[0x48] = '\0';
    local_90[0x49] = '\0';
    local_90[0x4a] = '\0';
    local_90[0x4b] = '\0';
    local_90[0x4c] = '\0';
    local_90[0x4d] = '\0';
    local_90[0x4e] = '\0';
    local_90[0x4f] = '\0';
    local_90[0x40] = '\0';
    local_90[0x41] = '\0';
    local_90[0x42] = '\0';
    local_90[0x43] = '\0';
    local_90[0x44] = '\0';
    local_90[0x45] = '\0';
    local_90[0x46] = '\0';
    local_90[0x47] = '\0';
    local_90[8] = '\0';
    local_90[9] = '\0';
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0xd] = '\0';
    local_90[0xe] = '\0';
    local_90[0xf] = '\0';
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    iVar2 = __system_property_get("ro.build.version.sdk",local_90);
    if (((0 < iVar2) && (uVar3 = atoi(local_90), 0 < (int)uVar3)) && (0x16 < uVar3)) {
      plVar4 = (long *)operator_new(8);
      puVar6 = PTR_vtable_0067cb38;
      goto LAB_0033e4fc;
    }
    local_90[0x54] = '\0';
    local_90[0x55] = '\0';
    local_90[0x56] = '\0';
    local_90[0x57] = '\0';
    local_90[0x58] = '\0';
    local_90[0x59] = '\0';
    local_90[0x5a] = '\0';
    local_90[0x5b] = '\0';
    local_90[0x50] = '\0';
    local_90[0x51] = '\0';
    local_90[0x52] = '\0';
    local_90[0x53] = '\0';
    local_90[0x18] = '\0';
    local_90[0x19] = '\0';
    local_90[0x1a] = '\0';
    local_90[0x1b] = '\0';
    local_90[0x1c] = '\0';
    local_90[0x1d] = '\0';
    local_90[0x1e] = '\0';
    local_90[0x1f] = '\0';
    local_90[0x10] = '\0';
    local_90[0x11] = '\0';
    local_90[0x12] = '\0';
    local_90[0x13] = '\0';
    local_90[0x14] = '\0';
    local_90[0x15] = '\0';
    local_90[0x16] = '\0';
    local_90[0x17] = '\0';
    local_90[0x28] = '\0';
    local_90[0x29] = '\0';
    local_90[0x2a] = '\0';
    local_90[0x2b] = '\0';
    local_90[0x2c] = '\0';
    local_90[0x2d] = '\0';
    local_90[0x2e] = '\0';
    local_90[0x2f] = '\0';
    local_90[0x20] = '\0';
    local_90[0x21] = '\0';
    local_90[0x22] = '\0';
    local_90[0x23] = '\0';
    local_90[0x24] = '\0';
    local_90[0x25] = '\0';
    local_90[0x26] = '\0';
    local_90[0x27] = '\0';
    local_90[0x38] = '\0';
    local_90[0x39] = '\0';
    local_90[0x3a] = '\0';
    local_90[0x3b] = '\0';
    local_90[0x3c] = '\0';
    local_90[0x3d] = '\0';
    local_90[0x3e] = '\0';
    local_90[0x3f] = '\0';
    local_90[0x30] = '\0';
    local_90[0x31] = '\0';
    local_90[0x32] = '\0';
    local_90[0x33] = '\0';
    local_90[0x34] = '\0';
    local_90[0x35] = '\0';
    local_90[0x36] = '\0';
    local_90[0x37] = '\0';
    local_90[0x48] = '\0';
    local_90[0x49] = '\0';
    local_90[0x4a] = '\0';
    local_90[0x4b] = '\0';
    local_90[0x4c] = '\0';
    local_90[0x4d] = '\0';
    local_90[0x4e] = '\0';
    local_90[0x4f] = '\0';
    local_90[0x40] = '\0';
    local_90[0x41] = '\0';
    local_90[0x42] = '\0';
    local_90[0x43] = '\0';
    local_90[0x44] = '\0';
    local_90[0x45] = '\0';
    local_90[0x46] = '\0';
    local_90[0x47] = '\0';
    local_90[8] = '\0';
    local_90[9] = '\0';
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0xd] = '\0';
    local_90[0xe] = '\0';
    local_90[0xf] = '\0';
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    iVar2 = __system_property_get("ro.build.version.sdk",local_90);
    if (iVar2 < 1) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar3 = atoi(local_90);
      if ((int)uVar3 < 1) {
        uVar3 = 0xffffffff;
      }
      uVar5 = (ulong)uVar3;
    }
    RiveLogE("RiveLN/JNIRenderer","JNIRenderer cannot enable tracing on API <23. API version is %d."
             ,uVar5);
  }
  plVar4 = (long *)operator_new(8);
  puVar6 = PTR_vtable_0067cb40;
LAB_0033e4fc:
  *in_x8 = plVar4;
  *plVar4 = (long)(puVar6 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e52c  rive_android::JNIRenderer::~JNIRenderer =====

/* rive_android::JNIRenderer::~JNIRenderer() */

void __thiscall rive_android::JNIRenderer::~JNIRenderer(JNIRenderer *this)

{
  long *plVar1;
  
  RiveLogD("RiveLN/JNIRenderer","Deleting JNIRenderer.");
  plVar1 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(RefWorker **)(this + 0x20) != (RefWorker *)0x0) {
    RefWorker::unref(*(RefWorker **)(this + 0x20));
    return;
  }
  return;
}


// ===== 0033e5a0  rive_android::JNIRenderer::scheduleDispose =====

/* rive_android::JNIRenderer::scheduleDispose() */

void __thiscall rive_android::JNIRenderer::scheduleDispose(JNIRenderer *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_70;
  JNIRenderer *pJStack_68;
  long *local_50;
  long local_38;
  
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00340890(1,this + 0x6c);
  lVar3 = *(long *)(this + 0x20);
  local_70 = &PTR_FUN_00652150;
  pJStack_68 = this;
  local_50 = (long *)&local_70;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar3 + 0x48),(function *)&local_70);
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0033e658;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_0033e658:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e680  rive_android::JNIRenderer::setSurface =====

/* rive_android::JNIRenderer::setSurface(std::__ndk1::variant<std::__ndk1::monostate,
   ANativeWindow*, _jobject*>) */

void rive_android::JNIRenderer::setSurface(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  function *pfVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  function local_80 [32];
  long *local_60;
  long local_48;
  
  pfVar3 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      RiveLogW("RiveLN/JNIRenderer","setSurface() called after scheduleDisposal()");
      return;
    }
    goto LAB_0033e814;
  }
  if (param_3 == 2) {
    plVar2 = (long *)GetJNIEnv();
    param_2 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    uVar4 = 0;
    lVar5 = 2;
  }
  else if (param_3 == 1) {
    ANativeWindow_acquire(param_2);
    uVar4 = 0;
    lVar5 = 1;
  }
  else {
    RiveLogD("RiveLN/JNIRenderer","Main thread: Surface destroy enqueued.");
    lVar5 = 0;
    uVar4 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  local_60 = (long *)operator_new(0x28);
  local_60[2] = param_2;
  local_60[3] = lVar5;
  *local_60 = (long)&PTR_FUN_00652198;
  local_60[1] = param_1;
  *(undefined1 *)(local_60 + 4) = uVar4;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar6 + 0x48),local_80);
  *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((function *)local_60 == local_80) {
    lVar5 = 4;
LAB_0033e7e0:
    (**(code **)(*(long *)pfVar3 + lVar5 * 8))();
  }
  else if (local_60 != (long *)0x0) {
    lVar5 = 5;
    pfVar3 = (function *)local_60;
    goto LAB_0033e7e0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0033e814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e818  rive_android::JNIRenderer::getRendererOnWorkerThread =====

/* rive_android::JNIRenderer::getRendererOnWorkerThread() const */

undefined8 __thiscall rive_android::JNIRenderer::getRendererOnWorkerThread(JNIRenderer *this)

{
  pthread_t pVar1;
  undefined8 uVar2;
  
  pVar1 = pthread_self();
  if ((*(pthread_t *)(this + 0x40) == pVar1) && (*(long **)(this + 0x48) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0033e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(this + 0x48) + 0x28))();
    return uVar2;
  }
  return 0;
}


// ===== 0033e864  rive_android::JNIRenderer::start =====

/* rive_android::JNIRenderer::start() */

void __thiscall rive_android::JNIRenderer::start(JNIRenderer *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_70;
  JNIRenderer *pJStack_68;
  long *local_50;
  long local_38;
  
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RiveLogD("RiveLN/JNIRenderer","Main thread: start()");
  if (((byte)this[0x6c] & 1) != 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      RiveLogW("RiveLN/JNIRenderer","start() called after scheduleDisposal()");
      return;
    }
    goto LAB_0033e988;
  }
  lVar3 = *(long *)(this + 0x20);
  local_70 = &PTR_FUN_006521e0;
  pJStack_68 = this;
  local_50 = (long *)&local_70;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar3 + 0x48),(function *)&local_70);
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 4;
LAB_0033e958:
    (**(code **)((long)*pppuVar2 + lVar3 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_50;
    goto LAB_0033e958;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0033e988:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e98c  rive_android::JNIRenderer::stop =====

/* rive_android::JNIRenderer::stop() */

void __thiscall rive_android::JNIRenderer::stop(JNIRenderer *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_70;
  JNIRenderer *pJStack_68;
  long *local_50;
  long local_38;
  
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RiveLogD("RiveLN/JNIRenderer","Main thread: stop()");
  if (((byte)this[0x6c] & 1) != 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      RiveLogW("RiveLN/JNIRenderer","stop() called after scheduleDisposal()");
      return;
    }
    goto LAB_0033eab0;
  }
  lVar3 = *(long *)(this + 0x20);
  local_70 = &PTR_FUN_00652228;
  pJStack_68 = this;
  local_50 = (long *)&local_70;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar3 + 0x48),(function *)&local_70);
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 4;
LAB_0033ea80:
    (**(code **)((long)*pppuVar2 + lVar3 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_50;
    goto LAB_0033ea80;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0033eab0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033eab4  rive_android::JNIRenderer::doFrame =====

/* rive_android::JNIRenderer::doFrame() */

void __thiscall rive_android::JNIRenderer::doFrame(JNIRenderer *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_80;
  JNIRenderer *pJStack_78;
  long *local_60;
  long local_48;
  
  pppuVar2 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x6c] & 1) != 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      RiveLogW("RiveLN/JNIRenderer","doFrame() called after scheduleDisposal()");
      return;
    }
    goto LAB_0033ec2c;
  }
  if (1 < (byte)this[0x50]) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      RiveLogV("RiveLN/JNIRenderer",
               "Main thread: doFrame() called too many times in a row; skipping. (Scheduled: %d vs. Max: %d)"
               ,(ulong)(byte)this[0x50],2);
      return;
    }
    goto LAB_0033ec2c;
  }
  lVar3 = *(long *)(this + 0x20);
  local_80 = &PTR_FUN_00652270;
  pJStack_78 = this;
  local_60 = (long *)&local_80;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar3 + 0x48),(function *)&local_80);
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((undefined ***)local_60 == &local_80) {
    lVar3 = 4;
LAB_0033ebec:
    (**(code **)((long)*pppuVar2 + lVar3 * 8))();
  }
  else if (local_60 != (long *)0x0) {
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_60;
    goto LAB_0033ebec;
  }
  FUN_00340f80(1,this + 0x50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0033ec2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ec30  rive_android::JNIRenderer::notifyRenderContextEvent =====

/* rive_android::JNIRenderer::notifyRenderContextEvent(int, rive_android::EGLResult const&) const */

void __thiscall
rive_android::JNIRenderer::notifyRenderContextEvent
          (JNIRenderer *this,int param_1,EGLResult *param_2)

{
  long lVar1;
  _JNIEnv *p_Var2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long local_68;
  long *local_60;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)GetJNIEnv();
  GetObjectClass(p_Var2,*(_jobject **)(this + 0x28));
  if (local_58 == 0) {
    RiveLogE("RiveLN/JNIRenderer","Failed to get renderer class for context event.");
    JNIExceptionHandler::ClearAndLogErrors
              (p_Var2,"RiveLN/JNIRenderer","notifyRenderContextEvent: GetObjectClass failed");
  }
  else {
    lVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                      (p_Var2,local_58,"onNativeRenderContextEvent","(IILjava/lang/String;)V");
    if (lVar3 == 0) {
      JNIExceptionHandler::ClearAndLogErrors
                (p_Var2,"RiveLN/JNIRenderer","notifyRenderContextEvent: jCallbackMID lookup failed")
      ;
    }
    else {
      pcVar4 = (char *)EGLResult::FailureOperationName(*(undefined4 *)param_2);
      MakeJString(p_Var2,pcVar4);
      _JNIEnv::CallVoidMethod
                ((_jobject *)p_Var2,*(_jmethodID **)(this + 0x28),lVar3,(ulong)(uint)param_1,
                 (ulong)*(uint *)(param_2 + 4),local_68);
      JNIExceptionHandler::ClearAndLogErrors
                (p_Var2,"RiveLN/JNIRenderer",
                 "notifyRenderContextEvent: jCallbackMID invocation failed");
      if (local_68 != 0) {
        (**(code **)(*local_60 + 0xb8))();
      }
    }
  }
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033eda8  rive_android::JNIRenderer::enterRecoveringState =====

/* rive_android::JNIRenderer::enterRecoveringState(rive_android::DrawableThreadState*,
   rive_android::EGLResult const&,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
rive_android::JNIRenderer::enterRecoveringState
          (JNIRenderer *this,undefined8 param_1,EGLResult *param_2,long param_4)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x18) != 1) {
    EGLResult::summary();
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    RiveLogW("RiveLN/JNIRenderer","Entering recovery state after fatal EGL error: %s",pvVar1);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar4 = *(undefined8 *)param_2;
    if (*(int *)(this + 0x18) != 1) {
      *(undefined4 *)(this + 0x18) = 1;
    }
    *(undefined8 *)this = uVar4;
    *(long *)(this + 8) = param_4 + 50000000;
    *(undefined8 *)(this + 0x10) = 0x32;
    notifyRenderContextEvent(this,0,param_2);
    if (*(WorkerImpl **)(this + 0x48) != (WorkerImpl *)0x0) {
      WorkerImpl::stop(*(WorkerImpl **)(this + 0x48));
      (**(code **)(**(long **)(this + 0x48) + 0x18))(*(long **)(this + 0x48),param_1);
      plVar3 = *(long **)(this + 0x48);
      *(undefined8 *)(this + 0x48) = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033eed4  rive_android::JNIRenderer::attemptRecovery =====

/* rive_android::JNIRenderer::attemptRecovery(rive_android::DrawableThreadState*,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
rive_android::JNIRenderer::attemptRecovery(JNIRenderer *this,long *param_1,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  WorkerImpl *pWVar4;
  long *plVar5;
  long lVar6;
  WorkerImpl *local_68 [2];
  void *local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x18) == 1) {
    if (*(long *)(this + 8) <= param_3) {
      if (*(int *)(this + 0x38) == 0) {
        uVar3 = 0;
        *(long *)(this + 8) = param_3 + *(long *)(this + 0x10) * 1000000;
        goto LAB_0033effc;
      }
      local_50 = (**(code **)(*param_1 + 0x18))(param_1);
      if (local_50 >> 0x20 == 0x3000) {
        WorkerImpl::Make(local_68,*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38),param_1,
                         *(undefined4 *)(*(long *)(this + 0x20) + 8));
        pWVar4 = local_68[0];
        plVar5 = *(long **)(this + 0x48);
        local_68[0] = (WorkerImpl *)0x0;
        *(WorkerImpl **)(this + 0x48) = pWVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5);
          pWVar4 = local_68[0];
          local_68[0] = (WorkerImpl *)0x0;
          if (pWVar4 != (WorkerImpl *)0x0) {
            (**(code **)(*(long *)pWVar4 + 8))();
          }
          pWVar4 = *(WorkerImpl **)(this + 0x48);
        }
        if (pWVar4 == (WorkerImpl *)0x0) {
          lVar6 = *(long *)(this + 0x10) * 2;
          if (999 < lVar6) {
            lVar6 = 1000;
          }
          *(long *)(this + 8) = param_3 + lVar6 * 1000000;
          *(long *)(this + 0x10) = lVar6;
          RiveLogW("RiveLN/JNIRenderer",
                   "Recovery created EGL state but failed to recreate WorkerImpl. Retrying in %lldms"
                   ,lVar6);
          uVar3 = 0;
          goto LAB_0033effc;
        }
        WorkerImpl::start(pWVar4,*(undefined8 *)(this + 0x28));
        local_68[0] = (WorkerImpl *)0x300000000003;
        notifyRenderContextEvent(this,1,(EGLResult *)local_68);
        if (*(int *)(this + 0x18) != 0) {
          *(undefined4 *)(this + 0x18) = 0;
        }
        RiveLogI("RiveLN/JNIRenderer","Successfully recovered EGL context and resumed rendering.");
        goto LAB_0033eff8;
      }
      *(ulong *)this = local_50;
      lVar6 = *(long *)(this + 0x10) * 2;
      if (999 < lVar6) {
        lVar6 = 1000;
      }
      *(long *)(this + 8) = param_3 + lVar6 * 1000000;
      *(long *)(this + 0x10) = lVar6;
      EGLResult::summary();
      pvVar1 = (void *)((ulong)local_68 | 1);
      if (((ulong)local_68[0] & 1) != 0) {
        pvVar1 = local_58;
      }
      RiveLogW("RiveLN/JNIRenderer","Recovery attempt failed: %s. Retrying in %lldms",pvVar1,
               *(undefined8 *)(this + 0x10));
      if (((ulong)local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0033eff8:
    uVar3 = 1;
  }
LAB_0033effc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0033f100  rive_android::JNIRenderer::calculateFps =====

/* rive_android::JNIRenderer::calculateFps(std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall rive_android::JNIRenderer::calculateFps(JNIRenderer *this,long param_2)

{
  int iVar1;
  float fVar2;
  
  (**(code **)(**(long **)(this + 0x70) + 0x10))(*(long **)(this + 0x70),"calculateFps()");
  iVar1 = *(int *)(this + 0x68);
  *(int *)(this + 0x68) = iVar1 + 1;
  fVar2 = *(float *)(this + 100) + 1.0 / ((float)(param_2 - *(long *)(this + 0x58)) / 1e+09);
  *(float *)(this + 100) = fVar2;
  if (iVar1 + 1 == 10) {
    *(float *)(this + 0x60) = fVar2 / 10.0;
    *(undefined8 *)(this + 100) = 0;
  }
  *(long *)(this + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0033f1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x70) + 0x18))();
  return;
}


// ===== 0033f1a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f1a8  FUN_0033f1a8 =====

void FUN_0033f1a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00652150;
  puVar1[1] = uVar2;
  return;
}


// ===== 0033f1dc  FUN_0033f1dc =====

void FUN_0033f1dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00652150;
  param_2[1] = uVar1;
  return;
}


// ===== 0033f1f0  FUN_0033f1f0 =====

void FUN_0033f1f0(void)

{
  return;
}


// ===== 0033f1f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f1f8  FUN_0033f1f8 =====

void FUN_0033f1f8(long param_1,undefined8 *param_2)

{
  _jobject *p_Var1;
  long *plVar2;
  JNIRenderer *this;
  undefined8 uVar3;
  
  this = *(JNIRenderer **)(param_1 + 8);
  if (*(WorkerImpl **)(this + 0x48) != (WorkerImpl *)0x0) {
    uVar3 = *param_2;
    rive_android::WorkerImpl::stop(*(WorkerImpl **)(this + 0x48));
    (**(code **)(**(long **)(this + 0x48) + 0x18))(*(long **)(this + 0x48),uVar3);
  }
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var1 + 0xf8))(p_Var1,*(undefined8 *)(this + 0x28));
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x108))(p_Var1,uVar3,"disposeDependencies",&DAT_00241fd9);
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x28),uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb0))(p_Var1,*(undefined8 *)(this + 0x28));
  if (*(int *)(this + 0x38) == 2) {
    plVar2 = (long *)rive_android::GetJNIEnv();
    (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(this + 0x30));
  }
  else if (*(int *)(this + 0x38) == 1) {
    ANativeWindow_release(*(undefined8 *)(this + 0x30));
  }
  rive_android::RiveLogD("RiveLN/JNIRenderer","Worker thread: Deleting JNIRenderer.");
  rive_android::JNIRenderer::~JNIRenderer(this);
  operator_delete(this);
  return;
}


// ===== 0033f2ec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f2f0  FUN_0033f2f0 =====

void FUN_0033f2f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00652198;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  return;
}


// ===== 0033f330  FUN_0033f330 =====

void FUN_0033f330(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00652198;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 0033f350  FUN_0033f350 =====

void FUN_0033f350(void)

{
  return;
}


// ===== 0033f354  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f358  FUN_0033f358 =====

void FUN_0033f358(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  pthread_t pVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = *param_2;
  lVar8 = *(long *)(param_1 + 8);
  rive_android::RiveLogD("RiveLN/JNIRenderer","Worker thread: Setting surface.");
  pVar3 = pthread_self();
  plVar4 = *(long **)(lVar8 + 0x48);
  uVar7 = *(undefined8 *)(lVar8 + 0x30);
  iVar1 = *(int *)(lVar8 + 0x38);
  *(pthread_t *)(lVar8 + 0x40) = pVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
    plVar4 = *(long **)(lVar8 + 0x48);
    *(undefined8 *)(lVar8 + 0x48) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (iVar1 == 2) {
    plVar4 = (long *)rive_android::GetJNIEnv();
    (**(code **)(*plVar4 + 0xb0))(plVar4,uVar7);
  }
  else if (iVar1 == 1) {
    ANativeWindow_release(uVar7);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar8 + 0x30) = uVar7;
  if ((*(int *)(lVar8 + 0x38) != 0) && (*(int *)(lVar8 + 0x18) != 1)) {
    rive_android::WorkerImpl::Make
              (&local_60,*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38),uVar6,
               *(undefined4 *)(*(long *)(lVar8 + 0x20) + 8));
    plVar4 = local_60;
    plVar5 = *(long **)(lVar8 + 0x48);
    local_60 = (long *)0x0;
    *(long **)(lVar8 + 0x48) = plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar4 = local_60;
      local_60 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    rive_android::RiveLogD("RiveLN/JNIRenderer","Worker thread: Surface destroy complete.");
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033f4d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f4d4  FUN_0033f4d4 =====

void FUN_0033f4d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_006521e0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0033f508  FUN_0033f508 =====

void FUN_0033f508(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_006521e0;
  param_2[1] = uVar1;
  return;
}


// ===== 0033f51c  FUN_0033f51c =====

void FUN_0033f51c(void)

{
  return;
}


// ===== 0033f520  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f524  FUN_0033f524 =====

void FUN_0033f524(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  rive_android::RiveLogD("RiveLN/JNIRenderer","Worker thread: start()");
  if (*(long *)(lVar2 + 0x48) != 0) {
    uVar1 = std::__ndk1::chrono::steady_clock::now();
    *(undefined8 *)(lVar2 + 0x58) = uVar1;
    rive_android::WorkerImpl::start(*(WorkerImpl **)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  rive_android::RiveLogW
            ("RiveLN/JNIRenderer",
             "Worker thread: start() called before setSurface() or while recovering.");
  return;
}


// ===== 0033f590  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f594  FUN_0033f594 =====

void FUN_0033f594(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00652228;
  puVar1[1] = uVar2;
  return;
}


// ===== 0033f5c8  FUN_0033f5c8 =====

void FUN_0033f5c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00652228;
  param_2[1] = uVar1;
  return;
}


// ===== 0033f5dc  FUN_0033f5dc =====

void FUN_0033f5dc(void)

{
  return;
}


// ===== 0033f5e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f5e4  FUN_0033f5e4 =====

void FUN_0033f5e4(long param_1)

{
  WorkerImpl *this;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  rive_android::RiveLogD("RiveLN/JNIRenderer","Worker thread: stop()");
  this = *(WorkerImpl **)(lVar1 + 0x48);
  if (this != (WorkerImpl *)0x0) {
    rive_android::WorkerImpl::stop(this);
    return;
  }
  rive_android::RiveLogW("RiveLN/JNIRenderer","Worker thread: stop() called before setSurface()");
  return;
}


// ===== 0033f638  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f63c  FUN_0033f63c =====

void FUN_0033f63c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00652270;
  puVar1[1] = uVar2;
  return;
}


// ===== 0033f670  FUN_0033f670 =====

void FUN_0033f670(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00652270;
  param_2[1] = uVar1;
  return;
}


// ===== 0033f684  FUN_0033f684 =====

void FUN_0033f684(void)

{
  return;
}


// ===== 0033f688  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033f68c  FUN_0033f68c =====

void FUN_0033f68c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  JNIRenderer *pJVar6;
  undefined8 uVar7;
  float fVar8;
  byte local_70 [16];
  void *local_60;
  undefined1 local_58 [12];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = *param_2;
  pJVar6 = *(JNIRenderer **)(param_1 + 8);
  lVar4 = std::__ndk1::chrono::steady_clock::now();
  if (*(int *)(pJVar6 + 0x18) == 1) {
    rive_android::JNIRenderer::attemptRecovery(pJVar6,uVar7,lVar4);
  }
  else if (*(WorkerImpl **)(pJVar6 + 0x48) == (WorkerImpl *)0x0) {
    rive_android::RiveLogW
              ("RiveLN/JNIRenderer","Worker thread: doFrame() called before setSurface()");
  }
  else {
    local_58 = rive_android::WorkerImpl::doFrame
                         (*(WorkerImpl **)(pJVar6 + 0x48),*(undefined8 *)(pJVar6 + 0x70),uVar7,
                          *(undefined8 *)(pJVar6 + 0x28),lVar4);
    if (local_58._8_4_ == 0x3000) {
      if ((local_58 & (undefined1  [12])0xff) != (undefined1  [12])0x0) {
        (**(code **)(**(long **)(pJVar6 + 0x70) + 0x10))(*(long **)(pJVar6 + 0x70),"calculateFps()")
        ;
        iVar2 = *(int *)(pJVar6 + 0x68);
        *(int *)(pJVar6 + 0x68) = iVar2 + 1;
        fVar8 = *(float *)(pJVar6 + 100) + 1.0 / ((float)(lVar4 - *(long *)(pJVar6 + 0x58)) / 1e+09)
        ;
        *(float *)(pJVar6 + 100) = fVar8;
        if (iVar2 + 1 == 10) {
          *(float *)(pJVar6 + 0x60) = fVar8 / 10.0;
          *(undefined8 *)(pJVar6 + 100) = 0;
        }
        *(long *)(pJVar6 + 0x58) = lVar4;
        (**(code **)(**(long **)(pJVar6 + 0x70) + 0x18))();
      }
    }
    else {
      rive_android::EGLResult::summary();
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
      rive_android::RiveLogW("RiveLN/JNIRenderer","Frame aborted due to EGL error: %s",pvVar1);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      if ((local_58._8_4_ != 0x3000) &&
         (uVar5 = rive_android::EGLResult::IsFatalEGLError(local_58._8_4_), (uVar5 & 1) != 0)) {
        rive_android::JNIRenderer::enterRecoveringState(pJVar6,uVar7,(ulong)local_58 | 4,lVar4);
      }
    }
  }
  FUN_00340f80(0xffffffff,pJVar6 + 0x50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033f864  rive_android::WorkerImpl::Make =====

/* rive_android::WorkerImpl::Make(std::__ndk1::variant<std::__ndk1::monostate, ANativeWindow*,
   _jobject*>, rive_android::DrawableThreadState*, rive_android::RendererType) */

void rive_android::WorkerImpl::Make
               (undefined8 *param_1,ANativeWindow *param_2,int param_3,DrawableThreadState *param_4,
               int param_5)

{
  undefined *puVar1;
  PLSWorkerImpl *this;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  AudioEngine *this_00;
  DrawableThreadState *pDVar7;
  long lVar8;
  undefined1 auVar9 [16];
  bool local_4c [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_4c[0] = false;
  *param_1 = 0;
  if (param_5 == 1) {
    RiveLogD("RiveLN/WorkerImpl","Making Canvas WorkerImpl.");
    pDVar7 = param_4;
    if (param_3 != 2) {
LAB_0033fa38:
      auVar9 = FUN_0034073c();
      lVar4 = auVar9._0_8_;
      if (*(char *)(lVar4 + 0x28) != '\0') {
        RiveLogV("RiveLN/WorkerImpl","WorkerImpl already started.");
        return;
      }
      RiveLogD("RiveLN/WorkerImpl","Starting WorkerImpl.");
      plVar5 = (long *)GetJNIEnv();
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,auVar9._8_8_);
      uVar6 = (**(code **)(*plVar5 + 0x710))(plVar5,uVar6);
      lVar8 = *plVar5;
      *(undefined8 *)(lVar4 + 8) = uVar6;
      uVar6 = (**(code **)(lVar8 + 0x108))(plVar5,uVar6,&DAT_00242835,&DAT_00241fd9);
      lVar8 = *plVar5;
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
      uVar6 = (**(code **)(lVar8 + 0x108))
                        (plVar5,*(undefined8 *)(lVar4 + 8),"advance",&DAT_0024410c);
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      *(DrawableThreadState **)(lVar4 + 0x20) = pDVar7;
      *(undefined1 *)(lVar4 + 0x28) = 1;
      this_00 = (AudioEngine *)AudioEngine::Instance();
      AudioEngine::acquire(this_00);
      return;
    }
    plVar5 = (long *)operator_new(0x40);
    puVar1 = PTR_vtable_0067ccc0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[2] = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar2 = (long *)operator_new(0x30);
    *plVar2 = (long)(PTR_vtable_0067ccb0 + 0x10);
    plVar2[1] = 0;
    plVar2[2] = -1;
    puVar3 = (undefined4 *)operator_new(4);
    plVar2[3] = (long)puVar3;
    *puVar3 = 0x3f800000;
    plVar2[4] = (long)(puVar3 + 1);
    plVar2[5] = (long)(puVar3 + 1);
    plVar5[6] = (long)plVar2;
    plVar2 = (long *)GetJNIEnv();
    lVar8 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    *param_1 = plVar5;
    plVar5[7] = lVar8;
  }
  else {
    if (param_5 != 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
        RiveLogE("RiveLN/WorkerImpl","Failed to make WorkerImpl. Destroying impl.");
        return;
      }
      goto LAB_0033fa34;
    }
    pDVar7 = param_4;
    RiveLogD("RiveLN/WorkerImpl","Making Rive WorkerImpl.");
    if (param_3 != 1) goto LAB_0033fa38;
    this = (PLSWorkerImpl *)operator_new(0x48);
    PLSWorkerImpl::PLSWorkerImpl(this,param_2,param_4,local_4c);
    *param_1 = this;
    if (local_4c[0] == false) {
      RiveLogE("RiveLN/WorkerImpl","Failed to make WorkerImpl. Destroying impl.");
      (**(code **)(*(long *)this + 0x18))(this,param_4);
      lVar8 = *(long *)this;
      *param_1 = 0;
      (**(code **)(lVar8 + 8))(this);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_0033fa34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033fa3c  rive_android::WorkerImpl::start =====

/* rive_android::WorkerImpl::start(_jobject*,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
rive_android::WorkerImpl::start(WorkerImpl *this,undefined8 param_1,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  AudioEngine *this_00;
  long lVar3;
  
  if (this[0x28] != (WorkerImpl)0x0) {
    RiveLogV("RiveLN/WorkerImpl","WorkerImpl already started.");
    return;
  }
  RiveLogD("RiveLN/WorkerImpl","Starting WorkerImpl.");
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_1);
  uVar2 = (**(code **)(*plVar1 + 0x710))(plVar1,uVar2);
  lVar3 = *plVar1;
  *(undefined8 *)(this + 8) = uVar2;
  uVar2 = (**(code **)(lVar3 + 0x108))(plVar1,uVar2,&DAT_00242835,&DAT_00241fd9);
  lVar3 = *plVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = (**(code **)(lVar3 + 0x108))(plVar1,*(undefined8 *)(this + 8),"advance",&DAT_0024410c);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = param_3;
  this[0x28] = (WorkerImpl)0x1;
  this_00 = (AudioEngine *)AudioEngine::Instance();
  AudioEngine::acquire(this_00);
  return;
}


// ===== 0033fb28  rive_android::WorkerImpl::stop =====

/* rive_android::WorkerImpl::stop() */

void __thiscall rive_android::WorkerImpl::stop(WorkerImpl *this)

{
  AudioEngine *this_00;
  long *plVar1;
  
  if (this[0x28] != (WorkerImpl)0x0) {
    RiveLogD("RiveLN/WorkerImpl","Stopping WorkerImpl.");
    this_00 = (AudioEngine *)AudioEngine::Instance();
    AudioEngine::release(this_00);
    plVar1 = (long *)GetJNIEnv();
    if (*(long *)(this + 8) != 0) {
      (**(code **)(*plVar1 + 0x718))();
    }
    this[0x28] = (WorkerImpl)0x0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  RiveLogV("RiveLN/WorkerImpl","WorkerImpl already stopped.");
  return;
}


// ===== 0033fba4  rive_android::WorkerImpl::doFrame =====

/* rive_android::WorkerImpl::doFrame(rive_android::ITracer*, rive_android::DrawableThreadState*,
   _jobject*, std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

undefined1  [16] __thiscall
rive_android::WorkerImpl::doFrame
          (WorkerImpl *this,long *param_1,long *param_2,_jobject *param_3,long param_5)

{
  uint uVar1;
  _JNIEnv *p_Var2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  uint local_60;
  undefined4 uStack_5c;
  
  uVar1 = local_60;
  local_60 = local_60 & 0xffffff00;
  uStack_5c = 0;
  if (this[0x28] == (WorkerImpl)0x0) {
    RiveLogW("RiveLN/WorkerImpl","Trying to doFrame before WorkerImpl is started.");
    uVar5 = 0x3000;
  }
  else {
    lVar4 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = param_5;
    p_Var2 = (_JNIEnv *)GetJNIEnv();
    (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame");
    (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Advance");
    JNIExceptionHandler::CallVoidMethod
              (p_Var2,param_3,*(_jmethodID **)(this + 0x18),
               (double)((float)(param_5 - lVar4) / 1e+09));
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Draw");
    (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Draw/Begin");
    uVar3 = (**(code **)(*(long *)this + 0x10))(this,param_2);
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar5 = uVar3 >> 0x20;
    if (uVar5 == 0x3000) {
      (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Draw/Render");
      JNIExceptionHandler::CallVoidMethod(p_Var2,param_3,*(_jmethodID **)(this + 0x10));
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Draw/Flush");
      (**(code **)(*(long *)this + 0x20))(this,param_2);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x10))(param_1,"Rive/Frame/Draw/Present");
      uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar5 = uVar3 >> 0x20;
      if (uVar5 == 0x3000) {
        local_60 = CONCAT31(SUB43(uVar1,1),1);
      }
      else {
        uStack_5c = (undefined4)uVar3;
      }
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      uStack_5c = (undefined4)uVar3;
    }
  }
  auVar6._4_4_ = uStack_5c;
  auVar6._0_4_ = local_60;
  auVar6._8_8_ = uVar5;
  return auVar6;
}


// ===== 0033fe18  rive_android::PLSWorkerImpl::PLSWorkerImpl =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::PLSWorkerImpl::PLSWorkerImpl(ANativeWindow*, rive_android::DrawableThreadState*,
   bool*) */

void __thiscall
rive_android::PLSWorkerImpl::PLSWorkerImpl
          (PLSWorkerImpl *this,ANativeWindow *param_1,DrawableThreadState *param_2,bool *param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  RiveRenderer *this_00;
  char *pcVar12;
  RenderContext *pRVar13;
  long *plVar14;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_vtable_0067ccc8 + 0x10;
  this[0x28] = (PLSWorkerImpl)0x0;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  RiveLogD("RiveLN/EGLWorkerImpl","Creating EGLWorkerImpl.");
  *param_3 = false;
  lVar9 = EGLThreadState::createEGLSurface((EGLThreadState *)param_2,param_1);
  *(long *)(this + 0x30) = lVar9;
  puVar1 = PTR_vtable_0067ccd0;
  if (lVar9 == 0) {
    RiveLogE("RiveLN/EGLWorkerImpl","Failed to create EGL surface.");
    puVar1 = PTR_vtable_0067ccd0;
    bVar2 = *param_3;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined **)this = puVar1 + 0x10;
    if (bVar2 == false) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        pcVar12 = "Failed to make PLS WorkerImpl.";
        goto LAB_003400fc;
      }
      goto LAB_00340118;
    }
    lVar9 = *(long *)(this + 0x30);
  }
  else {
    *param_3 = true;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined **)this = puVar1 + 0x10;
  }
  uVar10 = (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar9);
  if (uVar10 >> 0x20 == 0x3000) {
    pRVar13 = *(RenderContext **)(param_2 + 0x28);
    if (pRVar13 == (RenderContext *)0x0) {
      *param_3 = false;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        pcVar12 = "Failed to make Rive Renderer RenderContext.";
        goto LAB_003400fc;
      }
    }
    else {
      uVar6 = ANativeWindow_getWidth(param_1);
      uVar7 = ANativeWindow_getHeight(param_1);
      glBindFramebuffer(0x8d40,0);
      glGetIntegerv(0x80a9,&local_5c);
      RiveLogD("RiveLN/PLSWorkerImpl","Creating Rive Framebuffer Render Target.");
      plVar11 = (long *)operator_new(0x80);
      puVar1 = PTR_vtable_0067cb18;
      uVar5 = _UNK_0024e2b8;
      uVar4 = _DAT_0024e2b0;
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((long)plVar11 + 0xc) = uVar6;
      *(undefined4 *)(plVar11 + 6) = 1;
      *(undefined4 *)((long)plVar11 + 0x34) = uVar6;
      *(undefined4 *)(plVar11 + 2) = uVar7;
      *plVar11 = (long)(puVar1 + 0x10);
      *(undefined8 *)((long)plVar11 + 0x1c) = uVar5;
      *(undefined8 *)((long)plVar11 + 0x14) = uVar4;
      uVar4 = DAT_0024e640;
      *(undefined4 *)((long)plVar11 + 0x24) = local_5c;
      *(undefined4 *)(plVar11 + 7) = uVar7;
      puVar1 = PTR_vtable_0067cb20;
      plVar14 = *(long **)(this + 0x38);
      *(undefined4 *)((long)plVar11 + 0x44) = 0;
      *(undefined8 *)((long)plVar11 + 0x3c) = uVar4;
      plVar11[9] = 0;
      plVar11[5] = (long)(puVar1 + 0x10);
      *(undefined8 *)((long)plVar11 + 0x4d) = 0;
      plVar11[0xb] = 0;
      *(undefined8 *)((long)plVar11 + 0x5d) = 0;
      plVar11[0xd] = 0;
      plVar11[0xe] = 0;
      *(undefined4 *)(plVar11 + 0xf) = 0;
      *(long **)(this + 0x38) = plVar11;
      if ((plVar14 != (long *)0x0) && (iVar8 = FUN_00340fe0(0xffffffff,plVar14 + 1), iVar8 == 1)) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      RiveLogD("RiveLN/PLSWorkerImpl","Creating Rive Renderer.");
      this_00 = (RiveRenderer *)operator_new(0xa0);
      rive::RiveRenderer::RiveRenderer(this_00,pRVar13);
      plVar11 = *(long **)(this + 0x40);
      *(RiveRenderer **)(this + 0x40) = this_00;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      *param_3 = true;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
    }
  }
  else {
    *param_3 = false;
    if (*(long *)(lVar3 + 0x28) == local_58) {
      pcVar12 = "Failed to make context current while creating PLS WorkerImpl.";
LAB_003400fc:
      RiveLogE("RiveLN/PLSWorkerImpl",pcVar12);
      return;
    }
  }
LAB_00340118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034011c  rive_android::PLSWorkerImpl::destroy =====

/* rive_android::PLSWorkerImpl::destroy(rive_android::DrawableThreadState*) */

void __thiscall
rive_android::PLSWorkerImpl::destroy(PLSWorkerImpl *this,DrawableThreadState *param_1)

{
  int iVar1;
  long *plVar2;
  
  RiveLogD("RiveLN/PLSWorkerImpl","Destroying Rive WorkerImpl.");
  plVar2 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(this + 0x30) != 0) {
    RiveLogD("RiveLN/EGLWorkerImpl","Destroying EGL surface.");
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
    return;
  }
  RiveLogW("RiveLN/EGLWorkerImpl","Surface already destroyed.");
  return;
}


// ===== 003401f4  rive_android::EGLWorkerImpl::destroy =====

/* rive_android::EGLWorkerImpl::destroy(rive_android::DrawableThreadState*) */

void __thiscall
rive_android::EGLWorkerImpl::destroy(EGLWorkerImpl *this,DrawableThreadState *param_1)

{
  if (*(long *)(this + 0x30) != 0) {
    RiveLogD("RiveLN/EGLWorkerImpl","Destroying EGL surface.");
    (**(code **)(*(long *)param_1 + 0x20))(param_1,*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
    return;
  }
  RiveLogW("RiveLN/EGLWorkerImpl","Surface already destroyed.");
  return;
}


// ===== 0034025c  rive_android::PLSWorkerImpl::clear =====

/* rive_android::PLSWorkerImpl::clear(rive_android::DrawableThreadState*) const */

void __thiscall rive_android::PLSWorkerImpl::clear(PLSWorkerImpl *this,DrawableThreadState *param_1)

{
  long lVar1;
  undefined8 local_50;
  undefined5 local_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 1;
  local_50 = *(undefined8 *)(*(long *)(this + 0x38) + 0xc);
  local_48 = 0;
  uStack_43 = 0;
  uStack_40 = 0;
  local_34 = 0;
  local_2c = 0;
  rive::gpu::RenderContext::beginFrame
            (*(RenderContext **)(param_1 + 0x28),(FrameDescriptor *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003402cc  rive_android::PLSWorkerImpl::flush =====

/* rive_android::PLSWorkerImpl::flush(rive_android::DrawableThreadState*) const */

void __thiscall rive_android::PLSWorkerImpl::flush(PLSWorkerImpl *this,DrawableThreadState *param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = *(undefined8 *)(this + 0x38);
  local_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  rive::gpu::RenderContext::flush(*(RenderContext **)(param_1 + 0x28),(FlushResources *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00340324  rive_android::PLSWorkerImpl::renderer =====

/* rive_android::PLSWorkerImpl::renderer() const */

undefined8 __thiscall rive_android::PLSWorkerImpl::renderer(PLSWorkerImpl *this)

{
  return *(undefined8 *)(this + 0x40);
}


// ===== 0034032c  rive_android::CanvasWorkerImpl::destroy =====

/* rive_android::CanvasWorkerImpl::destroy(rive_android::DrawableThreadState*) */

void rive_android::CanvasWorkerImpl::destroy(DrawableThreadState *param_1)

{
  long *plVar1;
  
  RiveLogD("RiveLN/CanvasWorkerImpl","Destroying Canvas WorkerImpl.");
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)GetJNIEnv();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


// ===== 0034038c  rive_android::CanvasWorkerImpl::prepareForDraw =====

/* rive_android::CanvasWorkerImpl::prepareForDraw(rive_android::DrawableThreadState*) const */

undefined8 rive_android::CanvasWorkerImpl::prepareForDraw(DrawableThreadState *param_1)

{
  long lVar1;
  undefined4 uVar2;
  _JNIEnv *p_Var3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  
  lVar1 = *(long *)(param_1 + 0x30);
  p_Var6 = *(_jmethodID **)(param_1 + 0x38);
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  p_Var4 = (_jobject *)GetJNIEnv();
  uVar5 = GetSurfaceLockCanvasMethodId();
  uVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var6,uVar5,0);
  p_Var4 = (_jobject *)(**(code **)(*(long *)p_Var3 + 0xa8))(p_Var3,uVar5);
  *(_jobject **)(lVar1 + 8) = p_Var4;
  p_Var6 = (_jmethodID *)GetCanvasWidthMethodId();
  uVar2 = JNIExceptionHandler::CallIntMethod(p_Var3,p_Var4,p_Var6);
  p_Var4 = *(_jobject **)(lVar1 + 8);
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  p_Var6 = (_jmethodID *)GetCanvasHeightMethodId();
  uVar2 = JNIExceptionHandler::CallIntMethod(p_Var3,p_Var4,p_Var6);
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  CanvasRenderer::Clear(*(_jobject **)(lVar1 + 8));
  return 0x300000000000;
}


// ===== 00340438  rive_android::CanvasWorkerImpl::flush =====

/* rive_android::CanvasWorkerImpl::flush(rive_android::DrawableThreadState*) const */

void rive_android::CanvasWorkerImpl::flush(DrawableThreadState *param_1)

{
  long lVar1;
  _jobject *p_Var2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  code *pcVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  p_Var2 = *(_jobject **)(param_1 + 0x38);
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  p_Var4 = (_jmethodID *)GetSurfaceUnlockCanvasAndPostMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var3,p_Var2,p_Var4,*(undefined8 *)(lVar1 + 8));
  pcVar5 = *(code **)(*(long *)p_Var3 + 0xb0);
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  (*pcVar5)(p_Var3,*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}


// ===== 0034049c  rive_android::CanvasWorkerImpl::~CanvasWorkerImpl =====

/* rive_android::CanvasWorkerImpl::~CanvasWorkerImpl() */

void __thiscall rive_android::CanvasWorkerImpl::~CanvasWorkerImpl(CanvasWorkerImpl *this)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_vtable_0067ccc0;
  plVar2 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  return;
}


// ===== 00340500  rive_android::CanvasWorkerImpl::~CanvasWorkerImpl =====

/* rive_android::CanvasWorkerImpl::~CanvasWorkerImpl() */

void __thiscall rive_android::CanvasWorkerImpl::~CanvasWorkerImpl(CanvasWorkerImpl *this)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_vtable_0067ccc0;
  plVar2 = *(long **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  operator_delete(this);
  return;
}


// ===== 0034056c  rive_android::CanvasWorkerImpl::renderer =====

/* rive_android::CanvasWorkerImpl::renderer() const */

undefined8 __thiscall rive_android::CanvasWorkerImpl::renderer(CanvasWorkerImpl *this)

{
  return *(undefined8 *)(this + 0x30);
}


// ===== 00340574  rive_android::PLSWorkerImpl::~PLSWorkerImpl =====

/* rive_android::PLSWorkerImpl::~PLSWorkerImpl() */

void __thiscall rive_android::PLSWorkerImpl::~PLSWorkerImpl(PLSWorkerImpl *this)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_0067ccd0;
  plVar3 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x38);
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  *(undefined **)this = PTR_vtable_0067ccc8 + 0x10;
  RiveLogD("RiveLN/EGLWorkerImpl","Deleting EGLWorkerImpl.");
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  return;
}


// ===== 00340628  rive_android::PLSWorkerImpl::~PLSWorkerImpl =====

/* rive_android::PLSWorkerImpl::~PLSWorkerImpl() */

void __thiscall rive_android::PLSWorkerImpl::~PLSWorkerImpl(PLSWorkerImpl *this)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_0067ccd0;
  plVar3 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined **)this = puVar1 + 0x10;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x38);
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  *(undefined **)this = PTR_vtable_0067ccc8 + 0x10;
  RiveLogD("RiveLN/EGLWorkerImpl","Deleting EGLWorkerImpl.");
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  operator_delete(this);
  return;
}


// ===== 003406e4  rive_android::EGLWorkerImpl::prepareForDraw =====

/* rive_android::EGLWorkerImpl::prepareForDraw(rive_android::DrawableThreadState*) const */

ulong __thiscall
rive_android::EGLWorkerImpl::prepareForDraw(EGLWorkerImpl *this,DrawableThreadState *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x28))(param_1,*(undefined8 *)(this + 0x30));
  if (uVar1 >> 0x20 == 0x3000) {
    (**(code **)(*(long *)this + 0x30))(this,param_1);
    uVar1 = 0x300000000000;
  }
  return uVar1;
}


// ===== 0034073c  FUN_0034073c =====

void FUN_0034073c(void)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort("bad_variant_access was thrown in -fno-exceptions mode");
}


// ===== 00340750  rive_android::EGLWorkerImpl::~EGLWorkerImpl =====

/* rive_android::EGLWorkerImpl::~EGLWorkerImpl() */

void __thiscall rive_android::EGLWorkerImpl::~EGLWorkerImpl(EGLWorkerImpl *this)

{
  *(undefined **)this = PTR_vtable_0067ccc8 + 0x10;
  RiveLogD("RiveLN/EGLWorkerImpl","Deleting EGLWorkerImpl.");
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  return;
}


// ===== 003407b0  rive_android::EGLWorkerImpl::~EGLWorkerImpl =====

/* rive_android::EGLWorkerImpl::~EGLWorkerImpl() */

void __thiscall rive_android::EGLWorkerImpl::~EGLWorkerImpl(EGLWorkerImpl *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3407b4);
  (*pcVar1)();
}


// ===== 003407b4  rive_android::WorkerImpl::~WorkerImpl =====

/* rive_android::WorkerImpl::~WorkerImpl() */

void __thiscall rive_android::WorkerImpl::~WorkerImpl(WorkerImpl *this)

{
  *(undefined **)this = PTR_vtable_0067ccd8 + 0x10;
  RiveLogD("RiveLN/WorkerImpl","Deleting WorkerImpl.");
  return;
}


// ===== 003407dc  rive_android::WorkerImpl::~WorkerImpl =====

/* rive_android::WorkerImpl::~WorkerImpl() */

void __thiscall rive_android::WorkerImpl::~WorkerImpl(WorkerImpl *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3407e0);
  (*pcVar1)();
}


// ===== 003407e0  rive_android::CanvasRenderer::Clear =====

/* rive_android::CanvasRenderer::Clear(_jobject*) */

void rive_android::CanvasRenderer::Clear(_jobject *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  _jmethodID *p_Var5;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  uVar2 = GetPorterDuffClass();
  uVar3 = GetPdClear();
  lVar4 = (**(code **)(*(long *)p_Var1 + 0x488))(p_Var1,uVar2,uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar2);
  if (lVar4 != 0) {
    p_Var5 = (_jmethodID *)GetCanvasDrawColorMethodId();
    JNIExceptionHandler::CallVoidMethod(p_Var1,param_1,p_Var5,0,lVar4);
    return;
  }
  RiveLogE("RiveLN/CanvasRenderer","Failed to get PorterDuff.Mode.CLEAR.");
  return;
}


// ===== 00340890  FUN_00340890 =====

undefined1 FUN_00340890(undefined1 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return uVar1;
  }
  LOAcquire();
  uVar1 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar1;
}


// ===== 003408bc  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00686e30 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00686e30 = iVar2 != 0;
    return;
  }
  DAT_00686e30 = 1;
  return;
}


// ===== 00340954  FUN_00340954 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00340954(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_00686e38 = DAT_00686e38 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_00686e38 = DAT_00686e38 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_00686e38 = DAT_00686e38 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_00686e38 = DAT_00686e38 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_00686e38 = DAT_00686e38 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_00686e38 = DAT_00686e38 | 0x8000000;
    }
    uVar5 = DAT_00686e38 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00340abc;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_00686e38 = DAT_00686e38 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_00340dac;
LAB_00340e00:
    DAT_00686e38 = DAT_00686e38 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00340e00;
LAB_00340dac:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_00686e38 = DAT_00686e38 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_00686e38 = DAT_00686e38 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_00686e38 = DAT_00686e38 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_00686e38 = DAT_00686e38 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_00686e38 = DAT_00686e38 | 0x400000000400000;
    }
    else {
      DAT_00686e38 = DAT_00686e38 | 0x400000;
    }
  }
  uVar5 = DAT_00686e38 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_00686e38;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_00686e38 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_00686e38 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00340abc:
  DAT_00686e38 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00340ef0  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00686e38 != 0) {
    return;
  }
  iVar1 = __system_property_get("ro.arch",local_70);
  if ((iVar1 < 1) || (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00340954(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00340f80  FUN_00340f80 =====

char FUN_00340f80(char param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      cVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = cVar1 + param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return cVar1;
  }
  LOAcquire();
  cVar1 = *param_2;
  *param_2 = cVar1 + param_1;
  LORelease();
  return cVar1;
}


// ===== 00340fb0  FUN_00340fb0 =====

int FUN_00340fb0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  return iVar3;
}


// ===== 00340fe0  FUN_00340fe0 =====

int FUN_00340fe0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}


// ===== 00341010  FUN_00341010 =====

long FUN_00341010(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00341040  FUN_00341040 =====

long FUN_00341040(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  LOAcquire();
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 00341070  FUN_00341070 =====

undefined8 FUN_00341070(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 003410a0  FUN_003410a0 =====

undefined4 FUN_003410a0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 003410d0  FUN_003410d0 =====

long FUN_003410d0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00686e30 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00341110  FUN_00341110 =====

long FUN_00341110(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00686e30 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00341150  FUN_00341150 =====

undefined4 FUN_00341150(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  return uVar3;
}


// ===== 00341180  FUN_00341180 =====

int FUN_00341180(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00686e30 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 003411c0  FUN_003411c0 =====

uint FUN_003411c0(uint param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = uVar3 & (param_1 ^ 0xffffffff);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = uVar3 & ~param_1;
  LORelease();
  return uVar3;
}


// ===== 003411f0  FUN_003411f0 =====

uint FUN_003411f0(uint param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = uVar3 | param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = uVar3 | param_1;
  LORelease();
  return uVar3;
}


// ===== 00341220  FUN_00341220 =====

undefined4 FUN_00341220(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00686e30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 0034124c  rive::LinearAnimation::LinearAnimation =====

/* rive::LinearAnimation::LinearAnimation() */

void __thiscall rive::LinearAnimation::LinearAnimation(LinearAnimation *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 0x28) = 0x3c0000003c;
  puVar1 = PTR_vtable_0067cdd8;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x34) = 0xffffffff00000000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


// ===== 00341294  rive::LinearAnimation::~LinearAnimation =====

/* rive::LinearAnimation::~LinearAnimation() */

void __thiscall rive::LinearAnimation::~LinearAnimation(LinearAnimation *this)

{
  ~LinearAnimation(this);
  operator_delete(this);
  return;
}


// ===== 003412b8  FUN_003412b8 =====

undefined8 FUN_003412b8(void)

{
  return 0x1f;
}


// ===== 003412c0  FUN_003412c0 =====

bool FUN_003412c0(undefined8 param_1,int param_2)

{
  return (param_2 - 0x1bU & 0xfffb) == 0;
}


// ===== 003412d4  FUN_003412d4 =====

undefined8 FUN_003412d4(long param_1,ushort param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar4 = tpidr_el0;
  uVar5 = 0;
  lVar10 = *(long *)(lVar4 + 0x28);
  if (param_2 < 0x3b) {
    if (param_2 < 0x39) {
      if (param_2 == 0x37) {
        pcVar6 = (char *)param_3[2];
        do {
          if ((char *)(*param_3 + param_3[1]) <= pcVar6) {
            param_3[2] = *param_3 + param_3[1];
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00341610;
          }
          pcVar12 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar12;
        } while (cVar1 < '\0');
        param_3[2] = (long)pcVar12;
        if ((char)param_3[3] == '\0') {
          rive::BinaryReader::readString((ulong)param_3);
        }
        else {
LAB_00341610:
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
        }
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
        *(undefined8 *)(param_1 + 0x18) = uStack_38;
        *(undefined8 *)(param_1 + 0x10) = local_40;
        *(undefined8 *)(param_1 + 0x20) = local_30;
      }
      else {
        if (param_2 != 0x38) goto LAB_003416d0;
        uVar14 = 0;
        uVar7 = 0;
        pbVar11 = (byte *)param_3[2];
        do {
          if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_003415dc;
          }
          pbVar13 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar3 = uVar14 & 0x3f;
          uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
          uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
          pbVar11 = pbVar13;
        } while ((char)bVar2 < '\0');
        param_3[2] = (long)pbVar13;
        if (uVar7 >> 0x20 != 0) {
          *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003415dc:
          uVar7 = 0;
          param_3[2] = *param_3 + param_3[1];
        }
        *(int *)(param_1 + 0x28) = (int)uVar7;
      }
    }
    else {
      if (param_2 != 0x39) {
        if (param_2 == 0x3a) {
          puVar9 = (undefined4 *)param_3[2];
          puVar8 = (undefined4 *)(*param_3 + param_3[1]);
          if ((long)puVar8 - (long)puVar9 < 4) {
            uVar15 = 0;
            *(undefined1 *)(param_3 + 3) = 1;
          }
          else {
            puVar8 = puVar9 + 1;
            uVar15 = *puVar9;
          }
          param_3[2] = (long)puVar8;
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x30) = uVar15;
        }
        goto LAB_003416d0;
      }
      uVar14 = 0;
      uVar7 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00341648;
        }
        pbVar13 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar11 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00341648:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x2c) = (int)uVar7;
    }
  }
  else if (param_2 < 0x3d) {
    if (param_2 == 0x3b) {
      uVar14 = 0;
      uVar7 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00341678;
        }
        pbVar13 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar11 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00341678:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x34) = (int)uVar7;
    }
    else {
      if (param_2 != 0x3c) goto LAB_003416d0;
      uVar14 = 0;
      uVar7 = 0;
      pbVar11 = (byte *)param_3[2];
      do {
        if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_003415f4;
        }
        pbVar13 = pbVar11 + 1;
        bVar2 = *pbVar11;
        uVar3 = uVar14 & 0x3f;
        uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
        uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
        pbVar11 = pbVar13;
      } while ((char)bVar2 < '\0');
      param_3[2] = (long)pbVar13;
      if (uVar7 >> 0x20 != 0) {
        *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003415f4:
        uVar7 = 0;
        param_3[2] = *param_3 + param_3[1];
      }
      *(int *)(param_1 + 0x38) = (int)uVar7;
    }
  }
  else if (param_2 == 0x3d) {
    uVar14 = 0;
    uVar7 = 0;
    pbVar11 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar11) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00341660;
      }
      pbVar13 = pbVar11 + 1;
      bVar2 = *pbVar11;
      uVar3 = uVar14 & 0x3f;
      uVar14 = (ulong)(((uint)uVar14 & 0xff) + 7);
      uVar7 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar7;
      pbVar11 = pbVar13;
    } while ((char)bVar2 < '\0');
    param_3[2] = (long)pbVar13;
    if (uVar7 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00341660:
      uVar7 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0x3c) = (int)uVar7;
  }
  else if (param_2 == 0x3e) {
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x40) = *pcVar6 == '\x01';
    }
  }
  else {
    if (param_2 != 0x178) goto LAB_003416d0;
    pcVar6 = (char *)param_3[2];
    if ((*param_3 + param_3[1]) - (long)pcVar6 < 1) {
      param_3[2] = *param_3 + param_3[1];
      *(undefined1 *)(param_3 + 3) = 1;
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
    else {
      param_3[2] = (long)(pcVar6 + 1);
      *(bool *)(param_1 + 0x41) = *pcVar6 == '\x01';
    }
  }
  uVar5 = 1;
LAB_003416d0:
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003416f8  FUN_003416f8 =====

undefined8 FUN_003416f8(void)

{
  return 1;
}


// ===== 00341700  rive::LinearAnimation::onAddedDirty =====

/* rive::LinearAnimation::onAddedDirty(rive::CoreContext*) */

uint __thiscall rive::LinearAnimation::onAddedDirty(LinearAnimation *this,CoreContext *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  lVar13 = *(long *)(this + 0x48);
  if (*(long *)(this + 0x50) == lVar13) {
    uVar4 = 0;
  }
  else {
    puVar16 = (ulong *)0x0;
    puVar18 = (ulong *)0x0;
    uVar15 = 0;
    uVar17 = 0;
    puVar19 = (ulong *)0x0;
    do {
      plVar5 = *(long **)(lVar13 + uVar17 * 8);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
      puVar12 = puVar19;
      uVar4 = uVar15;
      if ((uVar3 & 0xff) != 0) {
        if (puVar16 < puVar18) {
          *puVar16 = uVar17;
          puVar1 = puVar16;
        }
        else {
          lVar13 = (long)puVar16 - (long)puVar19;
          uVar8 = (lVar13 >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
            FUN_00341b10();
LAB_003419b8:
                    /* WARNING: Subroutine does not return */
            FUN_00324008();
          }
          uVar9 = (long)puVar18 - (long)puVar19 >> 2;
          if (uVar9 <= uVar8) {
            uVar9 = uVar8;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar18 - (long)puVar19)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) goto LAB_003419b8;
            pvVar6 = operator_new(uVar9 << 3);
          }
          puVar1 = (ulong *)((long)pvVar6 + (lVar13 >> 3) * 8);
          *puVar1 = uVar17;
          puVar12 = puVar1;
          if ((long)puVar16 - (long)puVar19 != 0) {
            uVar8 = ((long)puVar16 - (long)puVar19) - 8;
            if ((((0x147 < uVar8) &&
                 (uVar10 = (long)pvVar6 + lVar13 + -8,
                 uVar10 - (uVar8 & 0xfffffffffffffff8) <= uVar10)) &&
                ((ulong *)((long)(puVar16 + -1) - (uVar8 & 0xfffffffffffffff8)) <= puVar16 + -1)) &&
               (0x1f < (ulong)((long)puVar16 + (-lVar13 - (long)pvVar6)))) {
              puVar18 = puVar1 + -2;
              puVar12 = puVar16 + -2;
              uVar8 = (uVar8 >> 3) + 1;
              uVar11 = uVar8 & 0x3ffffffffffffffc;
              puVar16 = puVar16 + -uVar11;
              uVar10 = uVar11;
              do {
                puVar2 = puVar12 + -1;
                uVar22 = puVar12[-2];
                uVar21 = puVar12[1];
                uVar20 = *puVar12;
                uVar10 = uVar10 - 4;
                puVar12 = puVar12 + -4;
                puVar18[-1] = *puVar2;
                puVar18[-2] = uVar22;
                puVar18[1] = uVar21;
                *puVar18 = uVar20;
                puVar18 = puVar18 + -4;
              } while (uVar10 != 0);
              puVar12 = puVar1 + -uVar11;
              if (uVar8 == uVar11) goto joined_r0x00341854;
            }
            do {
              puVar16 = puVar16 + -1;
              puVar12 = puVar12 + -1;
              *puVar12 = *puVar16;
            } while (puVar16 != puVar19);
          }
joined_r0x00341854:
          puVar18 = (ulong *)((long)pvVar6 + uVar9 * 8);
          if (puVar19 != (ulong *)0x0) {
            operator_delete(puVar19);
          }
        }
        puVar16 = puVar1 + 1;
        uVar4 = uVar3;
        if ((uVar15 & 0xfe) != 0) {
          uVar4 = uVar15;
        }
      }
      uVar15 = uVar4;
      lVar13 = *(long *)(this + 0x48);
      plVar5 = *(long **)(this + 0x50);
      uVar17 = uVar17 + 1;
      puVar19 = puVar12;
    } while (uVar17 < (ulong)((long)plVar5 - lVar13 >> 3));
    while (puVar16 != puVar12) {
      puVar16 = puVar16 + -1;
      plVar14 = (long *)(*(long *)(this + 0x48) + *puVar16 * 8);
      plVar7 = plVar14 + 1;
      if (plVar14 + 1 != plVar5) {
        do {
          plVar14 = plVar7;
          plVar7 = (long *)plVar14[-1];
          plVar14[-1] = *plVar14;
          *plVar14 = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 8))();
          }
          plVar7 = plVar14 + 1;
        } while (plVar14 + 1 != plVar5);
        plVar5 = *(long **)(this + 0x50);
      }
      while (plVar5 != plVar14) {
        plVar5 = plVar5 + -1;
        plVar7 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      *(long **)(this + 0x50) = plVar14;
      plVar5 = plVar14;
    }
    if (puVar12 != (ulong *)0x0) {
      operator_delete(puVar12);
    }
    uVar4 = 0;
    if ((uVar15 & 0xff) != 1) {
      uVar4 = uVar15;
    }
  }
  return uVar4;
}


// ===== 003419bc  rive::LinearAnimation::onAddedClean =====

/* rive::LinearAnimation::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::LinearAnimation::onAddedClean(LinearAnimation *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x50);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar3;
}


// ===== 00341a18  rive::LinearAnimation::import =====

/* rive::LinearAnimation::import(rive::ImportStack&) */

undefined8 __thiscall rive::LinearAnimation::import(LinearAnimation *this,ImportStack *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 == 0) {
    return 1;
  }
  uVar7 = NEON_cnt(uVar3,1);
  uVar6 = NEON_uaddlv(uVar7,1);
  uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
  uVar1 = (ulong)~(uint)uVar3 & 1;
  if (1 < (uVar8 & 0xffffffff)) {
    uVar1 = (ulong)(uVar3 - 1 != 0);
  }
  plVar4 = *(long **)(*(long *)param_1 + uVar1 * 8);
  if (plVar4 != (long *)0x0) {
    for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      uVar5 = plVar4[1];
      if (uVar5 == 1) {
        if (*(short *)(plVar4 + 2) == 1) {
          if (plVar4[3] == 0) {
            return 1;
          }
          Artboard::addAnimation(*(Artboard **)(plVar4[3] + 8),this);
          return 0;
        }
      }
      else {
        if ((uVar8 & 0xffffffff) < 2) {
          uVar5 = uVar5 & uVar3 - 1;
        }
        else if (uVar3 <= uVar5) {
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = uVar5 / uVar3;
          }
          uVar5 = uVar5 - uVar2 * uVar3;
        }
        if (uVar5 != uVar1) {
          return 1;
        }
      }
    }
  }
  return 1;
}


// ===== 00341aec  FUN_00341aec =====

void FUN_00341aec(void)

{
  return;
}


// ===== 00341af0  FUN_00341af0 =====

void FUN_00341af0(void)

{
  return;
}


// ===== 00341af4  FUN_00341af4 =====

void FUN_00341af4(void)

{
  return;
}


// ===== 00341af8  FUN_00341af8 =====

void FUN_00341af8(void)

{
  return;
}


// ===== 00341afc  FUN_00341afc =====

void FUN_00341afc(void)

{
  return;
}


// ===== 00341b00  FUN_00341b00 =====

void FUN_00341b00(void)

{
  return;
}


// ===== 00341b04  FUN_00341b04 =====

void FUN_00341b04(void)

{
  return;
}


// ===== 00341b08  FUN_00341b08 =====

void FUN_00341b08(void)

{
  return;
}


// ===== 00341b0c  FUN_00341b0c =====

void FUN_00341b0c(void)

{
  return;
}


// ===== 00341b10  FUN_00341b10 =====

void FUN_00341b10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00341b24  rive::LinearAnimation::~LinearAnimation =====

/* rive::LinearAnimation::~LinearAnimation() */

void __thiscall rive::LinearAnimation::~LinearAnimation(LinearAnimation *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x48);
  *(undefined **)this = PTR_vtable_0067cdd8 + 0x10;
  if (plVar2 != (long *)0x0) {
    plVar3 = *(long **)(this + 0x50);
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = *(long **)(this + 0x48);
    }
    *(long **)(this + 0x50) = plVar2;
    operator_delete(plVar1);
  }
  *(undefined **)this = PTR_vtable_0067cde8 + 0x10;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


// ===== 00341bd0  rive::LinearAnimation::addKeyedObject =====

/* rive::LinearAnimation::addKeyedObject(std::__ndk1::unique_ptr<rive::KeyedObject,
   std::__ndk1::default_delete<rive::KeyedObject> >) */

void __thiscall rive::LinearAnimation::addKeyedObject(LinearAnimation *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x50);
  if (plVar3 < *(long **)(this + 0x58)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_00341d6c;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x48);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00341d8c();
LAB_00341d88:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x58) - *(long *)(this + 0x48);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00341d88;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x48);
  plVar12 = *(long **)(this + 0x50);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x48) = plVar3;
    *(long **)(this + 0x50) = plVar13;
    *(void **)(this + 0x58) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_00341d08:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_00341d08;
    }
    plVar12 = *(long **)(this + 0x48);
    plVar15 = *(long **)(this + 0x50);
    *(long **)(this + 0x48) = plVar3;
    *(long **)(this + 0x50) = plVar13;
    *(void **)(this + 0x58) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_00341d6c:
  *(long **)(this + 0x50) = plVar13;
  return;
}


// ===== 00341d8c  FUN_00341d8c =====

void FUN_00341d8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00341da0  rive::LinearAnimation::apply =====

/* rive::LinearAnimation::apply(rive::Artboard*, float, float, rive::LinearAnimationInstance const*)
   const */

void __thiscall
rive::LinearAnimation::apply
          (LinearAnimation *this,Artboard *param_1,float param_2,float param_3,
          LinearAnimationInstance *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  Core *pCVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  
  if (this[0x41] != (LinearAnimation)0x0) {
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
    param_2 = (float)(int)(fVar8 * param_2) / fVar8;
  }
  plVar6 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  do {
    if (plVar6 == plVar2) {
      return;
    }
    lVar7 = *plVar6;
    pCVar5 = (Core *)(**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(lVar7 + 0xc));
    if (pCVar5 != (Core *)0x0) {
      puVar3 = *(undefined8 **)(lVar7 + 0x18);
      for (puVar1 = *(undefined8 **)(lVar7 + 0x10); puVar1 != puVar3; puVar1 = puVar1 + 1) {
        iVar4 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
        if (iVar4 < 0x365) {
          if ((iVar4 != 0x18b) && (iVar4 != 0x191)) {
LAB_00341e2c:
            KeyedProperty::apply((KeyedProperty *)*puVar1,pCVar5,param_2,param_3,param_4);
          }
        }
        else if ((iVar4 != 0x365) && (iVar4 != 0x3f8)) goto LAB_00341e2c;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


// ===== 00341ea0  rive::LinearAnimation::startSeconds =====

/* rive::LinearAnimation::startSeconds() const */

float __thiscall rive::LinearAnimation::startSeconds(LinearAnimation *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
  fVar1 = 0.0;
  if (this[0x40] != (LinearAnimation)0x0) {
    fVar1 = fVar2;
  }
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  return fVar1 / fVar2;
}


// ===== 00341ec8  rive::LinearAnimation::endSeconds =====

/* rive::LinearAnimation::endSeconds() const */

float __thiscall rive::LinearAnimation::endSeconds(LinearAnimation *this)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  
  pLVar1 = this + 0x2c;
  if (this[0x40] != (LinearAnimation)0x0) {
    pLVar1 = this + 0x3c;
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  return fVar2 / fVar3;
}


// ===== 00341ef4  rive::LinearAnimation::startTime =====

/* rive::LinearAnimation::startTime() const */

float __thiscall rive::LinearAnimation::startTime(LinearAnimation *this)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(this + 0x30) < 0.0 == NAN(*(float *)(this + 0x30))) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar2 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar2 = fVar3;
    }
  }
  else {
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  return fVar2 / fVar3;
}


// ===== 00341f44  rive::LinearAnimation::startTime =====

/* rive::LinearAnimation::startTime(float) const */

float __thiscall rive::LinearAnimation::startTime(LinearAnimation *this,float param_1)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(this + 0x30) * param_1 < 0.0 == NAN(*(float *)(this + 0x30) * param_1)) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar2 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar2 = fVar3;
    }
  }
  else {
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  return fVar2 / fVar3;
}


// ===== 00341f98  rive::LinearAnimation::endTime =====

/* rive::LinearAnimation::endTime() const */

float __thiscall rive::LinearAnimation::endTime(LinearAnimation *this)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(this + 0x30) < 0.0 == NAN(*(float *)(this + 0x30))) {
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  }
  else {
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar3 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar3 = fVar2;
    }
  }
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  return fVar3 / fVar2;
}


// ===== 00341fe8  rive::LinearAnimation::durationSeconds =====

/* rive::LinearAnimation::durationSeconds() const */

float __thiscall rive::LinearAnimation::durationSeconds(LinearAnimation *this)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
  pLVar1 = this + 0x2c;
  if (this[0x40] != (LinearAnimation)0x0) {
    pLVar1 = this + 0x3c;
  }
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  fVar2 = 0.0;
  if (this[0x40] != (LinearAnimation)0x0) {
    fVar2 = fVar5;
  }
  return ABS(fVar4 / fVar3 - fVar2 / fVar3);
}


// ===== 0034202c  rive::LinearAnimation::globalToLocalSeconds =====

/* rive::LinearAnimation::globalToLocalSeconds(float) const */

float __thiscall rive::LinearAnimation::globalToLocalSeconds(LinearAnimation *this,float param_1)

{
  LinearAnimation *pLVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __y;
  float fVar6;
  float fVar7;
  
  if (*(int *)(this + 0x34) == 2) {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
    fVar4 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar4 = fVar2;
    }
    __y = ABS(fVar7 / fVar6 - fVar4 / fVar6);
    fVar2 = fmodf(param_1,__y);
    fVar5 = param_1 / __y;
    if (0.0 <= fVar2) {
      __y = -0.0;
    }
    fVar3 = *(float *)(this + 0x30);
    if (((int)fVar5 & 1U) == 0) {
      if (fVar3 < 0.0 == NAN(fVar3)) {
        fVar7 = fVar4;
      }
      fVar6 = fVar2 + __y + fVar7 / fVar6;
    }
    else {
      if (fVar3 < 0.0 == NAN(fVar3)) {
        fVar4 = fVar7;
      }
      fVar6 = fVar4 / fVar6 - (fVar2 + __y);
    }
  }
  else if (*(int *)(this + 0x34) == 1) {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
    fVar4 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar4 = fVar2;
    }
    fVar5 = ABS(fVar7 / fVar6 - fVar4 / fVar6);
    fVar2 = fmodf(param_1,fVar5);
    if (0.0 <= fVar2) {
      fVar5 = -0.0;
    }
    if (*(float *)(this + 0x30) < 0.0 == NAN(*(float *)(this + 0x30))) {
      fVar7 = fVar4;
    }
    fVar6 = fVar7 / fVar6 + fVar2 + fVar5;
  }
  else {
    if (*(float *)(this + 0x30) < 0.0 == NAN(*(float *)(this + 0x30))) {
      fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
      fVar6 = 0.0;
      if (this[0x40] != (LinearAnimation)0x0) {
        fVar6 = fVar4;
      }
    }
    else {
      pLVar1 = this + 0x2c;
      if (this[0x40] != (LinearAnimation)0x0) {
        pLVar1 = this + 0x3c;
      }
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
    }
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
    fVar6 = fVar6 / fVar4 + param_1;
  }
  return fVar6;
}


// ===== 003421c8  rive::LinearAnimation::reportKeyedCallbacks =====

/* rive::LinearAnimation::reportKeyedCallbacks(rive::KeyedCallbackReporter*, float, float, float,
   bool) const */

void __thiscall
rive::LinearAnimation::reportKeyedCallbacks
          (LinearAnimation *this,KeyedCallbackReporter *param_1,float param_2,float param_3,
          float param_4,bool param_5)

{
  LinearAnimation *pLVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  
  if (*(float *)(this + 0x30) * param_4 < 0.0 == NAN(*(float *)(this + 0x30) * param_4)) {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
    fVar8 = 0.0;
    if (this[0x40] != (LinearAnimation)0x0) {
      fVar8 = fVar9;
    }
  }
  else {
    pLVar1 = this + 0x2c;
    if (this[0x40] != (LinearAnimation)0x0) {
      pLVar1 = this + 0x3c;
    }
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
  }
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
  if ((fVar8 / fVar9 != param_2) || (!param_5)) {
    plVar2 = *(long **)(this + 0x50);
    for (plVar5 = *(long **)(this + 0x48); plVar5 != plVar2; plVar5 = plVar5 + 1) {
      lVar6 = *plVar5;
      puVar3 = *(undefined8 **)(lVar6 + 0x18);
      for (puVar7 = *(undefined8 **)(lVar6 + 0x10); puVar7 != puVar3; puVar7 = puVar7 + 1) {
        iVar4 = *(int *)((KeyedProperty *)*puVar7 + 0xc);
        if (iVar4 < 0x365) {
          if ((iVar4 == 0x18b) || (iVar4 == 0x191)) {
LAB_00342288:
            KeyedProperty::reportKeyedCallbacks
                      ((KeyedProperty *)*puVar7,param_1,*(uint *)(lVar6 + 0xc),param_2,param_3,
                       fVar8 / fVar9 == param_2);
          }
        }
        else if ((iVar4 == 0x3f8) || (iVar4 == 0x365)) goto LAB_00342288;
      }
    }
  }
  return;
}


// ===== 003422e8  rive::KeyedObject::KeyedObject =====

/* rive::KeyedObject::KeyedObject() */

void __thiscall rive::KeyedObject::KeyedObject(KeyedObject *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067cd90;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0xffffffff;
  return;
}


// ===== 0034230c  rive::KeyedObject::~KeyedObject =====

/* rive::KeyedObject::~KeyedObject() */

void __thiscall rive::KeyedObject::~KeyedObject(KeyedObject *this)

{
  ~KeyedObject(this);
  operator_delete(this);
  return;
}


// ===== 00342330  FUN_00342330 =====

undefined8 FUN_00342330(void)

{
  return 0x19;
}


// ===== 00342338  FUN_00342338 =====

bool FUN_00342338(undefined8 param_1,short param_2)

{
  return param_2 == 0x19;
}


// ===== 00342348  FUN_00342348 =====

bool FUN_00342348(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x33) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_003423ac;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_003423ac:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x33;
}


// ===== 003423c4  rive::KeyedObject::onAddedDirty =====

/* rive::KeyedObject::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::KeyedObject::onAddedDirty(KeyedObject *this,CoreContext *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined4 *)(this + 0xc));
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    plVar3 = *(long **)(this + 0x10);
    if (plVar3 != *(long **)(this + 0x18)) {
      do {
        uVar2 = FUN_00342668(lVar1,*(undefined4 *)(*plVar3 + 0xc));
        if ((uVar2 & 1) == 0) {
          plVar6 = *(long **)(this + 0x18);
          plVar5 = plVar3 + 1;
          plVar4 = plVar3;
          if (plVar5 != plVar6) {
            do {
              plVar4 = plVar5;
              plVar5 = (long *)plVar4[-1];
              plVar4[-1] = *plVar4;
              *plVar4 = 0;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 8))();
              }
              plVar5 = plVar4 + 1;
            } while (plVar4 + 1 != plVar6);
            plVar5 = *(long **)(this + 0x18);
          }
          while (plVar5 != plVar4) {
            plVar5 = plVar5 + -1;
            plVar6 = (long *)*plVar5;
            *plVar5 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          *(long **)(this + 0x18) = plVar4;
        }
        else {
          uVar2 = (**(code **)(*(long *)*plVar3 + 0x38))((long *)*plVar3,param_1);
          if ((uVar2 & 0xff) != 0) {
            return uVar2;
          }
          plVar4 = *(long **)(this + 0x18);
          plVar3 = plVar3 + 1;
        }
      } while (plVar3 != plVar4);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 003424ec  rive::KeyedObject::onAddedClean =====

/* rive::KeyedObject::onAddedClean(rive::CoreContext*) */

undefined8 __thiscall rive::KeyedObject::onAddedClean(KeyedObject *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  for (puVar2 = *(undefined8 **)(this + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,param_1);
  }
  return 0;
}


// ===== 0034253c  rive::KeyedObject::import =====

/* rive::KeyedObject::import(rive::ImportStack&) */

void __thiscall rive::KeyedObject::import(KeyedObject *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  KeyedObject *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x1f;
    }
    else {
      uVar7 = 0x1f;
      if (uVar5 < 0x20) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar2 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar2 = 0x1f / uVar1;
        }
        uVar7 = (ulong)(0x1f - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x1f) {
          if ((short)plVar8[2] == 0x1f) {
            if (plVar8[3] != 0) {
              local_30 = this;
              LinearAnimation::addKeyedObject(*(LinearAnimation **)(plVar8[3] + 8),&local_30);
              if (local_30 != (KeyedObject *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_00342640;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar3 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar11 = 1;
LAB_00342640:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 00342664  FUN_00342664 =====

void FUN_00342664(void)

{
  return;
}


// ===== 00342668  FUN_00342668 =====

undefined8 FUN_00342668(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1ab;
  switch(param_2) {
  case 4:
    uVar1 = 10;
    break;
  case 5:
    uVar1 = 10;
    break;
  default:
    return 0;
  case 7:
  case 8:
  case 0x2c2:
  case 0x2c3:
    uVar1 = 0x199;
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0x326:
  case 0x327:
  case 0x328:
  case 0x329:
  case 0x32a:
  case 0x32b:
  case 0x360:
  case 0x361:
    uVar1 = 2;
    break;
  case 0xb:
  case 0xc:
    uVar1 = 1;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    uVar1 = 0x26;
    break;
  case 0x12:
    uVar1 = 0x5b;
    break;
  case 0x14:
  case 0x15:
  case 0x7b:
  case 0x7c:
    uVar1 = 0xf;
    break;
  case 0x17:
  case 0x81:
    uVar1 = 0xd;
    break;
  case 0x18:
  case 0x19:
    uVar1 = 0x6b;
    break;
  case 0x1a:
    uVar1 = 5;
    break;
  case 0x1f:
  case 0xa1:
  case 0xa2:
  case 0xa3:
    uVar1 = 7;
    break;
  case 0x20:
    uVar1 = 0x26c;
    break;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x2a:
  case 0x2e:
    uVar1 = 0x16;
    break;
  case 0x25:
    uVar1 = 0x12;
    break;
  case 0x26:
    uVar1 = 0x13;
    break;
  case 0x27:
    uVar1 = 0x13;
    break;
  case 0x28:
    uVar1 = 0x14;
    break;
  case 0x29:
  case 0x2eb:
    uVar1 = 0x15;
    break;
  case 0x2f:
    uVar1 = 0x18;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
    uVar1 = 0x18;
    break;
  case 0x33:
    uVar1 = 0x19;
    break;
  case 0x35:
    uVar1 = 0x1a;
    break;
  case 0x37:
    uVar1 = 0x1b;
    break;
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x178:
    uVar1 = 0x1f;
    break;
  case 0x3a:
    uVar1 = 0x1f;
    break;
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
    uVar1 = 0x8b;
    break;
  case 0x43:
    uVar1 = 0x1d;
    break;
  case 0x44:
  case 0x45:
    uVar1 = 0xaa;
    break;
  case 0x46:
    uVar1 = 0x1e;
    break;
  case 0x4f:
  case 0x50:
  case 0x51:
    uVar1 = 0x22;
    break;
  case 0x52:
  case 0x53:
    uVar1 = 0x23;
    break;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
    uVar1 = 6;
    break;
  case 0x58:
    uVar1 = 0x25;
    break;
  case 0x59:
    uVar1 = 0x28;
    break;
  case 0x5a:
  case 0x5b:
    uVar1 = 0x29;
    break;
  case 0x5c:
  case 0x5d:
  case 0x5e:
    uVar1 = 0x2a;
    break;
  case 0x5f:
    uVar1 = 0x2c;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
    uVar1 = 0x2c;
    break;
  case 0x66:
  case 0x67:
    uVar1 = 0x2d;
    break;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
    uVar1 = 0x2b;
    break;
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
    uVar1 = 0x2e;
    break;
  case 0x72:
  case 0x73:
  case 0x74:
    uVar1 = 0x2f;
    break;
  case 0x75:
    uVar1 = 0x2f;
    break;
  case 0x77:
  case 0x78:
    uVar1 = 0x30;
    break;
  case 0x79:
    uVar1 = 0x31;
    break;
  case 0x7a:
    uVar1 = 0x32;
    break;
  case 0x7d:
    uVar1 = 0x33;
    break;
  case 0x7e:
    uVar1 = 0x33;
    break;
  case 0x7f:
    uVar1 = 0x34;
    break;
  case 0x80:
  case 0x302:
    uVar1 = 0xc;
    break;
  case 0x8a:
    uVar1 = 0x36;
    break;
  case 0x8c:
    uVar1 = 0x38;
    break;
  case 0x8d:
    uVar1 = 0x3b;
    break;
  case 0x95:
    uVar1 = 0x3d;
    break;
  case 0x97:
  case 0x98:
  case 0x9e:
  case 0xa0:
  case 0x15d:
  case 0x15e:
  case 0x219:
    uVar1 = 0x41;
    break;
  case 0x9b:
    uVar1 = 0x43;
    break;
  case 0x9c:
    uVar1 = 0x45;
    break;
  case 0x9d:
    uVar1 = 0x46;
    break;
  case 0xa4:
    uVar1 = 7;
    break;
  case 0xa5:
    uVar1 = 0x4a;
    break;
  case 0xa6:
    uVar1 = 0x4b;
    break;
  case 0xa7:
    uVar1 = 0x4c;
    break;
  case 0xa8:
  case 0x12a:
    uVar1 = 0x4d;
    break;
  case 0xab:
    uVar1 = 0x4e;
    break;
  case 0xac:
    uVar1 = 0x4f;
    break;
  case 0xad:
    uVar1 = 0x50;
    break;
  case 0xae:
    uVar1 = 0x51;
    break;
  case 0xaf:
    uVar1 = 0x51;
    break;
  case 0xb1:
    uVar1 = 0x52;
    break;
  case 0xb2:
    uVar1 = 0x52;
    break;
  case 0xb3:
  case 0xb4:
    uVar1 = 0x5a;
    break;
  case 0xb5:
    uVar1 = 0x54;
    break;
  case 0xb6:
  case 0xb7:
  case 0xb8:
    uVar1 = 0x55;
    break;
  case 0xb9:
  case 0xba:
  case 0xbb:
    uVar1 = 0x56;
    break;
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    uVar1 = 0x55;
    break;
  case 0xc0:
  case 0xc1:
  case 0xc2:
    uVar1 = 0x56;
    break;
  case 0xc3:
    uVar1 = 0x55;
    break;
  case 0xc4:
  case 0x1ee:
    uVar1 = 0x199;
    break;
  case 0xc5:
    uVar1 = 0x5c;
    break;
  case 0xc6:
    uVar1 = 0x5d;
    break;
  case 199:
    uVar1 = 0x60;
    break;
  case 200:
    uVar1 = 0x61;
    break;
  case 0xc9:
    uVar1 = 0x60;
    break;
  case 0xca:
    uVar1 = 0x62;
    break;
  case 0xcb:
    uVar1 = 99;
    break;
  case 0xcc:
  case 0x16a:
    uVar1 = 0x67;
    break;
  case 0xce:
  case 0x3ce:
    uVar1 = 100;
    break;
  case 0xcf:
  case 0xd0:
    uVar1 = 0x68;
    break;
  case 0xd7:
  case 0xd8:
    uVar1 = 0x6c;
    break;
  case 0xe0:
    uVar1 = 0x28e;
    break;
  case 0xe1:
  case 399:
    uVar1 = 0x72;
    break;
  case 0xe3:
  case 400:
    uVar1 = 0x74;
    break;
  case 0xe4:
    uVar1 = 0x75;
    break;
  case 0xe5:
    uVar1 = 0x76;
    break;
  case 0xec:
  case 0x247:
    uVar1 = 1;
    break;
  case 0xed:
    uVar1 = 0x79;
    break;
  case 0xee:
    uVar1 = 0x7b;
    break;
  case 0xef:
    uVar1 = 0x7c;
    break;
  case 0xf0:
    uVar1 = 0x7e;
    break;
  case 0xf3:
    uVar1 = 0x7f;
    break;
  case 0xf5:
    uVar1 = 0x81;
    break;
  case 0xf6:
    uVar1 = 0x82;
    break;
  case 0xf8:
  case 0xf9:
    uVar1 = 0x83;
    break;
  case 0x10c:
  case 0x110:
    uVar1 = 0x87;
    break;
  case 0x112:
  case 0x172:
  case 0x186:
    uVar1 = 0x23d;
    break;
  case 0x117:
    uVar1 = 0x23d;
    break;
  case 0x118:
    uVar1 = 0x8e;
    break;
  case 0x119:
  case 0x11c:
  case 0x11f:
  case 0x179:
  case 0x2ab:
  case 0x2ad:
  case 0x3a4:
    uVar1 = 0x86;
    break;
  case 0x11d:
  case 0x11e:
  case 0x16e:
  case 0x16f:
  case 0x173:
  case 0x2bf:
    uVar1 = 0x86;
    break;
  case 0x120:
    uVar1 = 0x90;
    break;
  case 0x121:
    uVar1 = 0x90;
    break;
  case 0x124:
    uVar1 = 0x91;
    break;
  case 0x128:
    uVar1 = 0x93;
    break;
  case 0x129:
    uVar1 = 0x4d;
    break;
  case 299:
  case 300:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
    uVar1 = 0x94;
    break;
  case 0x12d:
  case 0x12e:
  case 0x138:
  case 0x139:
    uVar1 = 0x94;
    break;
  case 0x13c:
  case 0x145:
  case 0x146:
  case 0x17a:
    uVar1 = 0x9e;
    break;
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x147:
  case 0x14d:
  case 0x14e:
  case 0x150:
    uVar1 = 0x9e;
    break;
  case 0x140:
    uVar1 = 0xa2;
    break;
  case 0x141:
    uVar1 = 0xa2;
    break;
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
    uVar1 = 0x9f;
    break;
  case 0x14f:
    uVar1 = 0x9f;
    break;
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
    uVar1 = 0xa3;
    break;
  case 0x164:
  case 0x165:
    uVar1 = 0xa4;
    break;
  case 0x16b:
    uVar1 = 0xa5;
    break;
  case 0x16c:
  case 0x16d:
    uVar1 = 0xa5;
    break;
  case 0x174:
  case 0x175:
    uVar1 = 0x53;
    break;
  case 0x17c:
  case 0x17d:
  case 0x3cf:
  case 0x3d0:
    uVar1 = 100;
    break;
  case 0x185:
    uVar1 = 0xa8;
    break;
  case 0x188:
    uVar1 = 0xa9;
    break;
  case 0x189:
    uVar1 = 0x267;
    break;
  case 0x18b:
    uVar1 = 0x80;
    break;
  case 0x191:
    uVar1 = 0x7a;
    break;
  case 0x195:
    uVar1 = 0xae;
    break;
  case 0x196:
  case 0x197:
    uVar1 = 0xae;
    break;
  case 0x198:
    uVar1 = 0x197;
    break;
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x200:
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20a:
  case 0x20b:
  case 0x20c:
  case 0x250:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
    uVar1 = 0x1a4;
    break;
  case 0x212:
    uVar1 = 0x1a6;
    break;
  case 0x218:
    uVar1 = 0x3c;
    break;
  case 0x21a:
    uVar1 = 0x1c3;
    break;
  case 0x21d:
    uVar1 = 0x7e;
    break;
  case 0x225:
  case 0x226:
    break;
  case 0x22a:
    uVar1 = 0x1ac;
    break;
  case 0x22b:
    uVar1 = 0x1aa;
    break;
  case 0x22d:
    uVar1 = 0x1ad;
    break;
  case 0x230:
    uVar1 = 0x1b0;
    break;
  case 0x231:
    uVar1 = 0x1b1;
    break;
  case 0x235:
    uVar1 = 0x1b4;
    break;
  case 0x236:
    uVar1 = 0x1b5;
    break;
  case 0x23c:
    uVar1 = 0x1b6;
    break;
  case 0x23e:
    uVar1 = 0x1b7;
    break;
  case 0x23f:
    uVar1 = 0x1ba;
    break;
  case 0x241:
    uVar1 = 0x1bc;
    break;
  case 0x242:
  case 0x243:
    uVar1 = 0x1bd;
    break;
  case 0x24a:
  case 0x24b:
  case 0x294:
    uVar1 = 0x1be;
    break;
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x278:
  case 0x28f:
  case 0x290:
  case 0x2c1:
    uVar1 = 0x1a4;
    break;
  case 0x251:
    uVar1 = 0x1c1;
    break;
  case 0x25e:
  case 0x27f:
    uVar1 = 0x1a4;
    break;
  case 0x277:
    uVar1 = 0x1c2;
    break;
  case 0x27a:
    uVar1 = 0x1d8;
    break;
  case 0x27b:
    uVar1 = 0x1d7;
    break;
  case 0x27c:
    uVar1 = 0x1d9;
    break;
  case 0x27d:
    uVar1 = 0x1da;
    break;
  case 0x27e:
    uVar1 = 0x1db;
    break;
  case 0x284:
  case 0x285:
    uVar1 = 0x1c3;
    break;
  case 0x287:
    uVar1 = 0x1e1;
    break;
  case 0x28a:
    uVar1 = 0x1e2;
    break;
  case 0x28b:
    uVar1 = 0x1e3;
    break;
  case 0x28c:
    uVar1 = 0x1e4;
    break;
  case 0x28d:
    uVar1 = 0x259;
    break;
  case 0x28e:
    uVar1 = 0x1e6;
    break;
  case 0x296:
    uVar1 = 0x1e8;
    break;
  case 0x297:
  case 0x298:
    uVar1 = 0x1c4;
    break;
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x29c:
    uVar1 = 0x1c4;
    break;
  case 0x29d:
    uVar1 = 0x1e9;
    break;
  case 0x2a0:
  case 0x2a1:
    uVar1 = 0x1eb;
    break;
  case 0x2a3:
    uVar1 = 0x1ec;
    break;
  case 0x2a4:
    uVar1 = 0x1ec;
    break;
  case 0x2a5:
    uVar1 = 0x1f0;
    break;
  case 0x2a7:
    uVar1 = 0x1f2;
    break;
  case 0x2a9:
    uVar1 = 500;
    break;
  case 0x2aa:
    uVar1 = 0x204;
    break;
  case 0x2ae:
    uVar1 = 0x237;
    break;
  case 0x2af:
    uVar1 = 0x1f5;
    break;
  case 0x2b1:
    uVar1 = 0x1f9;
    break;
  case 0x2b2:
    uVar1 = 0x1fa;
    break;
  case 0x2b3:
    uVar1 = 0x1fa;
    break;
  case 0x2b4:
    uVar1 = 0x1fb;
    break;
  case 0x2b5:
    uVar1 = 0x1fb;
    break;
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
    uVar1 = 0x1fc;
    break;
  case 0x2c4:
    uVar1 = 0x1ff;
    break;
  case 0x2c5:
    uVar1 = 0x200;
    break;
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
    uVar1 = 0x207;
    break;
  case 0x2cc:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
    uVar1 = 0x207;
    break;
  case 0x2d2:
    uVar1 = 0x208;
    break;
  case 0x2d4:
  case 0x352:
  case 0x353:
  case 0x37b:
    uVar1 = 0x209;
    break;
  case 0x2d5:
    uVar1 = 0x20a;
    break;
  case 0x2d6:
  case 0x2d7:
    uVar1 = 0x209;
    break;
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
    uVar1 = 0x20d;
    break;
  case 0x2db:
    uVar1 = 0x20b;
    break;
  case 0x2de:
    uVar1 = 0x20a;
    break;
  case 0x2e7:
  case 0x2e8:
  case 0x2e9:
    uVar1 = 0x212;
    break;
  case 0x2ea:
    uVar1 = 0x214;
    break;
  case 0x2ec:
  case 0x2f0:
    uVar1 = 0x215;
    break;
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
    uVar1 = 0x215;
    break;
  case 0x2f4:
    uVar1 = 0x216;
    break;
  case 0x2f5:
  case 0x2f6:
    uVar1 = 0x216;
    break;
  case 0x2f7:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x37e:
    uVar1 = 0x209;
    break;
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
    uVar1 = 0x1ea;
    break;
  case 0x307:
    uVar1 = 0x21d;
    break;
  case 0x308:
    uVar1 = 0x21e;
    break;
  case 0x309:
    uVar1 = 0x21f;
    break;
  case 0x30a:
    uVar1 = 0x222;
    break;
  case 0x30b:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
    uVar1 = 0x223;
    break;
  case 0x30d:
    uVar1 = 3;
    break;
  case 800:
    uVar1 = 0x22f;
    break;
  case 0x32e:
    uVar1 = 0x236;
    break;
  case 0x330:
    uVar1 = 0x238;
    break;
  case 0x331:
    uVar1 = 0x239;
    break;
  case 0x332:
  case 0x3d3:
    uVar1 = 0x239;
    break;
  case 0x337:
    uVar1 = 0x254;
    break;
  case 0x338:
    uVar1 = 0x24a;
    break;
  case 0x343:
    uVar1 = 0x24e;
    break;
  case 0x344:
    uVar1 = 0x250;
    break;
  case 0x34e:
    uVar1 = 599;
    break;
  case 0x350:
    uVar1 = 0x25b;
    break;
  case 0x358:
  case 0x35a:
  case 0x35d:
  case 0x35e:
  case 0x35f:
    uVar1 = 0x25e;
    break;
  case 0x35b:
  case 0x35c:
    uVar1 = 0x25e;
    break;
  case 0x365:
    uVar1 = 0x265;
    break;
  case 0x366:
    uVar1 = 0x265;
    break;
  case 0x368:
  case 0x369:
    uVar1 = 0x268;
    break;
  case 0x36a:
    uVar1 = 0x26b;
    break;
  case 0x36b:
  case 0x3bd:
    uVar1 = 0x1ae;
    break;
  case 0x36c:
    uVar1 = 0x26d;
    break;
  case 0x377:
    uVar1 = 0x218;
    break;
  case 0x378:
  case 0x379:
    uVar1 = 0x271;
    break;
  case 0x37c:
    uVar1 = 0x275;
    break;
  case 0x37d:
    uVar1 = 0x211;
    break;
  case 0x37f:
  case 0x3f6:
    uVar1 = 0x5c;
    break;
  case 0x38b:
  case 0x38c:
    uVar1 = 0x5c;
    break;
  case 0x390:
    uVar1 = 0x280;
    break;
  case 0x392:
    uVar1 = 0x211;
    break;
  case 0x399:
    uVar1 = 0x283;
    break;
  case 0x39a:
    uVar1 = 0x284;
    break;
  case 0x39e:
    uVar1 = 0x3cb;
    break;
  case 0x3a2:
    uVar1 = 0x286;
    break;
  case 0x3a3:
    uVar1 = 0x287;
    break;
  case 0x3a6:
  case 0x3a7:
    uVar1 = 0x288;
    break;
  case 0x3b8:
    uVar1 = 0x28c;
    break;
  case 0x3b9:
  case 0x3ba:
  case 0x3bb:
  case 0x3bc:
    uVar1 = 0x28d;
    break;
  case 0x3c2:
    uVar1 = 0x293;
    break;
  case 0x3c5:
    uVar1 = 0x292;
    break;
  case 0x3c6:
    uVar1 = 0x1b9;
    break;
  case 0x3cb:
  case 0x3cc:
  case 0x3cd:
    uVar1 = 0x298;
    break;
  case 0x3d1:
  case 0x3d2:
    uVar1 = 0x29b;
    break;
  case 0x3d4:
    uVar1 = 0x7d;
    break;
  case 0x3d6:
  case 0x3d7:
  case 0x3d8:
  case 0x3d9:
  case 0x3da:
  case 0x3db:
  case 0x3dc:
  case 0x3dd:
  case 0x3de:
  case 0x3df:
  case 0x3e0:
  case 0x3e1:
  case 0x3e2:
  case 0x3e3:
  case 0x3e4:
  case 0x3e5:
    uVar1 = 0x29c;
    break;
  case 0x3e6:
  case 999:
  case 1000:
  case 0x3e9:
  case 0x3ea:
  case 0x3eb:
  case 0x3ec:
  case 0x3ed:
  case 0x3ee:
  case 0x3ef:
  case 0x3f0:
  case 0x3f1:
    uVar1 = 0x29c;
    break;
  case 0x3f2:
    uVar1 = 0x29e;
    break;
  case 0x3f3:
    uVar1 = 0x2a0;
    break;
  case 0x3f7:
    uVar1 = 0x3cc;
    break;
  case 0x3f8:
    uVar1 = 0x1f5;
  }
                    /* WARNING: Could not recover jumptable at 0x00342ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return uVar1;
}


// ===== 00342ed0  rive::KeyedObject::~KeyedObject =====

/* rive::KeyedObject::~KeyedObject() */

void __thiscall rive::KeyedObject::~KeyedObject(KeyedObject *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cd90 + 0x10;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(this + 0x18);
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar3 != plVar2);
    plVar1 = *(long **)(this + 0x10);
  }
  *(long **)(this + 0x18) = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 00342f5c  rive::KeyedObject::addKeyedProperty =====

/* rive::KeyedObject::addKeyedProperty(std::__ndk1::unique_ptr<rive::KeyedProperty,
   std::__ndk1::default_delete<rive::KeyedProperty> >) */

void __thiscall rive::KeyedObject::addKeyedProperty(KeyedObject *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 < *(long **)(this + 0x20)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_003430f8;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x10);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_00343118();
LAB_00343114:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00343114;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x10);
  plVar12 = *(long **)(this + 0x18);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x10) = plVar3;
    *(long **)(this + 0x18) = plVar13;
    *(void **)(this + 0x20) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_00343094:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_00343094;
    }
    plVar12 = *(long **)(this + 0x10);
    plVar15 = *(long **)(this + 0x18);
    *(long **)(this + 0x10) = plVar3;
    *(long **)(this + 0x18) = plVar13;
    *(void **)(this + 0x20) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_003430f8:
  *(long **)(this + 0x18) = plVar13;
  return;
}


// ===== 00343118  FUN_00343118 =====

void FUN_00343118(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034312c  rive::KeyedObject::reportKeyedCallbacks =====

/* rive::KeyedObject::reportKeyedCallbacks(rive::KeyedCallbackReporter*, float, float, bool) const
    */

void __thiscall
rive::KeyedObject::reportKeyedCallbacks
          (KeyedObject *this,KeyedCallbackReporter *param_1,float param_2,float param_3,bool param_4
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar2 = *(undefined8 **)(this + 0x18);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    iVar3 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
    if (iVar3 < 0x365) {
      if ((iVar3 == 0x18b) || (iVar3 == 0x191)) {
LAB_00343168:
        KeyedProperty::reportKeyedCallbacks
                  ((KeyedProperty *)*puVar1,param_1,*(uint *)(this + 0xc),param_2,param_3,param_4);
      }
    }
    else if ((iVar3 == 0x3f8) || (iVar3 == 0x365)) goto LAB_00343168;
    puVar1 = puVar1 + 1;
  } while( true );
}


// ===== 003431dc  rive::KeyedObject::apply =====

/* rive::KeyedObject::apply(rive::Artboard*, float, float, rive::LinearAnimationInstance const*) */

void __thiscall
rive::KeyedObject::apply
          (KeyedObject *this,Artboard *param_1,float param_2,float param_3,
          LinearAnimationInstance *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Core *pCVar4;
  
  pCVar4 = (Core *)(**(code **)(*(long *)param_1 + 0x348))(param_1,*(undefined4 *)(this + 0xc));
  if (pCVar4 != (Core *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x18);
    for (puVar1 = *(undefined8 **)(this + 0x10); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      iVar3 = *(int *)((KeyedProperty *)*puVar1 + 0xc);
      if (iVar3 < 0x365) {
        if ((iVar3 != 0x18b) && (iVar3 != 0x191)) {
LAB_00343230:
          KeyedProperty::apply((KeyedProperty *)*puVar1,pCVar4,param_2,param_3,param_4);
        }
      }
      else if ((iVar3 != 0x365) && (iVar3 != 0x3f8)) goto LAB_00343230;
    }
  }
  return;
}


// ===== 0034329c  rive::KeyedProperty::KeyedProperty =====

/* rive::KeyedProperty::KeyedProperty() */

void __thiscall rive::KeyedProperty::KeyedProperty(KeyedProperty *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0067cd98;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0xffffffff;
  return;
}


// ===== 003432c0  rive::KeyedProperty::~KeyedProperty =====

/* rive::KeyedProperty::~KeyedProperty() */

void __thiscall rive::KeyedProperty::~KeyedProperty(KeyedProperty *this)

{
  ~KeyedProperty(this);
  operator_delete(this);
  return;
}


// ===== 003432e4  FUN_003432e4 =====

undefined8 FUN_003432e4(void)

{
  return 0x1a;
}


// ===== 003432ec  FUN_003432ec =====

bool FUN_003432ec(undefined8 param_1,short param_2)

{
  return param_2 == 0x1a;
}


// ===== 003432fc  FUN_003432fc =====

bool FUN_003432fc(long param_1,short param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2 == 0x35) {
    uVar6 = 0;
    uVar3 = 0;
    pbVar4 = (byte *)param_3[2];
    do {
      if ((byte *)(*param_3 + param_3[1]) <= pbVar4) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_00343360;
      }
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulong)(((uint)uVar6 & 0xff) + 7);
      uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
      pbVar4 = pbVar5;
    } while ((char)bVar1 < '\0');
    param_3[2] = (long)pbVar5;
    if (uVar3 >> 0x20 != 0) {
      *(undefined1 *)((long)param_3 + 0x19) = 1;
LAB_00343360:
      uVar3 = 0;
      param_3[2] = *param_3 + param_3[1];
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
  }
  return param_2 == 0x35;
}


// ===== 00343378  rive::KeyedProperty::onAddedDirty =====

/* rive::KeyedProperty::onAddedDirty(rive::CoreContext*) */

ulong __thiscall rive::KeyedProperty::onAddedDirty(KeyedProperty *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar2 = *(undefined8 **)(this + 0x18);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x38))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar3;
}


// ===== 003433d4  rive::KeyedProperty::onAddedClean =====

/* rive::KeyedProperty::onAddedClean(rive::CoreContext*) */

ulong __thiscall rive::KeyedProperty::onAddedClean(KeyedProperty *this,CoreContext *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar2 = *(undefined8 **)(this + 0x18);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,param_1);
    if ((uVar3 & 0xff) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return uVar3;
}


// ===== 00343430  rive::KeyedProperty::import =====

/* rive::KeyedProperty::import(rive::ImportStack&) */

void __thiscall rive::KeyedProperty::import(KeyedProperty *this,ImportStack *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  KeyedProperty *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 != 0) {
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 0x19;
    }
    else {
      uVar7 = 0x19;
      if (uVar5 < 0x1a) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar2 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar2 = 0x19 / uVar1;
        }
        uVar7 = (ulong)(0x19 - uVar2 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == 0x19) {
          if ((short)plVar8[2] == 0x19) {
            if (plVar8[3] != 0) {
              local_30 = this;
              KeyedObject::addKeyedProperty(*(KeyedObject **)(plVar8[3] + 8),&local_30);
              if (local_30 != (KeyedProperty *)0x0) {
                (**(code **)(*(long *)local_30 + 8))();
              }
              uVar11 = 0;
              goto LAB_00343538;
            }
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar3 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar11 = 1;
LAB_00343538:
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 0034355c  FUN_0034355c =====

void FUN_0034355c(void)

{
  return;
}


// ===== 00343560  rive::KeyedProperty::~KeyedProperty =====

/* rive::KeyedProperty::~KeyedProperty() */

void __thiscall rive::KeyedProperty::~KeyedProperty(KeyedProperty *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cd98 + 0x10;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = *(long **)(this + 0x18);
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar3 != plVar2);
    plVar1 = *(long **)(this + 0x10);
  }
  *(long **)(this + 0x18) = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 003435ec  rive::KeyedProperty::addKeyFrame =====

/* rive::KeyedProperty::addKeyFrame(std::__ndk1::unique_ptr<rive::KeyFrame,
   std::__ndk1::default_delete<rive::KeyFrame> >) */

void __thiscall rive::KeyedProperty::addKeyFrame(KeyedProperty *this,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 < *(long **)(this + 0x20)) {
    lVar4 = *param_2;
    *param_2 = 0;
    plVar13 = plVar3 + 1;
    *plVar3 = lVar4;
    goto LAB_00343788;
  }
  lVar14 = (long)plVar3 - *(long *)(this + 0x10);
  lVar4 = lVar14 >> 3;
  uVar7 = lVar4 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_003437a8();
LAB_003437a4:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_003437a4;
    pvVar2 = operator_new(uVar6 << 3);
  }
  lVar8 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar4 * 8);
  plVar15 = *(long **)(this + 0x10);
  plVar12 = *(long **)(this + 0x18);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 8);
  plVar13 = plVar3 + 1;
  *plVar3 = lVar8;
  lVar4 = (long)plVar12 - (long)plVar15;
  if (lVar4 == 0) {
    *(long **)(this + 0x10) = plVar3;
    *(long **)(this + 0x18) = plVar13;
    *(void **)(this + 0x20) = pvVar1;
  }
  else {
    uVar7 = lVar4 - 8;
    plVar11 = plVar12;
    if ((uVar7 < 0x78) ||
       (((long *)((long)plVar12 + (-8 - (uVar7 & 0xfffffffffffffff8))) < plVar3 &&
        ((long *)((long)pvVar2 + (lVar14 - (uVar7 & 0xfffffffffffffff8)) + -8) < plVar12)))) {
LAB_00343724:
      do {
        plVar11 = plVar11 + -1;
        lVar4 = *plVar11;
        *plVar11 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar4;
      } while (plVar11 != plVar15);
    }
    else {
      plVar9 = plVar3 + -2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar5 = uVar7 & 0x3ffffffffffffffc;
      plVar11 = plVar12 + -uVar5;
      uVar6 = uVar5;
      do {
        plVar10 = plVar12 + -4;
        lVar16 = plVar12[-3];
        lVar8 = *plVar10;
        lVar14 = plVar12[-1];
        lVar4 = plVar12[-2];
        uVar6 = uVar6 - 4;
        plVar12[-3] = 0;
        *plVar10 = 0;
        plVar12[-1] = 0;
        plVar12[-2] = 0;
        plVar9[-1] = lVar16;
        plVar9[-2] = lVar8;
        plVar9[1] = lVar14;
        *plVar9 = lVar4;
        plVar9 = plVar9 + -4;
        plVar12 = plVar10;
      } while (uVar6 != 0);
      plVar3 = plVar3 + -uVar5;
      if (uVar7 != uVar5) goto LAB_00343724;
    }
    plVar12 = *(long **)(this + 0x10);
    plVar15 = *(long **)(this + 0x18);
    *(long **)(this + 0x10) = plVar3;
    *(long **)(this + 0x18) = plVar13;
    *(void **)(this + 0x20) = pvVar1;
    while (plVar15 != plVar12) {
      plVar15 = plVar15 + -1;
      plVar3 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    operator_delete(plVar12);
  }
LAB_00343788:
  *(long **)(this + 0x18) = plVar13;
  return;
}


// ===== 003437a8  FUN_003437a8 =====

void FUN_003437a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003437bc  rive::KeyedProperty::closestFrameIndex =====

/* rive::KeyedProperty::closestFrameIndex(float, int) const */

ulong __thiscall
rive::KeyedProperty::closestFrameIndex(KeyedProperty *this,float param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  
  lVar2 = *(long *)(this + 0x10);
  uVar3 = (ulong)(*(long *)(this + 0x18) - lVar2) >> 3;
  iVar4 = (int)uVar3 + -1;
  if (param_1 <= *(float *)(*(long *)(lVar2 + (long)iVar4 * 8) + 0x10)) {
    if ((int)uVar3 < 1) {
      return 0;
    }
    uVar3 = 0;
    do {
      while( true ) {
        iVar1 = iVar4 + (int)uVar3 >> 1;
        fVar5 = *(float *)(*(long *)(lVar2 + (long)iVar1 * 8) + 0x10);
        if (fVar5 < param_1) break;
        if (fVar5 == param_1 || fVar5 < param_1 != (NAN(fVar5) || NAN(param_1))) {
          return (ulong)(uint)(iVar1 + param_2);
        }
        iVar4 = iVar1 + -1;
        if (iVar4 < (int)uVar3) {
          return uVar3;
        }
      }
      uVar3 = (ulong)(iVar1 + 1U);
    } while ((int)(iVar1 + 1U) <= iVar4);
  }
  return uVar3;
}


// ===== 00343838  rive::KeyedProperty::reportKeyedCallbacks =====

/* rive::KeyedProperty::reportKeyedCallbacks(rive::KeyedCallbackReporter*, unsigned int, float,
   float, bool) const */

void __thiscall
rive::KeyedProperty::reportKeyedCallbacks
          (KeyedProperty *this,KeyedCallbackReporter *param_1,uint param_2,float param_3,
          float param_4,bool param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 == param_4) {
    return;
  }
  lVar3 = *(long *)(this + 0x10);
  uVar4 = (uint)((ulong)(*(long *)(this + 0x18) - lVar3) >> 3);
  iVar6 = uVar4 - 1;
  fVar9 = *(float *)(*(long *)(lVar3 + (long)iVar6 * 8) + 0x10);
  uVar5 = uVar4;
  if (param_3 <= fVar9) {
    if ((int)uVar4 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar7 = iVar6;
      do {
        while( true ) {
          iVar1 = (int)(uVar5 + iVar7) >> 1;
          fVar10 = *(float *)(*(long *)(lVar3 + (long)iVar1 * 8) + 0x10);
          if (fVar10 < param_3) break;
          if (fVar10 == param_3 || fVar10 < param_3 != (NAN(fVar10) || NAN(param_3))) {
            uVar5 = iVar1 + (uint)(param_3 <= param_4 != param_5);
            goto joined_r0x0034394c;
          }
          iVar7 = iVar1 + -1;
          if (iVar7 < (int)uVar5) goto joined_r0x0034394c;
        }
        uVar5 = iVar1 + 1;
      } while ((int)uVar5 <= iVar7);
    }
  }
joined_r0x0034394c:
  if (param_4 <= fVar9) {
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        while( true ) {
          iVar7 = (int)(uVar4 + iVar6) >> 1;
          fVar9 = *(float *)(*(long *)(lVar3 + (long)iVar7 * 8) + 0x10);
          if (fVar9 < param_4) break;
          if (fVar9 == param_4 || fVar9 < param_4 != (NAN(fVar9) || NAN(param_4))) {
            uVar4 = iVar7 + (uint)(param_3 <= param_4);
            goto LAB_00343958;
          }
          iVar6 = iVar7 + -1;
          if (iVar6 < (int)uVar4) goto LAB_00343958;
        }
        uVar4 = iVar7 + 1;
      } while ((int)uVar4 <= iVar6);
    }
  }
LAB_00343958:
  uVar2 = uVar4;
  if ((int)uVar4 <= (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  iVar6 = uVar2 - uVar4;
  if (iVar6 != 0 && (int)uVar4 <= (int)uVar2) {
    uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    do {
      (**(code **)(*(long *)param_1 + 0x10))
                (param_4 - *(float *)(*(long *)(*(long *)(this + 0x10) + uVar8) + 0x10),param_1,
                 param_2,*(undefined4 *)(this + 0xc));
      iVar6 = iVar6 + -1;
      uVar8 = uVar8 + 8;
    } while (iVar6 != 0);
  }
  return;
}


// ===== 003439bc  rive::KeyedProperty::apply =====

/* rive::KeyedProperty::apply(rive::Core*, float, float, rive::LinearAnimationInstance const*) */

void __thiscall
rive::KeyedProperty::apply
          (KeyedProperty *this,Core *param_1,float param_2,float param_3,
          LinearAnimationInstance *param_4)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  sVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  fVar12 = param_3;
  if (sVar1 == 0x199) {
    uVar2 = (**(code **)(*(long *)(param_1 + 0x1c0) + 0x10))
                      (param_1 + 0x1c0,*(undefined4 *)(this + 0xc));
    fVar12 = 1.0;
    if ((uVar2 & 1) == 0) {
      fVar12 = param_3;
    }
  }
  plVar5 = *(long **)(this + 0x10);
  iVar7 = (int)((ulong)(*(long *)(this + 0x18) - (long)plVar5) >> 3);
  iVar8 = iVar7 + -1;
  iVar9 = iVar7;
  if (param_2 <= *(float *)(plVar5[iVar8] + 0x10)) {
    if (0 < iVar7) {
      iVar10 = 0;
      do {
        while( true ) {
          iVar9 = iVar10 + iVar8 >> 1;
          fVar11 = *(float *)(plVar5[iVar9] + 0x10);
          if (fVar11 < param_2) break;
          if ((fVar11 == param_2 || fVar11 < param_2 != (NAN(fVar11) || NAN(param_2))) ||
             (iVar8 = iVar9 + -1, iVar9 = iVar10, iVar8 < iVar10)) goto LAB_00343a44;
        }
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (iVar10 <= iVar8);
      goto LAB_00343a44;
    }
    uVar4 = *(undefined4 *)(this + 0xc);
LAB_00343ae0:
    plVar3 = (long *)*plVar5;
  }
  else {
LAB_00343a44:
    uVar4 = *(undefined4 *)(this + 0xc);
    if (iVar9 == 0) goto LAB_00343ae0;
    plVar3 = (long *)(plVar5 + iVar9)[-1];
    if (iVar9 < iVar7) {
      plVar5 = (long *)plVar5[iVar9];
      if (*(float *)(plVar5 + 2) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00343a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x68))(fVar12,plVar5,param_1);
        return;
      }
      lVar6 = *plVar3;
      if (*(int *)((long)plVar3 + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00343b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x70))(param_2,fVar12,plVar3,param_1,uVar4,plVar5,param_4);
        return;
      }
      goto LAB_00343ae8;
    }
  }
  lVar6 = *plVar3;
LAB_00343ae8:
                    /* WARNING: Could not recover jumptable at 0x00343b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x68))(fVar12,plVar3,param_1,uVar4);
  return;
}


// ===== 00343b44  rive::InterpolatorHost::from =====

/* rive::InterpolatorHost::from(rive::Core*) */

Core * rive::InterpolatorHost::from(Core *param_1)

{
  Core *pCVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*(long *)param_1 + 0x10))();
  pCVar1 = param_1 + 0x1c0;
  if (sVar2 != 0x199) {
    pCVar1 = (Core *)0x0;
  }
  return pCVar1;
}


// ===== 00343b7c  rive::KeyFrameInterpolator::import =====

/* rive::KeyFrameInterpolator::import(rive::ImportStack&) */

undefined8 __thiscall
rive::KeyFrameInterpolator::import(KeyFrameInterpolator *this,ImportStack *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 == 0) {
    return 1;
  }
  uVar4 = (uint)uVar5;
  uVar1 = uVar5 - 1;
  uVar10 = NEON_cnt(uVar5,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
  uVar6 = (ulong)~uVar4 & 1;
  if (1 < (uVar11 & 0xffffffff)) {
    uVar6 = (ulong)(uVar1 != 0);
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if (plVar7 != (long *)0x0) {
    do {
      while( true ) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00343c34;
        uVar8 = plVar7[1];
        if (uVar8 == 1) break;
        if ((uVar11 & 0xffffffff) < 2) {
          uVar8 = uVar8 & uVar1;
        }
        else if (uVar5 <= uVar8) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar3 * uVar5;
        }
        if (uVar8 != uVar6) goto LAB_00343c34;
      }
    } while (*(short *)(plVar7 + 2) != 1);
    if (plVar7[3] != 0) {
      Artboard::addObject(*(Artboard **)(plVar7[3] + 8),(Core *)this);
      return 0;
    }
  }
LAB_00343c34:
  if ((uVar11 & 0xffffffff) < 2) {
    uVar6 = (ulong)(uVar4 - 1) & 0x17;
  }
  else {
    uVar6 = 0x17;
    if (uVar5 < 0x18) {
      uVar2 = 0;
      if ((uVar5 & 0xff) != 0) {
        uVar2 = 0x17 / (uVar4 & 0xff);
      }
      uVar6 = (ulong)(0x17 - uVar2 * (uVar4 & 0xff));
    }
  }
  plVar7 = *(long **)(*(long *)param_1 + uVar6 * 8);
  if (plVar7 != (long *)0x0) {
    for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      uVar8 = plVar7[1];
      if (uVar8 == 0x17) {
        if (*(short *)(plVar7 + 2) == 0x17) {
          if ((BackboardImporter *)plVar7[3] == (BackboardImporter *)0x0) {
            return 1;
          }
          BackboardImporter::addInterpolator((BackboardImporter *)plVar7[3],this);
          return 0;
        }
      }
      else {
        if ((uVar11 & 0xffffffff) < 2) {
          uVar8 = uVar8 & uVar1;
        }
        else if (uVar5 <= uVar8) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar3 * uVar5;
        }
        if (uVar8 != uVar6) {
          return 1;
        }
      }
    }
  }
  return 1;
}


// ===== 00343cf0  FUN_00343cf0 =====

void FUN_00343cf0(void)

{
  return;
}


// ===== 00343cf4  FUN_00343cf4 =====

void FUN_00343cf4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x343cf8);
  (*pcVar1)();
}


// ===== 00343cf8  FUN_00343cf8 =====

undefined8 FUN_00343cf8(void)

{
  return 0xaf;
}


// ===== 00343d00  FUN_00343d00 =====

bool FUN_00343d00(undefined8 param_1,short param_2)

{
  return param_2 == 0xaf;
}


// ===== 00343d10  FUN_00343d10 =====

undefined8 FUN_00343d10(void)

{
  return 0;
}


// ===== 00343d18  FUN_00343d18 =====

undefined8 FUN_00343d18(void)

{
  return 0;
}


// ===== 00343d20  FUN_00343d20 =====

undefined8 FUN_00343d20(void)

{
  return 0;
}


// ===== 00343d28  FUN_00343d28 =====

undefined8 FUN_00343d28(void)

{
  return 0;
}


// ===== 00343d30  FUN_00343d30 =====

void FUN_00343d30(void)

{
  return;
}


// ===== 00343d34  rive::LinearAnimationInstance::LinearAnimationInstance =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive::LinearAnimationInstance::LinearAnimationInstance(rive::LinearAnimation const*,
   rive::ArtboardInstance*, float) */

void __thiscall
rive::LinearAnimationInstance::LinearAnimationInstance
          (LinearAnimationInstance *this,LinearAnimation *param_1,ArtboardInstance *param_2,
          float param_3)

{
  LinearAnimation *pLVar1;
  LinearAnimation LVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar7;
  
  puVar3 = PTR_vtable_0067cdf0;
  *(LinearAnimation **)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 8) = puVar3 + 0xb8;
  *(ArtboardInstance **)(this + 0x10) = param_2;
  fVar4 = *(float *)(param_1 + 0x30);
  LVar2 = param_1[0x40];
  *(undefined **)this = puVar3 + 0x10;
  if (param_3 < 0.0 == NAN(param_3)) {
    if (fVar4 < 0.0 == NAN(fVar4)) {
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x38));
      fVar4 = 0.0;
      if (LVar2 != (LinearAnimation)0x0) {
        fVar4 = fVar5;
      }
    }
    else {
      pLVar1 = param_1 + 0x2c;
      if (LVar2 != (LinearAnimation)0x0) {
        pLVar1 = param_1 + 0x3c;
      }
      fVar4 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
    }
    uVar6 = NEON_fmov(0x3f800000,4);
    uVar7 = (undefined4)((ulong)uVar6 >> 0x20);
  }
  else {
    if (fVar4 < 0.0 == NAN(fVar4)) {
      pLVar1 = param_1 + 0x2c;
      if (LVar2 != (LinearAnimation)0x0) {
        pLVar1 = param_1 + 0x3c;
      }
      fVar4 = (float)NEON_ucvtf(*(undefined4 *)pLVar1);
    }
    else {
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x38));
      fVar4 = 0.0;
      if (LVar2 != (LinearAnimation)0x0) {
        fVar4 = fVar5;
      }
    }
    uVar6 = NEON_fmov(0xbf800000,4);
    uVar7 = (undefined4)((ulong)uVar6 >> 0x20);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  uVar6 = _DAT_0024e110;
  fVar5 = (float)NEON_ucvtf(uVar8);
  *(undefined8 *)(this + 0x50) = _UNK_0024e118;
  *(undefined8 *)(this + 0x48) = uVar6;
  *(ulong *)(this + 0x40) = CONCAT44(uVar7,fVar4 / fVar5);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}


// ===== 00343e1c  rive::LinearAnimationInstance::~LinearAnimationInstance =====

/* rive::LinearAnimationInstance::~LinearAnimationInstance() */

void __thiscall
rive::LinearAnimationInstance::~LinearAnimationInstance(LinearAnimationInstance *this)

{
  ~LinearAnimationInstance(this);
  operator_delete(this);
  return;
}


// ===== 00343e40  rive::LinearAnimationInstance::name =====

/* rive::LinearAnimationInstance::name() const */

void rive::LinearAnimationInstance::name(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x38);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(in_x8 + 8) = uVar3;
    *(undefined8 *)in_x8 = uVar2;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
  return;
}


// ===== 00343e70  FUN_00343e70 =====

int FUN_00343e70(long param_1)

{
  if (*(int *)(param_1 + 0x5c) != -1) {
    return *(int *)(param_1 + 0x5c);
  }
  return *(int *)(*(long *)(param_1 + 0x38) + 0x34);
}


// ===== 00343e90  rive::LinearAnimationInstance::isTranslucent =====

/* rive::LinearAnimationInstance::isTranslucent() const */

undefined8 __thiscall rive::LinearAnimationInstance::isTranslucent(LinearAnimationInstance *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = *(long **)(this + 0x10);
  plVar6 = *(long **)(*(long *)(this + 0x38) + 0x48);
  plVar2 = *(long **)(*(long *)(this + 0x38) + 0x50);
  if (plVar6 == plVar2) {
    plVar7 = (long *)plVar5[0x34];
    plVar8 = (long *)plVar5[0x35];
  }
  else {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x348))(plVar5,*(undefined4 *)(*plVar6 + 0xc));
      plVar8 = (long *)plVar5[0x35];
      plVar7 = (long *)plVar5[0x34];
      for (plVar1 = plVar7; plVar1 != plVar8; plVar1 = plVar1 + 1) {
        if (lVar3 == *plVar1) {
          return 1;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  while( true ) {
    if (plVar7 == plVar8) {
      return 1;
    }
    plVar6 = (long *)*plVar7;
    uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
    if (((uVar4 & 1) != 0) && ((*(byte *)(plVar6[0x1a] + 8) >> 1 & 1) == 0)) break;
    plVar7 = plVar7 + 1;
  }
  return 0;
}


// ===== 00343f60  rive::LinearAnimationInstance::durationSeconds =====

/* rive::LinearAnimationInstance::durationSeconds() const */

float __thiscall rive::LinearAnimationInstance::durationSeconds(LinearAnimationInstance *this)

{
  undefined4 *puVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *(long *)(this + 0x38);
  bVar2 = *(char *)(lVar3 + 0x40) != '\0';
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x38));
  puVar1 = (undefined4 *)(lVar3 + 0x2c);
  if (bVar2) {
    puVar1 = (undefined4 *)(lVar3 + 0x3c);
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x28));
  fVar6 = (float)NEON_ucvtf(*puVar1);
  fVar4 = 0.0;
  if (bVar2) {
    fVar4 = fVar7;
  }
  return ABS(fVar6 / fVar5 - fVar4 / fVar5);
}


// ===== 00343fa8  rive::LinearAnimationInstance::advanceAndApply =====

/* rive::LinearAnimationInstance::advanceAndApply(float) */

bool __thiscall
rive::LinearAnimationInstance::advanceAndApply(LinearAnimationInstance *this,float param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  Core *pCVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = advance(this,param_1,(KeyedCallbackReporter *)this);
  lVar9 = *(long *)(this + 0x38);
  plVar10 = *(long **)(this + 0x10);
  fVar14 = *(float *)(this + 0x40);
  if (*(char *)(lVar9 + 0x41) != '\0') {
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
    fVar14 = (float)(int)(fVar14 * fVar12) / fVar12;
  }
  plVar11 = *(long **)(lVar9 + 0x48);
  plVar3 = *(long **)(lVar9 + 0x50);
  if (plVar11 != plVar3) {
    do {
      lVar9 = *plVar11;
      pCVar8 = (Core *)(**(code **)(*plVar10 + 0x348))(plVar10,*(undefined4 *)(lVar9 + 0xc));
      if (pCVar8 != (Core *)0x0) {
        puVar4 = *(undefined8 **)(lVar9 + 0x18);
        for (puVar2 = *(undefined8 **)(lVar9 + 0x10); puVar2 != puVar4; puVar2 = puVar2 + 1) {
          iVar5 = *(int *)((KeyedProperty *)*puVar2 + 0xc);
          if (iVar5 < 0x365) {
            if ((iVar5 != 0x18b) && (iVar5 != 0x191)) {
LAB_0034404c:
              KeyedProperty::apply((KeyedProperty *)*puVar2,pCVar8,fVar14,1.0,this);
            }
          }
          else if ((iVar5 != 0x365) && (iVar5 != 0x3f8)) goto LAB_0034404c;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
    plVar10 = *(long **)(this + 0x10);
  }
  uVar7 = Artboard::advance((Artboard *)param_1,plVar10,0xb);
  if (((uVar6 | uVar7) & 1) == 0) {
    iVar5 = *(int *)(this + 0x5c);
    if (iVar5 == -1) {
      iVar5 = *(int *)(*(long *)(this + 0x38) + 0x34);
    }
    if (iVar5 == 0) {
      lVar9 = *(long *)(this + 0x38);
      fVar14 = *(float *)(this + 0x54) * *(float *)(lVar9 + 0x30);
      if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) {
        puVar1 = (undefined4 *)(lVar9 + 0x2c);
        if (*(char *)(lVar9 + 0x40) != '\0') {
          puVar1 = (undefined4 *)(lVar9 + 0x3c);
        }
        fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
        fVar12 = (float)NEON_ucvtf(*puVar1);
        if (*(float *)(this + 0x40) < fVar12 / fVar13) {
          return true;
        }
      }
      if (0.0 <= fVar14) {
        return false;
      }
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x38));
      fVar14 = 0.0;
      if (*(char *)(lVar9 + 0x40) != '\0') {
        fVar14 = fVar12;
      }
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x28));
      fVar14 = fVar14 / fVar12;
      fVar12 = *(float *)(this + 0x40);
      return fVar12 != fVar14 && fVar12 < fVar14 == (NAN(fVar12) || NAN(fVar14));
    }
  }
  return true;
}


// ===== 00344190  rive::LinearAnimationInstance::reportEvent =====

/* rive::LinearAnimationInstance::reportEvent(rive::Event*, float) */

void rive::LinearAnimationInstance::reportEvent(Event *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 in_x1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = in_x1;
  FUN_00344260(param_1 + 0x18,puVar1,puVar1 + 1);
  operator_delete(puVar1);
  return;
}


// ===== 003441dc  rive::LinearAnimationInstance::~LinearAnimationInstance =====

/* non-virtual thunk to rive::LinearAnimationInstance::~LinearAnimationInstance() */

void __thiscall
rive::LinearAnimationInstance::~LinearAnimationInstance(LinearAnimationInstance *this)

{
  ~LinearAnimationInstance(this + -8);
  return;
}


// ===== 003441e4  rive::LinearAnimationInstance::~LinearAnimationInstance =====

/* non-virtual thunk to rive::LinearAnimationInstance::~LinearAnimationInstance() */

void __thiscall
rive::LinearAnimationInstance::~LinearAnimationInstance(LinearAnimationInstance *this)

{
  ~LinearAnimationInstance(this + -8);
  operator_delete(this + -8);
  return;
}


// ===== 0034420c  rive::LinearAnimationInstance::reportEvent =====

/* non-virtual thunk to rive::LinearAnimationInstance::reportEvent(rive::Event*, float) */

void __thiscall
rive::LinearAnimationInstance::reportEvent
          (LinearAnimationInstance *this,Event *param_1,float param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = param_1;
  FUN_00344260(this + 0x10,puVar1,puVar1 + 1);
  operator_delete(puVar1);
  return;
}


// ===== 00344258  FUN_00344258 =====

undefined8 FUN_00344258(void)

{
  return 0;
}


// ===== 00344260  FUN_00344260 =====

void FUN_00344260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  if (param_2 != param_3) {
    do {
      puVar8 = local_78;
      puVar2 = local_80;
      uVar11 = *param_2;
      if (local_78 < local_70) {
        *local_78 = uVar11;
        puVar9 = local_78 + 2;
        *(undefined4 *)(local_78 + 1) = 0;
      }
      else {
        lVar10 = (long)local_78 - (long)local_80 >> 4;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_00344408();
LAB_00344400:
                    /* WARNING: Subroutine does not return */
          FUN_00324008();
        }
        uVar7 = (long)local_70 - (long)local_80 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < (ulong)((long)local_70 - (long)local_80)) {
          uVar7 = 0xfffffffffffffff;
        }
        if (uVar7 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar7 >> 0x3c != 0) goto LAB_00344400;
          pvVar6 = operator_new(uVar7 << 4);
        }
        puVar9 = (undefined8 *)((long)pvVar6 + lVar10 * 0x10);
        *puVar9 = uVar11;
        *(undefined4 *)(puVar9 + 1) = 0;
        local_80 = puVar9;
        puVar5 = puVar8;
        while (puVar8 != puVar2) {
          uVar3 = *(undefined4 *)(puVar8 + -1);
          local_80[-2] = puVar8[-2];
          *(undefined4 *)(local_80 + -1) = uVar3;
          local_80 = local_80 + -2;
          puVar8 = puVar8 + -2;
          puVar5 = puVar2;
        }
        local_70 = (undefined8 *)((long)pvVar6 + uVar7 * 0x10);
        puVar9 = puVar9 + 2;
        if (puVar5 != (undefined8 *)0x0) {
          operator_delete(puVar5);
        }
      }
      param_2 = param_2 + 1;
      local_78 = puVar9;
    } while (param_2 != param_3);
  }
  puVar2 = (undefined8 *)param_1[2];
  for (puVar8 = (undefined8 *)param_1[1]; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,&local_80,*param_1);
  }
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00344408  FUN_00344408 =====

void FUN_00344408(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034441c  rive::LinearAnimationInstance::advance =====

/* rive::LinearAnimationInstance::advance(float, rive::KeyedCallbackReporter*) */

bool __thiscall
rive::LinearAnimationInstance::advance
          (LinearAnimationInstance *this,float param_1,KeyedCallbackReporter *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  LinearAnimationInstance LVar6;
  LinearAnimation *pLVar7;
  LinearAnimation *this_00;
  long *plVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  this_00 = *(LinearAnimation **)(this + 0x38);
  *(undefined4 *)(this + 0x50) = 0;
  fVar12 = *(float *)(this_00 + 0x30);
  fVar16 = fVar12 * param_1 * *(float *)(this + 0x54);
  if (fVar16 == 0.0) {
    this[0x58] = (LinearAnimationInstance)0x0;
    return false;
  }
  fVar14 = *(float *)(this + 0x48);
  *(float *)(this + 0x48) = ABS(fVar16) + fVar14;
  *(float *)(this + 0x4c) = fVar14;
  if (*(int *)(this + 0x5c) == -1) {
    if (*(int *)(this_00 + 0x34) == 0) goto LAB_003444a8;
LAB_003444ec:
    bVar4 = true;
  }
  else {
    if (*(int *)(this + 0x5c) != 0) goto LAB_003444ec;
LAB_003444a8:
    fVar14 = fVar12 * *(float *)(this + 0x54) * param_1;
    if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) {
      pLVar7 = this_00 + 0x2c;
      if (this_00[0x40] != (LinearAnimation)0x0) {
        pLVar7 = this_00 + 0x3c;
      }
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x28));
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)pLVar7);
      if (*(float *)(this + 0x40) < fVar13 / fVar15) goto LAB_003444ec;
    }
    if (0.0 <= fVar14) {
      bVar4 = false;
    }
    else {
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x38));
      fVar14 = 0.0;
      if (this_00[0x40] != (LinearAnimation)0x0) {
        fVar14 = fVar13;
      }
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x28));
      fVar14 = fVar14 / fVar13;
      fVar13 = *(float *)(this + 0x40);
      bVar4 = fVar13 != fVar14 && fVar13 < fVar14 == (NAN(fVar13) || NAN(fVar14));
    }
  }
  fVar13 = *(float *)(this + 0x40);
  fVar14 = fVar16 + fVar13;
  *(float *)(this + 0x40) = fVar14;
  if (param_2 != (KeyedCallbackReporter *)0x0) {
    if (fVar12 * *(float *)(this + 0x44) < 0.0 == NAN(fVar12 * *(float *)(this + 0x44))) {
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x38));
      fVar12 = 0.0;
      if (this_00[0x40] != (LinearAnimation)0x0) {
        fVar12 = fVar15;
      }
    }
    else {
      pLVar7 = this_00 + 0x2c;
      if (this_00[0x40] != (LinearAnimation)0x0) {
        pLVar7 = this_00 + 0x3c;
      }
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)pLVar7);
    }
    plVar8 = *(long **)(this_00 + 0x48);
    plVar2 = *(long **)(this_00 + 0x50);
    if (plVar8 != plVar2) {
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x28));
      do {
        lVar10 = *plVar8;
        puVar3 = *(undefined8 **)(lVar10 + 0x18);
        for (puVar11 = *(undefined8 **)(lVar10 + 0x10); puVar11 != puVar3; puVar11 = puVar11 + 1) {
          iVar5 = *(int *)((KeyedProperty *)*puVar11 + 0xc);
          if (iVar5 < 0x365) {
            if ((iVar5 == 0x18b) || (iVar5 == 0x191)) {
LAB_00344578:
              KeyedProperty::reportKeyedCallbacks
                        ((KeyedProperty *)*puVar11,param_2,*(uint *)(lVar10 + 0xc),fVar13,fVar14,
                         fVar12 / fVar15 == fVar13);
            }
          }
          else if ((iVar5 == 0x3f8) || (iVar5 == 0x365)) goto LAB_00344578;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar2);
      fVar14 = *(float *)(this + 0x40);
    }
  }
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x28));
  if (this_00[0x40] == (LinearAnimation)0x0) {
    fVar13 = 0.0;
    pLVar7 = this_00 + 0x2c;
  }
  else {
    pLVar7 = this_00 + 0x3c;
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x38));
  }
  fVar14 = fVar14 * fVar12;
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)pLVar7);
  iVar5 = (**(code **)(*(long *)this + 0x20))(this);
  if (iVar5 == 2) {
    iVar5 = -1;
    if (fVar16 < 0.0) {
      iVar5 = 1;
    }
    else if (fVar14 < fVar15 == (NAN(fVar14) || NAN(fVar15))) {
      fVar17 = (fVar15 - fVar14) + fVar15;
      *(float *)(this + 0x50) = (fVar14 - fVar15) / fVar12;
      fVar16 = fVar15;
      goto LAB_003447d4;
    }
    LVar6 = (LinearAnimationInstance)0x0;
    if ((fVar16 < 0.0) && (fVar14 < fVar13)) {
      fVar17 = fVar13 + (fVar13 - fVar14);
      *(float *)(this + 0x50) = (fVar13 - fVar14) / fVar12;
      fVar16 = fVar13;
LAB_003447d4:
      *(float *)(this + 0x54) = -*(float *)(this + 0x54);
      *(float *)(this + 0x40) = fVar17 / fVar12;
      if (param_2 != (KeyedCallbackReporter *)0x0) {
        LinearAnimation::reportKeyedCallbacks
                  (this_00,param_2,fVar16 / fVar12,fVar17 / fVar12,*(float *)(this + 0x44),true);
      }
      bVar9 = false;
      do {
        if ((iVar5 == 1) && (fVar17 < fVar15 == (NAN(fVar17) || NAN(fVar15)))) {
          fVar16 = fVar17 - fVar15;
          fVar17 = (fVar15 - fVar17) + fVar15;
          *(float *)(this + 0x50) = fVar16 / fVar12;
          fVar16 = fVar15;
        }
        else {
          LVar6 = (LinearAnimationInstance)0x1;
          if ((iVar5 != -1) || (fVar13 <= fVar17)) break;
          fVar16 = fVar13 - fVar17;
          fVar17 = fVar13 + fVar16;
          *(float *)(this + 0x50) = fVar16 / fVar12;
          fVar16 = fVar13;
        }
        *(float *)(this + 0x54) = -*(float *)(this + 0x54);
        *(float *)(this + 0x40) = fVar17 / fVar12;
        if (param_2 != (KeyedCallbackReporter *)0x0) {
          LinearAnimation::reportKeyedCallbacks
                    (this_00,param_2,fVar16 / fVar12,fVar17 / fVar12,*(float *)(this + 0x44),bVar9);
        }
        iVar5 = -iVar5;
        bVar9 = (bool)(bVar9 ^ 1);
      } while( true );
    }
  }
  else if (iVar5 == 1) {
    if ((fVar16 < 0.0) || (fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15)))) {
      LVar6 = (LinearAnimationInstance)0x0;
      if ((0.0 <= fVar16) || (fVar13 < fVar14)) goto joined_r0x00344a6c;
      fVar14 = fmodf(fVar13 - fVar14,fVar15 - fVar13);
      fVar13 = (fVar15 - ABS(fVar14)) / fVar12;
      *(float *)(this + 0x50) = ABS(ABS(fVar14) / (fVar16 * fVar12)) * param_1;
      *(float *)(this + 0x40) = fVar13;
      if (param_2 != (KeyedCallbackReporter *)0x0) {
        LinearAnimation::reportKeyedCallbacks
                  (this_00,param_2,fVar15 / fVar12,fVar13,*(float *)(this + 0x44),false);
      }
    }
    else {
      fVar14 = fmodf(fVar14 - fVar13,fVar15 - fVar13);
      fVar13 = (fVar13 + fVar14) / fVar12;
      *(float *)(this + 0x50) = (fVar14 / (fVar16 * fVar12)) * param_1;
      *(float *)(this + 0x40) = fVar13;
      if (param_2 != (KeyedCallbackReporter *)0x0) {
        if (*(float *)(this_00 + 0x30) * *(float *)(this + 0x44) < 0.0 ==
            NAN(*(float *)(this_00 + 0x30) * *(float *)(this + 0x44))) {
          fVar16 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x38));
          fVar12 = 0.0;
          if (this_00[0x40] != (LinearAnimation)0x0) {
            fVar12 = fVar16;
          }
        }
        else {
          pLVar7 = this_00 + 0x2c;
          if (this_00[0x40] != (LinearAnimation)0x0) {
            pLVar7 = this_00 + 0x3c;
          }
          fVar12 = (float)NEON_ucvtf(*(undefined4 *)pLVar7);
        }
        plVar8 = *(long **)(this_00 + 0x48);
        plVar2 = *(long **)(this_00 + 0x50);
        if (plVar8 != plVar2) {
          fVar16 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x28));
          do {
            lVar10 = *plVar8;
            puVar3 = *(undefined8 **)(lVar10 + 0x18);
            for (puVar11 = *(undefined8 **)(lVar10 + 0x10); puVar11 != puVar3; puVar11 = puVar11 + 1
                ) {
              iVar5 = *(int *)((KeyedProperty *)*puVar11 + 0xc);
              if (iVar5 < 0x365) {
                if ((iVar5 == 0x18b) || (iVar5 == 0x191)) {
LAB_00344a08:
                  KeyedProperty::reportKeyedCallbacks
                            ((KeyedProperty *)*puVar11,param_2,*(uint *)(lVar10 + 0xc),0.0,fVar13,
                             fVar12 / fVar16 == 0.0);
                }
              }
              else if ((iVar5 == 0x3f8) || (iVar5 == 0x365)) goto LAB_00344a08;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar2);
        }
      }
    }
    LVar6 = (LinearAnimationInstance)0x1;
  }
  else if (iVar5 == 0) {
    if ((fVar16 < 0.0) || (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15)))) {
      LVar6 = (LinearAnimationInstance)0x0;
      if ((0.0 <= fVar16) || (fVar13 <= fVar14)) goto joined_r0x00344a6c;
      fVar16 = (fVar13 - fVar14) / ABS(fVar16 * fVar12);
    }
    else {
      fVar16 = (fVar14 - fVar15) / (fVar16 * fVar12);
      fVar13 = fVar15;
    }
    *(float *)(this + 0x40) = fVar13 / fVar12;
    LVar6 = (LinearAnimationInstance)0x1;
    *(float *)(this + 0x50) = fVar16 * param_1;
  }
  else {
    LVar6 = (LinearAnimationInstance)0x0;
  }
joined_r0x00344a6c:
  if (!bVar4) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  iVar5 = *(int *)(this + 0x5c);
  this[0x58] = LVar6;
  if (iVar5 == -1) {
    iVar5 = *(int *)(*(long *)(this + 0x38) + 0x34);
  }
  if (iVar5 == 0) {
    lVar10 = *(long *)(this + 0x38);
    fVar12 = *(float *)(this + 0x54) * *(float *)(lVar10 + 0x30) * param_1;
    if (fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) {
      puVar1 = (undefined4 *)(lVar10 + 0x2c);
      if (*(char *)(lVar10 + 0x40) != '\0') {
        puVar1 = (undefined4 *)(lVar10 + 0x3c);
      }
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x28));
      fVar16 = (float)NEON_ucvtf(*puVar1);
      if (*(float *)(this + 0x40) < fVar16 / fVar14) goto LAB_00344950;
    }
    if (0.0 <= fVar12) {
      bVar4 = false;
    }
    else {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x38));
      fVar12 = 0.0;
      if (*(char *)(lVar10 + 0x40) != '\0') {
        fVar12 = fVar16;
      }
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x28));
      fVar12 = fVar12 / fVar16;
      fVar16 = *(float *)(this + 0x40);
      bVar4 = fVar16 != fVar12 && fVar16 < fVar12 == (NAN(fVar16) || NAN(fVar12));
    }
  }
  else {
LAB_00344950:
    bVar4 = true;
  }
  return bVar4;
}


// ===== 00344a74  rive::LinearAnimationInstance::~LinearAnimationInstance =====

/* rive::LinearAnimationInstance::~LinearAnimationInstance() */

void __thiscall
rive::LinearAnimationInstance::~LinearAnimationInstance(LinearAnimationInstance *this)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  DataBind *pDVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_vtable_0067cdf0 + 0xb8;
  *(undefined **)this = PTR_vtable_0067cdf0 + 0x10;
  *(undefined **)(this + 8) = puVar1;
  if (*(long *)(this + 0x10) != 0) {
    puVar2 = *(undefined8 **)(this + 0x70);
    for (puVar6 = *(undefined8 **)(this + 0x68); puVar6 != puVar2; puVar6 = puVar6 + 1) {
      pDVar5 = (DataBind *)*puVar6;
      DataBindContainer::removeDataBind
                ((DataBindContainer *)(*(long *)(this + 0x10) + 0x9b0),pDVar5);
      if (pDVar5 != (DataBind *)0x0) {
        (**(code **)(*(long *)pDVar5 + 8))(pDVar5);
      }
    }
  }
  pvVar3 = *(void **)(this + 0x68);
  *(void **)(this + 0x70) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar6 = *(undefined8 **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar6[2];
    while (puVar2 != (undefined8 *)0x0) {
      plVar4 = (long *)puVar2[3];
      pvVar3 = (void *)*puVar2;
      puVar2[3] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    pvVar3 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(puVar6);
  }
  pvVar3 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 0x28) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 00344b80  rive::LinearAnimationInstance::LinearAnimationInstance =====

/* rive::LinearAnimationInstance::LinearAnimationInstance(rive::LinearAnimationInstance const&) */

void __thiscall
rive::LinearAnimationInstance::LinearAnimationInstance
          (LinearAnimationInstance *this,LinearAnimationInstance *param_1)

{
  undefined4 uVar1;
  LinearAnimationInstance LVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_vtable_0067cdf0;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)this = puVar3 + 0x10;
  *(undefined **)(this + 8) = puVar3 + 0xb8;
  LVar2 = param_1[0x58];
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(this + 0x48) = uVar6;
  *(undefined8 *)(this + 0x40) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x38) = uVar4;
  this[0x58] = LVar2;
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined8 *)(this + 0x50) = uVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}


// ===== 00344bd8  rive::LinearAnimationInstance::statefulInterpolator =====

/* rive::LinearAnimationInstance::statefulInterpolator(rive::InterpolatingKeyFrame const*,
   rive::ScriptedInterpolator const*) const */

ScriptedObject * __thiscall
rive::LinearAnimationInstance::statefulInterpolator
          (LinearAnimationInstance *this,InterpolatingKeyFrame *param_1,
          ScriptedInterpolator *param_2)

{
  ushort uVar1;
  int iVar2;
  ScriptedObject *this_00;
  void *pvVar3;
  ScriptedObject *pSVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  ScriptedObject *pSVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  undefined2 uVar25;
  float fVar26;
  undefined8 uVar27;
  long lVar28;
  
  if (param_1 == (InterpolatingKeyFrame *)0x0) {
    return (ScriptedObject *)0x0;
  }
  if (param_2 == (ScriptedInterpolator *)0x0) {
    return (ScriptedObject *)0x0;
  }
  plVar17 = *(long **)(this + 0x60);
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)operator_new(0x28);
    *(long **)(this + 0x60) = plVar17;
    *(undefined4 *)(plVar17 + 4) = 0x3f800000;
    plVar17[1] = 0;
    *plVar17 = 0;
    plVar17[3] = 0;
    plVar17[2] = 0;
  }
  uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar5 = ((ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  puVar18 = (undefined8 *)((uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297);
  puVar6 = (undefined8 *)plVar17[1];
  if (puVar6 != (undefined8 *)0x0) {
    uVar27 = NEON_cnt(puVar6,1);
    uVar25 = NEON_uaddlv(uVar27,1);
    uVar5 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
    if (uVar5 < 2) {
      puVar22 = (undefined8 *)((ulong)puVar18 & (long)puVar6 - 1U);
    }
    else {
      puVar22 = puVar18;
      if (puVar6 <= puVar18) {
        uVar11 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar18 / (ulong)puVar6;
        }
        puVar22 = (undefined8 *)((long)puVar18 - uVar11 * (long)puVar6);
      }
    }
    plVar13 = *(long **)(*plVar17 + (long)puVar22 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        puVar14 = (undefined8 *)plVar13[1];
        if (puVar14 == puVar18) {
          if ((InterpolatingKeyFrame *)plVar13[2] == param_1) {
            return (ScriptedObject *)plVar13[3];
          }
        }
        else {
          if (uVar5 < 2) {
            puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar6 - 1U);
          }
          else if (puVar6 <= puVar14) {
            uVar11 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar11 = (ulong)puVar14 / (ulong)puVar6;
            }
            puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar6);
          }
          if (puVar14 != puVar22) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  lVar19 = 0;
  if (*(long *)(this + 0x10) != 0) {
    lVar19 = *(long *)(this + 0x10) + 0x9b0;
  }
  this_00 = (ScriptedObject *)(**(code **)(*(long *)param_2 + 0x90))(param_2,lVar19);
  if (this_00 == (ScriptedObject *)0x0) {
    return (ScriptedObject *)0x0;
  }
  lVar19 = *(long *)(*(long *)(this + 0x10) + 0xbc0);
  if (lVar19 != 0) {
    FUN_00340fb0(1,lVar19);
    FUN_00340fb0(1,lVar19);
  }
  lVar23 = *(long *)(this_00 + 0x50);
  *(long *)(this_00 + 0x50) = lVar19;
  if ((lVar23 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar23), iVar2 == 1)) {
    FUN_003453a8(lVar23);
  }
  if ((lVar19 != 0) && (iVar2 = FUN_00340fe0(0xffffffff,lVar19), iVar2 == 1)) {
    FUN_003453a8(lVar19);
  }
  puVar22 = *(undefined8 **)(this_00 + 0x20);
  for (puVar6 = *(undefined8 **)(this_00 + 0x18); puVar6 != puVar22; puVar6 = puVar6 + 1) {
    plVar13 = (long *)*puVar6;
    uVar1 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if (uVar1 < 0x26d) {
      lVar19 = 0x90;
      if (uVar1 != 0x263) {
        if (uVar1 == 0x264) {
          lVar19 = 0x88;
        }
        else {
          if (uVar1 != 0x26a) goto LAB_00344dcc;
          lVar19 = 0x98;
        }
      }
LAB_00344e64:
      lVar19 = *(long *)((long)plVar13 + lVar19 + 0x10);
      if (lVar19 != 0) {
        plVar13 = *(long **)(this + 0x70);
        if (plVar13 < *(long **)(this + 0x78)) {
          plVar10 = plVar13 + 1;
          *plVar13 = lVar19;
        }
        else {
          plVar20 = *(long **)(this + 0x68);
          lVar23 = (long)plVar13 - (long)plVar20 >> 3;
          uVar5 = lVar23 + 1;
          if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00345418();
          }
          uVar7 = (long)*(long **)(this + 0x78) - (long)plVar20;
          uVar11 = (long)uVar7 >> 2;
          if (uVar11 <= uVar5) {
            uVar11 = uVar5;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar11 = 0x1fffffffffffffff;
          }
          if (uVar11 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            if (uVar11 >> 0x3d != 0) goto LAB_003453a4;
            pvVar3 = operator_new(uVar11 << 3);
          }
          plVar8 = (long *)((long)pvVar3 + lVar23 * 8);
          plVar10 = plVar8 + 1;
          *plVar8 = lVar19;
          if ((long)plVar13 - (long)plVar20 != 0) {
            uVar5 = ((long)plVar13 - (long)plVar20) - 8;
            plVar24 = plVar13;
            if ((0x37 < uVar5) &&
               (0x1f < (ulong)((long)plVar13 + (-((long)plVar13 - (long)plVar20) - (long)pvVar3))))
            {
              plVar15 = plVar8 + -2;
              plVar16 = plVar13 + -2;
              uVar5 = (uVar5 >> 3) + 1;
              uVar12 = uVar5 & 0x3ffffffffffffffc;
              plVar24 = plVar13 + -uVar12;
              uVar7 = uVar12;
              do {
                plVar13 = plVar16 + -1;
                lVar28 = plVar16[-2];
                lVar23 = plVar16[1];
                lVar19 = *plVar16;
                uVar7 = uVar7 - 4;
                plVar16 = plVar16 + -4;
                plVar15[-1] = *plVar13;
                plVar15[-2] = lVar28;
                plVar15[1] = lVar23;
                *plVar15 = lVar19;
                plVar15 = plVar15 + -4;
              } while (uVar7 != 0);
              plVar8 = plVar8 + -uVar12;
              plVar13 = plVar20;
              if (uVar5 == uVar12) goto LAB_00344f68;
            }
            do {
              plVar24 = plVar24 + -1;
              plVar8 = plVar8 + -1;
              *plVar8 = *plVar24;
            } while (plVar24 != plVar20);
            plVar13 = *(long **)(this + 0x68);
          }
LAB_00344f68:
          *(long **)(this + 0x68) = plVar8;
          *(long **)(this + 0x70) = plVar10;
          *(void **)(this + 0x78) = (void *)((long)pvVar3 + uVar11 * 8);
          if (plVar13 != (long *)0x0) {
            operator_delete(plVar13);
          }
        }
        *(long **)(this + 0x70) = plVar10;
      }
    }
    else {
      if (0x272 < uVar1) {
        lVar19 = 0x90;
        if (uVar1 != 0x277) {
          if (uVar1 != 0x273) goto LAB_00344dcc;
          lVar19 = 0xa0;
        }
        goto LAB_00344e64;
      }
      if (uVar1 == 0x26d) {
        lVar19 = 0x90;
        goto LAB_00344e64;
      }
      lVar19 = 0x90;
      if (uVar1 == 0x272) goto LAB_00344e64;
    }
LAB_00344dcc:
  }
  pSVar4 = *(ScriptedObject **)(this_00 + 8);
  pSVar21 = this_00 + -0x10;
  if ((pSVar4 == (ScriptedObject *)0x0) || (this_00[0x71] != (ScriptedObject)0x0)) {
    puVar22 = (undefined8 *)plVar17[1];
  }
  else {
    if ((*(long *)(pSVar4 + 0xd8) != 0) && (*(long *)(*(long *)(pSVar4 + 0xd8) + 0x110) != 0)) {
      ScriptAsset::initScriptedObjectWith(pSVar4);
    }
    ScriptedObject::hydrateScriptInputs(this_00);
    puVar22 = (undefined8 *)plVar17[1];
  }
  if (puVar22 != (undefined8 *)0x0) {
    uVar27 = NEON_cnt(puVar22,1);
    uVar25 = NEON_uaddlv(uVar27,1);
    uVar5 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
    if (uVar5 < 2) {
      puVar6 = (undefined8 *)((ulong)puVar18 & (long)puVar22 - 1U);
    }
    else {
      puVar6 = puVar18;
      if (puVar22 <= puVar18) {
        uVar11 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar18 / (ulong)puVar22;
        }
        puVar6 = (undefined8 *)((long)puVar18 - uVar11 * (long)puVar22);
      }
    }
    plVar13 = *(long **)(*plVar17 + (long)puVar6 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        puVar14 = (undefined8 *)plVar13[1];
        if (puVar14 == puVar18) {
          if ((InterpolatingKeyFrame *)plVar13[2] == param_1) {
            (**(code **)(*(long *)pSVar21 + 8))(pSVar21);
            return pSVar21;
          }
        }
        else {
          if (uVar5 < 2) {
            puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar22 - 1U);
          }
          else if (puVar22 <= puVar14) {
            uVar11 = 0;
            if (puVar22 != (undefined8 *)0x0) {
              uVar11 = (ulong)puVar14 / (ulong)puVar22;
            }
            puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar22);
          }
          if (puVar14 != puVar6) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  plVar13 = (long *)operator_new(0x20);
  plVar13[1] = (long)puVar18;
  fVar26 = *(float *)(plVar17 + 4);
  lVar19 = plVar17[3];
  *plVar13 = 0;
  plVar13[2] = (long)param_1;
  plVar13[3] = (long)pSVar21;
  if ((puVar22 == (undefined8 *)0x0) || (fVar26 * (float)puVar22 < (float)(lVar19 + 1))) {
    if (puVar22 < (undefined8 *)0x3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)(((ulong)puVar22 & (long)puVar22 - 1U) != 0);
    }
    puVar6 = (undefined8 *)(uVar5 | (long)puVar22 << 1);
    puVar14 = (undefined8 *)(long)((float)(lVar19 + 1) / fVar26);
    if (puVar6 <= puVar14) {
      puVar6 = puVar14;
    }
    if ((long)puVar6 - 1U == 0) {
      puVar6 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar6 & (long)puVar6 - 1U) != 0) {
      puVar6 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar6);
      puVar22 = (undefined8 *)plVar17[1];
    }
    if (puVar22 < puVar6) {
LAB_0034511c:
      if ((ulong)puVar6 >> 0x3d != 0) {
LAB_003453a4:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar3 = operator_new((long)puVar6 << 3);
      pvVar9 = (void *)*plVar17;
      *plVar17 = (long)pvVar3;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      puVar22 = (undefined8 *)0x0;
      plVar17[1] = (long)puVar6;
      do {
        *(undefined8 *)(*plVar17 + (long)puVar22 * 8) = 0;
        puVar22 = (undefined8 *)((long)puVar22 + 1);
      } while (puVar6 != puVar22);
      plVar10 = (long *)plVar17[2];
      if (plVar10 != (long *)0x0) {
        puVar22 = (undefined8 *)plVar10[1];
        uVar27 = NEON_cnt(puVar6,1);
        uVar25 = NEON_uaddlv(uVar27,1);
        uVar5 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25) & 0xffffffff;
        if (uVar5 < 2) {
          puVar22 = (undefined8 *)((ulong)puVar22 & (long)puVar6 - 1U);
        }
        else if (puVar6 <= puVar22) {
          uVar11 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar11 = (ulong)puVar22 / (ulong)puVar6;
          }
          puVar22 = (undefined8 *)((long)puVar22 - uVar11 * (long)puVar6);
        }
        *(long **)(*plVar17 + (long)puVar22 * 8) = plVar17 + 2;
        plVar20 = (long *)*plVar10;
        if (plVar20 != (long *)0x0) {
          do {
            puVar14 = (undefined8 *)plVar20[1];
            if (uVar5 < 2) {
              puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar6 - 1U);
            }
            else if (puVar6 <= puVar14) {
              uVar11 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                uVar11 = (ulong)puVar14 / (ulong)puVar6;
              }
              puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar6);
            }
            if (puVar14 != puVar22) {
              if (*(long *)(*plVar17 + (long)puVar14 * 8) == 0) {
                *(long **)(*plVar17 + (long)puVar14 * 8) = plVar10;
                puVar22 = puVar14;
              }
              else {
                *plVar10 = *plVar20;
                *plVar20 = **(long **)(*plVar17 + (long)puVar14 * 8);
                **(undefined8 **)(*plVar17 + (long)puVar14 * 8) = plVar20;
                plVar20 = plVar10;
              }
            }
            plVar10 = plVar20;
            plVar20 = (long *)*plVar10;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    else if (puVar6 < puVar22) {
      puVar14 = (undefined8 *)(long)((float)(ulong)plVar17[3] / *(float *)(plVar17 + 4));
      if (puVar22 < (undefined8 *)0x3) {
LAB_003452ac:
        puVar14 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar14);
      }
      else {
        uVar27 = NEON_cnt(puVar22,1);
        uVar25 = NEON_uaddlv(uVar27,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar25)) goto LAB_003452ac;
        if ((undefined8 *)0x1 < puVar14) {
          puVar14 = (undefined8 *)(1L << (-LZCOUNT((long)puVar14 - 1) & 0x3fU));
        }
      }
      if (puVar6 <= puVar14) {
        puVar6 = puVar14;
      }
      if (puVar6 < puVar22) {
        if (puVar6 != (undefined8 *)0x0) goto LAB_0034511c;
        pvVar3 = (void *)*plVar17;
        *plVar17 = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        plVar17[1] = 0;
      }
    }
    puVar22 = (undefined8 *)plVar17[1];
    if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
      puVar6 = (undefined8 *)((long)puVar22 - 1U & (ulong)puVar18);
    }
    else {
      puVar6 = puVar18;
      if (puVar22 <= puVar18) {
        uVar5 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          uVar5 = (ulong)puVar18 / (ulong)puVar22;
        }
        puVar6 = (undefined8 *)((long)puVar18 - uVar5 * (long)puVar22);
      }
    }
  }
  lVar19 = *plVar17;
  plVar10 = *(long **)(lVar19 + (long)puVar6 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar17 + 2;
    lVar23 = *plVar10;
    *plVar13 = lVar23;
    *plVar10 = (long)plVar13;
    *(long **)(lVar19 + (long)puVar6 * 8) = plVar10;
    if (lVar23 == 0) goto LAB_00345370;
    puVar6 = *(undefined8 **)(lVar23 + 8);
    if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
      puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar22 - 1U);
    }
    else if (puVar22 <= puVar6) {
      uVar5 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        uVar5 = (ulong)puVar6 / (ulong)puVar22;
      }
      puVar6 = (undefined8 *)((long)puVar6 - uVar5 * (long)puVar22);
    }
    plVar10 = (long *)(*plVar17 + (long)puVar6 * 8);
  }
  else {
    *plVar13 = *plVar10;
  }
  *plVar10 = (long)plVar13;
LAB_00345370:
  plVar17[3] = plVar17[3] + 1;
  return pSVar21;
}


// ===== 003453a8  FUN_003453a8 =====

void FUN_003453a8(void *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1))
  {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  lVar3 = *(long *)((long)param_1 + 8);
  if ((lVar3 != 0) && (iVar1 = FUN_00340fe0(0xffffffff,lVar3), iVar1 == 1)) {
    FUN_003453a8(lVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 00345418  FUN_00345418 =====

void FUN_00345418(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034542c  rive::LinearAnimationInstance::time =====

/* rive::LinearAnimationInstance::time(float) */

void __thiscall rive::LinearAnimationInstance::time(LinearAnimationInstance *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (*(float *)(this + 0x40) == param_1) {
    return;
  }
  fVar2 = *(float *)(this + 0x48);
  lVar1 = *(long *)(this + 0x38);
  *(float *)(this + 0x40) = param_1;
  if (*(char *)(lVar1 + 0x40) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x38));
  }
  uVar4 = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  fVar5 = (float)NEON_ucvtf(uVar4);
  fVar3 = param_1 - fVar3 * fVar5;
  *(float *)(this + 0x48) = fVar3;
  *(float *)(this + 0x4c) = fVar3 - (fVar2 - *(float *)(this + 0x4c));
  return;
}


// ===== 00345488  rive::LinearAnimationInstance::reset =====

/* rive::LinearAnimationInstance::reset(float) */

void __thiscall rive::LinearAnimationInstance::reset(LinearAnimationInstance *this,float param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(this + 0x38);
  fVar3 = *(float *)(lVar2 + 0x30);
  if (param_1 < 0.0 == NAN(param_1)) {
    if (fVar3 < 0.0 != NAN(fVar3)) goto LAB_003454c4;
  }
  else if (fVar3 < 0.0 == NAN(fVar3)) {
LAB_003454c4:
    puVar1 = (undefined4 *)(lVar2 + 0x2c);
    if (*(char *)(lVar2 + 0x40) != '\0') {
      puVar1 = (undefined4 *)(lVar2 + 0x3c);
    }
    fVar3 = (float)NEON_ucvtf(*puVar1);
    goto LAB_003454dc;
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x38));
  fVar3 = 0.0;
  if (*(char *)(lVar2 + 0x40) != '\0') {
    fVar3 = fVar4;
  }
LAB_003454dc:
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x28));
  *(float *)(this + 0x40) = fVar3 / fVar4;
  return;
}


// ===== 003454f0  rive::LinearAnimationInstance::fps =====

/* rive::LinearAnimationInstance::fps() const */

undefined4 __thiscall rive::LinearAnimationInstance::fps(LinearAnimationInstance *this)

{
  return *(undefined4 *)(*(long *)(this + 0x38) + 0x28);
}


// ===== 003454fc  rive::LinearAnimationInstance::duration =====

/* rive::LinearAnimationInstance::duration() const */

undefined4 __thiscall rive::LinearAnimationInstance::duration(LinearAnimationInstance *this)

{
  return *(undefined4 *)(*(long *)(this + 0x38) + 0x2c);
}


// ===== 00345508  rive::LinearAnimationInstance::speed =====

/* rive::LinearAnimationInstance::speed() const */

undefined4 __thiscall rive::LinearAnimationInstance::speed(LinearAnimationInstance *this)

{
  return *(undefined4 *)(*(long *)(this + 0x38) + 0x30);
}


// ===== 00345514  rive::LinearAnimationInstance::startTime =====

/* rive::LinearAnimationInstance::startTime() const */

float __thiscall rive::LinearAnimationInstance::startTime(LinearAnimationInstance *this)

{
  undefined4 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(this + 0x38);
  if (*(float *)(lVar2 + 0x30) < 0.0 == NAN(*(float *)(lVar2 + 0x30))) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x38));
    fVar3 = 0.0;
    if (*(char *)(lVar2 + 0x40) != '\0') {
      fVar3 = fVar4;
    }
  }
  else {
    puVar1 = (undefined4 *)(lVar2 + 0x2c);
    if (*(char *)(lVar2 + 0x40) != '\0') {
      puVar1 = (undefined4 *)(lVar2 + 0x3c);
    }
    fVar3 = (float)NEON_ucvtf(*puVar1);
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x28));
  return fVar3 / fVar4;
}


// ===== 00345568  rive::LinearAnimationInstance::loopValue =====

/* rive::LinearAnimationInstance::loopValue() const */

int __thiscall rive::LinearAnimationInstance::loopValue(LinearAnimationInstance *this)

{
  if (*(int *)(this + 0x5c) != -1) {
    return *(int *)(this + 0x5c);
  }
  return *(int *)(*(long *)(this + 0x38) + 0x34);
}


// ===== 00345588  rive::LinearAnimationInstance::loopValue =====

/* rive::LinearAnimationInstance::loopValue(int) */

void __thiscall rive::LinearAnimationInstance::loopValue(LinearAnimationInstance *this,int param_1)

{
  if ((*(int *)(this + 0x5c) != param_1) &&
     ((*(int *)(this + 0x5c) != -1 || (*(int *)(*(long *)(this + 0x38) + 0x34) != param_1)))) {
    *(int *)(this + 0x5c) = param_1;
  }
  return;
}


// ===== 003455b4  rive::SMIInput::SMIInput =====

/* rive::SMIInput::SMIInput(rive::StateMachineInput const*, rive::StateMachineInstance*) */

void __thiscall
rive::SMIInput::SMIInput(SMIInput *this,StateMachineInput *param_1,StateMachineInstance *param_2)

{
  *(StateMachineInput **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_00652690;
  *(StateMachineInstance **)(this + 8) = param_2;
  return;
}


// ===== 003455c8  FUN_003455c8 =====

void FUN_003455c8(void)

{
  return;
}


// ===== 003455cc  FUN_003455cc =====

void FUN_003455cc(void)

{
  return;
}


// ===== 003455d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003455d4  rive::SMIInput::inputCoreType =====

/* rive::SMIInput::inputCoreType() const */

void __thiscall rive::SMIInput::inputCoreType(SMIInput *this)

{
                    /* WARNING: Could not recover jumptable at 0x003455e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x10))();
  return;
}


// ===== 003455e4  rive::SMIInput::name =====

/* rive::SMIInput::name() const */

long __thiscall rive::SMIInput::name(SMIInput *this)

{
  return *(long *)(this + 0x10) + 0x10;
}


// ===== 003455f0  rive::SMIInput::valueChanged =====

/* rive::SMIInput::valueChanged() */

void __thiscall rive::SMIInput::valueChanged(SMIInput *this)

{
  *(undefined1 *)(*(long *)(this + 8) + 0x128) = 1;
  return;
}


// ===== 00345600  rive::SMIBool::SMIBool =====

/* rive::SMIBool::SMIBool(rive::StateMachineBool const*, rive::StateMachineInstance*) */

void __thiscall
rive::SMIBool::SMIBool(SMIBool *this,StateMachineBool *param_1,StateMachineInstance *param_2)

{
  SMIBool SVar1;
  
  SVar1 = *(SMIBool *)(param_1 + 0x28);
  *(StateMachineBool **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_006526b8;
  *(StateMachineInstance **)(this + 8) = param_2;
  this[0x18] = SVar1;
  return;
}


// ===== 0034561c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00345620  rive::SMIBool::value =====

/* rive::SMIBool::value(bool) */

void __thiscall rive::SMIBool::value(SMIBool *this,bool param_1)

{
  if (this[0x18] != (SMIBool)param_1) {
    this[0x18] = (SMIBool)param_1;
    *(undefined1 *)(*(long *)(this + 8) + 0x128) = 1;
  }
  return;
}


// ===== 00345644  rive::SMINumber::SMINumber =====

/* rive::SMINumber::SMINumber(rive::StateMachineNumber const*, rive::StateMachineInstance*) */

void __thiscall
rive::SMINumber::SMINumber
          (SMINumber *this,StateMachineNumber *param_1,StateMachineInstance *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(StateMachineNumber **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_006526e0;
  *(StateMachineInstance **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


// ===== 00345660  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00345664  rive::SMINumber::value =====

/* rive::SMINumber::value(float) */

void __thiscall rive::SMINumber::value(SMINumber *this,float param_1)

{
  if (*(float *)(this + 0x18) == param_1) {
    return;
  }
  *(float *)(this + 0x18) = param_1;
  *(undefined1 *)(*(long *)(this + 8) + 0x128) = 1;
  return;
}


// ===== 00345688  rive::SMITrigger::SMITrigger =====

/* rive::SMITrigger::SMITrigger(rive::StateMachineTrigger const*, rive::StateMachineInstance*) */

void __thiscall
rive::SMITrigger::SMITrigger
          (SMITrigger *this,StateMachineTrigger *param_1,StateMachineInstance *param_2)

{
  *(StateMachineTrigger **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_FUN_00652708;
  *(StateMachineInstance **)(this + 8) = param_2;
  this[0x30] = (SMITrigger)0x0;
  return;
}


// ===== 003456a4  FUN_003456a4 =====

void FUN_003456a4(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}


// ===== 003456b4  FUN_003456b4 =====

void FUN_003456b4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 003456cc  FUN_003456cc =====

void FUN_003456cc(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00345700  rive::SMITrigger::fire =====

/* rive::SMITrigger::fire() */

void __thiscall rive::SMITrigger::fire(SMITrigger *this)

{
  if (this[0x30] != (SMITrigger)0x0) {
    return;
  }
  this[0x30] = (SMITrigger)0x1;
  *(undefined1 *)(*(long *)(this + 8) + 0x128) = 1;
  return;
}


// ===== 00345720  rive::ListenerViewModelPropertyBinding::ListenerViewModelPropertyBinding =====

/* rive::ListenerViewModelPropertyBinding::ListenerViewModelPropertyBinding(rive::ListenerViewModel*,
   rive::ViewModelInstanceValue*) */

void __thiscall
rive::ListenerViewModelPropertyBinding::ListenerViewModelPropertyBinding
          (ListenerViewModelPropertyBinding *this,ListenerViewModel *param_1,
          ViewModelInstanceValue *param_2)

{
  *(undefined **)this = PTR_vtable_0067ceb0 + 0x10;
  *(ListenerViewModel **)(this + 8) = param_1;
  if (param_2 != (ViewModelInstanceValue *)0x0) {
    FUN_00340fb0(1,param_2 + 0x8c);
  }
  *(ViewModelInstanceValue **)(this + 0x10) = param_2;
  ViewModelInstanceValue::addDependent(param_2,(ViewModelValueDependent *)this);
  return;
}


// ===== 0034576c  rive::ListenerViewModelPropertyBinding::addDirt =====

/* rive::ListenerViewModelPropertyBinding::addDirt(rive::ComponentDirt, bool) */

void rive::ListenerViewModelPropertyBinding::addDirt(long param_1)

{
  ulong uVar1;
  ListenerViewModel *pLVar2;
  long *plVar3;
  
  pLVar2 = *(ListenerViewModel **)(param_1 + 8);
  if (((pLVar2 != (ListenerViewModel *)0x0) &&
      (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) &&
     ((uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0x1f5), (uVar1 & 1) == 0 ||
      ((int)plVar3[0x22] != 0)))) {
    StateMachineInstance::reportListenerViewModel(*(StateMachineInstance **)(pLVar2 + 8),pLVar2);
    return;
  }
  return;
}


// ===== 003457c8  rive::ListenerViewModelPropertyBinding::relinkDataBind =====

/* rive::ListenerViewModelPropertyBinding::relinkDataBind() */

void rive::ListenerViewModelPropertyBinding::relinkDataBind(void)

{
  return;
}


// ===== 003457cc  rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding =====

/* rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding() */

void __thiscall
rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding
          (ListenerViewModelPropertyBinding *this)

{
  ~ListenerViewModelPropertyBinding(this);
  operator_delete(this);
  return;
}


// ===== 003457f0  rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding =====

/* WARNING: Removing unreachable block (ram,0x003458a4) */
/* rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding() */

void __thiscall
rive::ListenerViewModelPropertyBinding::~ListenerViewModelPropertyBinding
          (ListenerViewModelPropertyBinding *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067ceb0 + 0x10;
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 &&
           (puVar3 = puVar5, (ListenerViewModelPropertyBinding *)*puVar5 != this));
        puVar5 = puVar5 + 1) {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((ListenerViewModelPropertyBinding *)*puVar5 != this) {
          puVar3 = puVar4 + 1;
          *puVar4 = (ListenerViewModelPropertyBinding *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    if (plVar6 != (long *)0x0) {
      iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
      if (iVar1 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      plVar6 = *(long **)(this + 0x10);
      if ((plVar6 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0034591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 8))(plVar6);
        return;
      }
    }
  }
  return;
}


// ===== 00345930  rive::StateMachineInstance::reportListenerViewModel =====

/* rive::StateMachineInstance::reportListenerViewModel(rive::ListenerViewModel*) */

void __thiscall
rive::StateMachineInstance::reportListenerViewModel
          (StateMachineInstance *this,ListenerViewModel *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = *(undefined8 **)(this + 0x1d0);
  if (puVar10 < *(undefined8 **)(this + 0x1d8)) {
    puVar13 = puVar10 + 1;
    *puVar10 = param_1;
    goto LAB_00345a70;
  }
  puVar9 = *(undefined8 **)(this + 0x1c8);
  lVar12 = (long)puVar10 - (long)puVar9 >> 3;
  uVar6 = lVar12 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00345a94();
LAB_00345a90:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(this + 0x1d8) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00345a90;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar12 * 8);
  puVar13 = puVar4 + 1;
  *puVar4 = param_1;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar6 = ((long)puVar10 - (long)puVar9) - 8;
    puVar11 = puVar10;
    if ((0x37 < uVar6) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar8 = puVar10 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + -uVar7;
      puVar10 = puVar4 + -2;
      uVar3 = uVar7;
      do {
        puVar1 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar16;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar7;
      puVar10 = puVar9;
      if (uVar6 == uVar7) goto LAB_00345a5c;
    }
    do {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    } while (puVar11 != puVar9);
    puVar10 = *(undefined8 **)(this + 0x1c8);
  }
LAB_00345a5c:
  *(undefined8 **)(this + 0x1c8) = puVar4;
  *(undefined8 **)(this + 0x1d0) = puVar13;
  *(void **)(this + 0x1d8) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_00345a70:
  *(undefined8 **)(this + 0x1d0) = puVar13;
  return;
}


// ===== 00345a94  FUN_00345a94 =====

void FUN_00345a94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00345aa8  rive::ListenerViewModelPropertyBinding::clearDataContext =====

/* WARNING: Removing unreachable block (ram,0x00345b48) */
/* rive::ListenerViewModelPropertyBinding::clearDataContext() */

void __thiscall
rive::ListenerViewModelPropertyBinding::clearDataContext(ListenerViewModelPropertyBinding *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 &&
           (puVar3 = puVar5, (ListenerViewModelPropertyBinding *)*puVar5 != this));
        puVar5 = puVar5 + 1) {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((ListenerViewModelPropertyBinding *)*puVar5 != this) {
          puVar3 = puVar4 + 1;
          *puVar4 = (ListenerViewModelPropertyBinding *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00345b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  return;
}


// ===== 00345bb0  rive::ListenerViewModelPropertyBindingListener::ListenerViewModelPropertyBindingListener =====

/* rive::ListenerViewModelPropertyBindingListener::ListenerViewModelPropertyBindingListener(rive::ListenerViewModel*,
   rive::ViewModelInstanceValue*, rive::StateMachineListenerSingle const*) */

void __thiscall
rive::ListenerViewModelPropertyBindingListener::ListenerViewModelPropertyBindingListener
          (ListenerViewModelPropertyBindingListener *this,ListenerViewModel *param_1,
          ViewModelInstanceValue *param_2,StateMachineListenerSingle *param_3)

{
  *(undefined **)this = PTR_vtable_0067ceb0 + 0x10;
  *(ListenerViewModel **)(this + 8) = param_1;
  if (param_2 != (ViewModelInstanceValue *)0x0) {
    FUN_00340fb0(1,param_2 + 0x8c);
  }
  *(ViewModelInstanceValue **)(this + 0x10) = param_2;
  ViewModelInstanceValue::addDependent(param_2,(ViewModelValueDependent *)this);
  *(undefined **)this = PTR_vtable_0067ceb8 + 0x10;
  *(StateMachineListenerSingle **)(this + 0x18) = param_3;
  return;
}


// ===== 00345c20  rive::ListenerViewModelPropertyBindingListener::relinkDataBind =====

/* WARNING: Removing unreachable block (ram,0x00345cec) */
/* rive::ListenerViewModelPropertyBindingListener::relinkDataBind() */

void __thiscall
rive::ListenerViewModelPropertyBindingListener::relinkDataBind
          (ListenerViewModelPropertyBindingListener *this)

{
  int iVar1;
  ViewModelInstanceValue *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ViewModelInstanceValue *pVVar7;
  
  if (*(DataContext **)(*(long *)(this + 8) + 0x18) != (DataContext *)0x0) {
    this_00 = (ViewModelInstanceValue *)
              DataContext::getViewModelProperty
                        (*(DataContext **)(*(long *)(this + 8) + 0x18),
                         *(DataBindPath **)(*(long *)(this + 0x18) + 0x68));
    pVVar7 = *(ViewModelInstanceValue **)(this + 0x10);
    if (this_00 != pVVar7) {
      if (pVVar7 != (ViewModelInstanceValue *)0x0) {
        puVar2 = *(undefined8 **)(pVVar7 + 0xf0);
        puVar5 = *(undefined8 **)(pVVar7 + 0xe8);
        puVar3 = puVar5;
        for (; (puVar5 != puVar2 &&
               (puVar3 = puVar5, (ListenerViewModelPropertyBindingListener *)*puVar5 != this));
            puVar5 = puVar5 + 1) {
          puVar3 = puVar2;
        }
        if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
          do {
            puVar3 = puVar4;
            if ((ListenerViewModelPropertyBindingListener *)*puVar5 != this) {
              puVar3 = puVar4 + 1;
              *puVar4 = (ListenerViewModelPropertyBindingListener *)*puVar5;
            }
            puVar5 = puVar5 + 1;
            puVar4 = puVar3;
          } while (puVar5 != puVar2);
          puVar2 = *(undefined8 **)(pVVar7 + 0xf0);
        }
        if (puVar3 != puVar2) {
          *(undefined8 **)(pVVar7 + 0xf0) = puVar3;
        }
        plVar6 = *(long **)(this + 0x10);
        *(undefined8 *)(this + 0x10) = 0;
        if ((plVar6 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
      if (this_00 != (ViewModelInstanceValue *)0x0) {
        FUN_00340fb0(1,this_00 + 0x8c);
        plVar6 = *(long **)(this + 0x10);
        *(ViewModelInstanceValue **)(this + 0x10) = this_00;
        if ((plVar6 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        ViewModelInstanceValue::addDependent(this_00,(ViewModelValueDependent *)this);
        return;
      }
    }
  }
  return;
}


// ===== 00345da0  FUN_00345da0 =====

/* WARNING: Removing unreachable block (ram,0x00345e54) */

void FUN_00345da0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  *param_1 = (long)(PTR_vtable_0067ceb0 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar6 != (long *)0x0) {
      iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
      if (iVar1 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      plVar6 = (long *)param_1[2];
      if ((plVar6 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00345ed8  rive::ListenerViewModelPropertyBindingInput::ListenerViewModelPropertyBindingInput =====

/* rive::ListenerViewModelPropertyBindingInput::ListenerViewModelPropertyBindingInput(rive::ListenerViewModel*,
   rive::ViewModelInstanceValue*, rive::ListenerInputTypeViewModel const*) */

void __thiscall
rive::ListenerViewModelPropertyBindingInput::ListenerViewModelPropertyBindingInput
          (ListenerViewModelPropertyBindingInput *this,ListenerViewModel *param_1,
          ViewModelInstanceValue *param_2,ListenerInputTypeViewModel *param_3)

{
  *(undefined **)this = PTR_vtable_0067ceb0 + 0x10;
  *(ListenerViewModel **)(this + 8) = param_1;
  if (param_2 != (ViewModelInstanceValue *)0x0) {
    FUN_00340fb0(1,param_2 + 0x8c);
  }
  *(ViewModelInstanceValue **)(this + 0x10) = param_2;
  ViewModelInstanceValue::addDependent(param_2,(ViewModelValueDependent *)this);
  *(undefined **)this = PTR_vtable_0067cec0 + 0x10;
  *(ListenerInputTypeViewModel **)(this + 0x18) = param_3;
  return;
}


// ===== 00345f48  rive::ListenerViewModelPropertyBindingInput::relinkDataBind =====

/* WARNING: Removing unreachable block (ram,0x00346014) */
/* rive::ListenerViewModelPropertyBindingInput::relinkDataBind() */

void __thiscall
rive::ListenerViewModelPropertyBindingInput::relinkDataBind
          (ListenerViewModelPropertyBindingInput *this)

{
  int iVar1;
  ViewModelInstanceValue *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ViewModelInstanceValue *pVVar7;
  
  if (*(DataContext **)(*(long *)(this + 8) + 0x18) != (DataContext *)0x0) {
    this_00 = (ViewModelInstanceValue *)
              DataContext::getViewModelProperty
                        (*(DataContext **)(*(long *)(this + 8) + 0x18),
                         *(DataBindPath **)(*(long *)(this + 0x18) + 0x10));
    pVVar7 = *(ViewModelInstanceValue **)(this + 0x10);
    if (this_00 != pVVar7) {
      if (pVVar7 != (ViewModelInstanceValue *)0x0) {
        puVar2 = *(undefined8 **)(pVVar7 + 0xf0);
        puVar5 = *(undefined8 **)(pVVar7 + 0xe8);
        puVar3 = puVar5;
        for (; (puVar5 != puVar2 &&
               (puVar3 = puVar5, (ListenerViewModelPropertyBindingInput *)*puVar5 != this));
            puVar5 = puVar5 + 1) {
          puVar3 = puVar2;
        }
        if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
          do {
            puVar3 = puVar4;
            if ((ListenerViewModelPropertyBindingInput *)*puVar5 != this) {
              puVar3 = puVar4 + 1;
              *puVar4 = (ListenerViewModelPropertyBindingInput *)*puVar5;
            }
            puVar5 = puVar5 + 1;
            puVar4 = puVar3;
          } while (puVar5 != puVar2);
          puVar2 = *(undefined8 **)(pVVar7 + 0xf0);
        }
        if (puVar3 != puVar2) {
          *(undefined8 **)(pVVar7 + 0xf0) = puVar3;
        }
        plVar6 = *(long **)(this + 0x10);
        *(undefined8 *)(this + 0x10) = 0;
        if ((plVar6 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
      if (this_00 != (ViewModelInstanceValue *)0x0) {
        FUN_00340fb0(1,this_00 + 0x8c);
        plVar6 = *(long **)(this + 0x10);
        *(ViewModelInstanceValue **)(this + 0x10) = this_00;
        if ((plVar6 != (long *)0x0) &&
           (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        ViewModelInstanceValue::addDependent(this_00,(ViewModelValueDependent *)this);
        return;
      }
    }
  }
  return;
}


// ===== 003460c8  FUN_003460c8 =====

/* WARNING: Removing unreachable block (ram,0x0034617c) */

void FUN_003460c8(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  *param_1 = (long)(PTR_vtable_0067ceb0 + 0x10);
  if (lVar7 != 0) {
    puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    puVar5 = *(undefined8 **)(lVar7 + 0xe8);
    puVar3 = puVar5;
    for (; (puVar5 != puVar2 && (puVar3 = puVar5, (long *)*puVar5 != param_1)); puVar5 = puVar5 + 1)
    {
      puVar3 = puVar2;
    }
    if ((puVar3 != puVar2) && (puVar5 = puVar3 + 1, puVar4 = puVar3, puVar5 != puVar2)) {
      do {
        puVar3 = puVar4;
        if ((long *)*puVar5 != param_1) {
          puVar3 = puVar4 + 1;
          *puVar4 = (long *)*puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar3;
      } while (puVar5 != puVar2);
      puVar2 = *(undefined8 **)(lVar7 + 0xf0);
    }
    if (puVar3 != puVar2) {
      *(undefined8 **)(lVar7 + 0xf0) = puVar3;
    }
    plVar6 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar6 != (long *)0x0) {
      iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c);
      if (iVar1 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      plVar6 = (long *)param_1[2];
      if ((plVar6 != (long *)0x0) &&
         (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar6 + 0x8c), iVar1 == 1)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 00346200  rive::ListenerViewModel::~ListenerViewModel =====

/* rive::ListenerViewModel::~ListenerViewModel() */

void __thiscall rive::ListenerViewModel::~ListenerViewModel(ListenerViewModel *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x20);
  plVar4 = *(long **)(this + 0x28);
  *(undefined **)this = PTR_vtable_0067cec8 + 0x10;
  if (plVar4 == plVar3) {
    *(long **)(this + 0x28) = plVar3;
  }
  else {
    do {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    } while (plVar4 != plVar3);
    plVar4 = *(long **)(this + 0x20);
    *(long **)(this + 0x28) = plVar3;
  }
  if (plVar4 == (long *)0x0) {
    lVar1 = *(long *)(this + 0x18);
  }
  else {
    if (plVar3 != plVar4) {
      do {
        plVar3 = plVar3 + -1;
        plVar2 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      } while (plVar3 != plVar4);
      plVar3 = *(long **)(this + 0x20);
    }
    *(long **)(this + 0x28) = plVar4;
    operator_delete(plVar3);
    lVar1 = *(long *)(this + 0x18);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_003462d8();
  return;
}


// ===== 003462d8  FUN_003462d8 =====

void FUN_003462d8(void *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = FUN_00340fe0(0xffffffff,param_1);
  if (iVar1 == 1) {
    plVar2 = *(long **)((long)param_1 + 0x10);
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = FUN_00340fe0(0xffffffff,(long)plVar2 + 0xa4), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (*(long *)((long)param_1 + 8) != 0) {
      FUN_003462d8();
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00346350  rive::ListenerViewModel::~ListenerViewModel =====

/* rive::ListenerViewModel::~ListenerViewModel() */

void __thiscall rive::ListenerViewModel::~ListenerViewModel(ListenerViewModel *this)

{
  ~ListenerViewModel(this);
  operator_delete(this);
  return;
}


// ===== 00346374  rive::StateMachineInstance::updateListeners =====

/* rive::StateMachineInstance::updateListeners(rive::Vec2D, rive::ListenerType, int, float) */

undefined4
rive::StateMachineInstance::updateListeners
          (float param_1,float param_2,undefined4 param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  long lVar8;
  ListenerGroup *this;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined8 *puVar10;
  
  lVar8 = *(long *)(param_4 + 0x10);
  if (*(char *)(lVar8 + 0xbe9) != '\0') {
    param_1 = param_1 - *(float *)(lVar8 + 0x984) * *(float *)(lVar8 + 0x200);
    param_2 = param_2 - *(float *)(lVar8 + 0x988) * *(float *)(lVar8 + 0x204);
  }
  puVar9 = *(undefined8 **)(param_4 + 0x178);
  for (puVar11 = *(undefined8 **)(param_4 + 0x170); puVar11 != puVar9; puVar11 = puVar11 + 1) {
    this = (ListenerGroup *)*puVar11;
    puVar6 = (undefined1 *)ListenerGroup::pointerData(this,param_6);
    iVar1 = *(int *)(puVar6 + 4);
    if (iVar1 != 3) {
      uVar2 = *puVar6;
      this[8] = (ListenerGroup)0x0;
      *puVar6 = 0;
      puVar6[1] = uVar2;
      if (iVar1 == 2) {
        *(undefined4 *)(puVar6 + 4) = 0;
      }
    }
  }
  puVar11 = *(undefined8 **)(param_4 + 0x160);
  puVar9 = *(undefined8 **)(param_4 + 0x158);
  if (*(undefined8 **)(param_4 + 0x158) != puVar11) {
    do {
      puVar10 = puVar9 + 1;
      (**(code **)(*(long *)*puVar9 + 0x18))(param_1,param_2,(long *)*puVar9,param_5,param_6);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
    puVar11 = *(undefined8 **)(param_4 + 0x158);
    puVar9 = *(undefined8 **)(param_4 + 0x160);
    if (puVar11 != puVar9) {
      bVar4 = false;
      bVar3 = false;
      do {
        cVar5 = (**(code **)(*(long *)*puVar11 + 0x10))
                          (param_1,param_2,param_3,(long *)*puVar11,param_5,bVar3 ^ 1,param_6);
        if (cVar5 != '\0') {
          if (cVar5 == '\x02') {
            bVar3 = true;
          }
          bVar4 = true;
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar9);
      uVar7 = 1;
      if (bVar3) {
        uVar7 = 2;
      }
      if (!bVar4) {
        uVar7 = 0;
      }
      goto joined_r0x003464d0;
    }
  }
  uVar7 = 0;
joined_r0x003464d0:
  if (param_5 == 1) {
    puVar9 = *(undefined8 **)(param_4 + 0x178);
    for (puVar11 = *(undefined8 **)(param_4 + 0x170); puVar11 != puVar9; puVar11 = puVar11 + 1) {
      ListenerGroup::releaseEvent((ListenerGroup *)*puVar11,param_6);
    }
  }
  return uVar7;
}


// ===== 00346538  rive::StateMachineInstance::hitTest =====

/* rive::StateMachineInstance::hitTest(rive::Vec2D) const */

uint rive::StateMachineInstance::hitTest(float param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  if (*(char *)(lVar4 + 0xbe9) != '\0') {
    param_1 = param_1 - *(float *)(lVar4 + 0x984) * *(float *)(lVar4 + 0x200);
    param_2 = param_2 - *(float *)(lVar4 + 0x988) * *(float *)(lVar4 + 0x204);
  }
  puVar1 = *(undefined8 **)(param_3 + 0x158);
  puVar2 = *(undefined8 **)(param_3 + 0x160);
  if (puVar1 == puVar2) {
    uVar3 = 0;
  }
  else {
    do {
      puVar5 = puVar1 + 1;
      uVar3 = (**(code **)(*(long *)*puVar1 + 0x20))(param_1,param_2);
      if ((uVar3 & 1) != 0) break;
      puVar1 = puVar5;
    } while (puVar5 != puVar2);
  }
  return uVar3 & 1;
}


// ===== 003465d0  rive::StateMachineInstance::pointerMove =====

/* rive::StateMachineInstance::pointerMove(rive::Vec2D, float, int) */

void rive::StateMachineInstance::pointerMove(undefined8 param_1,undefined4 param_2)

{
  updateListeners(param_1,4,param_2);
  return;
}


// ===== 003465dc  rive::StateMachineInstance::pointerDown =====

/* rive::StateMachineInstance::pointerDown(rive::Vec2D, int) */

void rive::StateMachineInstance::pointerDown
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined4 param_4)

{
  updateListeners(param_1,param_2,0,param_3,2,param_4);
  return;
}


// ===== 003465ec  rive::StateMachineInstance::pointerUp =====

/* rive::StateMachineInstance::pointerUp(rive::Vec2D, int) */

void rive::StateMachineInstance::pointerUp
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined4 param_4)

{
  updateListeners(param_1,param_2,0,param_3,3,param_4);
  return;
}


// ===== 003465fc  rive::StateMachineInstance::pointerExit =====

/* rive::StateMachineInstance::pointerExit(rive::Vec2D, int) */

void rive::StateMachineInstance::pointerExit
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined4 param_4)

{
  updateListeners(param_1,param_2,0,param_3,1,param_4);
  return;
}


// ===== 0034660c  rive::StateMachineInstance::dragStart =====

/* rive::StateMachineInstance::dragStart(rive::Vec2D, float, bool, int) */

void __thiscall
rive::StateMachineInstance::dragStart
          (undefined4 param_1,undefined4 param_2,StateMachineInstance *this,ulong param_4,
          undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_4 & 1) != 0) {
    puVar1 = *(undefined8 **)(this + 0x160);
    for (puVar2 = *(undefined8 **)(this + 0x158); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_5);
    }
  }
  updateListeners(param_1,param_2,0,this,9,param_5);
  return;
}


// ===== 00346688  rive::StateMachineInstance::disablePointerEvents =====

/* rive::StateMachineInstance::disablePointerEvents(int) */

void __thiscall
rive::StateMachineInstance::disablePointerEvents(StateMachineInstance *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x160);
  for (puVar2 = *(undefined8 **)(this + 0x158); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_1);
  }
  return;
}


// ===== 003466d4  rive::StateMachineInstance::dragEnd =====

/* rive::StateMachineInstance::dragEnd(rive::Vec2D, float, int) */

undefined4
rive::StateMachineInstance::dragEnd
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,undefined4 param_5
          )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_4[0x2c];
  for (puVar3 = (undefined8 *)param_4[0x2b]; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x28))((long *)*puVar3,param_5);
  }
  uVar2 = updateListeners(param_1,param_2,0,param_4,10,param_5);
  (**(code **)(*param_4 + 0x50))(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}


// ===== 00346784  rive::StateMachineInstance::enablePointerEvents =====

/* rive::StateMachineInstance::enablePointerEvents(int) */

void __thiscall
rive::StateMachineInstance::enablePointerEvents(StateMachineInstance *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x160);
  for (puVar2 = *(undefined8 **)(this + 0x158); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_1);
  }
  return;
}


// ===== 003467d0  rive::StateMachineInstance::addToHitLookup =====

/* rive::StateMachineInstance::addToHitLookup(rive::Component*, bool,
   std::__ndk1::unordered_map<rive::Component*, rive::HitDrawable*,
   std::__ndk1::hash<rive::Component*>, std::__ndk1::equal_to<rive::Component*>,
   std::__ndk1::allocator<std::__ndk1::pair<rive::Component* const, rive::HitDrawable*> > >&,
   rive::ListenerGroup*, bool) */

void __thiscall
rive::StateMachineInstance::addToHitLookup
          (StateMachineInstance *this,Component *param_1,bool param_2,unordered_map *param_3,
          ListenerGroup *param_4,bool param_5)

{
  Component *pCVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  long *local_b0;
  undefined1 local_a4 [4];
  ListenerGroup *local_a0;
  Component *pCStack_98;
  undefined1 auStack_90 [32];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar14 = (int)param_1;
  local_a4[0] = param_5;
  local_a0 = param_4;
  pCStack_98 = param_1;
  if (param_2) {
    uVar5 = *(ulong *)(param_3 + 8);
    if (uVar5 != 0) {
      uVar8 = ((ulong)(uint)(iVar14 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar16 = NEON_cnt(uVar5,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar8 = ((ulong)param_1 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar9 < 2) {
        uVar10 = uVar5 - 1 & uVar8;
      }
      else {
        uVar10 = uVar8;
        if (uVar5 <= uVar8) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar8 / uVar5;
          }
          uVar10 = uVar8 - uVar10 * uVar5;
        }
      }
      plVar11 = *(long **)(*(long *)param_3 + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar8) {
            if ((Component *)plVar11[2] == param_1) {
              plVar11 = (long *)plVar11[3];
              goto LAB_00346a98;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar5 - 1;
            }
            else if (uVar5 <= uVar13) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar13 / uVar5;
              }
              uVar13 = uVar13 - uVar2 * uVar5;
            }
            if (uVar13 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    plVar11 = (long *)operator_new(0x48);
    plVar11[1] = (long)param_1;
    plVar11[2] = (long)this;
    *(undefined4 *)(plVar11 + 3) = 0x40000000;
    lVar6 = *(long *)param_1;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[5] = (long)param_1;
    plVar11[6] = 0;
    *(undefined4 *)((long)plVar11 + 0x1c) = 0x100;
    *(bool *)(plVar11 + 4) = param_5;
    uVar5 = (**(code **)(lVar6 + 0x1f0))(param_1);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)((long)plVar11 + 0x1d) = 0;
    }
    *plVar11 = (long)&PTR_FUN_00652940;
    lVar6 = FUN_00346d9c(param_3,param_1,&pCStack_98);
    *(long **)(lVar6 + 0x18) = plVar11;
    puVar12 = *(undefined8 **)(this + 0x160);
    local_b0 = plVar11;
    if (puVar12 < *(undefined8 **)(this + 0x168)) {
      *puVar12 = plVar11;
      *(undefined8 **)(this + 0x160) = puVar12 + 1;
    }
    else {
      uVar16 = FUN_003471d0(this + 0x158,&local_b0);
      *(undefined8 *)(this + 0x160) = uVar16;
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 8))(local_b0);
      }
    }
LAB_00346a98:
    FUN_00347370(plVar11,param_4);
    if (param_5) {
      *(undefined1 *)(plVar11 + 4) = 1;
    }
    goto LAB_00346d5c;
  }
  uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,3);
  if ((uVar5 & 1) == 0) {
    uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x87);
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0xb);
      if ((uVar5 & 1) != 0) {
        plVar11 = (long *)operator_new(0x28);
        *plVar11 = (long)&PTR_FUN_00652a60;
        plVar11[1] = (long)this;
        plVar11[2] = (long)param_3;
        plVar11[3] = (long)&local_a0;
        plVar11[4] = (long)local_a4;
        local_70 = plVar11;
        ContainerComponent::forEachChild((ContainerComponent *)param_1,auStack_90);
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      goto LAB_00346d5c;
    }
    uVar5 = *(ulong *)(param_3 + 8);
    if (uVar5 != 0) {
      uVar8 = ((ulong)(uint)(iVar14 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar16 = NEON_cnt(uVar5,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar8 = ((ulong)param_1 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar9 < 2) {
        uVar10 = uVar8 & uVar5 - 1;
      }
      else {
        uVar10 = uVar8;
        if (uVar5 <= uVar8) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar8 / uVar5;
          }
          uVar10 = uVar8 - uVar10 * uVar5;
        }
      }
      puVar12 = *(undefined8 **)(*(long *)param_3 + uVar10 * 8);
      if ((puVar12 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar12, plVar11 != (long *)0x0)) {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar8) {
            if ((Component *)plVar11[2] == param_1) goto LAB_00346d90;
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar5 - 1;
            }
            else if (uVar5 <= uVar13) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar13 / uVar5;
              }
              uVar13 = uVar13 - uVar2 * uVar5;
            }
            if (uVar13 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    pCVar1 = *(Component **)(param_1 + 0x30);
    if (*(Component **)(param_1 + 0xf0) != (Component *)0x0) {
      pCVar1 = *(Component **)(param_1 + 0xf0);
    }
    Component::addDirt(pCVar1,0x10,1);
    plVar11 = *(long **)(param_1 + 0x30);
    if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0xf0);
    }
    plVar4 = (long *)operator_new(0x48);
    plVar4[1] = (long)param_1;
    plVar4[2] = (long)this;
    *(undefined4 *)(plVar4 + 3) = 0x40000000;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[5] = (long)plVar11;
    plVar4[6] = 0;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0x100;
    *(undefined1 *)(plVar4 + 4) = 0;
    uVar5 = (**(code **)(*plVar11 + 0x1f0))(plVar11);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)((long)plVar4 + 0x1d) = 0;
    }
    ppuVar7 = &PTR_FUN_00652a18;
    param_1[0xc0] = (Component)0x1;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
    if (uVar5 != 0) {
      uVar8 = ((ulong)(uint)(iVar14 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
      uVar16 = NEON_cnt(uVar5,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar8 = ((ulong)param_1 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
      uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
      if (uVar9 < 2) {
        uVar10 = uVar8 & uVar5 - 1;
      }
      else {
        uVar10 = uVar8;
        if (uVar5 <= uVar8) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar8 / uVar5;
          }
          uVar10 = uVar8 - uVar10 * uVar5;
        }
      }
      plVar11 = *(long **)(*(long *)param_3 + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        do {
          uVar13 = plVar11[1];
          if (uVar13 == uVar8) {
            if ((Component *)plVar11[2] == param_1) goto LAB_00346d90;
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar5 - 1;
            }
            else if (uVar5 <= uVar13) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar13 / uVar5;
              }
              uVar13 = uVar13 - uVar2 * uVar5;
            }
            if (uVar13 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    param_1[0x180] = (Component)((byte)param_1[0x180] | 0x20);
    Component::addDirt(param_1,0x10,1);
    plVar4 = (long *)operator_new(0x48);
    plVar4[1] = (long)param_1;
    plVar4[2] = (long)this;
    *(undefined4 *)(plVar4 + 3) = 0x40000000;
    lVar6 = *(long *)param_1;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[5] = (long)param_1;
    plVar4[6] = 0;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0x100;
    *(undefined1 *)(plVar4 + 4) = 0;
    uVar5 = (**(code **)(lVar6 + 0x1f0))(param_1);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)((long)plVar4 + 0x1d) = 0;
    }
    ppuVar7 = &PTR_FUN_006529d0;
  }
  *plVar4 = (long)ppuVar7;
  lVar6 = FUN_00346d9c(param_3,param_1,&pCStack_98);
  *(long **)(lVar6 + 0x18) = plVar4;
  puVar12 = *(undefined8 **)(this + 0x160);
  local_b0 = plVar4;
  if (puVar12 < *(undefined8 **)(this + 0x168)) {
    *puVar12 = plVar4;
    *(undefined8 **)(this + 0x160) = puVar12 + 1;
  }
  else {
    uVar16 = FUN_003471d0(this + 0x158,&local_b0);
    *(undefined8 *)(this + 0x160) = uVar16;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 8))(local_b0);
    }
  }
  goto LAB_00346d50;
LAB_00346d90:
  plVar4 = (long *)plVar11[3];
LAB_00346d50:
  FUN_00347370(plVar4,param_4);
LAB_00346d5c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346d9c  FUN_00346d9c =====

void FUN_00346d9c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_00346f3c:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00347174:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_00347174;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_00346f3c;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_00347154;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_00347154:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 003471d0  FUN_003471d0 =====

long * FUN_003471d0(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_003479dc();
LAB_0034736c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0034736c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_00347344;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_003472ec:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_003472ec;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_00347344:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 00347370  FUN_00347370 =====

void FUN_00347370(long param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  if (puVar10 < *(undefined8 **)(param_1 + 0x40)) {
    puVar12 = puVar10 + 1;
    *puVar10 = param_2;
    goto LAB_0034750c;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x30);
  lVar11 = (long)puVar10 - (long)puVar9 >> 3;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_003479c8();
LAB_0034752c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar3 = (long)*(undefined8 **)(param_1 + 0x40) - (long)puVar9;
  uVar5 = (long)uVar3 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0034752c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  puVar4 = (undefined8 *)((long)pvVar2 + lVar11 * 8);
  puVar12 = puVar4 + 1;
  *puVar4 = param_2;
  if ((long)puVar10 - (long)puVar9 != 0) {
    uVar1 = ((long)puVar10 - (long)puVar9) - 8;
    puVar13 = puVar10;
    if ((0x37 < uVar1) &&
       (0x1f < (ulong)((long)puVar10 + (-((long)puVar10 - (long)puVar9) - (long)pvVar2)))) {
      puVar7 = puVar4 + -2;
      puVar8 = puVar10 + -2;
      uVar1 = (uVar1 >> 3) + 1;
      uVar6 = uVar1 & 0x3ffffffffffffffc;
      puVar13 = puVar10 + -uVar6;
      uVar3 = uVar6;
      do {
        puVar10 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        uVar3 = uVar3 - 4;
        puVar8 = puVar8 + -4;
        puVar7[-1] = *puVar10;
        puVar7[-2] = uVar16;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        puVar7 = puVar7 + -4;
      } while (uVar3 != 0);
      puVar4 = puVar4 + -uVar6;
      puVar10 = puVar9;
      if (uVar1 == uVar6) goto LAB_003474f8;
    }
    do {
      puVar13 = puVar13 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar13;
    } while (puVar13 != puVar9);
    puVar10 = *(undefined8 **)(param_1 + 0x30);
  }
LAB_003474f8:
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(undefined8 **)(param_1 + 0x38) = puVar12;
  *(void **)(param_1 + 0x40) = (void *)((long)pvVar2 + uVar5 * 8);
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_0034750c:
  *(undefined8 **)(param_1 + 0x38) = puVar12;
  return;
}


// ===== 00347530  FUN_00347530 =====

void FUN_00347530(void)

{
  return;
}


// ===== 00347534  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00347538  FUN_00347538 =====

void FUN_00347538(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00652a60;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  return;
}


// ===== 00347578  FUN_00347578 =====

void FUN_00347578(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00652a60;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 00347598  FUN_00347598 =====

void FUN_00347598(void)

{
  return;
}


// ===== 0034759c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003475a0  FUN_003475a0 =====

undefined8 FUN_003475a0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  Component *pCVar2;
  StateMachineInstance *this;
  
  pCVar2 = (Component *)*param_2;
  this = *(StateMachineInstance **)(param_1 + 8);
  bVar1 = (**(code **)(*(long *)pCVar2 + 0x18))(pCVar2,0x199);
  rive::StateMachineInstance::addToHitLookup
            (this,pCVar2,(bool)(bVar1 & 1),*(unordered_map **)(param_1 + 0x10),
             (ListenerGroup *)**(undefined8 **)(param_1 + 0x18),
             *(bool *)*(undefined8 *)(param_1 + 0x20));
  return 0;
}


// ===== 00347604  FUN_00347604 =====

void FUN_00347604(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00652988;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00347628  FUN_00347628 =====

void FUN_00347628(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00652988;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00347668  FUN_00347668 =====

undefined4
FUN_00347668(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5,
            uint param_6,undefined4 param_7)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  bool bVar6;
  long *plVar7;
  
  if (((*(char *)(param_4 + 0x1d) == '\0') ||
      ((param_5 == 2 && (*(char *)(param_4 + 0x1e) != '\0')))) ||
     ((uVar5 = 0, param_5 == 3 && (*(char *)(param_4 + 0x1f) != '\0')))) {
    plVar7 = *(long **)(param_4 + 0x30);
    plVar1 = *(long **)(param_4 + 0x38);
    if (plVar7 == plVar1) {
      bVar6 = false;
    }
    else {
      bVar6 = false;
      do {
        plVar4 = (long *)*plVar7;
        if ((char)plVar4[1] == '\0') {
          cVar2 = (**(code **)(*plVar4 + 0x38))
                            (param_1,param_2,param_3,plVar4,*(undefined8 *)(param_4 + 8),param_7,
                             param_5,param_6 & 1,*(undefined8 *)(param_4 + 0x10));
          bVar6 = (bool)(cVar2 == '\x02' | bVar6);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    uVar5 = 0;
    if ((*(char *)(param_4 + 0x1c) != '\0') && ((param_6 & 1) != 0)) {
      if (*(char *)(param_4 + 0x20) == '\0') {
        uVar3 = (**(code **)(**(long **)(param_4 + 0x28) + 0x1f0))();
        uVar5 = 1;
        if ((uVar3 & 1) != 0 || bVar6) {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 2;
      }
    }
  }
  return uVar5;
}


// ===== 0034779c  FUN_0034779c =====

void FUN_0034779c(long *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)((long)param_1 + 0x1d) == '\0') {
    if (param_2 == 1) {
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
      return;
    }
  }
  else if ((param_2 != 2) || (*(char *)((long)param_1 + 0x1e) == '\0')) {
    if (param_2 != 3) {
      return;
    }
    if (*(char *)((long)param_1 + 0x1f) == '\0') {
      return;
    }
  }
  bVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  *(byte *)((long)param_1 + 0x1c) = bVar2 & 1;
  if ((bVar2 & 1) != 0) {
    puVar1 = (undefined8 *)param_1[7];
    for (puVar4 = (undefined8 *)param_1[6]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      puVar3 = (undefined1 *)rive::ListenerGroup::pointerData((ListenerGroup *)*puVar4,param_3);
      *puVar3 = 1;
    }
  }
  return;
}


// ===== 00347844  FUN_00347844 =====

uint FUN_00347844(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  uVar2 = (**(code **)(**(long **)(param_3 + 8) + 0x88))(*(long **)(param_3 + 8),&local_30,1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003478a8  FUN_003478a8 =====

void FUN_003478a8(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_2);
  }
  return;
}


// ===== 003478f4  FUN_003478f4 =====

void FUN_003478f4(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_2);
  }
  return;
}


// ===== 00347940  FUN_00347940 =====

void FUN_00347940(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00652988;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00347980  FUN_00347980 =====

undefined8 FUN_00347980(void)

{
  return 0;
}


// ===== 00347988  FUN_00347988 =====

void FUN_00347988(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00652988;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 003479c8  FUN_003479c8 =====

void FUN_003479c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003479dc  FUN_003479dc =====

void FUN_003479dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003479f0  FUN_003479f0 =====

void FUN_003479f0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00652988;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00347a30  FUN_00347a30 =====

uint FUN_00347a30(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  uVar2 = (**(code **)(**(long **)(param_3 + 8) + 0x88))(*(long **)(param_3 + 8),&local_30,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347a94  rive::StateMachineInstance::StateMachineInstance =====

/* rive::StateMachineInstance::StateMachineInstance(rive::StateMachine const*,
   rive::ArtboardInstance*) */

void __thiscall
rive::StateMachineInstance::StateMachineInstance
          (StateMachineInstance *this,StateMachine *param_1,ArtboardInstance *param_2)

{
  Component *pCVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  uint uVar6;
  ushort uVar5;
  void *pvVar7;
  SMIBool *this_00;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  undefined *puVar11;
  Component *pCVar12;
  TextInputListenerGroup *this_01;
  ScriptedObject *this_02;
  KeyboardListenerGroup *pKVar13;
  long *plVar14;
  StateMachineInstance *pSVar15;
  void *pvVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  ScriptedObject *pSVar20;
  long lVar21;
  StateMachineInstance *pSVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  StateMachineInstance *pSVar27;
  undefined8 *puVar28;
  StateMachineInstance *pSVar29;
  FocusListenerGroup *pFVar30;
  long lVar31;
  StateMachineTrigger *pSVar32;
  StateMachineInstance *pSVar33;
  ListenerGroup *pLVar34;
  FocusListenerGroup *this_03;
  undefined8 *unaff_x21;
  StateMachineInstance *pSVar35;
  SemanticData *pSVar36;
  long lVar37;
  FocusData *pFVar38;
  undefined **__src;
  StateMachineInstance *unaff_x23;
  StateMachineInstance *unaff_x24;
  StateMachineInstance *pSVar39;
  long lVar40;
  undefined8 *puVar41;
  StateMachineInstance *unaff_x26;
  StateMachineInstance *pSVar42;
  long *plVar43;
  undefined2 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 uStack_1d1;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  uint uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  StateMachineInstance *pSStack_190;
  StateMachineInstance *pSStack_180;
  StateMachineInstance *pSStack_178;
  StateMachineInstance *pSStack_170;
  undefined8 *puStack_168;
  FocusListenerGroup *pFStack_160;
  StateMachineInstance *pSStack_158;
  StateMachineInstance *local_150;
  long local_148;
  StateMachineInstance *local_140;
  ArtboardInstance *local_138;
  StateMachineInstance *local_130;
  StateMachineInstance *local_128;
  StateMachineInstance *local_120;
  StateMachineInstance *local_118;
  StateMachine *local_110;
  StateMachineInstance *local_108;
  StateMachineInstance *local_100;
  StateMachineInstance *local_f8;
  StateMachineInstance *local_f0;
  StateMachineInstance *local_e8;
  undefined8 local_e0;
  long *local_d8;
  StateMachineInstance *local_d0;
  StateMachineInstance *local_c8;
  StateMachineInstance *local_b8;
  StateMachineInstance *local_b0;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
  puVar11 = PTR_vtable_0067ced0;
  local_148 = tpidr_el0;
  pSVar42 = this + 0x248;
  local_70 = *(long *)(local_148 + 0x28);
  __src = (undefined **)(this + 0x298);
  local_100 = this + 0x38;
  *(undefined **)local_100 = PTR_vtable_0067ced0 + 0x110;
  local_118 = this + 0x40;
  *(undefined **)local_118 = puVar11 + 0x138;
  *(ArtboardInstance **)(this + 0x10) = param_2;
  *(undefined **)this = puVar11 + 0x10;
  *(undefined **)(this + 8) = puVar11 + 0xe0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  local_108 = this + 0x158;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)local_108 = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x218) = 0x3f800000;
  *(undefined4 *)(this + 0x240) = 0x3f800000;
  *(undefined4 *)(this + 0x268) = 0x3f800000;
  *(undefined4 *)(this + 0x290) = 0x3f800000;
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  local_150 = this + 0x2c8;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd9) = 0;
  *(undefined8 *)(this + 0xd1) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(StateMachine **)(this + 0x120) = param_1;
  this[0x128] = (StateMachineInstance)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)pSVar42 = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *__src = (undefined *)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[0x2c0] = (StateMachineInstance)0x0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)local_150 = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  this_03 = (FocusListenerGroup *)(*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
  pSVar22 = this;
  local_138 = param_2;
  local_110 = param_1;
  local_e8 = this;
  if (this_03 == (FocusListenerGroup *)0x0) {
LAB_00347cd4:
    pSVar33 = *(StateMachineInstance **)(local_110 + 0x28);
    pSVar29 = *(StateMachineInstance **)(local_110 + 0x30);
    pSVar35 = (StateMachineInstance *)((long)pSVar29 - (long)pSVar33 >> 3);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = pSVar35;
    *(StateMachineInstance **)(pSVar22 + 0x148) = pSVar35;
    uVar9 = (long)pSVar35 * 0x68 + 8;
    if (0xfffffffffffffff7 < (ulong)((long)pSVar35 * 0x68) || SUB168(auVar50 * ZEXT816(0x68),8) != 0
       ) {
      uVar9 = 0xffffffffffffffff;
    }
    puVar8 = (undefined8 *)operator_new__(uVar9);
    pSVar15 = local_e8;
    puVar41 = puVar8 + 1;
    *puVar8 = pSVar35;
    if (pSVar29 == pSVar33) {
      *(undefined8 **)(pSVar22 + 0x150) = puVar41;
    }
    else {
      uVar47 = NEON_fmov(0x3f800000,4);
      puVar8 = puVar41;
      do {
        *(undefined8 *)((long)puVar8 + 0x42) = 0;
        *(undefined8 *)((long)puVar8 + 0x3a) = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        *(undefined8 *)((long)puVar8 + 0x4c) = uVar47;
        *(undefined2 *)((long)puVar8 + 0x54) = 0;
        puVar8[0xb] = 0;
        *(undefined4 *)(puVar8 + 0xc) = 0;
        puVar8 = puVar8 + 0xd;
      } while (puVar8 != puVar41 + (long)pSVar35 * 0xd);
      *(undefined8 **)(pSVar22 + 0x150) = puVar41;
      puVar11 = PTR_deterministicMode_0067cef8;
      if (pSVar29 != pSVar33) {
        pSVar35 = (StateMachineInstance *)0x0;
        unaff_x24 = (StateMachineInstance *)0x0;
        do {
          if (unaff_x24 <
              (StateMachineInstance *)
              (*(long *)(local_110 + 0x30) - *(long *)(local_110 + 0x28) >> 3)) {
            pSVar29 = *(StateMachineInstance **)(*(long *)(local_110 + 0x28) + (long)unaff_x24 * 8);
          }
          else {
            pSVar29 = (StateMachineInstance *)0x0;
          }
          lVar40 = *(long *)(pSVar22 + 0x150);
          uVar47 = *(undefined8 *)(pSVar22 + 0x10);
          if (*puVar11 == '\0') {
            uVar6 = std::__ndk1::chrono::steady_clock::now();
          }
          else {
            uVar6 = 1;
          }
          srand(uVar6);
          unaff_x26 = pSVar35 + lVar40;
          *(StateMachineInstance **)unaff_x26 = pSVar15;
          *(undefined8 *)(unaff_x26 + 0x10) = uVar47;
          (**(code **)(**(long **)(pSVar29 + 0x40) + 0x58))
                    (&local_a0,*(long **)(pSVar29 + 0x40),uVar47);
          *(StateMachineInstance **)(unaff_x26 + 8) = pSVar29;
          *(void **)(unaff_x26 + 0x18) = local_a0;
          FUN_0034a530(pSVar35 + lVar40,*(undefined8 *)(pSVar29 + 0x48));
          unaff_x24 = unaff_x24 + 1;
          pSVar35 = pSVar35 + 0x68;
          unaff_x23 = (StateMachineInstance *)puVar11;
          pSVar22 = pSVar15;
        } while (unaff_x24 < *(StateMachineInstance **)(pSVar15 + 0x148));
      }
    }
    if (*(long *)(local_110 + 0x78) - *(long *)(local_110 + 0x70) != 0) {
      local_f0 = (StateMachineInstance *)
                 (*(long *)(local_110 + 0x78) - *(long *)(local_110 + 0x70) >> 3);
      local_130 = pSVar22 + 0x2a8;
      pSVar33 = (StateMachineInstance *)0x0;
      local_f8 = pSVar22 + 0x270;
      local_120 = pSVar22 + 0x208;
      pSVar29 = pSVar42;
      local_128 = pSVar42;
      if (local_f0 < (StateMachineInstance *)0x2) {
        local_f0 = (StateMachineInstance *)0x1;
      }
      do {
        if (pSVar33 < (StateMachineInstance *)
                      (*(long *)(local_110 + 0x78) - *(long *)(local_110 + 0x70) >> 3)) {
          pSVar42 = *(StateMachineInstance **)(*(long *)(local_110 + 0x70) + (long)pSVar33 * 8);
        }
        else {
          pSVar42 = (StateMachineInstance *)0x0;
        }
        unaff_x24 = (StateMachineInstance *)(**(code **)(*(long *)pSVar42 + 0x28))(pSVar42);
        *(undefined8 *)((DataBind *)unaff_x24 + 0x58) = *(undefined8 *)(pSVar42 + 0x58);
        if (*(long **)(pSVar42 + 0x48) != (long *)0x0) {
          uVar47 = (**(code **)(**(long **)(pSVar42 + 0x48) + 0x28))();
          *(undefined8 *)((DataBind *)unaff_x24 + 0x48) = uVar47;
        }
        DataBindContainer::addDataBind((DataBindContainer *)local_118,(DataBind *)unaff_x24);
        uVar9 = (**(code **)(**(long **)(pSVar42 + 0x30) + 0x18))(*(long **)(pSVar42 + 0x30),9);
        plVar43 = *(long **)(pSVar42 + 0x30);
        if ((uVar9 & 1) == 0) {
          *(long **)((DataBind *)unaff_x24 + 0x30) = plVar43;
          uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0x41);
          if ((uVar9 & 1) != 0) {
            puVar8 = (undefined8 *)operator_new(0x10);
            uVar9 = ((ulong)(uint)((int)plVar43 << 3) + 8 ^ (ulong)plVar43 >> 0x20) *
                    -0x622015f714c7d297;
            uVar9 = ((ulong)plVar43 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
            pSVar29 = *(StateMachineInstance **)(pSVar22 + 0x2a0);
            pSVar22 = (StateMachineInstance *)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
            puVar8[1] = 0xffffffff;
            *puVar8 = &PTR_FUN_0065f728;
            if (pSVar29 != (StateMachineInstance *)0x0) {
              uVar47 = NEON_cnt(pSVar29,1);
              uVar44 = NEON_uaddlv(uVar47,1);
              uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
              if (uVar9 < 2) {
                pSVar35 = (StateMachineInstance *)((ulong)pSVar22 & (ulong)(pSVar29 + -1));
              }
              else {
                pSVar35 = pSVar22;
                if (pSVar29 <= pSVar22) {
                  uVar23 = 0;
                  if (pSVar29 != (StateMachineInstance *)0x0) {
                    uVar23 = (ulong)pSVar22 / (ulong)pSVar29;
                  }
                  pSVar35 = pSVar22 + -(uVar23 * (long)pSVar29);
                }
              }
              if ((*(undefined8 **)(*__src + (long)pSVar35 * 8) != (undefined8 *)0x0) &&
                 (unaff_x26 = (StateMachineInstance *)**(undefined8 **)(*__src + (long)pSVar35 * 8),
                 unaff_x26 != (StateMachineInstance *)0x0)) {
                do {
                  pSVar15 = *(StateMachineInstance **)(unaff_x26 + 8);
                  if (pSVar15 == pSVar22) {
                    if (*(long **)(unaff_x26 + 0x10) == plVar43) goto LAB_003487f4;
                  }
                  else {
                    if (uVar9 < 2) {
                      pSVar15 = (StateMachineInstance *)((ulong)pSVar15 & (ulong)(pSVar29 + -1));
                    }
                    else if (pSVar29 <= pSVar15) {
                      uVar23 = 0;
                      if (pSVar29 != (StateMachineInstance *)0x0) {
                        uVar23 = (ulong)pSVar15 / (ulong)pSVar29;
                      }
                      pSVar15 = pSVar15 + -(uVar23 * (long)pSVar29);
                    }
                    if (pSVar15 != pSVar35) break;
                  }
                  unaff_x26 = *(StateMachineInstance **)unaff_x26;
                } while (unaff_x26 != (StateMachineInstance *)0x0);
              }
            }
            unaff_x26 = (StateMachineInstance *)operator_new(0x40);
            *(undefined8 *)unaff_x26 = 0;
            *(StateMachineInstance **)(unaff_x26 + 8) = pSVar22;
            lVar40 = *(long *)(local_e8 + 0x2b0);
            *(long **)(unaff_x26 + 0x10) = plVar43;
            *(undefined8 *)(unaff_x26 + 0x20) = 0;
            *(undefined8 *)(unaff_x26 + 0x18) = 0;
            *(undefined8 *)(unaff_x26 + 0x30) = 0;
            *(undefined8 *)(unaff_x26 + 0x28) = 0;
            fVar46 = *(float *)(local_e8 + 0x2b8);
            *(undefined4 *)(unaff_x26 + 0x38) = 0x3f800000;
            if ((pSVar29 == (StateMachineInstance *)0x0) ||
               (fVar46 * (float)pSVar29 < (float)(lVar40 + 1))) {
              if (pSVar29 < (StateMachineInstance *)0x3) {
                uVar9 = 1;
              }
              else {
                uVar9 = (ulong)(((ulong)pSVar29 & (ulong)(pSVar29 + -1)) != 0);
              }
              pSVar35 = (StateMachineInstance *)(uVar9 | (long)pSVar29 << 1);
              pSVar15 = (StateMachineInstance *)(long)((float)(lVar40 + 1) / fVar46);
              if (pSVar35 <= pSVar15) {
                pSVar35 = pSVar15;
              }
              if (pSVar35 + -1 == (StateMachineInstance *)0x0) {
                pSVar35 = (StateMachineInstance *)0x2;
              }
              else if (((ulong)pSVar35 & (ulong)(pSVar35 + -1)) != 0) {
                pSVar35 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar35);
                pSVar29 = *(StateMachineInstance **)(local_e8 + 0x2a0);
              }
              if (pSVar29 < pSVar35) {
LAB_00348400:
                pSVar29 = pSVar35;
                if ((ulong)pSVar29 >> 0x3d != 0) goto LAB_0034a508;
                puVar11 = (undefined *)operator_new((long)pSVar29 << 3);
                puVar17 = *__src;
                *__src = puVar11;
                if (puVar17 != (undefined *)0x0) {
                  operator_delete(puVar17);
                }
                pSVar35 = (StateMachineInstance *)0x0;
                *(StateMachineInstance **)(local_e8 + 0x2a0) = pSVar29;
                do {
                  *(undefined8 *)(*__src + (long)pSVar35 * 8) = 0;
                  pSVar35 = pSVar35 + 1;
                } while (pSVar29 != pSVar35);
                plVar43 = *(long **)local_130;
                if (plVar43 != (long *)0x0) {
                  pSVar35 = (StateMachineInstance *)plVar43[1];
                  uVar47 = NEON_cnt(pSVar29,1);
                  uVar44 = NEON_uaddlv(uVar47,1);
                  uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
                  if (uVar9 < 2) {
                    pSVar35 = (StateMachineInstance *)((ulong)pSVar35 & (ulong)(pSVar29 + -1));
                  }
                  else if (pSVar29 <= pSVar35) {
                    uVar23 = 0;
                    if (pSVar29 != (StateMachineInstance *)0x0) {
                      uVar23 = (ulong)pSVar35 / (ulong)pSVar29;
                    }
                    pSVar35 = pSVar35 + -(uVar23 * (long)pSVar29);
                  }
                  *(StateMachineInstance **)(*__src + (long)pSVar35 * 8) = local_130;
                  plVar25 = (long *)*plVar43;
                  if (plVar25 != (long *)0x0) {
                    do {
                      pSVar15 = (StateMachineInstance *)plVar25[1];
                      if (uVar9 < 2) {
                        pSVar15 = (StateMachineInstance *)((ulong)pSVar15 & (ulong)(pSVar29 + -1));
                      }
                      else if (pSVar29 <= pSVar15) {
                        uVar23 = 0;
                        if (pSVar29 != (StateMachineInstance *)0x0) {
                          uVar23 = (ulong)pSVar15 / (ulong)pSVar29;
                        }
                        pSVar15 = pSVar15 + -(uVar23 * (long)pSVar29);
                      }
                      if (pSVar15 != pSVar35) {
                        if (*(long *)(*__src + (long)pSVar15 * 8) == 0) {
                          *(long **)(*__src + (long)pSVar15 * 8) = plVar43;
                          pSVar35 = pSVar15;
                        }
                        else {
                          *plVar43 = *plVar25;
                          *plVar25 = **(long **)(*__src + (long)pSVar15 * 8);
                          **(undefined8 **)(*__src + (long)pSVar15 * 8) = plVar25;
                          plVar25 = plVar43;
                        }
                      }
                      plVar43 = plVar25;
                      plVar25 = (long *)*plVar43;
                    } while (plVar25 != (long *)0x0);
                  }
                }
              }
              else if (pSVar35 < pSVar29) {
                pSVar15 = (StateMachineInstance *)
                          (long)((float)*(ulong *)(local_e8 + 0x2b0) / *(float *)(local_e8 + 0x2b8))
                ;
                if (pSVar29 < (StateMachineInstance *)0x3) {
LAB_00348ab8:
                  pSVar15 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar15);
                }
                else {
                  uVar47 = NEON_cnt(pSVar29,1);
                  uVar44 = NEON_uaddlv(uVar47,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44)) goto LAB_00348ab8;
                  if ((StateMachineInstance *)0x1 < pSVar15) {
                    pSVar15 = (StateMachineInstance *)(1L << (-LZCOUNT(pSVar15 + -1) & 0x3fU));
                  }
                }
                if (pSVar35 <= pSVar15) {
                  pSVar35 = pSVar15;
                }
                if (pSVar35 < pSVar29) {
                  if (pSVar35 != (StateMachineInstance *)0x0) goto LAB_00348400;
                  puVar11 = *__src;
                  *__src = (undefined *)0x0;
                  if (puVar11 != (undefined *)0x0) {
                    operator_delete(puVar11);
                  }
                  pSVar29 = (StateMachineInstance *)0x0;
                  *(undefined8 *)(local_e8 + 0x2a0) = 0;
                }
                else {
                  pSVar29 = *(StateMachineInstance **)(local_e8 + 0x2a0);
                }
              }
              if (((ulong)pSVar29 & (ulong)(pSVar29 + -1)) == 0) {
                pSVar35 = (StateMachineInstance *)((ulong)(pSVar29 + -1) & (ulong)pSVar22);
              }
              else {
                pSVar35 = pSVar22;
                if (pSVar29 <= pSVar22) {
                  uVar9 = 0;
                  if (pSVar29 != (StateMachineInstance *)0x0) {
                    uVar9 = (ulong)pSVar22 / (ulong)pSVar29;
                  }
                  pSVar35 = pSVar22 + -(uVar9 * (long)pSVar29);
                }
              }
            }
            puVar11 = *__src;
            puVar41 = *(undefined8 **)(puVar11 + (long)pSVar35 * 8);
            if (puVar41 == (undefined8 *)0x0) {
              uVar47 = *(undefined8 *)local_130;
              *(StateMachineInstance **)local_130 = unaff_x26;
              *(undefined8 *)unaff_x26 = uVar47;
              *(StateMachineInstance **)(puVar11 + (long)pSVar35 * 8) = local_130;
              if (*(long *)unaff_x26 != 0) {
                pSVar35 = *(StateMachineInstance **)(*(long *)unaff_x26 + 8);
                if (((ulong)pSVar29 & (ulong)(pSVar29 + -1)) == 0) {
                  pSVar35 = (StateMachineInstance *)((ulong)pSVar35 & (ulong)(pSVar29 + -1));
                }
                else if (pSVar29 <= pSVar35) {
                  uVar9 = 0;
                  if (pSVar29 != (StateMachineInstance *)0x0) {
                    uVar9 = (ulong)pSVar35 / (ulong)pSVar29;
                  }
                  pSVar35 = pSVar35 + -(uVar9 * (long)pSVar29);
                }
                puVar41 = (undefined8 *)(*__src + (long)pSVar35 * 8);
                goto LAB_003487e4;
              }
            }
            else {
              *(undefined8 *)unaff_x26 = *puVar41;
LAB_003487e4:
              *puVar41 = unaff_x26;
            }
            *(long *)(local_e8 + 0x2b0) = *(long *)(local_e8 + 0x2b0) + 1;
LAB_003487f4:
            unaff_x23 = *(StateMachineInstance **)(unaff_x26 + 0x20);
            uVar6 = *(uint *)(pSVar42 + 0xc);
            pSVar35 = (StateMachineInstance *)(ulong)uVar6;
            if (unaff_x23 != (StateMachineInstance *)0x0) {
              uVar47 = NEON_cnt(unaff_x23,1);
              uVar44 = NEON_uaddlv(uVar47,1);
              uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
              if (uVar9 < 2) {
                pSVar22 = (StateMachineInstance *)(ulong)((int)unaff_x23 - 1U & uVar6);
              }
              else {
                pSVar22 = pSVar35;
                if (unaff_x23 <= pSVar35) {
                  uVar23 = 0;
                  if (unaff_x23 != (StateMachineInstance *)0x0) {
                    uVar23 = (ulong)pSVar35 / (ulong)unaff_x23;
                  }
                  pSVar22 = pSVar35 + -(uVar23 * (long)unaff_x23);
                }
              }
              puVar41 = *(undefined8 **)(*(long *)(unaff_x26 + 0x18) + (long)pSVar22 * 8);
              if ((puVar41 != (undefined8 *)0x0) &&
                 (plVar43 = (long *)*puVar41, plVar43 != (long *)0x0)) {
                do {
                  pSVar42 = (StateMachineInstance *)plVar43[1];
                  if (pSVar42 == pSVar35) {
                    if (*(uint *)(plVar43 + 2) == uVar6) goto LAB_00348bd8;
                  }
                  else {
                    if (uVar9 < 2) {
                      pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(unaff_x23 + -1));
                    }
                    else if (unaff_x23 <= pSVar42) {
                      uVar23 = 0;
                      if (unaff_x23 != (StateMachineInstance *)0x0) {
                        uVar23 = (ulong)pSVar42 / (ulong)unaff_x23;
                      }
                      pSVar42 = pSVar42 + -(uVar23 * (long)unaff_x23);
                    }
                    if (pSVar42 != pSVar22) break;
                  }
                  plVar43 = (long *)*plVar43;
                } while (plVar43 != (long *)0x0);
              }
            }
            plVar43 = (long *)operator_new(0x20);
            *plVar43 = 0;
            plVar43[1] = (long)pSVar35;
            *(uint *)(plVar43 + 2) = uVar6;
            plVar43[3] = 0;
            if ((unaff_x23 == (StateMachineInstance *)0x0) ||
               (*(float *)(unaff_x26 + 0x38) * (float)unaff_x23 <
                (float)(*(long *)(unaff_x26 + 0x30) + 1))) {
              if (unaff_x23 < (StateMachineInstance *)0x3) {
                uVar9 = 1;
              }
              else {
                uVar9 = (ulong)(((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) != 0);
              }
              pSVar42 = (StateMachineInstance *)(uVar9 | (long)unaff_x23 << 1);
              pSVar22 = (StateMachineInstance *)
                        (long)((float)(*(long *)(unaff_x26 + 0x30) + 1) /
                              *(float *)(unaff_x26 + 0x38));
              if (pSVar42 <= pSVar22) {
                pSVar42 = pSVar22;
              }
              if (pSVar42 + -1 == (StateMachineInstance *)0x0) {
                pSVar42 = (StateMachineInstance *)0x2;
              }
              else if (((ulong)pSVar42 & (ulong)(pSVar42 + -1)) != 0) {
                pSVar42 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar42);
                unaff_x23 = *(StateMachineInstance **)(unaff_x26 + 0x20);
              }
              if (unaff_x23 < pSVar42) {
LAB_0034893c:
                if ((ulong)pSVar42 >> 0x3d != 0) goto LAB_0034a508;
                pvVar7 = operator_new((long)pSVar42 << 3);
                pvVar10 = *(void **)(unaff_x26 + 0x18);
                *(void **)(unaff_x26 + 0x18) = pvVar7;
                if (pvVar10 != (void *)0x0) {
                  operator_delete(pvVar10);
                }
                pSVar22 = (StateMachineInstance *)0x0;
                *(StateMachineInstance **)(unaff_x26 + 0x20) = pSVar42;
                do {
                  *(undefined8 *)(*(long *)(unaff_x26 + 0x18) + (long)pSVar22 * 8) = 0;
                  pSVar22 = pSVar22 + 1;
                } while (pSVar42 != pSVar22);
                plVar25 = *(long **)(unaff_x26 + 0x28);
                if (plVar25 != (long *)0x0) {
                  pSVar22 = (StateMachineInstance *)plVar25[1];
                  uVar47 = NEON_cnt(pSVar42,1);
                  uVar44 = NEON_uaddlv(uVar47,1);
                  uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
                  if (uVar9 < 2) {
                    pSVar22 = (StateMachineInstance *)((ulong)pSVar22 & (ulong)(pSVar42 + -1));
                  }
                  else if (pSVar42 <= pSVar22) {
                    uVar23 = 0;
                    if (pSVar42 != (StateMachineInstance *)0x0) {
                      uVar23 = (ulong)pSVar22 / (ulong)pSVar42;
                    }
                    pSVar22 = pSVar22 + -(uVar23 * (long)pSVar42);
                  }
                  *(StateMachineInstance **)(*(long *)(unaff_x26 + 0x18) + (long)pSVar22 * 8) =
                       unaff_x26 + 0x28;
                  plVar26 = (long *)*plVar25;
                  if (plVar26 != (long *)0x0) {
                    do {
                      pSVar29 = (StateMachineInstance *)plVar26[1];
                      if (uVar9 < 2) {
                        pSVar29 = (StateMachineInstance *)((ulong)pSVar29 & (ulong)(pSVar42 + -1));
                      }
                      else if (pSVar42 <= pSVar29) {
                        uVar23 = 0;
                        if (pSVar42 != (StateMachineInstance *)0x0) {
                          uVar23 = (ulong)pSVar29 / (ulong)pSVar42;
                        }
                        pSVar29 = pSVar29 + -(uVar23 * (long)pSVar42);
                      }
                      if (pSVar29 != pSVar22) {
                        if (*(long *)(*(long *)(unaff_x26 + 0x18) + (long)pSVar29 * 8) == 0) {
                          *(long **)(*(long *)(unaff_x26 + 0x18) + (long)pSVar29 * 8) = plVar25;
                          pSVar22 = pSVar29;
                        }
                        else {
                          *plVar25 = *plVar26;
                          *plVar26 = **(long **)(*(long *)(unaff_x26 + 0x18) + (long)pSVar29 * 8);
                          **(undefined8 **)(*(long *)(unaff_x26 + 0x18) + (long)pSVar29 * 8) =
                               plVar26;
                          plVar26 = plVar25;
                        }
                      }
                      plVar25 = plVar26;
                      plVar26 = (long *)*plVar25;
                    } while (plVar26 != (long *)0x0);
                  }
                }
              }
              else if (pSVar42 < unaff_x23) {
                pSVar22 = (StateMachineInstance *)
                          (long)((float)*(ulong *)(unaff_x26 + 0x30) / *(float *)(unaff_x26 + 0x38))
                ;
                if (unaff_x23 < (StateMachineInstance *)0x3) {
LAB_00348afc:
                  pSVar22 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar22);
                }
                else {
                  uVar47 = NEON_cnt(unaff_x23,1);
                  uVar44 = NEON_uaddlv(uVar47,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44)) goto LAB_00348afc;
                  if ((StateMachineInstance *)0x1 < pSVar22) {
                    pSVar22 = (StateMachineInstance *)(1L << (-LZCOUNT(pSVar22 + -1) & 0x3fU));
                  }
                }
                if (pSVar42 <= pSVar22) {
                  pSVar42 = pSVar22;
                }
                if (pSVar42 < unaff_x23) {
                  if (pSVar42 != (StateMachineInstance *)0x0) goto LAB_0034893c;
                  pvVar7 = *(void **)(unaff_x26 + 0x18);
                  *(undefined8 *)(unaff_x26 + 0x18) = 0;
                  if (pvVar7 != (void *)0x0) {
                    operator_delete(pvVar7);
                  }
                  *(undefined8 *)(unaff_x26 + 0x20) = 0;
                }
              }
              unaff_x23 = *(StateMachineInstance **)(unaff_x26 + 0x20);
              if (((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) == 0) {
                pSVar22 = (StateMachineInstance *)(ulong)((int)unaff_x23 - 1U & uVar6);
              }
              else {
                pSVar22 = pSVar35;
                if (unaff_x23 <= pSVar35) {
                  uVar9 = 0;
                  if (unaff_x23 != (StateMachineInstance *)0x0) {
                    uVar9 = (ulong)pSVar35 / (ulong)unaff_x23;
                  }
                  pSVar22 = pSVar35 + -(uVar9 * (long)unaff_x23);
                }
              }
            }
            lVar40 = *(long *)(unaff_x26 + 0x18);
            plVar25 = *(long **)(lVar40 + (long)pSVar22 * 8);
            if (plVar25 == (long *)0x0) {
              pSVar42 = unaff_x26 + 0x28;
              *plVar43 = *(long *)pSVar42;
              *(long **)pSVar42 = plVar43;
              *(StateMachineInstance **)(lVar40 + (long)pSVar22 * 8) = pSVar42;
              if (*plVar43 != 0) {
                pSVar42 = *(StateMachineInstance **)(*plVar43 + 8);
                if (((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) == 0) {
                  pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(unaff_x23 + -1));
                }
                else if (unaff_x23 <= pSVar42) {
                  uVar9 = 0;
                  if (unaff_x23 != (StateMachineInstance *)0x0) {
                    uVar9 = (ulong)pSVar42 / (ulong)unaff_x23;
                  }
                  pSVar42 = pSVar42 + -(uVar9 * (long)unaff_x23);
                }
                plVar25 = (long *)(*(long *)(unaff_x26 + 0x18) + (long)pSVar42 * 8);
                goto LAB_00348bc8;
              }
            }
            else {
              *plVar43 = *plVar25;
LAB_00348bc8:
              *plVar25 = (long)plVar43;
            }
            *(long *)(unaff_x26 + 0x30) = *(long *)(unaff_x26 + 0x30) + 1;
LAB_00348bd8:
            pSVar22 = local_e8;
            pSVar29 = local_128;
            plVar43[3] = (long)puVar8;
            *(undefined8 **)((DataBind *)unaff_x24 + 0x30) = puVar8;
            if (*(int *)((DataBind *)unaff_x24 + 0xc) != 0x27c) {
              *(undefined4 *)((DataBind *)unaff_x24 + 0xc) = 0x27c;
              (**(code **)(*(long *)unaff_x24 + 0x50))(unaff_x24);
            }
          }
        }
        else {
          uVar9 = ((ulong)(uint)((int)plVar43 << 3) + 8 ^ (ulong)plVar43 >> 0x20) *
                  -0x622015f714c7d297;
          uVar9 = ((ulong)plVar43 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
          pSVar35 = (StateMachineInstance *)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
          pSVar15 = *(StateMachineInstance **)(pSVar22 + 0x200);
          if (pSVar15 != (StateMachineInstance *)0x0) {
            uVar47 = NEON_cnt(pSVar15,1);
            uVar44 = NEON_uaddlv(uVar47,1);
            uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
            if (uVar9 < 2) {
              pSVar39 = (StateMachineInstance *)((ulong)pSVar35 & (ulong)(pSVar15 + -1));
            }
            else {
              pSVar39 = pSVar35;
              if (pSVar15 <= pSVar35) {
                uVar23 = 0;
                if (pSVar15 != (StateMachineInstance *)0x0) {
                  uVar23 = (ulong)pSVar35 / (ulong)pSVar15;
                }
                pSVar39 = pSVar35 + -(uVar23 * (long)pSVar15);
              }
            }
            plVar25 = *(long **)(*(long *)(pSVar22 + 0x1f8) + (long)pSVar39 * 8);
            if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
              do {
                pSVar27 = (StateMachineInstance *)plVar25[1];
                if (pSVar27 == pSVar35) {
                  if ((long *)plVar25[2] == plVar43) {
                    local_a0 = (void *)plVar25[3];
                    goto LAB_00347e60;
                  }
                }
                else {
                  if (uVar9 < 2) {
                    pSVar27 = (StateMachineInstance *)((ulong)pSVar27 & (ulong)(pSVar15 + -1));
                  }
                  else if (pSVar15 <= pSVar27) {
                    uVar23 = 0;
                    if (pSVar15 != (StateMachineInstance *)0x0) {
                      uVar23 = (ulong)pSVar27 / (ulong)pSVar15;
                    }
                    pSVar27 = pSVar27 + -(uVar23 * (long)pSVar15);
                  }
                  if (pSVar27 != pSVar39) break;
                }
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
            }
          }
          pvVar7 = (void *)(**(code **)(*plVar43 + 0x28))(plVar43);
          unaff_x23 = *(StateMachineInstance **)(local_e8 + 0x200);
          local_a0 = pvVar7;
          if (unaff_x23 != (StateMachineInstance *)0x0) {
            uVar47 = NEON_cnt(unaff_x23,1);
            uVar44 = NEON_uaddlv(uVar47,1);
            uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
            if (uVar9 < 2) {
              pSVar42 = (StateMachineInstance *)((ulong)pSVar35 & (ulong)(unaff_x23 + -1));
            }
            else {
              pSVar42 = pSVar35;
              if (unaff_x23 <= pSVar35) {
                uVar23 = 0;
                if (unaff_x23 != (StateMachineInstance *)0x0) {
                  uVar23 = (ulong)pSVar35 / (ulong)unaff_x23;
                }
                pSVar42 = pSVar35 + -(uVar23 * (long)unaff_x23);
              }
            }
            puVar8 = *(undefined8 **)(*(long *)(local_e8 + 0x1f8) + (long)pSVar42 * 8);
            if ((puVar8 != (undefined8 *)0x0) &&
               (unaff_x26 = (StateMachineInstance *)*puVar8,
               unaff_x26 != (StateMachineInstance *)0x0)) {
              do {
                pSVar22 = *(StateMachineInstance **)(unaff_x26 + 8);
                if (pSVar22 == pSVar35) {
                  if (*(long **)(unaff_x26 + 0x10) == plVar43) goto LAB_00348640;
                }
                else {
                  if (uVar9 < 2) {
                    pSVar22 = (StateMachineInstance *)((ulong)pSVar22 & (ulong)(unaff_x23 + -1));
                  }
                  else if (unaff_x23 <= pSVar22) {
                    uVar23 = 0;
                    if (unaff_x23 != (StateMachineInstance *)0x0) {
                      uVar23 = (ulong)pSVar22 / (ulong)unaff_x23;
                    }
                    pSVar22 = pSVar22 + -(uVar23 * (long)unaff_x23);
                  }
                  if (pSVar22 != pSVar42) break;
                }
                unaff_x26 = *(StateMachineInstance **)unaff_x26;
              } while (unaff_x26 != (StateMachineInstance *)0x0);
            }
          }
          unaff_x26 = (StateMachineInstance *)operator_new(0x20);
          *(undefined8 *)unaff_x26 = 0;
          *(StateMachineInstance **)(unaff_x26 + 8) = pSVar35;
          *(long **)(unaff_x26 + 0x10) = plVar43;
          *(undefined8 *)(unaff_x26 + 0x18) = 0;
          if ((unaff_x23 == (StateMachineInstance *)0x0) ||
             (*(float *)(local_e8 + 0x218) * (float)unaff_x23 <
              (float)(*(long *)(local_e8 + 0x210) + 1))) {
            if (unaff_x23 < (StateMachineInstance *)0x3) {
              uVar9 = 1;
            }
            else {
              uVar9 = (ulong)(((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) != 0);
            }
            pSVar42 = (StateMachineInstance *)(uVar9 | (long)unaff_x23 << 1);
            pSVar22 = (StateMachineInstance *)
                      (long)((float)(*(long *)(local_e8 + 0x210) + 1) / *(float *)(local_e8 + 0x218)
                            );
            if (pSVar42 <= pSVar22) {
              pSVar42 = pSVar22;
            }
            if (pSVar42 + -1 == (StateMachineInstance *)0x0) {
              pSVar42 = (StateMachineInstance *)0x2;
            }
            else if (((ulong)pSVar42 & (ulong)(pSVar42 + -1)) != 0) {
              pSVar42 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar42);
              unaff_x23 = *(StateMachineInstance **)(local_e8 + 0x200);
            }
            if (unaff_x23 < pSVar42) {
LAB_003481f8:
              unaff_x23 = pSVar42;
              if ((ulong)unaff_x23 >> 0x3d != 0) goto LAB_0034a508;
              pvVar10 = operator_new((long)unaff_x23 << 3);
              pvVar16 = *(void **)(local_e8 + 0x1f8);
              *(void **)(local_e8 + 0x1f8) = pvVar10;
              if (pvVar16 != (void *)0x0) {
                operator_delete(pvVar16);
              }
              pSVar42 = (StateMachineInstance *)0x0;
              *(StateMachineInstance **)(local_e8 + 0x200) = unaff_x23;
              do {
                *(undefined8 *)(*(long *)(local_e8 + 0x1f8) + (long)pSVar42 * 8) = 0;
                pSVar42 = pSVar42 + 1;
              } while (unaff_x23 != pSVar42);
              plVar43 = *(long **)local_120;
              if (plVar43 != (long *)0x0) {
                pSVar42 = (StateMachineInstance *)plVar43[1];
                uVar47 = NEON_cnt(unaff_x23,1);
                uVar44 = NEON_uaddlv(uVar47,1);
                uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
                if (uVar9 < 2) {
                  pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(unaff_x23 + -1));
                }
                else if (unaff_x23 <= pSVar42) {
                  uVar23 = 0;
                  if (unaff_x23 != (StateMachineInstance *)0x0) {
                    uVar23 = (ulong)pSVar42 / (ulong)unaff_x23;
                  }
                  pSVar42 = pSVar42 + -(uVar23 * (long)unaff_x23);
                }
                *(StateMachineInstance **)(*(long *)(local_e8 + 0x1f8) + (long)pSVar42 * 8) =
                     local_120;
                plVar25 = (long *)*plVar43;
                if (plVar25 != (long *)0x0) {
                  do {
                    pSVar22 = (StateMachineInstance *)plVar25[1];
                    if (uVar9 < 2) {
                      pSVar22 = (StateMachineInstance *)((ulong)pSVar22 & (ulong)(unaff_x23 + -1));
                    }
                    else if (unaff_x23 <= pSVar22) {
                      uVar23 = 0;
                      if (unaff_x23 != (StateMachineInstance *)0x0) {
                        uVar23 = (ulong)pSVar22 / (ulong)unaff_x23;
                      }
                      pSVar22 = pSVar22 + -(uVar23 * (long)unaff_x23);
                    }
                    if (pSVar22 != pSVar42) {
                      if (*(long *)(*(long *)(local_e8 + 0x1f8) + (long)pSVar22 * 8) == 0) {
                        *(long **)(*(long *)(local_e8 + 0x1f8) + (long)pSVar22 * 8) = plVar43;
                        pSVar42 = pSVar22;
                      }
                      else {
                        *plVar43 = *plVar25;
                        *plVar25 = **(long **)(*(long *)(local_e8 + 0x1f8) + (long)pSVar22 * 8);
                        **(undefined8 **)(*(long *)(local_e8 + 0x1f8) + (long)pSVar22 * 8) = plVar25
                        ;
                        plVar25 = plVar43;
                      }
                    }
                    plVar43 = plVar25;
                    plVar25 = (long *)*plVar43;
                  } while (plVar25 != (long *)0x0);
                }
              }
            }
            else if (pSVar42 < unaff_x23) {
              pSVar22 = (StateMachineInstance *)
                        (long)((float)*(ulong *)(local_e8 + 0x210) / *(float *)(local_e8 + 0x218));
              if (unaff_x23 < (StateMachineInstance *)0x3) {
LAB_00348654:
                pSVar22 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar22);
              }
              else {
                uVar47 = NEON_cnt(unaff_x23,1);
                uVar44 = NEON_uaddlv(uVar47,1);
                if (1 < (uint)CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44)) goto LAB_00348654;
                if ((StateMachineInstance *)0x1 < pSVar22) {
                  pSVar22 = (StateMachineInstance *)(1L << (-LZCOUNT(pSVar22 + -1) & 0x3fU));
                }
              }
              if (pSVar42 <= pSVar22) {
                pSVar42 = pSVar22;
              }
              if (pSVar42 < unaff_x23) {
                if (pSVar42 != (StateMachineInstance *)0x0) goto LAB_003481f8;
                pvVar10 = *(void **)(local_e8 + 0x1f8);
                *(undefined8 *)(local_e8 + 0x1f8) = 0;
                if (pvVar10 != (void *)0x0) {
                  operator_delete(pvVar10);
                }
                unaff_x23 = (StateMachineInstance *)0x0;
                *(undefined8 *)(local_e8 + 0x200) = 0;
              }
              else {
                unaff_x23 = *(StateMachineInstance **)(local_e8 + 0x200);
              }
            }
            if (((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) == 0) {
              pSVar42 = (StateMachineInstance *)((ulong)(unaff_x23 + -1) & (ulong)pSVar35);
            }
            else {
              pSVar42 = pSVar35;
              if (unaff_x23 <= pSVar35) {
                uVar9 = 0;
                if (unaff_x23 != (StateMachineInstance *)0x0) {
                  uVar9 = (ulong)pSVar35 / (ulong)unaff_x23;
                }
                pSVar42 = pSVar35 + -(uVar9 * (long)unaff_x23);
              }
            }
          }
          lVar40 = *(long *)(local_e8 + 0x1f8);
          puVar8 = *(undefined8 **)(lVar40 + (long)pSVar42 * 8);
          if (puVar8 == (undefined8 *)0x0) {
            uVar47 = *(undefined8 *)local_120;
            *(StateMachineInstance **)local_120 = unaff_x26;
            *(undefined8 *)unaff_x26 = uVar47;
            *(StateMachineInstance **)(lVar40 + (long)pSVar42 * 8) = local_120;
            if (*(long *)unaff_x26 != 0) {
              pSVar42 = *(StateMachineInstance **)(*(long *)unaff_x26 + 8);
              if (((ulong)unaff_x23 & (ulong)(unaff_x23 + -1)) == 0) {
                pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(unaff_x23 + -1));
              }
              else if (unaff_x23 <= pSVar42) {
                uVar9 = 0;
                if (unaff_x23 != (StateMachineInstance *)0x0) {
                  uVar9 = (ulong)pSVar42 / (ulong)unaff_x23;
                }
                pSVar42 = pSVar42 + -(uVar9 * (long)unaff_x23);
              }
              puVar8 = (undefined8 *)(*(long *)(local_e8 + 0x1f8) + (long)pSVar42 * 8);
              goto LAB_00348628;
            }
          }
          else {
            *(undefined8 *)unaff_x26 = *puVar8;
LAB_00348628:
            *puVar8 = unaff_x26;
          }
          *(long *)(local_e8 + 0x210) = *(long *)(local_e8 + 0x210) + 1;
LAB_00348640:
          *(void **)(unaff_x26 + 0x18) = pvVar7;
          pSVar22 = local_e8;
LAB_00347e60:
          *(void **)((DataBind *)unaff_x24 + 0x30) = local_a0;
          pSVar42 = pSVar29;
          if ((*(uint *)((DataBind *)unaff_x24 + 0x10) & 1) != 0) {
            pSVar42 = local_f8;
          }
          lVar40 = FUN_0034a750(pSVar42,local_a0,&local_a0);
          *(StateMachineInstance **)(lVar40 + 0x18) = unaff_x24;
        }
        pSVar33 = pSVar33 + 1;
      } while (pSVar33 != local_f0);
    }
    local_80 = 0x3f800000;
    lVar40 = *(long *)(local_110 + 0x58);
    lVar19 = *(long *)(local_110 + 0x60);
    uStack_98 = 0;
    local_a0 = (void *)0x0;
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    if (lVar19 != lVar40) {
      unaff_x26 = (StateMachineInstance *)0x0;
      puVar11 = PTR_vtable_0067cec8 + 0x10;
      local_f0 = (StateMachineInstance *)(PTR_vtable_0067cf00 + 0x10);
      do {
        __src = (undefined **)0x3f800000;
        if (unaff_x26 < (StateMachineInstance *)(lVar19 - lVar40 >> 3)) {
          unaff_x24 = *(StateMachineInstance **)(lVar40 + (long)unaff_x26 * 8);
        }
        else {
          unaff_x24 = (StateMachineInstance *)0x0;
        }
        uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,5);
        if ((uVar9 & 1) == 0) {
          uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,0xb);
          if ((uVar9 & 1) == 0) {
            uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,0xd);
            if (((((uVar9 & 1) != 0) ||
                 (uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,0xe), (uVar9 & 1) != 0)
                 ) && (plVar43 = (long *)(**(code **)(**(long **)(pSVar22 + 0x10) + 0x348))
                                                   (*(long **)(pSVar22 + 0x10),
                                                    *(undefined4 *)
                                                     ((StateMachineListener *)unaff_x24 + 0x28)),
                      plVar43 != (long *)0x0)) &&
               (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,2), (uVar9 & 1) != 0)) {
              puVar8 = (undefined8 *)plVar43[0x11];
              puVar41 = (undefined8 *)plVar43[0x12];
              if (puVar8 != puVar41) {
LAB_00348db8:
                pFVar38 = (FocusData *)*puVar8;
                uVar9 = (**(code **)(*(long *)pFVar38 + 0x18))(pFVar38,0x28d);
                if ((uVar9 & 1) == 0) goto code_r0x00348dd4;
                this_03 = (FocusListenerGroup *)operator_new(0x28);
                FocusListenerGroup::FocusListenerGroup
                          (this_03,pFVar38,(StateMachineListener *)unaff_x24,pSVar22);
                this = *(StateMachineInstance **)(pSVar22 + 0x2f8);
                if (this < *(StateMachineInstance **)(pSVar22 + 0x300)) {
                  pSVar42 = this + 8;
                  *(FocusListenerGroup **)this = this_03;
                  goto LAB_00349054;
                }
                unaff_x23 = *(StateMachineInstance **)(pSVar22 + 0x2f0);
                pSVar29 = this + -(long)unaff_x23;
                unaff_x21 = (undefined8 *)((long)pSVar29 >> 3);
                uVar9 = (long)unaff_x21 + 1;
                if (uVar9 >> 0x3d != 0) goto LAB_0034a528;
                uVar18 = (long)*(StateMachineInstance **)(pSVar22 + 0x300) - (long)unaff_x23;
                uVar23 = (long)uVar18 >> 2;
                if (uVar23 <= uVar9) {
                  uVar23 = uVar9;
                }
                if (0x7ffffffffffffff7 < uVar18) {
                  uVar23 = 0x1fffffffffffffff;
                }
                if (uVar23 == 0) {
                  pvVar7 = (void *)0x0;
                }
                else {
                  if (uVar23 >> 0x3d != 0) goto LAB_0034a508;
                  pvVar7 = operator_new(uVar23 << 3);
                }
                pSVar22 = (StateMachineInstance *)((long)pvVar7 + (long)unaff_x21 * 8);
                pvVar10 = (void *)((long)pvVar7 + uVar23 * 8);
                pSVar42 = pSVar22 + 8;
                *(FocusListenerGroup **)pSVar22 = this_03;
                if ((long)this - (long)unaff_x23 == 0) {
                  *(StateMachineInstance **)(local_e8 + 0x2f0) = pSVar22;
                  *(StateMachineInstance **)(local_e8 + 0x2f8) = pSVar42;
                  *(void **)(local_e8 + 0x300) = pvVar10;
                }
                else {
                  uVar9 = ((long)this - (long)unaff_x23) - 8;
                  pSVar35 = this;
                  if ((uVar9 < 0x78) ||
                     ((this + (-8 - (uVar9 & 0xfffffffffffffff8)) < pSVar22 &&
                      ((StateMachineInstance *)
                       ((long)pvVar7 + (long)(pSVar29 + (-8 - (uVar9 & 0xfffffffffffffff8)))) < this
                      )))) goto LAB_00348fd8;
                  pSVar29 = pSVar22 + -0x10;
                  uVar9 = (uVar9 >> 3) + 1;
                  uVar18 = uVar9 & 0x3ffffffffffffffc;
                  pSVar35 = this + uVar18 * -8;
                  uVar23 = uVar18;
                  do {
                    pSVar33 = this + -0x20;
                    uVar49 = *(undefined8 *)(this + -0x18);
                    uVar48 = *(undefined8 *)pSVar33;
                    uVar45 = *(undefined8 *)(this + -8);
                    uVar47 = *(undefined8 *)(this + -0x10);
                    uVar23 = uVar23 - 4;
                    *(undefined8 *)(this + -0x18) = 0;
                    *(undefined8 *)pSVar33 = 0;
                    *(undefined8 *)(this + -8) = 0;
                    *(undefined8 *)(this + -0x10) = 0;
                    *(undefined8 *)(pSVar29 + -8) = uVar49;
                    *(undefined8 *)(pSVar29 + -0x10) = uVar48;
                    *(undefined8 *)(pSVar29 + 8) = uVar45;
                    *(undefined8 *)pSVar29 = uVar47;
                    pSVar29 = pSVar29 + -0x20;
                    this = pSVar33;
                  } while (uVar23 != 0);
                  pSVar22 = pSVar22 + uVar18 * -8;
                  if (uVar9 != uVar18) {
LAB_00348fd8:
                    do {
                      pSVar35 = pSVar35 + -8;
                      uVar47 = *(undefined8 *)pSVar35;
                      *(undefined8 *)pSVar35 = 0;
                      pSVar22 = pSVar22 + -8;
                      *(undefined8 *)pSVar22 = uVar47;
                    } while (pSVar35 != unaff_x23);
                  }
                  this = *(StateMachineInstance **)(local_e8 + 0x2f0);
                  pSVar29 = *(StateMachineInstance **)(local_e8 + 0x2f8);
                  *(StateMachineInstance **)(local_e8 + 0x2f0) = pSVar22;
                  *(StateMachineInstance **)(local_e8 + 0x2f8) = pSVar42;
                  *(void **)(local_e8 + 0x300) = pvVar10;
                  while (pSVar29 != this) {
                    pSVar29 = pSVar29 + -8;
                    plVar43 = *(long **)pSVar29;
                    *(undefined8 *)pSVar29 = 0;
                    if (plVar43 != (long *)0x0) {
                      (**(code **)(*plVar43 + 8))();
                    }
                  }
                }
                if (this != (StateMachineInstance *)0x0) {
                  operator_delete(this);
                }
LAB_00349054:
                *(StateMachineInstance **)(local_e8 + 0x2f8) = pSVar42;
                pSVar22 = local_e8;
              }
            }
LAB_0034905c:
            __src = (undefined **)0x3f800000;
            uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,0xf);
            if ((((uVar9 & 1) != 0) ||
                (uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,8), (uVar9 & 1) != 0))
               && ((plVar43 = (long *)(**(code **)(**(long **)(pSVar22 + 0x10) + 0x348))
                                                (*(long **)(pSVar22 + 0x10),
                                                 *(undefined4 *)
                                                  ((StateMachineListener *)unaff_x24 + 0x28)),
                   plVar43 != (long *)0x0 &&
                   (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,2), (uVar9 & 1) != 0)))) {
              puVar41 = (undefined8 *)plVar43[0x12];
              for (puVar8 = (undefined8 *)plVar43[0x11]; puVar8 != puVar41; puVar8 = puVar8 + 1) {
                pFVar38 = (FocusData *)*puVar8;
                uVar9 = (**(code **)(*(long *)pFVar38 + 0x18))(pFVar38,0x28d);
                if ((uVar9 & 1) != 0) {
                  pKVar13 = (KeyboardListenerGroup *)operator_new(0x20);
                  KeyboardListenerGroup::KeyboardListenerGroup
                            (pKVar13,pFVar38,(StateMachineListener *)unaff_x24,pSVar22);
                  puVar8 = *(undefined8 **)(pSVar22 + 0x310);
                  local_b8 = (StateMachineInstance *)pKVar13;
                  if (puVar8 < *(undefined8 **)(pSVar22 + 0x318)) {
                    *puVar8 = pKVar13;
                    *(undefined8 **)(pSVar22 + 0x310) = puVar8 + 1;
                  }
                  else {
                    uVar47 = FUN_0034ab90(pSVar22 + 0x308,&local_b8);
                    *(undefined8 *)(pSVar22 + 0x310) = uVar47;
                    if (local_b8 != (StateMachineInstance *)0x0) {
                      (**(code **)(*(long *)local_b8 + 8))(local_b8);
                    }
                  }
                  break;
                }
              }
            }
            uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))(unaff_x24,0x10);
            if ((((uVar9 & 1) != 0) &&
                (plVar43 = (long *)(**(code **)(**(long **)(pSVar22 + 0x10) + 0x348))
                                             (*(long **)(pSVar22 + 0x10),
                                              *(undefined4 *)
                                               ((StateMachineListener *)unaff_x24 + 0x28)),
                plVar43 != (long *)0x0)) &&
               (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,2), (uVar9 & 1) != 0)) {
              puVar8 = (undefined8 *)plVar43[0x11];
              puVar41 = (undefined8 *)plVar43[0x12];
              if (puVar8 != puVar41) {
LAB_003491ac:
                pSVar36 = (SemanticData *)*puVar8;
                uVar9 = (**(code **)(*(long *)pSVar36 + 0x18))(pSVar36,0x29c);
                if ((uVar9 & 1) == 0) goto code_r0x003491c8;
                this_03 = (FocusListenerGroup *)operator_new(0x20);
                SemanticListenerGroup::SemanticListenerGroup
                          ((SemanticListenerGroup *)this_03,pSVar36,
                           (StateMachineListener *)unaff_x24,pSVar22);
                this = *(StateMachineInstance **)(pSVar22 + 0x350);
                if (this < *(StateMachineInstance **)(pSVar22 + 0x358)) {
                  pSVar42 = this + 8;
                  *(FocusListenerGroup **)this = this_03;
                  goto LAB_00349384;
                }
                unaff_x23 = *(StateMachineInstance **)(pSVar22 + 0x348);
                pSVar29 = this + -(long)unaff_x23;
                unaff_x21 = (undefined8 *)((long)pSVar29 >> 3);
                uVar9 = (long)unaff_x21 + 1;
                if (uVar9 >> 0x3d != 0) goto LAB_0034a52c;
                uVar18 = (long)*(StateMachineInstance **)(pSVar22 + 0x358) - (long)unaff_x23;
                uVar23 = (long)uVar18 >> 2;
                if (uVar23 <= uVar9) {
                  uVar23 = uVar9;
                }
                if (0x7ffffffffffffff7 < uVar18) {
                  uVar23 = 0x1fffffffffffffff;
                }
                if (uVar23 == 0) {
                  pvVar7 = (void *)0x0;
                }
                else {
                  if (uVar23 >> 0x3d != 0) goto LAB_0034a508;
                  pvVar7 = operator_new(uVar23 << 3);
                }
                pSVar22 = (StateMachineInstance *)((long)pvVar7 + (long)unaff_x21 * 8);
                pvVar10 = (void *)((long)pvVar7 + uVar23 * 8);
                pSVar42 = pSVar22 + 8;
                *(FocusListenerGroup **)pSVar22 = this_03;
                if ((long)this - (long)unaff_x23 == 0) {
                  *(StateMachineInstance **)(local_e8 + 0x348) = pSVar22;
                  *(StateMachineInstance **)(local_e8 + 0x350) = pSVar42;
                  *(void **)(local_e8 + 0x358) = pvVar10;
                }
                else {
                  uVar9 = ((long)this - (long)unaff_x23) - 8;
                  pSVar35 = this;
                  if ((uVar9 < 0x78) ||
                     ((this + (-8 - (uVar9 & 0xfffffffffffffff8)) < pSVar22 &&
                      ((StateMachineInstance *)
                       ((long)pvVar7 + (long)(pSVar29 + (-8 - (uVar9 & 0xfffffffffffffff8)))) < this
                      )))) goto LAB_00349308;
                  pSVar29 = pSVar22 + -0x10;
                  uVar9 = (uVar9 >> 3) + 1;
                  uVar18 = uVar9 & 0x3ffffffffffffffc;
                  pSVar35 = this + uVar18 * -8;
                  uVar23 = uVar18;
                  do {
                    pSVar33 = this + -0x20;
                    uVar49 = *(undefined8 *)(this + -0x18);
                    uVar48 = *(undefined8 *)pSVar33;
                    uVar45 = *(undefined8 *)(this + -8);
                    uVar47 = *(undefined8 *)(this + -0x10);
                    uVar23 = uVar23 - 4;
                    *(undefined8 *)(this + -0x18) = 0;
                    *(undefined8 *)pSVar33 = 0;
                    *(undefined8 *)(this + -8) = 0;
                    *(undefined8 *)(this + -0x10) = 0;
                    *(undefined8 *)(pSVar29 + -8) = uVar49;
                    *(undefined8 *)(pSVar29 + -0x10) = uVar48;
                    *(undefined8 *)(pSVar29 + 8) = uVar45;
                    *(undefined8 *)pSVar29 = uVar47;
                    pSVar29 = pSVar29 + -0x20;
                    this = pSVar33;
                  } while (uVar23 != 0);
                  pSVar22 = pSVar22 + uVar18 * -8;
                  if (uVar9 != uVar18) {
LAB_00349308:
                    do {
                      pSVar35 = pSVar35 + -8;
                      uVar47 = *(undefined8 *)pSVar35;
                      *(undefined8 *)pSVar35 = 0;
                      pSVar22 = pSVar22 + -8;
                      *(undefined8 *)pSVar22 = uVar47;
                    } while (pSVar35 != unaff_x23);
                  }
                  this = *(StateMachineInstance **)(local_e8 + 0x348);
                  pSVar29 = *(StateMachineInstance **)(local_e8 + 0x350);
                  *(StateMachineInstance **)(local_e8 + 0x348) = pSVar22;
                  *(StateMachineInstance **)(local_e8 + 0x350) = pSVar42;
                  *(void **)(local_e8 + 0x358) = pvVar10;
                  while (pSVar29 != this) {
                    pSVar29 = pSVar29 + -8;
                    plVar43 = *(long **)pSVar29;
                    *(undefined8 *)pSVar29 = 0;
                    if (plVar43 != (long *)0x0) {
                      (**(code **)(*plVar43 + 8))();
                    }
                  }
                }
                if (this != (StateMachineInstance *)0x0) {
                  operator_delete(this);
                }
LAB_00349384:
                *(StateMachineInstance **)(local_e8 + 0x350) = pSVar42;
                pSVar22 = local_e8;
              }
            }
LAB_0034938c:
            pSVar29 = (StateMachineInstance *)0x0;
            do {
              uVar9 = (**(code **)(*(long *)unaff_x24 + 0x60))
                                (unaff_x24,*(undefined4 *)(pSVar29 + 0x252454));
              if ((uVar9 & 1) != 0) break;
              bVar2 = pSVar29 != (StateMachineInstance *)0x20;
              pSVar29 = pSVar29 + 4;
            } while (bVar2);
            if ((uVar9 & 1) != 0) {
              pLVar34 = (ListenerGroup *)operator_new(0x58);
              plVar43 = *(long **)(pSVar22 + 0x10);
              *(undefined2 *)(pLVar34 + 8) = 0;
              *(StateMachineInstance **)pLVar34 = local_f0;
              *(StateMachineInstance **)(pLVar34 + 0x10) = unaff_x24;
              *(undefined8 *)(pLVar34 + 0x30) = 0;
              *(undefined8 *)(pLVar34 + 0x28) = 0;
              *(undefined8 *)(pLVar34 + 0x20) = 0;
              *(undefined8 *)(pLVar34 + 0x18) = 0;
              *(undefined4 *)(pLVar34 + 0x38) = 0x3f800000;
              *(undefined8 *)(pLVar34 + 0x48) = 0;
              *(undefined8 *)(pLVar34 + 0x50) = 0;
              *(undefined8 *)(pLVar34 + 0x40) = 0;
              local_b8 = (StateMachineInstance *)pLVar34;
              pCVar12 = (Component *)
                        (**(code **)(*plVar43 + 0x348))
                                  (plVar43,*(undefined4 *)((StateMachineListener *)unaff_x24 + 0x28)
                                  );
              if ((pCVar12 != (Component *)0x0) &&
                 (uVar9 = (**(code **)(*(long *)pCVar12 + 0x18))(pCVar12,10), (uVar9 & 1) != 0)) {
                bVar3 = (**(code **)(*(long *)pCVar12 + 0x18))(pCVar12,0x199);
                pCVar1 = pCVar12 + 0x7e0;
                if ((bVar3 & 1) == 0) {
                  pCVar1 = pCVar12;
                }
                addToHitLookup(pSVar22,pCVar1,(bool)(bVar3 & 1),(unordered_map *)&local_a0,pLVar34,
                               false);
              }
              puVar8 = *(undefined8 **)(pSVar22 + 0x178);
              if (puVar8 < *(undefined8 **)(pSVar22 + 0x180)) {
                *puVar8 = pLVar34;
                *(undefined8 **)(pSVar22 + 0x178) = puVar8 + 1;
              }
              else {
                uVar47 = FUN_0034ad30(pSVar22 + 0x170,&local_b8);
                *(undefined8 *)(pSVar22 + 0x178) = uVar47;
                if (local_b8 != (StateMachineInstance *)0x0) {
                  (**(code **)(*(long *)local_b8 + 8))(local_b8);
                }
              }
            }
          }
          else {
            plVar43 = (long *)operator_new(0x38);
            pSVar42 = *(StateMachineInstance **)(pSVar22 + 0x1b8);
            pSVar35 = *(StateMachineInstance **)(pSVar22 + 0x1c0);
            *plVar43 = (long)puVar11;
            plVar43[1] = (long)pSVar22;
            plVar43[2] = (long)unaff_x24;
            plVar43[4] = 0;
            plVar43[3] = 0;
            plVar43[6] = 0;
            plVar43[5] = 0;
            if (pSVar42 < pSVar35) {
              unaff_x23 = pSVar42 + 8;
              *(long **)pSVar42 = plVar43;
              *(StateMachineInstance **)(pSVar22 + 0x1b8) = unaff_x23;
            }
            else {
              pSVar33 = *(StateMachineInstance **)(pSVar22 + 0x1b0);
              pSVar29 = pSVar42 + -(long)pSVar33;
              uVar9 = ((long)pSVar29 >> 3) + 1;
              if (uVar9 >> 0x3d != 0) goto LAB_0034a510;
              uVar18 = (long)pSVar35 - (long)pSVar33;
              uVar23 = (long)uVar18 >> 2;
              if (uVar23 <= uVar9) {
                uVar23 = uVar9;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 == 0) {
                pvVar7 = (void *)0x0;
              }
              else {
                if (uVar23 >> 0x3d != 0) goto LAB_0034a508;
                pvVar7 = operator_new(uVar23 << 3);
              }
              pSVar22 = local_e8;
              puVar8 = (undefined8 *)((long)pvVar7 + ((long)pSVar29 >> 3) * 8);
              unaff_x23 = (StateMachineInstance *)(puVar8 + 1);
              *puVar8 = plVar43;
              if ((long)pSVar42 - (long)pSVar33 != 0) {
                uVar9 = ((long)pSVar42 - (long)pSVar33) - 8;
                pSVar35 = pSVar42;
                if ((0x37 < uVar9) &&
                   ((StateMachineInstance *)0x1f < pSVar42 + (-(long)pSVar29 - (long)pvVar7))) {
                  puVar41 = puVar8 + -2;
                  pSVar15 = pSVar42 + -0x10;
                  uVar9 = (uVar9 >> 3) + 1;
                  uVar24 = uVar9 & 0x3ffffffffffffffc;
                  pSVar35 = pSVar42 + uVar24 * -8;
                  uVar18 = uVar24;
                  do {
                    pSVar42 = pSVar15 + -8;
                    uVar48 = *(undefined8 *)(pSVar15 + -0x10);
                    uVar45 = *(undefined8 *)(pSVar15 + 8);
                    uVar47 = *(undefined8 *)pSVar15;
                    uVar18 = uVar18 - 4;
                    pSVar15 = pSVar15 + -0x20;
                    puVar41[-1] = *(undefined8 *)pSVar42;
                    puVar41[-2] = uVar48;
                    puVar41[1] = uVar45;
                    *puVar41 = uVar47;
                    puVar41 = puVar41 + -4;
                  } while (uVar18 != 0);
                  puVar8 = puVar8 + -uVar24;
                  pSVar42 = pSVar33;
                  if (uVar9 == uVar24) goto LAB_00348e84;
                }
                do {
                  pSVar35 = pSVar35 + -8;
                  puVar8 = puVar8 + -1;
                  *puVar8 = *(undefined8 *)pSVar35;
                } while (pSVar35 != pSVar33);
                pSVar42 = *(StateMachineInstance **)(local_e8 + 0x1b0);
              }
LAB_00348e84:
              *(undefined8 **)(local_e8 + 0x1b0) = puVar8;
              *(StateMachineInstance **)(local_e8 + 0x1b8) = unaff_x23;
              *(void **)(local_e8 + 0x1c0) = (void *)((long)pvVar7 + uVar23 * 8);
              if (pSVar42 != (StateMachineInstance *)0x0) {
                operator_delete(pSVar42);
              }
              *(StateMachineInstance **)(pSVar22 + 0x1b8) = unaff_x23;
              unaff_x24 = pSVar42;
            }
          }
        }
        unaff_x26 = unaff_x26 + 1;
        lVar40 = *(long *)(local_110 + 0x58);
        lVar19 = *(long *)(local_110 + 0x60);
      } while (unaff_x26 < (StateMachineInstance *)(lVar19 - lVar40 >> 3));
    }
    pSVar42 = *(StateMachineInstance **)(*(long *)(pSVar22 + 0x10) + 0xa58);
    __src = *(undefined ***)(*(long *)(pSVar22 + 0x10) + 0xa60);
    if (pSVar42 == (StateMachineInstance *)__src) {
      local_140 = (StateMachineInstance *)0x0;
      this = pSVar22;
    }
    else {
      pSVar22 = (StateMachineInstance *)0x0;
      unaff_x26 = (StateMachineInstance *)0x0;
      pSVar35 = (StateMachineInstance *)0x0;
      do {
        plVar43 = *(long **)pSVar42;
        pSVar33 = pSVar35;
        if (plVar43 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar43 + 0x10))(plVar43);
          uVar6 = uVar6 & 0xffff;
          unaff_x24 = pSVar35;
          if (uVar6 - 0x209 < 2) {
            lVar40 = 0x90;
          }
          else if (uVar6 == 0x25b) {
            lVar40 = 0x1f8;
          }
          else {
            if (uVar6 != 0x27d) goto LAB_003494c4;
            lVar40 = 0x1f8;
          }
          if (unaff_x26 < pSVar22) {
            *(undefined **)unaff_x26 = (undefined *)((long)plVar43 + lVar40);
            unaff_x26 = unaff_x26 + 8;
          }
          else {
            pSVar29 = unaff_x26 + -(long)pSVar35;
            uVar9 = ((long)pSVar29 >> 3) + 1;
            if (uVar9 >> 0x3d != 0) {
              FUN_0034aed0();
LAB_0034a510:
              FUN_00345a94();
              goto LAB_0034a514;
            }
            uVar23 = (long)pSVar22 - (long)pSVar35 >> 2;
            if (uVar23 <= uVar9) {
              uVar23 = uVar9;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)pSVar22 - (long)pSVar35)) {
              uVar23 = 0x1fffffffffffffff;
            }
            if (uVar23 == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              if (uVar23 >> 0x3d != 0) goto LAB_0034a508;
              pvVar7 = operator_new(uVar23 << 3);
            }
            pSVar33 = (StateMachineInstance *)((long)pvVar7 + ((long)pSVar29 >> 3) * 8);
            unaff_x23 = pSVar33 + 8;
            *(undefined **)pSVar33 = (undefined *)((long)plVar43 + lVar40);
            if ((long)unaff_x26 - (long)pSVar35 != 0) {
              uVar9 = ((long)unaff_x26 - (long)pSVar35) - 8;
              if ((((0x147 < uVar9) &&
                   ((StateMachineInstance *)((long)pvVar7 + (long)pSVar29) + -8 +
                    -(uVar9 & 0xfffffffffffffff8) <=
                    (StateMachineInstance *)((long)pvVar7 + (long)pSVar29) + -8)) &&
                  (unaff_x26 + -8 + -(uVar9 & 0xfffffffffffffff8) <= unaff_x26 + -8)) &&
                 ((StateMachineInstance *)0x1f < unaff_x26 + (-(long)pSVar29 - (long)pvVar7))) {
                pSVar22 = pSVar33 + -0x10;
                pSVar15 = unaff_x26 + -0x10;
                uVar9 = (uVar9 >> 3) + 1;
                uVar24 = uVar9 & 0x3ffffffffffffffc;
                unaff_x26 = unaff_x26 + uVar24 * -8;
                uVar18 = uVar24;
                do {
                  pSVar39 = pSVar15 + -8;
                  uVar48 = *(undefined8 *)(pSVar15 + -0x10);
                  uVar45 = *(undefined8 *)(pSVar15 + 8);
                  uVar47 = *(undefined8 *)pSVar15;
                  uVar18 = uVar18 - 4;
                  pSVar15 = pSVar15 + -0x20;
                  *(undefined8 *)(pSVar22 + -8) = *(undefined8 *)pSVar39;
                  *(undefined8 *)(pSVar22 + -0x10) = uVar48;
                  *(undefined8 *)(pSVar22 + 8) = uVar45;
                  *(undefined8 *)pSVar22 = uVar47;
                  pSVar22 = pSVar22 + -0x20;
                } while (uVar18 != 0);
                pSVar33 = pSVar33 + uVar24 * -8;
                if (uVar9 == uVar24) goto LAB_003495c0;
              }
              do {
                unaff_x26 = unaff_x26 + -8;
                pSVar33 = pSVar33 + -8;
                *(undefined8 *)pSVar33 = *(undefined8 *)unaff_x26;
              } while (unaff_x26 != pSVar35);
            }
LAB_003495c0:
            pSVar22 = (StateMachineInstance *)((long)pvVar7 + uVar23 * 8);
            unaff_x26 = unaff_x23;
            if (pSVar35 != (StateMachineInstance *)0x0) {
              operator_delete(pSVar35);
            }
          }
        }
LAB_003494c4:
        pSVar42 = pSVar42 + 8;
        pSVar35 = pSVar33;
      } while (pSVar42 != (StateMachineInstance *)__src);
      local_140 = pSVar33;
      this = local_e8;
      if (pSVar33 != unaff_x26) {
        do {
          local_130 = *(StateMachineInstance **)pSVar33;
          local_128 = pSVar33;
          local_120 = unaff_x26;
          (*(code *)**(undefined8 **)local_130)(&local_b8);
          local_f8 = local_b0;
          for (unaff_x23 = local_b8; unaff_x23 != local_f8; unaff_x23 = unaff_x23 + 8) {
            puVar8 = *(undefined8 **)unaff_x23;
            pSVar42 = (StateMachineInstance *)puVar8[1];
            pSVar22 = (StateMachineInstance *)puVar8[2];
            pLVar34 = (ListenerGroup *)*puVar8;
            uVar9 = (long)pSVar22 - (long)pSVar42;
            if (uVar9 == 0) {
              pSVar29 = (StateMachineInstance *)0x0;
              unaff_x24 = (StateMachineInstance *)0x0;
            }
            else {
              if ((long)uVar9 < 0) {
                FUN_0034aef8();
                goto LAB_0034a504;
              }
              local_f0 = pSVar22;
              pSVar29 = (StateMachineInstance *)operator_new(uVar9);
              unaff_x24 = pSVar29 + uVar9;
              memcpy(pSVar29,pSVar42,uVar9);
              uVar23 = 0;
              do {
                puVar41 = *(undefined8 **)(pSVar29 + uVar23);
                __src = (undefined **)*puVar41;
                uVar18 = (**(code **)(*__src + 0x18))(__src,0x199);
                if ((uVar18 & 1) == 0) {
                  uVar18 = (**(code **)(*__src + 0x18))(__src,0xd);
                  if ((uVar18 & 1) == 0) {
                    bVar3 = 0;
                  }
                  else {
                    bVar3 = (**(code **)(*__src + 0x1f8))(__src);
                  }
                }
                else {
                  bVar3 = 1;
                }
                this = local_e8;
                addToHitLookup(local_e8,(Component *)*puVar41,(bool)(bVar3 & 1),
                               (unordered_map *)&local_a0,pLVar34,*(bool *)(puVar41 + 1));
                uVar23 = uVar23 + 8;
                pSVar22 = local_f0;
              } while (uVar9 != uVar23);
            }
            puVar41 = *(undefined8 **)(this + 0x178);
            local_d0 = (StateMachineInstance *)pLVar34;
            if (puVar41 < *(undefined8 **)(this + 0x180)) {
              *puVar41 = pLVar34;
              *(undefined8 **)(this + 0x178) = puVar41 + 1;
            }
            else {
              uVar47 = FUN_0034ad30(this + 0x170,&local_d0);
              *(undefined8 *)(this + 0x178) = uVar47;
              if (local_d0 != (StateMachineInstance *)0x0) {
                (**(code **)(*(long *)local_d0 + 8))(local_d0);
              }
            }
            pSVar35 = pSVar29;
            if (pSVar22 != pSVar42) {
              do {
                if (*(void **)pSVar35 != (void *)0x0) {
                  operator_delete(*(void **)pSVar35);
                }
                pSVar35 = pSVar35 + 8;
              } while (pSVar35 != unaff_x24);
            }
            pvVar7 = (void *)puVar8[1];
            if (pvVar7 != (void *)0x0) {
              puVar8[2] = pvVar7;
              operator_delete(pvVar7);
            }
            operator_delete(puVar8);
            if (pSVar29 != (StateMachineInstance *)0x0) {
              operator_delete(pSVar29);
            }
          }
          (**(code **)(*(long *)local_130 + 8))(&local_d0,local_130,this);
          pSVar29 = local_c8;
          unaff_x26 = local_120;
          for (pSVar42 = local_d0; pSVar42 != pSVar29; pSVar42 = pSVar42 + 8) {
            puVar8 = *(undefined8 **)(this + 0x160);
            local_d8 = *(long **)pSVar42;
            if (puVar8 < *(undefined8 **)(this + 0x168)) {
              *puVar8 = local_d8;
              *(undefined8 **)(this + 0x160) = puVar8 + 1;
            }
            else {
              uVar47 = FUN_003471d0(local_108,&local_d8);
              *(undefined8 *)(this + 0x160) = uVar47;
              if (local_d8 != (long *)0x0) {
                (**(code **)(*local_d8 + 8))(local_d8);
              }
            }
          }
          if (local_d0 != (StateMachineInstance *)0x0) {
            local_c8 = local_d0;
            operator_delete(local_d0);
          }
          if (local_b8 != (StateMachineInstance *)0x0) {
            local_b0 = local_b8;
            operator_delete(local_b8);
          }
          pSVar33 = local_128 + 8;
        } while (pSVar33 != unaff_x26);
      }
    }
    this_03 = *(FocusListenerGroup **)(local_138 + 0xb18);
    unaff_x21 = (undefined8 *)(*(long *)(local_138 + 0xb20) - (long)this_03);
    if (unaff_x21 != (undefined8 *)0x0) {
      if ((long)unaff_x21 < 0) goto LAB_0034a51c;
      pSVar42 = (StateMachineInstance *)operator_new((ulong)unaff_x21);
      local_f0 = pSVar42 + (long)unaff_x21;
      memcpy(pSVar42,this_03,(size_t)unaff_x21);
      local_f8 = pSVar42;
      do {
        lVar40 = *(long *)pSVar42;
        local_b8 = (StateMachineInstance *)operator_new(0x18);
        puVar8 = *(undefined8 **)(this + 0x160);
        puVar41 = *(undefined8 **)(this + 0x168);
        *(long *)(local_b8 + 8) = lVar40;
        *(StateMachineInstance **)(local_b8 + 0x10) = this;
        *(undefined ***)local_b8 = &PTR_FUN_00652aa8;
        if (puVar8 < puVar41) {
          *puVar8 = local_b8;
          *(undefined8 **)(this + 0x160) = puVar8 + 1;
        }
        else {
          uVar47 = FUN_003471d0(local_108,&local_b8);
          *(undefined8 *)(this + 0x160) = uVar47;
          if (local_b8 != (StateMachineInstance *)0x0) {
            (**(code **)(*(long *)local_b8 + 8))(local_b8);
          }
        }
        unaff_x21 = *(undefined8 **)(lVar40 + 0x1d8);
        this = local_e8;
        for (puVar8 = *(undefined8 **)(lVar40 + 0x1d0); local_e8 = this, unaff_x21 != puVar8;
            puVar8 = puVar8 + 1) {
          plVar43 = (long *)*puVar8;
          uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0x5f);
          if ((((uVar9 & 1) != 0) ||
              (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0x61), (uVar9 & 1) != 0)) &&
             (lVar19 = plVar43[0x15], lVar19 != 0)) {
            unaff_x26 = *(StateMachineInstance **)(lVar19 + 0x28);
            *(long *)(lVar19 + 0x18) = lVar40;
            if (unaff_x26 < *(StateMachineInstance **)(lVar19 + 0x30)) {
              unaff_x24 = unaff_x26 + 8;
              *(StateMachineInstance **)unaff_x26 = local_100;
              unaff_x26 = unaff_x24;
            }
            else {
              unaff_x23 = *(StateMachineInstance **)(lVar19 + 0x20);
              pSVar29 = unaff_x26 + -(long)unaff_x23;
              uVar9 = ((long)pSVar29 >> 3) + 1;
              if (uVar9 >> 0x3d != 0) goto LAB_0034a504;
              uVar18 = (long)*(StateMachineInstance **)(lVar19 + 0x30) - (long)unaff_x23;
              uVar23 = (long)uVar18 >> 2;
              if (uVar23 <= uVar9) {
                uVar23 = uVar9;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar23 = 0x1fffffffffffffff;
              }
              if (uVar23 == 0) {
                pvVar7 = (void *)0x0;
              }
              else {
                if (uVar23 >> 0x3d != 0) goto LAB_0034a508;
                pvVar7 = operator_new(uVar23 << 3);
              }
              puVar41 = (undefined8 *)((long)pvVar7 + ((long)pSVar29 >> 3) * 8);
              unaff_x24 = (StateMachineInstance *)(puVar41 + 1);
              *puVar41 = local_100;
              if ((long)unaff_x26 - (long)unaff_x23 != 0) {
                uVar9 = ((long)unaff_x26 - (long)unaff_x23) - 8;
                if ((uVar9 < 0x38) ||
                   (unaff_x26 + (-(long)pSVar29 - (long)pvVar7) < (StateMachineInstance *)0x20)) {
LAB_00349b00:
                  do {
                    unaff_x26 = unaff_x26 + -8;
                    puVar41 = puVar41 + -1;
                    *puVar41 = *(undefined8 *)unaff_x26;
                  } while (unaff_x26 != unaff_x23);
                }
                else {
                  puVar28 = puVar41 + -2;
                  pSVar22 = unaff_x26 + -0x10;
                  uVar9 = (uVar9 >> 3) + 1;
                  uVar24 = uVar9 & 0x3ffffffffffffffc;
                  unaff_x26 = unaff_x26 + uVar24 * -8;
                  uVar18 = uVar24;
                  do {
                    pSVar35 = pSVar22 + -8;
                    uVar48 = *(undefined8 *)(pSVar22 + -0x10);
                    uVar45 = *(undefined8 *)(pSVar22 + 8);
                    uVar47 = *(undefined8 *)pSVar22;
                    uVar18 = uVar18 - 4;
                    pSVar22 = pSVar22 + -0x20;
                    puVar28[-1] = *(undefined8 *)pSVar35;
                    puVar28[-2] = uVar48;
                    puVar28[1] = uVar45;
                    *puVar28 = uVar47;
                    puVar28 = puVar28 + -4;
                  } while (uVar18 != 0);
                  puVar41 = puVar41 + -uVar24;
                  if (uVar9 != uVar24) goto LAB_00349b00;
                }
                unaff_x26 = *(StateMachineInstance **)(lVar19 + 0x20);
              }
              *(undefined8 **)(lVar19 + 0x20) = puVar41;
              *(StateMachineInstance **)(lVar19 + 0x28) = unaff_x24;
              *(void **)(lVar19 + 0x30) = (void *)((long)pvVar7 + uVar23 * 8);
              if (unaff_x26 != (StateMachineInstance *)0x0) {
                operator_delete(unaff_x26);
              }
            }
            *(StateMachineInstance **)(lVar19 + 0x28) = unaff_x24;
          }
          this = local_e8;
        }
        pSVar42 = pSVar42 + 8;
      } while (pSVar42 != local_f0);
      operator_delete(local_f8);
    }
    __src = *(undefined ***)(local_138 + 0xb30);
    this_03 = (FocusListenerGroup *)(*(long *)(local_138 + 0xb38) - (long)__src);
    if (this_03 != (FocusListenerGroup *)0x0) {
      if ((long)this_03 < 0) goto LAB_0034a520;
      pvVar7 = operator_new((ulong)this_03);
      memcpy(pvVar7,__src,(size_t)this_03);
      pFVar30 = (FocusListenerGroup *)0x0;
      __src = &PTR_FUN_00652af0;
      do {
        unaff_x23 = *(StateMachineInstance **)((long)pvVar7 + (long)pFVar30);
        local_b8 = (StateMachineInstance *)operator_new(0x18);
        puVar8 = *(undefined8 **)(this + 0x160);
        puVar41 = *(undefined8 **)(this + 0x168);
        *(StateMachineInstance **)(local_b8 + 8) = unaff_x23;
        *(StateMachineInstance **)(local_b8 + 0x10) = this;
        *(undefined ***)local_b8 = &PTR_FUN_00652af0;
        if (puVar8 < puVar41) {
          *puVar8 = local_b8;
          *(undefined8 **)(this + 0x160) = puVar8 + 1;
        }
        else {
          uVar47 = FUN_003471d0(local_108,&local_b8);
          *(undefined8 *)(this + 0x160) = uVar47;
          if (local_b8 != (StateMachineInstance *)0x0) {
            (**(code **)(*(long *)local_b8 + 8))(local_b8);
          }
        }
        pFVar30 = pFVar30 + 8;
      } while (this_03 != pFVar30);
      operator_delete(pvVar7);
    }
    pSVar29 = *(StateMachineInstance **)(local_138 + 0xa58);
    lVar40 = *(long *)(local_138 + 0xa60) - (long)pSVar29;
    if (lVar40 == 0) {
      pSVar42 = (StateMachineInstance *)0x0;
    }
    else {
      __src = (undefined **)(lVar40 >> 3);
      pSVar22 = (StateMachineInstance *)0x0;
      do {
        plVar43 = *(long **)(pSVar29 + (long)pSVar22 * 8);
        if ((plVar43 != (long *)0x0) &&
           (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0x239), pSVar42 = pSVar22,
           (uVar9 & 1) != 0)) break;
        pSVar22 = pSVar22 + 1;
        pSVar42 = (StateMachineInstance *)__src;
      } while ((StateMachineInstance *)__src != pSVar22);
    }
    if ((long)pSVar42 * 8 - lVar40 != 0) {
      unaff_x23 = pSVar29 + (long)pSVar42 * 8;
      unaff_x24 = pSVar29 + lVar40;
      unaff_x26 = (StateMachineInstance *)0x1;
      do {
        __src = *(undefined ***)unaff_x23;
        this_01 = (TextInputListenerGroup *)operator_new(0x68);
        pSVar42 = local_e8;
        TextInputListenerGroup::TextInputListenerGroup(this_01,(TextInput *)__src,local_e8);
        pSVar22 = (StateMachineInstance *)operator_new(0x48);
        *(undefined ***)(pSVar22 + 8) = __src;
        *(StateMachineInstance **)(pSVar22 + 0x10) = pSVar42;
        *(undefined4 *)(pSVar22 + 0x18) = 0x40000000;
        *(long *)(pSVar22 + 0x38) = 0;
        *(long *)(pSVar22 + 0x40) = 0;
        *(undefined ***)(pSVar22 + 0x28) = __src;
        *(long *)(pSVar22 + 0x30) = 0;
        *(undefined4 *)(pSVar22 + 0x1c) = 0x100;
        pSVar22[0x20] = (StateMachineInstance)0x1;
        uVar9 = (**(code **)((long)*__src + 0x1f0))(__src);
        if ((uVar9 & 1) != 0) {
          pSVar22[0x1d] = (StateMachineInstance)0x0;
        }
        *(undefined ***)pSVar22 = &PTR_FUN_006529d0;
        FUN_00347370(pSVar22,this_01);
        pSVar29 = local_e8;
        puVar8 = *(undefined8 **)(local_e8 + 0x160);
        if (puVar8 < *(undefined8 **)(local_e8 + 0x168)) {
          *puVar8 = pSVar22;
          *(undefined8 **)(local_e8 + 0x160) = puVar8 + 1;
        }
        else {
          local_b8 = pSVar22;
          uVar47 = FUN_003471d0(local_108,&local_b8);
          *(undefined8 *)(pSVar29 + 0x160) = uVar47;
          if (local_b8 != (StateMachineInstance *)0x0) {
            (**(code **)(*(long *)local_b8 + 8))(local_b8);
          }
        }
        puVar8 = *(undefined8 **)(pSVar29 + 0x178);
        local_b8 = (StateMachineInstance *)this_01;
        if (puVar8 < *(undefined8 **)(pSVar29 + 0x180)) {
          *puVar8 = this_01;
          *(undefined8 **)(pSVar29 + 0x178) = puVar8 + 1;
        }
        else {
          uVar47 = FUN_0034ad30(pSVar29 + 0x170,&local_b8);
          *(undefined8 *)(pSVar29 + 0x178) = uVar47;
          if (local_b8 != (StateMachineInstance *)0x0) {
            (**(code **)(*(long *)local_b8 + 8))(local_b8);
          }
        }
        do {
          unaff_x23 = unaff_x23 + 8;
          if (unaff_x23 == unaff_x24) goto LAB_00349d8c;
          plVar43 = *(long **)unaff_x23;
        } while ((plVar43 == (long *)0x0) ||
                (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0x239), (uVar9 & 1) == 0));
      } while (unaff_x23 != unaff_x24);
    }
LAB_00349d8c:
    pSVar42 = local_e8;
    this_03 = *(FocusListenerGroup **)(local_110 + 0x88);
    unaff_x21 = (undefined8 *)(*(long *)(local_110 + 0x90) - (long)this_03);
    if (unaff_x21 == (undefined8 *)0x0) {
LAB_0034a1f8:
      lVar40 = local_148;
      plVar43 = *(long **)(pSVar42 + 0x230);
      if (plVar43 != (long *)0x0) {
        do {
          lVar31 = plVar43[3];
          lVar19 = *(long *)(*(long *)(pSVar42 + 0x10) + 0xbc0);
          if (lVar19 != 0) {
            FUN_00340fb0(1,lVar19);
            FUN_00340fb0(1,lVar19);
          }
          lVar21 = *(long *)(lVar31 + 0x50);
          *(long *)(lVar31 + 0x50) = lVar19;
          if (lVar21 != 0) {
            FUN_003462d8();
          }
          if (lVar19 != 0) {
            FUN_003462d8(lVar19);
          }
          plVar43 = (long *)*plVar43;
        } while (plVar43 != (long *)0x0);
        for (plVar43 = *(long **)(pSVar42 + 0x230); plVar43 != (long *)0x0;
            plVar43 = (long *)*plVar43) {
          this_02 = (ScriptedObject *)plVar43[3];
          pSVar20 = *(ScriptedObject **)(this_02 + 8);
          if (pSVar20 != (ScriptedObject *)0x0) {
            if (((this_02[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar20 + 0xd8) != 0)) &&
               (*(long *)(*(long *)(pSVar20 + 0xd8) + 0x110) != 0)) {
              ScriptAsset::initScriptedObjectWith(pSVar20);
            }
            ScriptedObject::hydrateScriptInputs(this_02);
          }
        }
      }
      lVar31 = *(long *)(local_138 + 0xa58);
      lVar19 = *(long *)(local_138 + 0xa60) - lVar31;
      if (lVar19 == 0) {
        lVar21 = 0;
      }
      else {
        lVar37 = 0;
        do {
          plVar43 = *(long **)(lVar31 + lVar37 * 8);
          if ((plVar43 != (long *)0x0) &&
             (uVar9 = (**(code **)(*plVar43 + 0x18))(plVar43,0xb), lVar21 = lVar37, (uVar9 & 1) != 0
             )) break;
          lVar37 = lVar37 + 1;
          lVar21 = lVar19 >> 3;
        } while (lVar19 >> 3 != lVar37);
      }
      if (lVar21 * 8 - lVar19 != 0) {
        plVar43 = (long *)(lVar31 + lVar21 * 8);
        do {
          plVar25 = (long *)*plVar43;
          uVar5 = (**(code **)(*plVar25 + 0x10))(plVar25);
          if (uVar5 < 0x280) {
            if (uVar5 != 0x25b) {
              if (uVar5 == 0x275) {
                lVar21 = 0xe0;
                goto LAB_0034a398;
              }
              if (uVar5 != 0x27d) goto LAB_0034a444;
            }
            lVar21 = 0x178;
LAB_0034a398:
            if ((*(byte *)((long)plVar25 + lVar21 + 0x32) & 3) != 0) {
              puVar41 = (undefined8 *)plVar25[0x12];
              for (puVar8 = (undefined8 *)plVar25[0x11]; puVar8 != puVar41; puVar8 = puVar8 + 1) {
                uVar9 = (**(code **)(*(long *)*puVar8 + 0x18))((long *)*puVar8,0x28d);
                if ((uVar9 & 1) != 0) {
                  pFVar38 = (FocusData *)*puVar8;
                  pKVar13 = (KeyboardListenerGroup *)operator_new(0x20);
                  KeyboardListenerGroup::KeyboardListenerGroup
                            (pKVar13,pFVar38,(StateMachineListener *)0x0,pSVar42);
                  puVar8 = *(undefined8 **)(pSVar42 + 0x310);
                  local_b8 = (StateMachineInstance *)pKVar13;
                  if (puVar8 < *(undefined8 **)(pSVar42 + 0x318)) {
                    *puVar8 = pKVar13;
                    *(undefined8 **)(pSVar42 + 0x310) = puVar8 + 1;
                  }
                  else {
                    uVar47 = FUN_0034ab90(pSVar42 + 0x308,&local_b8);
                    *(undefined8 *)(pSVar42 + 0x310) = uVar47;
                    if (local_b8 != (StateMachineInstance *)0x0) {
                      (**(code **)(*(long *)local_b8 + 8))(local_b8);
                    }
                  }
                  break;
                }
              }
            }
          }
          else {
            if (uVar5 < 0x287) {
              if (uVar5 == 0x280) {
                lVar21 = 0xa8;
              }
              else {
                if (uVar5 != 0x286) goto LAB_0034a444;
                lVar21 = 0x18;
              }
              goto LAB_0034a398;
            }
            if ((uVar5 == 0x287) || (uVar5 == 0x3cc)) {
              lVar21 = 0x10;
              goto LAB_0034a398;
            }
          }
LAB_0034a444:
          do {
            plVar43 = plVar43 + 1;
            if (plVar43 == (long *)(lVar31 + lVar19)) goto LAB_0034a474;
            plVar25 = (long *)*plVar43;
          } while ((plVar25 == (long *)0x0) ||
                  (uVar9 = (**(code **)(*plVar25 + 0x18))(plVar25,0xb), (uVar9 & 1) == 0));
        } while (plVar43 != (long *)(lVar31 + lVar19));
      }
LAB_0034a474:
      sortHitComponents(pSVar42);
      local_e0 = 0;
      pSVar22 = local_150;
      if (*(StateMachineInstance **)(pSVar42 + 0x2e8) != (StateMachineInstance *)0x0) {
        pSVar22 = *(StateMachineInstance **)(pSVar42 + 0x2e8);
      }
      Artboard::buildFocusTree(*(Artboard **)(pSVar42 + 0x10),pSVar22,&local_e0);
      pvVar7 = local_a0;
      puVar8 = local_90;
      if (local_140 != (StateMachineInstance *)0x0) {
        operator_delete(local_140);
        pvVar7 = local_a0;
        puVar8 = local_90;
      }
      while (puVar8 != (undefined8 *)0x0) {
        pvVar10 = (void *)*puVar8;
        local_a0 = pvVar7;
        operator_delete(puVar8);
        pvVar7 = local_a0;
        puVar8 = (undefined8 *)pvVar10;
      }
      local_a0 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      if (*(long *)(lVar40 + 0x28) == local_70) {
        return;
      }
LAB_0034a514:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = local_e8;
    if (-1 < (long)unaff_x21) {
      pSVar22 = local_e8 + 0x220;
      pSVar33 = (StateMachineInstance *)operator_new((ulong)unaff_x21);
      local_f0 = pSVar33 + (long)unaff_x21;
      memcpy(pSVar33,this_03,(size_t)unaff_x21);
      pSVar29 = pSVar42 + 0x230;
      pSVar35 = pSVar33;
      do {
        lVar40 = (**(code **)(**(long **)pSVar35 + 0x58))(*(long **)pSVar35,local_118);
        uVar23 = *(ulong *)pSVar35;
        pSVar39 = *(StateMachineInstance **)(pSVar42 + 0x228);
        uVar9 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
        uVar9 = (uVar23 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
        pSVar15 = (StateMachineInstance *)((uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297);
        if (pSVar39 != (StateMachineInstance *)0x0) {
          uVar47 = NEON_cnt(pSVar39,1);
          uVar44 = NEON_uaddlv(uVar47,1);
          uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
          if (uVar9 < 2) {
            unaff_x26 = (StateMachineInstance *)((ulong)pSVar15 & (ulong)(pSVar39 + -1));
          }
          else {
            unaff_x26 = pSVar15;
            if (pSVar39 <= pSVar15) {
              uVar18 = 0;
              if (pSVar39 != (StateMachineInstance *)0x0) {
                uVar18 = (ulong)pSVar15 / (ulong)pSVar39;
              }
              unaff_x26 = pSVar15 + -(uVar18 * (long)pSVar39);
            }
          }
          puVar8 = *(undefined8 **)(*(long *)pSVar22 + (long)unaff_x26 * 8);
          pSVar42 = local_e8;
          if ((puVar8 != (undefined8 *)0x0) && (plVar43 = (long *)*puVar8, plVar43 != (long *)0x0))
          {
            do {
              pSVar27 = (StateMachineInstance *)plVar43[1];
              if (pSVar27 == pSVar15) {
                if (plVar43[2] == uVar23) goto LAB_0034a190;
              }
              else {
                if (uVar9 < 2) {
                  pSVar27 = (StateMachineInstance *)((ulong)pSVar27 & (ulong)(pSVar39 + -1));
                }
                else if (pSVar39 <= pSVar27) {
                  uVar18 = 0;
                  if (pSVar39 != (StateMachineInstance *)0x0) {
                    uVar18 = (ulong)pSVar27 / (ulong)pSVar39;
                  }
                  pSVar27 = pSVar27 + -(uVar18 * (long)pSVar39);
                }
                if (pSVar27 != unaff_x26) break;
              }
              plVar43 = (long *)*plVar43;
            } while (plVar43 != (long *)0x0);
          }
        }
        plVar43 = (long *)operator_new(0x20);
        *plVar43 = 0;
        plVar43[1] = (long)pSVar15;
        lVar19 = *(long *)(pSVar42 + 0x238);
        fVar46 = *(float *)(pSVar42 + 0x240);
        plVar43[2] = uVar23;
        plVar43[3] = 0;
        if ((pSVar39 == (StateMachineInstance *)0x0) ||
           (fVar46 * (float)pSVar39 < (float)(lVar19 + 1))) {
          if (pSVar39 < (StateMachineInstance *)0x3) {
            uVar9 = 1;
          }
          else {
            uVar9 = (ulong)(((ulong)pSVar39 & (ulong)(pSVar39 + -1)) != 0);
          }
          pSVar42 = (StateMachineInstance *)(uVar9 | (long)pSVar39 << 1);
          pSVar27 = (StateMachineInstance *)(long)((float)(lVar19 + 1) / fVar46);
          if (pSVar42 <= pSVar27) {
            pSVar42 = pSVar27;
          }
          if (pSVar42 + -1 == (StateMachineInstance *)0x0) {
            pSVar42 = (StateMachineInstance *)0x2;
          }
          else if (((ulong)pSVar42 & (ulong)(pSVar42 + -1)) != 0) {
            pSVar42 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar42);
            pSVar39 = *(StateMachineInstance **)(local_e8 + 0x228);
          }
          if (pSVar39 < pSVar42) {
LAB_00349f70:
            pSVar39 = pSVar42;
            if ((ulong)pSVar39 >> 0x3d != 0) goto LAB_0034a508;
            pvVar7 = operator_new((long)pSVar39 << 3);
            pvVar10 = *(void **)pSVar22;
            *(void **)pSVar22 = pvVar7;
            if (pvVar10 != (void *)0x0) {
              operator_delete(pvVar10);
            }
            pSVar42 = (StateMachineInstance *)0x0;
            *(StateMachineInstance **)(local_e8 + 0x228) = pSVar39;
            do {
              *(undefined8 *)(*(long *)pSVar22 + (long)pSVar42 * 8) = 0;
              pSVar42 = pSVar42 + 1;
            } while (pSVar39 != pSVar42);
            plVar25 = *(long **)pSVar29;
            if (plVar25 != (long *)0x0) {
              pSVar42 = (StateMachineInstance *)plVar25[1];
              uVar47 = NEON_cnt(pSVar39,1);
              uVar44 = NEON_uaddlv(uVar47,1);
              uVar9 = CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44) & 0xffffffff;
              if (uVar9 < 2) {
                pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(pSVar39 + -1));
              }
              else if (pSVar39 <= pSVar42) {
                uVar23 = 0;
                if (pSVar39 != (StateMachineInstance *)0x0) {
                  uVar23 = (ulong)pSVar42 / (ulong)pSVar39;
                }
                pSVar42 = pSVar42 + -(uVar23 * (long)pSVar39);
              }
              *(StateMachineInstance **)(*(long *)pSVar22 + (long)pSVar42 * 8) = pSVar29;
              plVar26 = (long *)*plVar25;
              if (plVar26 != (long *)0x0) {
                do {
                  pSVar27 = (StateMachineInstance *)plVar26[1];
                  if (uVar9 < 2) {
                    pSVar27 = (StateMachineInstance *)((ulong)pSVar27 & (ulong)(pSVar39 + -1));
                  }
                  else if (pSVar39 <= pSVar27) {
                    uVar23 = 0;
                    if (pSVar39 != (StateMachineInstance *)0x0) {
                      uVar23 = (ulong)pSVar27 / (ulong)pSVar39;
                    }
                    pSVar27 = pSVar27 + -(uVar23 * (long)pSVar39);
                  }
                  if (pSVar27 != pSVar42) {
                    if (*(long *)(*(long *)pSVar22 + (long)pSVar27 * 8) == 0) {
                      *(long **)(*(long *)pSVar22 + (long)pSVar27 * 8) = plVar25;
                      pSVar42 = pSVar27;
                    }
                    else {
                      *plVar25 = *plVar26;
                      *plVar26 = **(long **)(*(long *)pSVar22 + (long)pSVar27 * 8);
                      **(undefined8 **)(*(long *)pSVar22 + (long)pSVar27 * 8) = plVar26;
                      plVar26 = plVar25;
                    }
                  }
                  plVar25 = plVar26;
                  plVar26 = (long *)*plVar25;
                } while (plVar26 != (long *)0x0);
              }
            }
          }
          else if (pSVar42 < pSVar39) {
            pSVar27 = (StateMachineInstance *)
                      (long)((float)*(ulong *)(local_e8 + 0x238) / *(float *)(local_e8 + 0x240));
            if (pSVar39 < (StateMachineInstance *)0x3) {
LAB_0034a1ac:
              pSVar27 = (StateMachineInstance *)std::__ndk1::__next_prime((ulong)pSVar27);
            }
            else {
              uVar47 = NEON_cnt(pSVar39,1);
              uVar44 = NEON_uaddlv(uVar47,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar47 >> 0x10),uVar44)) goto LAB_0034a1ac;
              if ((StateMachineInstance *)0x1 < pSVar27) {
                pSVar27 = (StateMachineInstance *)(1L << (-LZCOUNT(pSVar27 + -1) & 0x3fU));
              }
            }
            if (pSVar42 <= pSVar27) {
              pSVar42 = pSVar27;
            }
            if (pSVar42 < pSVar39) {
              if (pSVar42 != (StateMachineInstance *)0x0) goto LAB_00349f70;
              pvVar7 = *(void **)pSVar22;
              *(undefined8 *)pSVar22 = 0;
              if (pvVar7 != (void *)0x0) {
                operator_delete(pvVar7);
              }
              pSVar39 = (StateMachineInstance *)0x0;
              *(undefined8 *)(local_e8 + 0x228) = 0;
            }
            else {
              pSVar39 = *(StateMachineInstance **)(local_e8 + 0x228);
            }
          }
          if (((ulong)pSVar39 & (ulong)(pSVar39 + -1)) == 0) {
            unaff_x26 = (StateMachineInstance *)((ulong)(pSVar39 + -1) & (ulong)pSVar15);
          }
          else {
            unaff_x26 = pSVar15;
            if (pSVar39 <= pSVar15) {
              uVar9 = 0;
              if (pSVar39 != (StateMachineInstance *)0x0) {
                uVar9 = (ulong)pSVar15 / (ulong)pSVar39;
              }
              unaff_x26 = pSVar15 + -(uVar9 * (long)pSVar39);
            }
          }
        }
        lVar19 = *(long *)pSVar22;
        plVar25 = *(long **)(lVar19 + (long)unaff_x26 * 8);
        if (plVar25 == (long *)0x0) {
          lVar31 = *(long *)pSVar29;
          *(long **)pSVar29 = plVar43;
          *plVar43 = lVar31;
          *(StateMachineInstance **)(lVar19 + (long)unaff_x26 * 8) = pSVar29;
          if (*plVar43 != 0) {
            pSVar42 = *(StateMachineInstance **)(*plVar43 + 8);
            if (((ulong)pSVar39 & (ulong)(pSVar39 + -1)) == 0) {
              pSVar42 = (StateMachineInstance *)((ulong)pSVar42 & (ulong)(pSVar39 + -1));
            }
            else if (pSVar39 <= pSVar42) {
              uVar9 = 0;
              if (pSVar39 != (StateMachineInstance *)0x0) {
                uVar9 = (ulong)pSVar42 / (ulong)pSVar39;
              }
              pSVar42 = pSVar42 + -(uVar9 * (long)pSVar39);
            }
            plVar25 = (long *)(*(long *)pSVar22 + (long)pSVar42 * 8);
            goto LAB_0034a17c;
          }
        }
        else {
          *plVar43 = *plVar25;
LAB_0034a17c:
          *plVar25 = (long)plVar43;
        }
        *(long *)(local_e8 + 0x238) = *(long *)(local_e8 + 0x238) + 1;
LAB_0034a190:
        pSVar42 = local_e8;
        pSVar35 = pSVar35 + 8;
        plVar43[3] = lVar40;
      } while (pSVar35 != local_f0);
      operator_delete(pSVar33);
      goto LAB_0034a1f8;
    }
  }
  else {
    pSVar29 = (StateMachineInstance *)((long)this_03 >> 3);
    if ((ulong)pSVar29 >> 0x3d == 0) {
      pvVar7 = operator_new((ulong)this_03);
      memset(pvVar7,0,(size_t)this_03);
      pSVar22 = local_e8;
      unaff_x23 = (StateMachineInstance *)0x0;
      if (pSVar29 < (StateMachineInstance *)0x2) {
        pSVar29 = (StateMachineInstance *)0x1;
      }
      *(void **)(local_e8 + 0x130) = pvVar7;
      *(FocusListenerGroup **)(local_e8 + 0x138) =
           (FocusListenerGroup *)((long)pvVar7 + (long)this_03);
      *(FocusListenerGroup **)(local_e8 + 0x140) =
           (FocusListenerGroup *)((long)pvVar7 + (long)this_03);
      do {
        if ((unaff_x23 <
             (StateMachineInstance *)
             (*(long *)(local_110 + 0x48) - *(long *)(local_110 + 0x40) >> 3)) &&
           (pSVar32 = *(StateMachineTrigger **)(*(long *)(local_110 + 0x40) + (long)unaff_x23 * 8),
           pSVar32 != (StateMachineTrigger *)0x0)) {
          sVar4 = (**(code **)(*(long *)pSVar32 + 0x10))(pSVar32);
          if (sVar4 == 0x38) {
            this_00 = (SMIBool *)operator_new(0x20);
            SMINumber::SMINumber((SMINumber *)this_00,(StateMachineNumber *)pSVar32,pSVar22);
          }
          else if (sVar4 == 0x3a) {
            this_00 = (SMIBool *)operator_new(0x38);
            SMITrigger::SMITrigger((SMITrigger *)this_00,pSVar32,pSVar22);
          }
          else {
            if (sVar4 != 0x3b) goto LAB_00347c48;
            this_00 = (SMIBool *)operator_new(0x20);
            SMIBool::SMIBool(this_00,(StateMachineBool *)pSVar32,pSVar22);
          }
          *(SMIBool **)(*(long *)(pSVar22 + 0x130) + (long)unaff_x23 * 8) = this_00;
        }
LAB_00347c48:
        unaff_x23 = unaff_x23 + 1;
        unaff_x24 = pSVar29;
      } while (pSVar29 != unaff_x23);
      goto LAB_00347cd4;
    }
    FUN_0034bb30();
LAB_0034a51c:
    FUN_0034aee4();
LAB_0034a520:
    FUN_0034af0c();
  }
  FUN_0034af20();
LAB_0034a528:
  FUN_0034ba6c();
LAB_0034a52c:
  auVar50 = FUN_0034ba44();
  plVar43 = auVar50._8_8_;
  puVar8 = auVar50._0_8_;
  pcStack_198 = FUN_0034a530;
  lVar40 = tpidr_el0;
  lStack_1a8 = *(long *)(lVar40 + 0x28);
  lVar19 = puVar8[4];
  puStack_1a0 = &stack0xffffffffffffffa0;
  pSStack_190 = this;
  pSStack_180 = unaff_x24;
  pSStack_178 = unaff_x23;
  pSStack_170 = (StateMachineInstance *)__src;
  puStack_168 = unaff_x21;
  pFStack_160 = this_03;
  pSStack_158 = pSVar29;
  if (lVar19 == 0) {
    if (plVar43 == (long *)0x0) goto LAB_0034a720;
  }
  else {
    if (*(long **)(lVar19 + 8) == plVar43) goto LAB_0034a720;
    lVar19 = *(long *)(lVar19 + 8);
    plVar25 = *(long **)(lVar19 + 0x10);
    plVar26 = *(long **)(lVar19 + 0x18);
    if (plVar25 != plVar26) {
      do {
        plVar14 = (long *)*plVar25;
        if (*(int *)((long)plVar14 + 0xc) == 1) {
          (**(code **)(*plVar14 + 0x58))(plVar14,*puVar8);
        }
        plVar25 = plVar25 + 1;
      } while (plVar25 != plVar26);
      lVar19 = *(long *)(puVar8[4] + 8);
    }
    plVar26 = *(long **)(lVar19 + 0x30);
    for (plVar25 = *(long **)(lVar19 + 0x28); plVar25 != plVar26; plVar25 = plVar25 + 1) {
      plVar14 = (long *)*plVar25;
      if ((*(byte *)((long)plVar14 + 0xc) & 1) != 0) {
        uStack_1d0 = 0;
        uStack_1b0 = 6;
        (**(code **)(*plVar14 + 0x58))(plVar14,*puVar8,&uStack_1d0);
        if (uStack_1b0 != 0xffffffff) {
          (*(code *)(&PTR_FUN_00667318)[uStack_1b0])(&uStack_1d1,&uStack_1d0);
        }
      }
    }
  }
  if (plVar43 == (long *)0x0) {
    puVar8[4] = 0;
  }
  else {
    (**(code **)(*plVar43 + 0x58))(&uStack_1d0,plVar43,puVar8[2]);
    lVar19 = CONCAT71(uStack_1cf,uStack_1d0);
    puVar8[4] = lVar19;
    if (lVar19 != 0) {
      lVar19 = *(long *)(lVar19 + 8);
      plVar43 = *(long **)(lVar19 + 0x10);
      plVar25 = *(long **)(lVar19 + 0x18);
      if (plVar43 != plVar25) {
        do {
          plVar26 = (long *)*plVar43;
          if (*(int *)((long)plVar26 + 0xc) == 0) {
            (**(code **)(*plVar26 + 0x58))(plVar26,*puVar8);
          }
          plVar43 = plVar43 + 1;
        } while (plVar43 != plVar25);
        lVar19 = *(long *)(puVar8[4] + 8);
      }
      plVar25 = *(long **)(lVar19 + 0x30);
      for (plVar43 = *(long **)(lVar19 + 0x28); plVar43 != plVar25; plVar43 = plVar43 + 1) {
        plVar26 = (long *)*plVar43;
        if ((*(byte *)((long)plVar26 + 0xc) & 1) == 0) {
          uStack_1d0 = 0;
          uStack_1b0 = 6;
          (**(code **)(*plVar26 + 0x58))(plVar26,*puVar8,&uStack_1d0);
          if (uStack_1b0 != 0xffffffff) {
            (*(code *)(&PTR_FUN_00667318)[uStack_1b0])(&uStack_1d1,&uStack_1d0);
          }
        }
      }
    }
  }
LAB_0034a720:
  if (*(long *)(lVar40 + 0x28) != lStack_1a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00348dd4:
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar41) goto LAB_0034905c;
  goto LAB_00348db8;
code_r0x003491c8:
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar41) goto LAB_0034938c;
  goto LAB_003491ac;
LAB_0034a504:
  FUN_0034b588();
LAB_0034a508:
                    /* WARNING: Subroutine does not return */
  FUN_00324008();
}


// ===== 0034a530  FUN_0034a530 =====

void FUN_0034a530(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 uStack_81;
  undefined1 local_80;
  undefined7 uStack_7f;
  uint local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1[4];
  if (lVar4 == 0) {
    if (param_2 == (long *)0x0) goto LAB_0034a720;
  }
  else {
    if (*(long **)(lVar4 + 8) == param_2) goto LAB_0034a720;
    lVar4 = *(long *)(lVar4 + 8);
    plVar5 = *(long **)(lVar4 + 0x10);
    plVar1 = *(long **)(lVar4 + 0x18);
    if (plVar5 != plVar1) {
      do {
        plVar3 = (long *)*plVar5;
        if (*(int *)((long)plVar3 + 0xc) == 1) {
          (**(code **)(*plVar3 + 0x58))(plVar3,*param_1);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
      lVar4 = *(long *)(param_1[4] + 8);
    }
    plVar1 = *(long **)(lVar4 + 0x30);
    for (plVar5 = *(long **)(lVar4 + 0x28); plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar3 = (long *)*plVar5;
      if ((*(byte *)((long)plVar3 + 0xc) & 1) != 0) {
        local_80 = 0;
        local_60 = 6;
        (**(code **)(*plVar3 + 0x58))(plVar3,*param_1,&local_80);
        if (local_60 != 0xffffffff) {
          (*(code *)(&PTR_FUN_00667318)[local_60])(&uStack_81,&local_80);
        }
      }
    }
  }
  if (param_2 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*param_2 + 0x58))(&local_80,param_2,param_1[2]);
    lVar4 = CONCAT71(uStack_7f,local_80);
    param_1[4] = lVar4;
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 8);
      plVar5 = *(long **)(lVar4 + 0x10);
      plVar1 = *(long **)(lVar4 + 0x18);
      if (plVar5 != plVar1) {
        do {
          plVar3 = (long *)*plVar5;
          if (*(int *)((long)plVar3 + 0xc) == 0) {
            (**(code **)(*plVar3 + 0x58))(plVar3,*param_1);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar1);
        lVar4 = *(long *)(param_1[4] + 8);
      }
      plVar1 = *(long **)(lVar4 + 0x30);
      for (plVar5 = *(long **)(lVar4 + 0x28); plVar5 != plVar1; plVar5 = plVar5 + 1) {
        plVar3 = (long *)*plVar5;
        if ((*(byte *)((long)plVar3 + 0xc) & 1) == 0) {
          local_80 = 0;
          local_60 = 6;
          (**(code **)(*plVar3 + 0x58))(plVar3,*param_1,&local_80);
          if (local_60 != 0xffffffff) {
            (*(code *)(&PTR_FUN_00667318)[local_60])(&uStack_81,&local_80);
          }
        }
      }
    }
  }
LAB_0034a720:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a750  FUN_0034a750 =====

void FUN_0034a750(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar14 = param_1[1];
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x23 = uVar6 & uVar14 - 1;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar11 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar11 = plVar7[1];
        if (uVar11 == uVar6) {
          if (plVar7[2] == param_2) {
            return;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar11 = uVar11 & uVar14 - 1;
          }
          else if (uVar14 <= uVar11) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar5 * uVar14;
          }
          if (uVar11 != unaff_x23) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)operator_new(0x20);
  lVar3 = param_1[3];
  lVar8 = *param_3;
  fVar17 = *(float *)(param_1 + 4);
  *plVar7 = 0;
  plVar7[1] = uVar6;
  plVar7[2] = lVar8;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (fVar17 * (float)uVar14 < (float)(lVar3 + 1))) {
    if (uVar14 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar9 = uVar9 | uVar14 << 1;
    uVar11 = (ulong)((float)(lVar3 + 1) / fVar17);
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__ndk1::__next_prime(uVar9);
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar9) {
LAB_0034a8f0:
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      pvVar2 = operator_new(uVar9 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      uVar14 = 0;
      param_1[1] = uVar9;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
      plVar10 = (long *)param_1[2];
      uVar14 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar16 = NEON_cnt(uVar9,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar11 = uVar11 & uVar9 - 1;
        }
        else if (uVar9 <= uVar11) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar11 / uVar9;
          }
          uVar11 = uVar11 - uVar13 * uVar9;
        }
        *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
          do {
            uVar13 = plVar12[1];
            if (uVar5 < 2) {
              uVar13 = uVar13 & uVar9 - 1;
            }
            else if (uVar9 <= uVar13) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar1 * uVar9;
            }
            if (uVar13 != uVar11) {
              if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                *(long **)(*param_1 + uVar13 * 8) = plVar10;
                uVar11 = uVar13;
              }
              else {
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar13 * 8);
                **(undefined8 **)(*param_1 + uVar13 * 8) = plVar12;
                plVar12 = plVar10;
              }
            }
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else if (uVar9 < uVar14) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_0034ab34:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15)) goto LAB_0034ab34;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar14) {
        if (uVar9 != 0) goto LAB_0034a8f0;
        pvVar2 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x23 = uVar6 - uVar9 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar8 = *plVar10;
    *plVar10 = (long)plVar7;
    *plVar7 = lVar8;
    *(long **)(lVar3 + unaff_x23 * 8) = plVar10;
    if (*plVar7 == 0) goto LAB_0034ab08;
    uVar6 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
    }
    else if (uVar14 <= uVar6) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar9 * uVar14;
    }
    plVar10 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar7 = *plVar10;
  }
  *plVar10 = (long)plVar7;
LAB_0034ab08:
  param_1[3] = param_1[3] + 1;
  return;
}


// ===== 0034ab90  FUN_0034ab90 =====

long * FUN_0034ab90(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0034ba58();
LAB_0034ad2c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0034ad2c;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0034ad04;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_0034acac:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_0034acac;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0034ad04:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0034ad30  FUN_0034ad30 =====

long * FUN_0034ad30(ulong *param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar14 = param_1[1] - *param_1;
  lVar11 = lVar14 >> 3;
  uVar6 = lVar11 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0034ba30();
LAB_0034aecc:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0034aecc;
    pvVar2 = operator_new(uVar5 << 3);
  }
  lVar7 = *param_2;
  *param_2 = 0;
  plVar3 = (long *)((long)pvVar2 + lVar11 * 8);
  plVar15 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
  plVar10 = plVar3 + 1;
  *plVar3 = lVar7;
  lVar11 = (long)plVar13 - (long)plVar15;
  if (lVar11 == 0) {
    *param_1 = (ulong)plVar3;
    param_1[1] = (ulong)plVar10;
    param_1[2] = (ulong)pvVar1;
    goto LAB_0034aea4;
  }
  uVar6 = lVar11 - 8;
  plVar12 = plVar13;
  if ((uVar6 < 0x78) ||
     (((long *)((long)plVar13 + (-8 - (uVar6 & 0xfffffffffffffff8))) < plVar3 &&
      ((long *)((long)pvVar2 + (lVar14 - (uVar6 & 0xfffffffffffffff8)) + -8) < plVar13)))) {
LAB_0034ae4c:
    do {
      plVar12 = plVar12 + -1;
      lVar11 = *plVar12;
      *plVar12 = 0;
      plVar3 = plVar3 + -1;
      *plVar3 = lVar11;
    } while (plVar12 != plVar15);
  }
  else {
    plVar8 = plVar3 + -2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar4 = uVar6 & 0x3ffffffffffffffc;
    plVar12 = plVar13 + -uVar4;
    uVar5 = uVar4;
    do {
      plVar9 = plVar13 + -4;
      lVar16 = plVar13[-3];
      lVar7 = *plVar9;
      lVar14 = plVar13[-1];
      lVar11 = plVar13[-2];
      uVar5 = uVar5 - 4;
      plVar13[-3] = 0;
      *plVar9 = 0;
      plVar13[-1] = 0;
      plVar13[-2] = 0;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar7;
      plVar8[1] = lVar14;
      *plVar8 = lVar11;
      plVar8 = plVar8 + -4;
      plVar13 = plVar9;
    } while (uVar5 != 0);
    plVar3 = plVar3 + -uVar4;
    if (uVar6 != uVar4) goto LAB_0034ae4c;
  }
  plVar13 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  *param_1 = (ulong)plVar3;
  param_1[1] = (ulong)plVar10;
  param_1[2] = (ulong)pvVar1;
  while (plVar15 != plVar13) {
    plVar15 = plVar15 + -1;
    plVar3 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0034aea4:
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar10;
}


// ===== 0034aed0  FUN_0034aed0 =====

void FUN_0034aed0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034aee4  FUN_0034aee4 =====

void FUN_0034aee4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034aef8  FUN_0034aef8 =====

void FUN_0034aef8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034af0c  FUN_0034af0c =====

void FUN_0034af0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034af20  FUN_0034af20 =====

void FUN_0034af20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034af34  rive::StateMachineInstance::sortHitComponents =====

/* rive::StateMachineInstance::sortHitComponents() */

void __thiscall rive::StateMachineInstance::sortHitComponents(StateMachineInstance *this)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  plVar11 = *(long **)(this + 0x158);
  plVar1 = *(long **)(this + 0x160);
  lVar7 = (long)plVar1 - (long)plVar11;
  if (lVar7 == 0) {
    uVar10 = 0;
  }
  else {
    uVar12 = 0;
    uVar10 = 0;
    do {
      plVar2 = *(long **)(*plVar11 + 8);
      if ((plVar2 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1), (uVar3 & 1) != 0)) {
        if (uVar12 != uVar10) {
          lVar4 = *(long *)(this + 0x158);
          uVar3 = -(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
          uVar6 = *(undefined8 *)(lVar4 + uVar3);
          *(undefined8 *)(lVar4 + uVar3) = *(undefined8 *)(lVar4 + uVar12 * 8);
          *(undefined8 *)(lVar4 + uVar12 * 8) = uVar6;
        }
        uVar10 = (ulong)((int)uVar10 + 1);
      }
      plVar11 = plVar11 + 1;
      uVar12 = uVar12 + 1;
    } while (plVar11 != plVar1);
  }
  if (*(long *)(*(long *)(this + 0x10) + 0xbe0) != 0) {
    uVar12 = lVar7 >> 3;
    lVar7 = *(long *)(*(long *)(this + 0x10) + 0xbe0);
    do {
      lVar4 = lVar7;
      lVar7 = *(long *)(lVar4 + 0x160);
    } while (*(long *)(lVar4 + 0x160) != 0);
    do {
      uVar3 = (ulong)(int)uVar10;
      if (uVar3 < uVar12) {
        do {
          lVar7 = *(long *)(this + 0x158);
          lVar8 = *(long *)(lVar7 + uVar3 * 8);
          if (*(long *)(lVar8 + 8) == lVar4) {
            iVar5 = (int)uVar10;
            if (uVar3 != (long)iVar5) {
              lVar9 = (long)iVar5 * 8;
              uVar6 = *(undefined8 *)(lVar7 + lVar9);
              *(long *)(lVar7 + lVar9) = lVar8;
              *(undefined8 *)(lVar7 + uVar3 * 8) = uVar6;
            }
            uVar10 = (ulong)(iVar5 + 1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar12 != uVar3);
        uVar3 = (ulong)(int)uVar10;
      }
    } while ((uVar12 != uVar3) && (lVar4 = *(long *)(lVar4 + 0x168), lVar4 != 0));
  }
  return;
}


// ===== 0034b070  FUN_0034b070 =====

void FUN_0034b070(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*puVar5;
  if (puVar6 == (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    puVar7 = (undefined8 *)puVar5[1];
    puVar3 = puVar6;
    if (puVar7 != puVar6) {
      do {
        puVar7 = puVar7 + -1;
        pvVar4 = (void *)*puVar7;
        if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,pvVar4), iVar2 == 1)) {
          if ((*(byte *)((long)pvVar4 + 0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + 0x48));
          }
          local_50 = (long)pvVar4 + 0x20;
          FUN_0034b070(&local_50);
          operator_delete(pvVar4);
        }
      } while (puVar7 != puVar6);
      puVar3 = *(undefined8 **)*param_1;
    }
    puVar5[1] = puVar6;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      operator_delete(puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b168  FUN_0034b168 =====

void FUN_0034b168(void)

{
  return;
}


// ===== 0034b16c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0034b170  FUN_0034b170 =====

uint FUN_0034b170(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5,
                 byte param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  ArtboardComponentList *this;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  this = *(ArtboardComponentList **)(param_4 + 8);
  uVar7 = (**(code **)(*(long *)this + 0x80))(this);
  if ((uVar7 & 1) == 0) {
    rive::ArtboardComponentList::ensureOrderedListIndices(this);
    piVar12 = *(int **)(this + 0x418);
    if (piVar12 != *(int **)(this + 0x410)) {
      uVar10 = 0;
      do {
        piVar12 = piVar12 + -1;
        iVar2 = *piVar12;
        uVar7 = rive::ArtboardComponentList::worldToLocal(param_1,param_2,this,&local_a0,iVar2);
        if (((uVar7 & 1) != 0) &&
           (plVar8 = (long *)rive::ArtboardComponentList::stateMachineInstance(this,iVar2),
           uVar5 = uStack_9c, uVar4 = local_a0, plVar8 != (long *)0x0)) {
          uVar11 = uVar10;
          if ((param_6 & 1) == 0) {
            if (param_5 - 1U < 4) {
              (**(code **)(*plVar8 + 0x60))(local_a0,uStack_9c,plVar8,param_7);
            }
          }
          else {
            if (param_5 < 4) {
              if (param_5 == 1) {
                pcVar9 = *(code **)(*plVar8 + 0x60);
              }
              else if (param_5 == 2) {
                pcVar9 = *(code **)(*plVar8 + 0x48);
              }
              else {
                if (param_5 != 3) goto LAB_0034b258;
                pcVar9 = *(code **)(*plVar8 + 0x58);
              }
              uVar6 = (*pcVar9)(local_a0,uStack_9c,plVar8,param_7);
            }
            else {
              if (param_5 != 4) {
                if (param_5 == 9) {
                  puVar1 = (undefined8 *)plVar8[0x2c];
                  for (puVar13 = (undefined8 *)plVar8[0x2b]; puVar13 != puVar1;
                      puVar13 = puVar13 + 1) {
                    (**(code **)(*(long *)*puVar13 + 0x30))((long *)*puVar13,param_7);
                  }
                  rive::StateMachineInstance::updateListeners(uVar4,uVar5,0,plVar8,9,param_7);
                }
                else if (param_5 == 10) {
                  puVar1 = (undefined8 *)plVar8[0x2c];
                  for (puVar13 = (undefined8 *)plVar8[0x2b]; puVar13 != puVar1;
                      puVar13 = puVar13 + 1) {
                    (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,param_7);
                  }
                  rive::StateMachineInstance::updateListeners(uVar4,uVar5,0,plVar8,10,param_7);
                  (**(code **)(*plVar8 + 0x50))(uVar4,uVar5,0,plVar8,param_7);
                }
                goto LAB_0034b258;
              }
              uVar6 = (**(code **)(*plVar8 + 0x50))(local_a0,uStack_9c,param_3,plVar8,param_7);
            }
            if ((((uVar10 & 0xff) != 0) || (uVar11 = uVar6, 1 < (uVar6 - 1 & 0xff))) &&
               (uVar11 = 2, (uVar6 & 0xff) != 2 || (uVar10 & 0xff) != 1)) {
              uVar11 = uVar10;
            }
          }
LAB_0034b258:
          param_6 = (uVar11 & 0xff) != 2 & param_6;
          uVar10 = uVar11;
        }
      } while (piVar12 != *(int **)(this + 0x410));
      goto LAB_0034b204;
    }
  }
  uVar10 = 0;
LAB_0034b204:
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


// ===== 0034b444  FUN_0034b444 =====

void FUN_0034b444(void)

{
  return;
}


// ===== 0034b448  FUN_0034b448 =====

void FUN_0034b448(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ArtboardComponentList *this;
  undefined8 *puVar9;
  int *piVar10;
  ulong local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = *(ArtboardComponentList **)(param_3 + 8);
  uVar4 = (**(code **)(*(long *)this + 0x80))(this);
  if ((uVar4 & 1) == 0) {
    rive::ArtboardComponentList::ensureOrderedListIndices(this);
    piVar10 = *(int **)(this + 0x418);
    while (piVar10 != *(int **)(this + 0x410)) {
      piVar10 = piVar10 + -1;
      iVar2 = *piVar10;
      uVar4 = rive::ArtboardComponentList::worldToLocal(param_1,param_2,this,&local_60,iVar2);
      if (((uVar4 & 1) != 0) &&
         (lVar6 = rive::ArtboardComponentList::stateMachineInstance(this,iVar2), lVar6 != 0)) {
        lVar8 = *(long *)(lVar6 + 0x10);
        uVar4 = local_60;
        if (*(char *)(lVar8 + 0xbe9) != '\0') {
          uVar4 = CONCAT44((float)(local_60 >> 0x20) -
                           (float)((ulong)*(undefined8 *)(lVar8 + 0x984) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(lVar8 + 0x200) >> 0x20),
                           (float)local_60 -
                           (float)*(undefined8 *)(lVar8 + 0x984) *
                           (float)*(undefined8 *)(lVar8 + 0x200));
        }
        puVar9 = *(undefined8 **)(lVar6 + 0x158);
        puVar1 = *(undefined8 **)(lVar6 + 0x160);
        if (puVar9 != puVar1) {
          do {
            uVar7 = (**(code **)(*(long *)*puVar9 + 0x20))(uVar4,uVar4 >> 0x20);
            if ((uVar7 & 1) != 0) {
              uVar5 = 1;
              goto LAB_0034b54c;
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar1);
        }
      }
    }
  }
  uVar5 = 0;
LAB_0034b54c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 0034b580  FUN_0034b580 =====

void FUN_0034b580(void)

{
  return;
}


// ===== 0034b584  FUN_0034b584 =====

void FUN_0034b584(void)

{
  return;
}


// ===== 0034b588  FUN_0034b588 =====

void FUN_0034b588(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034b59c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0034b5a0  FUN_0034b5a0 =====

undefined4
FUN_0034b5a0(float param_1,float param_2,undefined4 param_3,long param_4,int param_5,ulong param_6,
            undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  plVar14 = *(long **)(param_4 + 8);
  uVar11 = (**(code **)(*plVar14 + 0x80))(plVar14);
  if ((((uVar11 & 1) == 0) && ((char)plVar14[0x2f] == '\0')) && (plVar14[0x36] != 0)) {
    fVar22 = *(float *)((long)plVar14 + 0xa4);
    fVar21 = *(float *)(plVar14 + 0x16);
    fVar20 = (float)plVar14[0x15];
    fVar24 = -fVar20;
    fVar19 = (float)((ulong)plVar14[0x15] >> 0x20);
    fVar25 = (float)NEON_fmadd(fVar22,fVar21,fVar24 * fVar19);
    if (fVar25 != 0.0) {
      puVar16 = (undefined8 *)plVar14[0x3a];
      puVar1 = (undefined8 *)plVar14[0x3b];
      if (puVar1 != puVar16) {
        uVar10 = 0;
        fVar25 = 1.0 / fVar25;
        fVar26 = (float)*(undefined8 *)((long)plVar14 + 0xb4);
        fVar27 = (float)((ulong)*(undefined8 *)((long)plVar14 + 0xb4) >> 0x20);
        uVar23 = NEON_rev64(CONCAT44(fVar27 * -fVar22,fVar26 * -fVar21),4);
        fVar21 = fVar21 * fVar25;
        fVar24 = fVar24 * fVar25;
        auVar18._4_4_ = fVar24;
        auVar18._0_4_ = fVar21;
        auVar18._8_4_ = -fVar19 * fVar25;
        auVar18._12_4_ = fVar22 * fVar25;
        auVar3._4_4_ = fVar24;
        auVar3._0_4_ = fVar21;
        auVar3._8_4_ = -fVar19 * fVar25;
        auVar3._12_4_ = fVar22 * fVar25;
        auVar18 = NEON_ext(auVar18,auVar3,8,1);
        uVar23 = NEON_rev64(CONCAT44(fVar25 * ((float)((ulong)uVar23 >> 0x20) + fVar27 * fVar19),
                                     fVar25 * ((float)uVar23 + fVar26 * fVar20)),4);
        fVar20 = (float)((ulong)uVar23 >> 0x20) + auVar18._4_4_ * param_2 + fVar24 * param_1;
        uVar11 = CONCAT44(fVar20,(float)uVar23 + auVar18._0_4_ * param_2 + fVar21 * param_1);
        do {
          plVar14 = (long *)*puVar16;
          uVar12 = (**(code **)(*plVar14 + 0x18))(plVar14,0x5f);
          if ((uVar12 & 1) != 0) {
            if ((param_6 & 1) == 0) {
              if ((param_5 - 1U < 4) && (plVar14 = (long *)plVar14[0x15], plVar14 != (long *)0x0)) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar11;
                (**(code **)(*plVar14 + 0x60))(auVar4,fVar20,plVar14,param_7);
              }
            }
            else if (param_5 < 4) {
              if (param_5 == 1) {
                plVar14 = (long *)plVar14[0x15];
                if (plVar14 == (long *)0x0) {
LAB_0034b6c8:
                  uVar10 = 0;
                  goto LAB_0034b6cc;
                }
                pcVar13 = *(code **)(*plVar14 + 0x60);
              }
              else if (param_5 == 2) {
                plVar14 = (long *)plVar14[0x15];
                if (plVar14 == (long *)0x0) goto LAB_0034b6c8;
                pcVar13 = *(code **)(*plVar14 + 0x48);
              }
              else {
                if (param_5 != 3) goto LAB_0034b6cc;
                plVar14 = (long *)plVar14[0x15];
                if (plVar14 == (long *)0x0) goto LAB_0034b6c8;
                pcVar13 = *(code **)(*plVar14 + 0x58);
              }
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar11;
              uVar10 = (*pcVar13)(auVar8,fVar20,plVar14,param_7);
            }
            else if (param_5 == 4) {
              plVar14 = (long *)plVar14[0x15];
              if (plVar14 == (long *)0x0) goto LAB_0034b6c8;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar11;
              uVar10 = (**(code **)(*plVar14 + 0x50))(auVar7,fVar20,param_3,plVar14,param_7);
            }
            else if (param_5 == 9) {
              lVar15 = plVar14[0x15];
              if (lVar15 != 0) {
                puVar2 = *(undefined8 **)(lVar15 + 0x160);
                for (puVar17 = *(undefined8 **)(lVar15 + 0x158); puVar17 != puVar2;
                    puVar17 = puVar17 + 1) {
                  (**(code **)(*(long *)*puVar17 + 0x30))((long *)*puVar17,param_7);
                }
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar11;
                rive::StateMachineInstance::updateListeners(auVar9,fVar20,0,lVar15,9,param_7);
              }
            }
            else if ((param_5 == 10) && (plVar14 = (long *)plVar14[0x15], plVar14 != (long *)0x0)) {
              puVar2 = (undefined8 *)plVar14[0x2c];
              for (puVar17 = (undefined8 *)plVar14[0x2b]; puVar17 != puVar2; puVar17 = puVar17 + 1)
              {
                (**(code **)(*(long *)*puVar17 + 0x28))((long *)*puVar17,param_7);
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar11;
              rive::StateMachineInstance::updateListeners(auVar5,fVar20,0,plVar14,10,param_7);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar11;
              (**(code **)(*plVar14 + 0x50))(auVar6,fVar20,param_3,plVar14,param_7);
            }
          }
LAB_0034b6cc:
          puVar16 = puVar16 + 1;
          if (puVar16 == puVar1) {
            return uVar10;
          }
        } while( true );
      }
    }
  }
  return 0;
}


// ===== 0034b894  FUN_0034b894 =====

void FUN_0034b894(void)

{
  return;
}


// ===== 0034b898  FUN_0034b898 =====

undefined8 FUN_0034b898(float param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_50;
  float fStack_4c;
  
  plVar9 = *(long **)(param_3 + 8);
  uVar6 = (**(code **)(*plVar9 + 0x80))(plVar9);
  if ((((uVar6 & 1) == 0) && ((char)plVar9[0x2f] == '\0')) && (plVar9[0x36] != 0)) {
    fVar14 = *(float *)((long)plVar9 + 0xa4);
    fVar13 = *(float *)(plVar9 + 0x16);
    fVar20 = (float)plVar9[0x15];
    fVar16 = -fVar20;
    fVar21 = (float)((ulong)plVar9[0x15] >> 0x20);
    fVar17 = (float)NEON_fmadd(fVar14,fVar13,fVar16 * fVar21);
    if (fVar17 != 0.0) {
      puVar10 = (undefined8 *)plVar9[0x3a];
      puVar2 = (undefined8 *)plVar9[0x3b];
      if (puVar2 != puVar10) {
        fVar17 = 1.0 / fVar17;
        fVar18 = (float)*(undefined8 *)((long)plVar9 + 0xb4);
        fVar19 = (float)((ulong)*(undefined8 *)((long)plVar9 + 0xb4) >> 0x20);
        uVar15 = NEON_rev64(CONCAT44(fVar19 * -fVar14,fVar18 * -fVar13),4);
        fVar13 = fVar13 * fVar17;
        fVar16 = fVar16 * fVar17;
        auVar12._4_4_ = fVar16;
        auVar12._0_4_ = fVar13;
        auVar12._8_4_ = -fVar21 * fVar17;
        auVar12._12_4_ = fVar14 * fVar17;
        auVar4._4_4_ = fVar16;
        auVar4._0_4_ = fVar13;
        auVar4._8_4_ = -fVar21 * fVar17;
        auVar4._12_4_ = fVar14 * fVar17;
        auVar12 = NEON_ext(auVar12,auVar4,8,1);
        uVar15 = NEON_rev64(CONCAT44(fVar17 * ((float)((ulong)uVar15 >> 0x20) + fVar19 * fVar21),
                                     fVar17 * ((float)uVar15 + fVar18 * fVar20)),4);
        fVar20 = (float)uVar15 + auVar12._0_4_ * param_2 + fVar13 * param_1;
        fVar21 = (float)((ulong)uVar15 >> 0x20) + auVar12._4_4_ * param_2 + fVar16 * param_1;
        do {
          plVar9 = (long *)*puVar10;
          uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,0x5f);
          if (((uVar6 & 1) != 0) && (lVar7 = plVar9[0x15], lVar7 != 0)) {
            lVar8 = *(long *)(lVar7 + 0x10);
            local_50 = fVar20;
            fStack_4c = fVar21;
            if (*(char *)(lVar8 + 0xbe9) != '\0') {
              local_50 = fVar20 - (float)*(undefined8 *)(lVar8 + 0x984) *
                                  (float)*(undefined8 *)(lVar8 + 0x200);
              fStack_4c = fVar21 - (float)((ulong)*(undefined8 *)(lVar8 + 0x984) >> 0x20) *
                                   (float)((ulong)*(undefined8 *)(lVar8 + 0x200) >> 0x20);
            }
            puVar1 = *(undefined8 **)(lVar7 + 0x158);
            puVar3 = *(undefined8 **)(lVar7 + 0x160);
            if (puVar1 != puVar3) {
              do {
                puVar11 = puVar1 + 1;
                auVar5._4_4_ = fStack_4c;
                auVar5._0_4_ = local_50;
                auVar5._8_8_ = 0;
                uVar6 = (**(code **)(*(long *)*puVar1 + 0x20))(auVar5,fStack_4c);
                if ((uVar6 & 1) != 0) break;
                puVar1 = puVar11;
              } while (puVar11 != puVar3);
              if ((uVar6 & 1) != 0) {
                return 1;
              }
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2);
      }
    }
  }
  return 0;
}


// ===== 0034ba30  FUN_0034ba30 =====

void FUN_0034ba30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034ba44  FUN_0034ba44 =====

void FUN_0034ba44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034ba58  FUN_0034ba58 =====

void FUN_0034ba58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034ba6c  FUN_0034ba6c =====

void FUN_0034ba6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034ba80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0034ba84  FUN_0034ba84 =====

undefined8 FUN_0034ba84(void)

{
  return 0x1d9;
}


// ===== 0034ba8c  FUN_0034ba8c =====

bool FUN_0034ba8c(undefined8 param_1,short param_2)

{
  return param_2 == 0x1d9 || param_2 == 9;
}


// ===== 0034baa0  FUN_0034baa0 =====

bool FUN_0034baa0(long param_1,short param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 == 0x27c) {
    puVar2 = (undefined4 *)param_3[2];
    puVar1 = (undefined4 *)(*param_3 + param_3[1]);
    if ((long)puVar1 - (long)puVar2 < 4) {
      uVar3 = 0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      puVar1 = puVar2 + 1;
      uVar3 = *puVar2;
    }
    param_3[2] = (long)puVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  return param_2 == 0x27c;
}


// ===== 0034baf0  FUN_0034baf0 =====

undefined8 FUN_0034baf0(void)

{
  return 0;
}


// ===== 0034baf8  FUN_0034baf8 =====

void FUN_0034baf8(void)

{
  return;
}


// ===== 0034bafc  FUN_0034bafc =====

void FUN_0034bafc(void)

{
  return;
}


// ===== 0034bb00  FUN_0034bb00 =====

void FUN_0034bb00(void)

{
  return;
}


// ===== 0034bb04  FUN_0034bb04 =====

void FUN_0034bb04(undefined8 param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x10));
  return;
}


// ===== 0034bb18  FUN_0034bb18 =====

void FUN_0034bb18(void)

{
  return;
}


// ===== 0034bb1c  FUN_0034bb1c =====

void FUN_0034bb1c(void)

{
  return;
}


// ===== 0034bb20  FUN_0034bb20 =====

void FUN_0034bb20(void)

{
  return;
}


// ===== 0034bb24  FUN_0034bb24 =====

void FUN_0034bb24(void)

{
  return;
}


// ===== 0034bb28  FUN_0034bb28 =====

void FUN_0034bb28(void)

{
  return;
}


// ===== 0034bb2c  FUN_0034bb2c =====

void FUN_0034bb2c(void)

{
  return;
}


// ===== 0034bb30  FUN_0034bb30 =====

void FUN_0034bb30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0034bb44  rive::StateMachineInstance::~StateMachineInstance =====

/* rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  ~StateMachineInstance(this);
  operator_delete(this);
  return;
}


// ===== 0034bb68  rive::StateMachineInstance::name =====

/* rive::StateMachineInstance::name() const */

void rive::StateMachineInstance::name(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x120);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(in_x8 + 8) = uVar3;
    *(undefined8 *)in_x8 = uVar2;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external(in_x8,*(char **)(lVar1 + 0x20),*(ulong *)(lVar1 + 0x18));
  return;
}


// ===== 0034bb98  FUN_0034bb98 =====

undefined8 FUN_0034bb98(void)

{
  return 0;
}


// ===== 0034bba0  FUN_0034bba0 =====

undefined8 FUN_0034bba0(void)

{
  return 1;
}


// ===== 0034bba8  FUN_0034bba8 =====

undefined1  [16] FUN_0034bba8(void)

{
  return ZEXT816(0xbf800000);
}


// ===== 0034bbb0  rive::StateMachineInstance::advanceAndApply =====

/* rive::StateMachineInstance::advanceAndApply(float) */

bool __thiscall
rive::StateMachineInstance::advanceAndApply(StateMachineInstance *this,float param_1)

{
  FocusManager *this_00;
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  bVar2 = advance(this,param_1,true);
  this_00 = (FocusManager *)(this + 0x2c8);
  if (*(FocusManager **)(this + 0x2e8) != (FocusManager *)0x0) {
    this_00 = *(FocusManager **)(this + 0x2e8);
  }
  FocusManager::dropFocusIfFocusTargetHidden(this_00);
  lVar13 = *(long *)(this + 0x10);
  puVar15 = *(undefined8 **)(lVar13 + 0xbb0);
  if (*(undefined8 **)(lVar13 + 0xba8) == puVar15) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    puVar9 = *(undefined8 **)(lVar13 + 0xba8);
    do {
      puVar11 = puVar9 + 1;
      bVar3 = (*(code *)**(undefined8 **)*puVar9)(param_1,(undefined8 *)*puVar9,0xf);
      bVar5 = bVar3 | bVar5;
      puVar9 = puVar11;
    } while (puVar11 != puVar15);
  }
  plVar12 = *(long **)(lVar13 + 0x9c0);
  plVar14 = *(long **)(lVar13 + 0x9b8);
  if (plVar12 != plVar14) {
    bVar3 = 0;
    do {
      lVar13 = *plVar14;
      plVar8 = *(long **)(lVar13 + 0x48);
      if (plVar8 == (long *)0x0) {
        bVar4 = 0;
      }
      else {
        bVar4 = 0;
        if ((*(long *)(lVar13 + 0x38) != 0) && (*(char *)(lVar13 + 0x28) == '\0')) {
          bVar4 = (**(code **)(*plVar8 + 0x88))(param_1,plVar8);
        }
      }
      plVar14 = plVar14 + 1;
      bVar3 = bVar4 | bVar3;
    } while (plVar14 != plVar12);
    bVar5 = bVar3 | bVar5;
  }
  lVar13 = *(long *)(this + 0x10);
  iVar10 = 0;
  bVar5 = param_1 == 0.0 | bVar2 | bVar5;
  do {
    bVar2 = Artboard::updatePass(SUB81(lVar13,0));
    uVar7 = tryChangeState(this);
    if ((uVar7 & 1) == 0) {
      bVar2 = bVar2 | bVar5;
    }
    else {
      advance(this,0.0,false);
      bVar2 = 1;
    }
    lVar13 = *(long *)(this + 0x10);
    puVar15 = *(undefined8 **)(lVar13 + 0xbb0);
    if (*(undefined8 **)(lVar13 + 0xba8) == puVar15) {
      bVar3 = 0;
    }
    else {
      bVar3 = 0;
      puVar9 = *(undefined8 **)(lVar13 + 0xba8);
      do {
        puVar11 = puVar9 + 1;
        bVar5 = (*(code *)**(undefined8 **)*puVar9)(0,(undefined8 *)*puVar9,7);
        bVar3 = bVar5 | bVar3;
        puVar9 = puVar11;
      } while (puVar11 != puVar15);
    }
    plVar12 = *(long **)(lVar13 + 0x9c0);
    plVar14 = *(long **)(lVar13 + 0x9b8);
    if (plVar12 == plVar14) {
      bVar5 = 0;
    }
    else {
      bVar5 = 0;
      do {
        lVar13 = *plVar14;
        plVar8 = *(long **)(lVar13 + 0x48);
        if (plVar8 == (long *)0x0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 0;
          if ((*(long *)(lVar13 + 0x38) != 0) && (*(char *)(lVar13 + 0x28) == '\0')) {
            bVar4 = (**(code **)(*plVar8 + 0x88))(0,plVar8);
          }
        }
        plVar14 = plVar14 + 1;
        bVar5 = bVar4 | bVar5;
      } while (plVar14 != plVar12);
    }
    if (*(long *)(this + 0xe8) != 0) {
      lVar13 = *(long *)(*(long *)(this + 0xe8) + 0x10);
      puVar9 = *(undefined8 **)(lVar13 + 0xb0);
      for (puVar15 = *(undefined8 **)(lVar13 + 0xa8); puVar15 != puVar9; puVar15 = puVar15 + 1) {
        plVar14 = (long *)*puVar15;
        if (plVar14 != (long *)0x0) {
          FUN_00340fb0(1,(long)plVar14 + 0x8c);
        }
        (**(code **)(*plVar14 + 0xa0))(plVar14);
        iVar6 = FUN_00340fe0(0xffffffff,(long)plVar14 + 0x8c);
        if (iVar6 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    bVar5 = bVar5 | bVar3 | bVar2;
    (**(code **)(**(long **)(this + 0x10) + 0x358))();
    lVar13 = *(long *)(this + 0x10);
  } while (((*(ushort *)(lVar13 + 0x60) >> 2 & 1) != 0) && (iVar10 = iVar10 + 1, iVar10 != 5));
  if (((bVar5 & 1) == 0) && (*(long *)(this + 0xf0) == *(long *)(this + 0xf8))) {
    bVar1 = *(long *)(this + 0x1c8) != *(long *)(this + 0x1d0);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 0034be80  rive::StateMachineInstance::bindViewModelInstance =====

/* rive::StateMachineInstance::bindViewModelInstance(rive::rcp<rive::ViewModelInstance>) */

void __thiscall
rive::StateMachineInstance::bindViewModelInstance(StateMachineInstance *this,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  DataContext *pDVar4;
  Artboard *pAVar5;
  DataContext *local_60;
  DataContext *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  clearDataContext(this);
  pDVar4 = (DataContext *)operator_new(0x18);
  local_50 = (long *)*param_2;
  if (local_50 != (long *)0x0) {
    FUN_00340fb0(1,(long)local_50 + 0xa4);
  }
  DataContext::DataContext(pDVar4,&local_50);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (iVar3 = FUN_00340fe0(0xffffffff,(long)local_50 + 0xa4), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  ViewModelInstance::addDependent((ViewModelInstance *)*param_2,(DataBindContainer *)(this + 0x40));
  Artboard::clearDataContext(*(Artboard **)(this + 0x10));
  pAVar5 = *(Artboard **)(this + 0x10);
  FUN_00340fb0(1,pDVar4);
  local_58 = pDVar4;
  Artboard::internalDataContext(pAVar5,&local_58);
  FUN_003462d8(pDVar4);
  FUN_00340fb0(1,pDVar4);
  local_60 = pDVar4;
  internalDataContext(this,&local_60);
  FUN_003462d8(pDVar4);
  FUN_003462d8(pDVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034bfa0  FUN_0034bfa0 =====

long FUN_0034bfa0(long param_1)

{
  return *(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130) >> 3;
}


// ===== 0034bfb0  rive::StateMachineInstance::input =====

/* rive::StateMachineInstance::input(unsigned long) const */

undefined8 __thiscall rive::StateMachineInstance::input(StateMachineInstance *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x138) - *(long *)(this + 0x130) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x130) + param_1 * 8);
  }
  return 0;
}


// ===== 0034bfd0  rive::StateMachineInstance::getBool =====

/* rive::StateMachineInstance::getBool(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
rive::StateMachineInstance::getBool(StateMachineInstance *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  basic_string bVar5;
  int iVar6;
  ulong uVar7;
  basic_string *__s2;
  basic_string *pbVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar11 != plVar3) {
    do {
      lVar9 = *plVar11;
      plVar10 = *(long **)(lVar9 + 0x10);
      uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,0x3b);
      if ((uVar7 & 1) != 0) {
        bVar4 = *(byte *)(plVar10 + 2);
        bVar5 = *param_1;
        uVar7 = (ulong)(bVar4 >> 1);
        sVar1 = uVar7;
        if ((bVar4 & 1) != 0) {
          sVar1 = plVar10[3];
        }
        sVar2 = (ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_1 + 1;
          if (((byte)bVar5 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              return lVar9;
            }
            pbVar8 = (basic_string *)((long)plVar10 + 0x11);
            while (*pbVar8 == *__s2) {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              __s2 = __s2 + 1;
              if (uVar7 == 0) {
                return lVar9;
              }
            }
          }
          else {
            iVar6 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
            if (iVar6 == 0) {
              return lVar9;
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  return 0;
}


// ===== 0034c0c0  rive::StateMachineInstance::getNumber =====

/* rive::StateMachineInstance::getNumber(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
rive::StateMachineInstance::getNumber(StateMachineInstance *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  basic_string bVar5;
  int iVar6;
  ulong uVar7;
  basic_string *__s2;
  basic_string *pbVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar11 != plVar3) {
    do {
      lVar9 = *plVar11;
      plVar10 = *(long **)(lVar9 + 0x10);
      uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,0x38);
      if ((uVar7 & 1) != 0) {
        bVar4 = *(byte *)(plVar10 + 2);
        bVar5 = *param_1;
        uVar7 = (ulong)(bVar4 >> 1);
        sVar1 = uVar7;
        if ((bVar4 & 1) != 0) {
          sVar1 = plVar10[3];
        }
        sVar2 = (ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_1 + 1;
          if (((byte)bVar5 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              return lVar9;
            }
            pbVar8 = (basic_string *)((long)plVar10 + 0x11);
            while (*pbVar8 == *__s2) {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              __s2 = __s2 + 1;
              if (uVar7 == 0) {
                return lVar9;
              }
            }
          }
          else {
            iVar6 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
            if (iVar6 == 0) {
              return lVar9;
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  return 0;
}


// ===== 0034c1b0  rive::StateMachineInstance::getTrigger =====

/* rive::StateMachineInstance::getTrigger(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

long __thiscall
rive::StateMachineInstance::getTrigger(StateMachineInstance *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  basic_string bVar5;
  int iVar6;
  ulong uVar7;
  basic_string *__s2;
  basic_string *pbVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar11 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar11 != plVar3) {
    do {
      lVar9 = *plVar11;
      plVar10 = *(long **)(lVar9 + 0x10);
      uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,0x3a);
      if ((uVar7 & 1) != 0) {
        bVar4 = *(byte *)(plVar10 + 2);
        bVar5 = *param_1;
        uVar7 = (ulong)(bVar4 >> 1);
        sVar1 = uVar7;
        if ((bVar4 & 1) != 0) {
          sVar1 = plVar10[3];
        }
        sVar2 = (ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_1 + 1;
          if (((byte)bVar5 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              return lVar9;
            }
            pbVar8 = (basic_string *)((long)plVar10 + 0x11);
            while (*pbVar8 == *__s2) {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              __s2 = __s2 + 1;
              if (uVar7 == 0) {
                return lVar9;
              }
            }
          }
          else {
            iVar6 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
            if (iVar6 == 0) {
              return lVar9;
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  return 0;
}


// ===== 0034c2a0  rive::StateMachineInstance::rebind =====

/* rive::StateMachineInstance::rebind() */

void __thiscall rive::StateMachineInstance::rebind(StateMachineInstance *this)

{
  long lVar1;
  Artboard *pAVar2;
  long lVar3;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Artboard::clearDataContext(*(Artboard **)(this + 0x10));
  lVar3 = *(long *)(this + 0xe8);
  pAVar2 = *(Artboard **)(this + 0x10);
  local_40 = lVar3;
  if (lVar3 == 0) {
    Artboard::internalDataContext(pAVar2,&local_40);
    lVar3 = *(long *)(this + 0xe8);
  }
  else {
    FUN_00340fb0(1,lVar3);
    Artboard::internalDataContext(pAVar2,&local_40);
    FUN_003462d8(lVar3);
    lVar3 = *(long *)(this + 0xe8);
  }
  if (lVar3 == 0) {
    local_48 = 0;
    internalDataContext(this,&local_48);
  }
  else {
    FUN_00340fb0(1,lVar3);
    local_48 = lVar3;
    internalDataContext(this,&local_48);
    FUN_003462d8(lVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034c37c  rive::StateMachineInstance::notify =====

/* rive::StateMachineInstance::notify(std::__ndk1::vector<rive::EventReport,
   std::__ndk1::allocator<rive::EventReport> > const&, rive::NestedArtboard*) */

void __thiscall
rive::StateMachineInstance::notify
          (StateMachineInstance *this,vector *param_1,NestedArtboard *param_2)

{
  notifyEventListeners(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0034c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(this + 0x40))(this + 0x40,0);
  return;
}


// ===== 0034c3ac  rive::StateMachineInstance::reportEvent =====

/* rive::StateMachineInstance::reportEvent(rive::Event*, float) */

void __thiscall
rive::StateMachineInstance::reportEvent(StateMachineInstance *this,Event *param_1,float param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar9 = *(undefined8 **)(this + 0xf8);
  if (puVar9 < *(undefined8 **)(this + 0x100)) {
    *puVar9 = param_1;
    puVar12 = puVar9 + 2;
    *(float *)(puVar9 + 1) = param_2;
  }
  else {
    puVar10 = *(undefined8 **)(this + 0xf0);
    lVar11 = (long)puVar9 - (long)puVar10 >> 4;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_00344408();
LAB_0034c4b4:
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    uVar4 = (long)*(undefined8 **)(this + 0x100) - (long)puVar10;
    uVar7 = (long)uVar4 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3c != 0) goto LAB_0034c4b4;
      pvVar3 = operator_new(uVar7 << 4);
    }
    puVar6 = (undefined8 *)((long)pvVar3 + lVar11 * 0x10);
    puVar12 = puVar6 + 2;
    *puVar6 = param_1;
    *(float *)(puVar6 + 1) = param_2;
    puVar5 = puVar6;
    if (puVar9 != puVar10) {
      do {
        puVar8 = puVar9 + -2;
        uVar2 = *(undefined4 *)(puVar9 + -1);
        puVar6 = puVar5 + -2;
        *puVar6 = *puVar8;
        *(undefined4 *)(puVar5 + -1) = uVar2;
        puVar5 = puVar6;
        puVar9 = puVar8;
      } while (puVar8 != puVar10);
      puVar9 = *(undefined8 **)(this + 0xf0);
    }
    *(undefined8 **)(this + 0xf0) = puVar6;
    *(undefined8 **)(this + 0xf8) = puVar12;
    *(void **)(this + 0x100) = (void *)((long)pvVar3 + uVar7 * 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9);
    }
  }
  *(undefined8 **)(this + 0xf8) = puVar12;
  return;
}


// ===== 0034c4b8  FUN_0034c4b8 =====

undefined8 FUN_0034c4b8(void)

{
  return 1;
}


// ===== 0034c4c0  rive::StateMachineInstance::relinkDataContext =====

/* rive::StateMachineInstance::relinkDataContext() */

void __thiscall rive::StateMachineInstance::relinkDataContext(StateMachineInstance *this)

{
                    /* WARNING: Could not recover jumptable at 0x0034c4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x368))();
  return;
}


// ===== 0034c4d0  rive::StateMachineInstance::rebuildDataBind =====

/* rive::StateMachineInstance::rebuildDataBind(rive::DataBind*) */

void __thiscall
rive::StateMachineInstance::rebuildDataBind(StateMachineInstance *this,DataBind *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1bf);
  if ((uVar1 & 1) != 0) {
    DataBindContext::bindFromContext((DataBindContext *)param_1,*(DataContext **)(this + 0xe8));
    return;
  }
  return;
}


// ===== 0034c51c  rive::StateMachineInstance::~StateMachineInstance =====

/* non-virtual thunk to rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  ~StateMachineInstance(this + -8);
  return;
}


// ===== 0034c524  rive::StateMachineInstance::~StateMachineInstance =====

/* non-virtual thunk to rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  ~StateMachineInstance(this + -8);
  operator_delete(this + -8);
  return;
}


// ===== 0034c54c  rive::StateMachineInstance::reportEvent =====

/* non-virtual thunk to rive::StateMachineInstance::reportEvent(rive::Event*, float) */

void __thiscall
rive::StateMachineInstance::reportEvent(StateMachineInstance *this,Event *param_1,float param_2)

{
  reportEvent(this + -8,param_1,param_2);
  return;
}


// ===== 0034c554  FUN_0034c554 =====

undefined8 FUN_0034c554(void)

{
  return 1;
}


// ===== 0034c55c  rive::StateMachineInstance::~StateMachineInstance =====

/* non-virtual thunk to rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  ~StateMachineInstance(this + -0x38);
  return;
}


// ===== 0034c564  rive::StateMachineInstance::~StateMachineInstance =====

/* non-virtual thunk to rive::StateMachineInstance::~StateMachineInstance() */

void __thiscall rive::StateMachineInstance::~StateMachineInstance(StateMachineInstance *this)

{
  ~StateMachineInstance(this + -0x38);
  operator_delete(this + -0x38);
  return;
}


// ===== 0034c58c  rive::StateMachineInstance::notify =====

/* non-virtual thunk to rive::StateMachineInstance::notify(std::__ndk1::vector<rive::EventReport,
   std::__ndk1::allocator<rive::EventReport> > const&, rive::NestedArtboard*) */

void __thiscall
rive::StateMachineInstance::notify
          (StateMachineInstance *this,vector *param_1,NestedArtboard *param_2)

{
  notifyEventListeners(this + -0x38,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0034c5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(this + 8))(this + 8,0);
  return;
}


// ===== 0034c5c0  rive::StateMachineInstance::rebind =====

/* non-virtual thunk to rive::StateMachineInstance::rebind() */

void __thiscall rive::StateMachineInstance::rebind(StateMachineInstance *this)

{
  rebind(this + -0x40);
  return;
}


// ===== 0034c5c8  rive::StateMachineInstance::relinkDataContext =====

/* non-virtual thunk to rive::StateMachineInstance::relinkDataContext() */

void __thiscall rive::StateMachineInstance::relinkDataContext(StateMachineInstance *this)

{
                    /* WARNING: Could not recover jumptable at 0x0034c5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + -0x30) + 0x368))();
  return;
}


// ===== 0034c5d8  rive::StateMachineInstance::rebuildDataBind =====

/* non-virtual thunk to rive::StateMachineInstance::rebuildDataBind(rive::DataBind*) */

void __thiscall
rive::StateMachineInstance::rebuildDataBind(StateMachineInstance *this,DataBind *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,0x1bf);
  if ((uVar1 & 1) != 0) {
    DataBindContext::bindFromContext((DataBindContext *)param_1,*(DataContext **)(this + 0xa8));
    return;
  }
  return;
}


// ===== 0034c624  rive::StateMachineInstance::notifyEventListeners =====

/* rive::StateMachineInstance::notifyEventListeners(std::__ndk1::vector<rive::EventReport,
   std::__ndk1::allocator<rive::EventReport> > const&, rive::NestedArtboard*) */

void __thiscall
rive::StateMachineInstance::notifyEventListeners
          (StateMachineInstance *this,vector *param_1,NestedArtboard *param_2)

{
  void *__src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  NestedArtboard *pNVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  long *plVar8;
  ViewModelInstanceValue *pVVar9;
  ListenerViewModelPropertyBindingListener *this_00;
  ListenerViewModelPropertyBindingInput *this_01;
  undefined8 uVar10;
  long lVar11;
  ScriptedObject *this_02;
  ScriptedObject *pSVar12;
  long lVar13;
  long *unaff_x19;
  ulong uVar14;
  AudioEvent *this_03;
  undefined8 *puVar15;
  long lVar16;
  DataContext *pDVar17;
  long *plVar18;
  ListenerViewModel *pLVar19;
  ListenerViewModel *pLVar20;
  long *plVar21;
  ListenerInputTypeViewModel *pLVar22;
  long *unaff_x25;
  ulong unaff_x26;
  StateMachineListenerSingle *pSVar23;
  long unaff_x27;
  long *unaff_x28;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  ListenerViewModelPropertyBindingListener *pLStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long *plStack_110;
  long lStack_108;
  ulong uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  void *pvStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  StateMachineInstance *pSStack_d0;
  long *plStack_c8;
  long *local_b8;
  long *local_b0;
  undefined1 uStack_a1;
  long local_a0;
  undefined4 local_98;
  uint local_80;
  long local_78;
  
  plVar18 = (long *)tpidr_el0;
  local_78 = plVar18[5];
  if (*(long *)(param_1 + 8) != *(long *)param_1) {
    lVar6 = *(long *)(*(long *)(this + 0x120) + 0x58);
    lVar13 = *(long *)(*(long *)(this + 0x120) + 0x60);
    local_b8 = plVar18;
    local_b0 = (long *)param_1;
    if (lVar13 != lVar6) {
      unaff_x26 = 0;
LAB_0034c6b8:
      if (unaff_x26 < (ulong)(lVar13 - lVar6 >> 3)) {
        plVar18 = *(long **)(lVar6 + unaff_x26 * 8);
      }
      else {
        plVar18 = (long *)0x0;
      }
      pNVar3 = (NestedArtboard *)
               (**(code **)(**(long **)(this + 0x10) + 0x348))
                         (*(long **)(this + 0x10),(int)plVar18[5]);
      uVar4 = (**(code **)(*plVar18 + 0x60))(plVar18,5);
      if (((uVar4 & 1) != 0) && (param_2 == (NestedArtboard *)0x0 || pNVar3 == param_2)) {
        unaff_x25 = (long *)*local_b0;
        unaff_x28 = (long *)local_b0[1];
joined_r0x0034c71c:
        if (unaff_x25 == unaff_x28) goto LAB_0034c6a0;
        unaff_x27 = *unaff_x25;
        uVar24 = (undefined4)unaff_x25[1];
        if (param_2 == (NestedArtboard *)0x0) {
          plVar5 = *(long **)(this + 0x10);
          plVar21 = (long *)(**(code **)(*plVar5 + 0x348))(plVar5,(int)plVar18[5]);
          if ((plVar21 == (long *)0x0 || plVar21 == *(long **)(this + 0x10)) ||
             (uVar4 = (**(code **)(*plVar21 + 0x18))(plVar21,0x80), (uVar4 & 1) != 0))
          goto LAB_0034c7b0;
        }
        else {
          plVar5 = (long *)(**(code **)(*(long *)param_2 + 0x298))(param_2,0);
LAB_0034c7b0:
          uVar4 = (**(code **)(*plVar18 + 0x18))(plVar18,0x72);
          if ((uVar4 & 1) != 0) {
            lVar6 = (**(code **)(*plVar5 + 0x348))(plVar5,*(undefined4 *)((long)plVar18 + 100));
            if (lVar6 != unaff_x27) goto joined_r0x0034c8a0;
            unaff_x19 = (long *)plVar18[6];
            plVar18 = (long *)plVar18[7];
            local_80 = 4;
            plVar5 = unaff_x19;
            local_a0 = unaff_x27;
            local_98 = uVar24;
            if (unaff_x19 != plVar18) goto LAB_0034c8c4;
            uVar4 = 4;
            goto LAB_0034c688;
          }
          lVar6 = plVar18[9];
          if (plVar18[10] != lVar6) {
            unaff_x19 = (long *)0x0;
            do {
              plVar21 = *(long **)(lVar6 + (long)unaff_x19 * 8);
              uVar4 = (**(code **)(*plVar21 + 0x18))(plVar21,0x293);
              if (((uVar4 & 1) != 0) &&
                 (lVar6 = (**(code **)(*plVar5 + 0x348))(plVar5,(int)plVar21[2]), lVar6 == unaff_x27
                 )) {
                unaff_x19 = (long *)plVar18[6];
                plVar5 = (long *)plVar18[7];
                local_80 = 4;
                plVar21 = unaff_x19;
                local_a0 = unaff_x27;
                local_98 = uVar24;
                if (unaff_x19 != plVar5) goto LAB_0034c84c;
                uVar4 = 4;
                goto LAB_0034c880;
              }
              lVar6 = plVar18[9];
              unaff_x19 = (long *)((long)unaff_x19 + 1);
            } while (unaff_x19 < (long *)(plVar18[10] - lVar6 >> 3));
          }
        }
        goto joined_r0x0034c8a0;
      }
      goto LAB_0034c6a0;
    }
LAB_0034c8f4:
    plVar5 = local_b0;
    __src = *(void **)(this + 0x20);
    uVar4 = *(long *)(this + 0x28) - (long)__src;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
        auVar25 = FUN_0034b588();
        plVar21 = auVar25._8_8_;
        lVar13 = auVar25._0_8_;
        pcStack_118 = internalDataContext;
        plStack_f0 = plVar5;
        lVar6 = tpidr_el0;
        plVar5 = (long *)(lVar13 + 0xe8);
        lStack_128 = *(long *)(lVar6 + 0x28);
        puStack_120 = &stack0xffffffffffffffa0;
        plStack_110 = unaff_x28;
        lStack_108 = unaff_x27;
        uStack_100 = unaff_x26;
        plStack_f8 = unaff_x25;
        pvStack_e8 = __src;
        plStack_e0 = plVar18;
        uStack_d8 = uVar4;
        pSStack_d0 = this;
        plStack_c8 = unaff_x19;
        if (plVar5 != plVar21) {
          lVar16 = *plVar21;
          if (lVar16 != 0) {
            FUN_00340fb0(1,lVar16);
          }
          lVar7 = *plVar5;
          *plVar5 = lVar16;
          if (lVar7 != 0) {
            FUN_003462d8();
          }
        }
        puVar2 = *(undefined8 **)(lVar13 + 0x50);
        pDVar17 = (DataContext *)*plVar21;
        for (puVar15 = *(undefined8 **)(lVar13 + 0x48); puVar15 != puVar2; puVar15 = puVar15 + 1) {
          uVar4 = (**(code **)(*(long *)*puVar15 + 0x18))((long *)*puVar15,0x1bf);
          if ((uVar4 & 1) != 0) {
            DataBindContext::bindFromContext((DataBindContext *)*puVar15,pDVar17);
          }
        }
        puVar15 = *(undefined8 **)(lVar13 + 0x1b0);
        puVar2 = *(undefined8 **)(lVar13 + 0x1b8);
        *(DataContext **)(lVar13 + 0xd8) = pDVar17;
        for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
          pDVar17 = (DataContext *)*plVar21;
          pLVar19 = (ListenerViewModel *)*puVar15;
          if (pDVar17 != (DataContext *)0x0) {
            FUN_00340fb0(1,pDVar17);
            FUN_00340fb0(1,pDVar17);
          }
          lVar16 = *(long *)(pLVar19 + 0x18);
          *(DataContext **)(pLVar19 + 0x18) = pDVar17;
          if (lVar16 != 0) {
            FUN_003462d8();
          }
          pLVar20 = pLVar19 + 0x20;
          plVar18 = *(long **)pLVar20;
          plVar5 = *(long **)(pLVar19 + 0x28);
          while (plVar5 != plVar18) {
            plVar5 = plVar5 + -1;
            plVar8 = (long *)*plVar5;
            *plVar5 = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          *(long **)(pLVar19 + 0x28) = plVar18;
          uVar4 = (**(code **)(**(long **)(pLVar19 + 0x10) + 0x18))(*(long **)(pLVar19 + 0x10),0x72)
          ;
          lVar16 = *(long *)(pLVar19 + 0x10);
          if ((uVar4 & 1) == 0) {
            lVar7 = *(long *)(lVar16 + 0x48);
            lVar16 = *(long *)(lVar16 + 0x50);
            if (lVar16 != lVar7) {
              uVar4 = 0;
              do {
                if (uVar4 < (ulong)(lVar16 - lVar7 >> 3)) {
                  pLVar22 = *(ListenerInputTypeViewModel **)(lVar7 + uVar4 * 8);
                }
                else {
                  pLVar22 = (ListenerInputTypeViewModel *)0x0;
                }
                uVar14 = (**(code **)(*(long *)pLVar22 + 0x18))(pLVar22,0x294);
                if (((uVar14 & 1) != 0) &&
                   (pVVar9 = (ViewModelInstanceValue *)
                             DataContext::getViewModelProperty
                                       (pDVar17,*(DataBindPath **)(pLVar22 + 0x10)),
                   pVVar9 != (ViewModelInstanceValue *)0x0)) {
                  this_01 = (ListenerViewModelPropertyBindingInput *)operator_new(0x20);
                  ListenerViewModelPropertyBindingInput::ListenerViewModelPropertyBindingInput
                            (this_01,pLVar19,pVVar9,pLVar22);
                  puVar1 = *(undefined8 **)(pLVar19 + 0x28);
                  pLStack_130 = (ListenerViewModelPropertyBindingListener *)this_01;
                  if (puVar1 < *(undefined8 **)(pLVar19 + 0x30)) {
                    *puVar1 = this_01;
                    *(undefined8 **)(pLVar19 + 0x28) = puVar1 + 1;
                  }
                  else {
                    uVar10 = FUN_0034cd54(pLVar20,&pLStack_130);
                    *(undefined8 *)(pLVar19 + 0x28) = uVar10;
                    if (pLStack_130 != (ListenerViewModelPropertyBindingListener *)0x0) {
                      (**(code **)(*(long *)pLStack_130 + 0x18))(pLStack_130);
                    }
                  }
                }
                uVar4 = uVar4 + 1;
                lVar7 = *(long *)(*(long *)(pLVar19 + 0x10) + 0x48);
                lVar16 = *(long *)(*(long *)(pLVar19 + 0x10) + 0x50);
              } while (uVar4 < (ulong)(lVar16 - lVar7 >> 3));
            }
          }
          else {
            pVVar9 = (ViewModelInstanceValue *)
                     DataContext::getViewModelProperty(pDVar17,*(DataBindPath **)(lVar16 + 0x68));
            if (pVVar9 != (ViewModelInstanceValue *)0x0) {
              pSVar23 = *(StateMachineListenerSingle **)(pLVar19 + 0x10);
              this_00 = (ListenerViewModelPropertyBindingListener *)operator_new(0x20);
              ListenerViewModelPropertyBindingListener::ListenerViewModelPropertyBindingListener
                        (this_00,pLVar19,pVVar9,pSVar23);
              puVar1 = *(undefined8 **)(pLVar19 + 0x28);
              pLStack_130 = this_00;
              if (puVar1 < *(undefined8 **)(pLVar19 + 0x30)) {
                *puVar1 = this_00;
                *(undefined8 **)(pLVar19 + 0x28) = puVar1 + 1;
              }
              else {
                uVar10 = FUN_0034cd54(pLVar20,&pLStack_130);
                *(undefined8 *)(pLVar19 + 0x28) = uVar10;
                if (pLStack_130 != (ListenerViewModelPropertyBindingListener *)0x0) {
                  (**(code **)(*(long *)pLStack_130 + 0x18))(pLStack_130);
                }
              }
            }
          }
          if (pDVar17 != (DataContext *)0x0) {
            FUN_003462d8(pDVar17);
          }
        }
        plVar18 = *(long **)(lVar13 + 0x230);
        if (plVar18 != (long *)0x0) {
          do {
            lVar16 = *plVar21;
            lVar7 = plVar18[3];
            if (lVar16 != 0) {
              FUN_00340fb0(1,lVar16);
              FUN_00340fb0(1,lVar16);
            }
            lVar11 = *(long *)(lVar7 + 0x50);
            *(long *)(lVar7 + 0x50) = lVar16;
            if (lVar11 != 0) {
              FUN_003462d8();
            }
            if (lVar16 != 0) {
              FUN_003462d8(lVar16);
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          for (plVar18 = *(long **)(lVar13 + 0x230); plVar18 != (long *)0x0;
              plVar18 = (long *)*plVar18) {
            this_02 = (ScriptedObject *)plVar18[3];
            pSVar12 = *(ScriptedObject **)(this_02 + 8);
            if (pSVar12 != (ScriptedObject *)0x0) {
              if (((this_02[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar12 + 0xd8) != 0)) &&
                 (*(long *)(*(long *)(pSVar12 + 0xd8) + 0x110) != 0)) {
                ScriptAsset::initScriptedObjectWith(pSVar12);
              }
              ScriptedObject::hydrateScriptInputs(this_02);
            }
          }
        }
        if (*(long *)(lVar6 + 0x28) != lStack_128) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __dest = operator_new(uVar4);
      memcpy(__dest,__src,uVar4);
      uVar14 = 0;
      do {
        (**(code **)(**(long **)((long)__dest + uVar14) + 0x10))
                  (*(long **)((long)__dest + uVar14),plVar5,*(undefined8 *)(this + 0x18));
        uVar14 = uVar14 + 8;
      } while (uVar4 != uVar14);
      operator_delete(__dest);
    }
    plVar18 = local_b8;
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar15 = (undefined8 *)*plVar5; puVar15 != puVar2; puVar15 = puVar15 + 2) {
      this_03 = (AudioEvent *)*puVar15;
      uVar4 = (**(code **)(*(long *)this_03 + 0x18))(this_03,0x197);
      if ((uVar4 & 1) != 0) {
        AudioEvent::play(this_03);
      }
    }
  }
  if (plVar18[5] != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0034c84c:
  do {
    unaff_x19 = plVar21 + 1;
    (**(code **)(*(long *)*plVar21 + 0x58))((long *)*plVar21,this,&local_a0);
    plVar21 = unaff_x19;
  } while (unaff_x19 != plVar5);
  uVar4 = (ulong)local_80;
  if (local_80 != 0xffffffff) {
LAB_0034c880:
    (*(code *)(&PTR_FUN_00667318)[uVar4])(&uStack_a1,&local_a0);
  }
joined_r0x0034c8a0:
  unaff_x25 = unaff_x25 + 2;
  goto joined_r0x0034c71c;
LAB_0034c8c4:
  do {
    unaff_x19 = plVar5 + 1;
    (**(code **)(*(long *)*plVar5 + 0x58))((long *)*plVar5,this,&local_a0);
    plVar5 = unaff_x19;
  } while (unaff_x19 != plVar18);
  uVar4 = (ulong)local_80;
  if (local_80 != 0xffffffff) {
LAB_0034c688:
    (*(code *)(&PTR_FUN_00667318)[uVar4])(&uStack_a1,&local_a0);
  }
LAB_0034c6a0:
  unaff_x26 = unaff_x26 + 1;
  lVar6 = *(long *)(*(long *)(this + 0x120) + 0x58);
  lVar13 = *(long *)(*(long *)(this + 0x120) + 0x60);
  if ((ulong)(lVar13 - lVar6 >> 3) <= unaff_x26) goto LAB_0034c8f4;
  goto LAB_0034c6b8;
}


// ===== 0034c9d0  rive::StateMachineInstance::internalDataContext =====

/* rive::StateMachineInstance::internalDataContext(rive::rcp<rive::DataContext>) */

void __thiscall
rive::StateMachineInstance::internalDataContext
          (StateMachineInstance *this,StateMachineInstance *param_2)

{
  StateMachineInstance *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ViewModelInstanceValue *pVVar8;
  ListenerViewModelPropertyBindingListener *this_00;
  ulong uVar9;
  ListenerViewModelPropertyBindingInput *this_01;
  undefined8 uVar10;
  long lVar11;
  ScriptedObject *this_02;
  ScriptedObject *pSVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  DataContext *pDVar16;
  ListenerViewModel *pLVar17;
  ListenerViewModel *pLVar18;
  long *plVar19;
  ListenerInputTypeViewModel *pLVar20;
  StateMachineListenerSingle *pSVar21;
  ListenerViewModelPropertyBindingListener *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  pSVar1 = this + 0xe8;
  local_68 = *(long *)(lVar4 + 0x28);
  if (pSVar1 != param_2) {
    lVar15 = *(long *)param_2;
    if (lVar15 != 0) {
      FUN_00340fb0(1,lVar15);
    }
    lVar5 = *(long *)pSVar1;
    *(long *)pSVar1 = lVar15;
    if (lVar5 != 0) {
      FUN_003462d8();
    }
  }
  puVar3 = *(undefined8 **)(this + 0x50);
  pDVar16 = *(DataContext **)param_2;
  for (puVar13 = *(undefined8 **)(this + 0x48); puVar13 != puVar3; puVar13 = puVar13 + 1) {
    uVar6 = (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,0x1bf);
    if ((uVar6 & 1) != 0) {
      DataBindContext::bindFromContext((DataBindContext *)*puVar13,pDVar16);
    }
  }
  puVar13 = *(undefined8 **)(this + 0x1b0);
  puVar3 = *(undefined8 **)(this + 0x1b8);
  *(DataContext **)(this + 0xd8) = pDVar16;
  for (; puVar13 != puVar3; puVar13 = puVar13 + 1) {
    pDVar16 = *(DataContext **)param_2;
    pLVar17 = (ListenerViewModel *)*puVar13;
    if (pDVar16 != (DataContext *)0x0) {
      FUN_00340fb0(1,pDVar16);
      FUN_00340fb0(1,pDVar16);
    }
    lVar15 = *(long *)(pLVar17 + 0x18);
    *(DataContext **)(pLVar17 + 0x18) = pDVar16;
    if (lVar15 != 0) {
      FUN_003462d8();
    }
    pLVar18 = pLVar17 + 0x20;
    plVar14 = *(long **)pLVar18;
    plVar19 = *(long **)(pLVar17 + 0x28);
    while (plVar19 != plVar14) {
      plVar19 = plVar19 + -1;
      plVar7 = (long *)*plVar19;
      *plVar19 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    *(long **)(pLVar17 + 0x28) = plVar14;
    uVar6 = (**(code **)(**(long **)(pLVar17 + 0x10) + 0x18))(*(long **)(pLVar17 + 0x10),0x72);
    lVar15 = *(long *)(pLVar17 + 0x10);
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)(lVar15 + 0x48);
      lVar15 = *(long *)(lVar15 + 0x50);
      if (lVar15 != lVar5) {
        uVar6 = 0;
        do {
          if (uVar6 < (ulong)(lVar15 - lVar5 >> 3)) {
            pLVar20 = *(ListenerInputTypeViewModel **)(lVar5 + uVar6 * 8);
          }
          else {
            pLVar20 = (ListenerInputTypeViewModel *)0x0;
          }
          uVar9 = (**(code **)(*(long *)pLVar20 + 0x18))(pLVar20,0x294);
          if (((uVar9 & 1) != 0) &&
             (pVVar8 = (ViewModelInstanceValue *)
                       DataContext::getViewModelProperty(pDVar16,*(DataBindPath **)(pLVar20 + 0x10))
             , pVVar8 != (ViewModelInstanceValue *)0x0)) {
            this_01 = (ListenerViewModelPropertyBindingInput *)operator_new(0x20);
            ListenerViewModelPropertyBindingInput::ListenerViewModelPropertyBindingInput
                      (this_01,pLVar17,pVVar8,pLVar20);
            puVar2 = *(undefined8 **)(pLVar17 + 0x28);
            local_70 = (ListenerViewModelPropertyBindingListener *)this_01;
            if (puVar2 < *(undefined8 **)(pLVar17 + 0x30)) {
              *puVar2 = this_01;
              *(undefined8 **)(pLVar17 + 0x28) = puVar2 + 1;
            }
            else {
              uVar10 = FUN_0034cd54(pLVar18,&local_70);
              *(undefined8 *)(pLVar17 + 0x28) = uVar10;
              if (local_70 != (ListenerViewModelPropertyBindingListener *)0x0) {
                (**(code **)(*(long *)local_70 + 0x18))(local_70);
              }
            }
          }
          uVar6 = uVar6 + 1;
          lVar5 = *(long *)(*(long *)(pLVar17 + 0x10) + 0x48);
          lVar15 = *(long *)(*(long *)(pLVar17 + 0x10) + 0x50);
        } while (uVar6 < (ulong)(lVar15 - lVar5 >> 3));
      }
    }
    else {
      pVVar8 = (ViewModelInstanceValue *)
               DataContext::getViewModelProperty(pDVar16,*(DataBindPath **)(lVar15 + 0x68));
      if (pVVar8 != (ViewModelInstanceValue *)0x0) {
        pSVar21 = *(StateMachineListenerSingle **)(pLVar17 + 0x10);
        this_00 = (ListenerViewModelPropertyBindingListener *)operator_new(0x20);
        ListenerViewModelPropertyBindingListener::ListenerViewModelPropertyBindingListener
                  (this_00,pLVar17,pVVar8,pSVar21);
        puVar2 = *(undefined8 **)(pLVar17 + 0x28);
        local_70 = this_00;
        if (puVar2 < *(undefined8 **)(pLVar17 + 0x30)) {
          *puVar2 = this_00;
          *(undefined8 **)(pLVar17 + 0x28) = puVar2 + 1;
        }
        else {
          uVar10 = FUN_0034cd54(pLVar18,&local_70);
          *(undefined8 *)(pLVar17 + 0x28) = uVar10;
          if (local_70 != (ListenerViewModelPropertyBindingListener *)0x0) {
            (**(code **)(*(long *)local_70 + 0x18))(local_70);
          }
        }
      }
    }
    if (pDVar16 != (DataContext *)0x0) {
      FUN_003462d8(pDVar16);
    }
  }
  plVar14 = *(long **)(this + 0x230);
  if (plVar14 != (long *)0x0) {
    do {
      lVar15 = *(long *)param_2;
      lVar5 = plVar14[3];
      if (lVar15 != 0) {
        FUN_00340fb0(1,lVar15);
        FUN_00340fb0(1,lVar15);
      }
      lVar11 = *(long *)(lVar5 + 0x50);
      *(long *)(lVar5 + 0x50) = lVar15;
      if (lVar11 != 0) {
        FUN_003462d8();
      }
      if (lVar15 != 0) {
        FUN_003462d8(lVar15);
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
    for (plVar14 = *(long **)(this + 0x230); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      this_02 = (ScriptedObject *)plVar14[3];
      pSVar12 = *(ScriptedObject **)(this_02 + 8);
      if (pSVar12 != (ScriptedObject *)0x0) {
        if (((this_02[0x71] == (ScriptedObject)0x0) && (*(long *)(pSVar12 + 0xd8) != 0)) &&
           (*(long *)(*(long *)(pSVar12 + 0xd8) + 0x110) != 0)) {
          ScriptAsset::initScriptedObjectWith(pSVar12);
        }
        ScriptedObject::hydrateScriptInputs(this_02);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


