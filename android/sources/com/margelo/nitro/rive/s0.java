package com.margelo.nitro.rive;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class s0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6594d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function0 f6595e;

    public /* synthetic */ s0(int i5, Function0 function0) {
        this.f6594d = i5;
        this.f6595e = function0;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f6594d) {
            case 0:
                HybridRiveView.executeOnUiThread$lambda$12(this.f6595e);
                return;
            default:
                try {
                    this.f6595e.invoke();
                    return;
                } catch (Error e9) {
                    throw new Error(e9.getMessage());
                } catch (Exception e10) {
                    throw new Error(e10.getMessage());
                }
        }
    }
}
