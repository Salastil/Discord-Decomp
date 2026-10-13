package v1;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19160d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19161e;

    public /* synthetic */ e(h hVar, int i5) {
        this.f19160d = i5;
        this.f19161e = hVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f19160d) {
            case 0:
                n1.h hVar = this.f19161e.f19169f;
                if (hVar == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar = null;
                }
                hVar.e(new o1.h("Failed to launch the selector UI. Hint: ensure the `context` parameter is an Activity-based context."));
                break;
            default:
                n1.h hVar2 = this.f19161e.f19169f;
                if (hVar2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar2 = null;
                }
                hVar2.e(new q1.a(new p1.a(26), "Upon handling create public key credential response, fido module giving null bytes indicating internal error"));
                break;
        }
    }
}
