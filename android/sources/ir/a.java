package ir;

import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class a extends n {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function1 f12256b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ boolean[] f12257c;

    public a(Function1 function1, boolean[] zArr) {
        this.f12256b = function1;
        this.f12257c = zArr;
    }

    @Override // ir.n
    public final boolean d(Object obj) {
        boolean booleanValue = ((Boolean) this.f12256b.invoke(obj)).booleanValue();
        boolean[] zArr = this.f12257c;
        if (booleanValue) {
            zArr[0] = true;
        }
        return !zArr[0];
    }

    @Override // ir.n
    public final Object k() {
        return Boolean.valueOf(this.f12257c[0]);
    }
}
