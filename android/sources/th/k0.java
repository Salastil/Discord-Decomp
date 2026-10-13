package th;

/* loaded from: classes3.dex */
public final class k0 implements uh.g {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18491d;

    /* renamed from: e, reason: collision with root package name */
    public final uh.f f18492e;

    /* renamed from: i, reason: collision with root package name */
    public final uh.f f18493i;

    /* renamed from: v, reason: collision with root package name */
    public final uh.f f18494v;

    public /* synthetic */ k0(uh.f fVar, uh.f fVar2, uh.f fVar3, int i5) {
        this.f18491d = i5;
        this.f18492e = fVar;
        this.f18493i = fVar2;
        this.f18494v = fVar3;
    }

    @Override // uh.g
    public final /* bridge */ /* synthetic */ Object a() {
        switch (this.f18491d) {
            case 0:
                return new j0((v0) this.f18492e.a(), (n0) this.f18493i.a(), (e1) this.f18494v.a());
            default:
                return new w0((v0) this.f18492e.a(), (s) this.f18493i.a(), (a0) this.f18494v.a());
        }
    }
}
