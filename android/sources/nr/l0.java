package nr;

import kotlin.Unit;

/* loaded from: classes3.dex */
public final class l0 extends n0 {

    /* renamed from: i, reason: collision with root package name */
    public final j f15635i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ kotlinx.coroutines.b f15636v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(kotlinx.coroutines.b bVar, long j, j jVar) {
        super(j);
        this.f15636v = bVar;
        this.f15635i = jVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f15635i.C(this.f15636v, Unit.a);
    }

    @Override // nr.n0
    public final String toString() {
        return super.toString() + this.f15635i;
    }
}
