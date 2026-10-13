package com.facebook.react.animated;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements AnimatedNodeValueListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ NativeAnimatedModule f4878b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4879c;

    public /* synthetic */ a(NativeAnimatedModule nativeAnimatedModule, int i5, int i6) {
        this.a = i6;
        this.f4878b = nativeAnimatedModule;
        this.f4879c = i5;
    }

    @Override // com.facebook.react.animated.AnimatedNodeValueListener
    public final void onValueUpdate(double d6, double d7) {
        switch (this.a) {
            case 0:
                NativeAnimatedModule.startListeningToAnimatedNodeValue$lambda$4(this.f4878b, this.f4879c, d6, d7);
                break;
            default:
                NativeAnimatedModule$queueAndExecuteBatchedOperations$1.execute$lambda$1(this.f4878b, this.f4879c, d6, d7);
                break;
        }
    }
}
