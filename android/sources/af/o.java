package af;

/* loaded from: classes3.dex */
public final class o implements b {
    public final /* synthetic */ e a;

    public o(e eVar) {
        this.a = eVar;
    }

    @Override // af.b
    public final void a(boolean z5) {
        fg.a aVar = this.a.K;
        aVar.sendMessage(aVar.obtainMessage(1, Boolean.valueOf(z5)));
    }
}
