package ai;

import a5.c0;

/* loaded from: classes3.dex */
public final class i extends f {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f621e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f622i;

    public /* synthetic */ i(int i5, Object obj) {
        this.f621e = i5;
        this.f622i = obj;
    }

    @Override // ai.f
    public final void a() {
        switch (this.f621e) {
            case 0:
                j jVar = (j) this.f622i;
                if (jVar.f633m != null) {
                    jVar.f624b.b("Unbind from service.", new Object[0]);
                    jVar.a.unbindService(jVar.f632l);
                    jVar.f629g = false;
                    jVar.f633m = null;
                    jVar.f632l = null;
                }
                jVar.b();
                break;
            default:
                j jVar2 = (j) ((c0) this.f622i).f151e;
                jVar2.f624b.b("unlinkToDeath", new Object[0]);
                jVar2.f633m.asBinder().unlinkToDeath(jVar2.j, 0);
                jVar2.f633m = null;
                jVar2.f629g = false;
                break;
        }
    }
}
