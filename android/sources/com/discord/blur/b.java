package com.discord.blur;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3789d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BlurViewHardwareAccelerated f3790e;

    public /* synthetic */ b(BlurViewHardwareAccelerated blurViewHardwareAccelerated, int i5) {
        this.f3789d = i5;
        this.f3790e = blurViewHardwareAccelerated;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit blurTargetChangeListener$lambda$0;
        Unit _init_$lambda$1;
        Unit onDetachedFromWindow$lambda$3;
        Unit onAttachedToWindow$lambda$2;
        switch (this.f3789d) {
            case 0:
                blurTargetChangeListener$lambda$0 = BlurViewHardwareAccelerated.blurTargetChangeListener$lambda$0(this.f3790e);
                return blurTargetChangeListener$lambda$0;
            case 1:
                _init_$lambda$1 = BlurViewHardwareAccelerated._init_$lambda$1(this.f3790e);
                return _init_$lambda$1;
            case 2:
                onDetachedFromWindow$lambda$3 = BlurViewHardwareAccelerated.onDetachedFromWindow$lambda$3(this.f3790e);
                return onDetachedFromWindow$lambda$3;
            default:
                onAttachedToWindow$lambda$2 = BlurViewHardwareAccelerated.onAttachedToWindow$lambda$2(this.f3790e);
                return onAttachedToWindow$lambda$2;
        }
    }
}
