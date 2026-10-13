package af;

/* loaded from: classes3.dex */
public final class t extends ze.l {

    /* renamed from: b, reason: collision with root package name */
    public final ze.i f599b;

    public t(ze.i iVar) {
        this.f599b = iVar;
    }

    public final ve.g a(ve.g gVar) {
        gVar.zak();
        ze.i iVar = this.f599b;
        e eVar = iVar.j;
        eVar.getClass();
        z zVar = new z(new b0(gVar), eVar.F.get(), iVar);
        fg.a aVar = eVar.K;
        aVar.sendMessage(aVar.obtainMessage(4, zVar));
        return gVar;
    }
}
