package l4;

/* loaded from: classes.dex */
public final /* synthetic */ class r implements u {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ v f13777b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ float f13778c;

    public /* synthetic */ r(v vVar, float f2, int i5) {
        this.a = i5;
        this.f13777b = vVar;
        this.f13778c = f2;
    }

    @Override // l4.u
    public final void run() {
        switch (this.a) {
            case 0:
                v vVar = this.f13777b;
                i iVar = vVar.f13787d;
                float f2 = this.f13778c;
                if (iVar != null) {
                    x4.e eVar = vVar.f13789e;
                    eVar.k(eVar.G, x4.g.e(iVar.f13750l, iVar.f13751m, f2));
                    break;
                } else {
                    vVar.f13803x.add(new r(vVar, f2, 0));
                    break;
                }
            case 1:
                v vVar2 = this.f13777b;
                i iVar2 = vVar2.f13787d;
                float f10 = this.f13778c;
                if (iVar2 != null) {
                    vVar2.t((int) x4.g.e(iVar2.f13750l, iVar2.f13751m, f10));
                    break;
                } else {
                    vVar2.f13803x.add(new r(vVar2, f10, 1));
                    break;
                }
            default:
                this.f13777b.v(this.f13778c);
                break;
        }
    }
}
