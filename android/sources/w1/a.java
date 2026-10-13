package w1;

import kotlin.jvm.internal.Intrinsics;
import n1.h;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19602d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f19603e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ o1.d f19604i;

    public /* synthetic */ a(e eVar, o1.d dVar, int i5) {
        this.f19602d = i5;
        this.f19603e = eVar;
        this.f19604i = dVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f19602d) {
            case 0:
                h hVar = this.f19603e.f19616f;
                if (hVar == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar = null;
                }
                Object obj = this.f19604i;
                if (obj == null) {
                    obj = new o1.h("No provider data returned");
                }
                hVar.e(obj);
                break;
            default:
                h hVar2 = this.f19603e.f19616f;
                if (hVar2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar2 = null;
                }
                hVar2.e(this.f19604i);
                break;
        }
    }
}
