package j4;

import a5.s;
import ai.k;
import java.util.concurrent.Executor;
import ve.i;

/* loaded from: classes.dex */
public final class d implements c {
    public final /* synthetic */ i a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ c f12413b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Executor f12414c;

    public d(i iVar, c cVar, Executor executor) {
        this.a = iVar;
        this.f12413b = cVar;
        this.f12414c = executor;
    }

    @Override // j4.c
    public final void a(e eVar) {
        i iVar = this.a;
        c cVar = this.f12413b;
        try {
            this.f12414c.execute(new s(iVar, cVar, eVar, 9));
        } catch (Exception e9) {
            iVar.q(new k(e9));
        }
    }
}
