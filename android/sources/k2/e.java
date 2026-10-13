package k2;

import android.os.Build;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class e extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ a5.a f13122d;

    public e(a5.a aVar) {
        this.f13122d = aVar;
    }

    @Override // w3.q
    public final void s(Throwable th2) {
        ((j) this.f13122d.a).d(th2);
    }

    @Override // w3.q
    public final void t(e4.i iVar) {
        a5.a aVar = this.f13122d;
        aVar.f122c = iVar;
        e4.i iVar2 = (e4.i) aVar.f122c;
        j jVar = (j) aVar.a;
        aVar.f121b = new r(iVar2, jVar.f13130g, jVar.f13132i, Build.VERSION.SDK_INT >= 34 ? o.a() : ys.d.K());
        j jVar2 = (j) aVar.a;
        jVar2.getClass();
        ArrayList arrayList = new ArrayList();
        jVar2.a.writeLock().lock();
        try {
            jVar2.f13126c = 1;
            arrayList.addAll(jVar2.f13125b);
            jVar2.f13125b.clear();
            jVar2.a.writeLock().unlock();
            jVar2.f13127d.post(new af.p(arrayList, jVar2.f13126c, (Throwable) null));
        } catch (Throwable th2) {
            jVar2.a.writeLock().unlock();
            throw th2;
        }
    }
}
