package v1;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19154d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19155e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ o1.d f19156i;

    public /* synthetic */ c(h hVar, o1.d dVar, int i5) {
        this.f19154d = i5;
        this.f19155e = hVar;
        this.f19156i = dVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f19154d) {
            case 0:
                n1.h hVar = this.f19155e.f19169f;
                if (hVar == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar = null;
                }
                hVar.e(this.f19156i);
                break;
            case 1:
                n1.h hVar2 = this.f19155e.f19169f;
                if (hVar2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar2 = null;
                }
                hVar2.e(this.f19156i);
                break;
            default:
                n1.h hVar3 = this.f19155e.f19169f;
                if (hVar3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar3 = null;
                }
                hVar3.e(this.f19156i);
                break;
        }
    }
}
