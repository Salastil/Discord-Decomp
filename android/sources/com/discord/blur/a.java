package com.discord.blur;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3787d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BlurView f3788e;

    public /* synthetic */ a(BlurView blurView, int i5) {
        this.f3787d = i5;
        this.f3788e = blurView;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit onDetachedFromWindow$lambda$3;
        Unit onAttachedToWindow$lambda$2;
        Unit blurTargetChangeListener$lambda$0;
        Unit _init_$lambda$1;
        switch (this.f3787d) {
            case 0:
                onDetachedFromWindow$lambda$3 = BlurView.onDetachedFromWindow$lambda$3(this.f3788e);
                return onDetachedFromWindow$lambda$3;
            case 1:
                onAttachedToWindow$lambda$2 = BlurView.onAttachedToWindow$lambda$2(this.f3788e);
                return onAttachedToWindow$lambda$2;
            case 2:
                blurTargetChangeListener$lambda$0 = BlurView.blurTargetChangeListener$lambda$0(this.f3788e);
                return blurTargetChangeListener$lambda$0;
            default:
                _init_$lambda$1 = BlurView._init_$lambda$1(this.f3788e);
                return _init_$lambda$1;
        }
    }
}
