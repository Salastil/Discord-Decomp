package uh;

import a5.c0;

/* loaded from: classes3.dex */
public final class p extends o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18918e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f18919i;

    public /* synthetic */ p(int i5, Object obj) {
        this.f18918e = i5;
        this.f18919i = obj;
    }

    @Override // uh.o
    public final void a() {
        switch (this.f18918e) {
            case 0:
                synchronized (((q) this.f18919i).f18925f) {
                    try {
                        if (((q) this.f18919i).k.get() > 0 && ((q) this.f18919i).k.decrementAndGet() > 0) {
                            ((q) this.f18919i).f18921b.e("Leaving the connection open for other ongoing calls.", new Object[0]);
                            return;
                        }
                        q qVar = (q) this.f18919i;
                        if (qVar.f18930m != null) {
                            qVar.f18921b.e("Unbind from service.", new Object[0]);
                            q qVar2 = (q) this.f18919i;
                            qVar2.a.unbindService(qVar2.f18929l);
                            q qVar3 = (q) this.f18919i;
                            qVar3.f18926g = false;
                            qVar3.f18930m = null;
                            qVar3.f18929l = null;
                        }
                        ((q) this.f18919i).e();
                        return;
                    } finally {
                    }
                }
            default:
                q qVar4 = (q) ((c0) this.f18919i).f151e;
                qVar4.f18921b.e("unlinkToDeath", new Object[0]);
                qVar4.f18930m.asBinder().unlinkToDeath(qVar4.j, 0);
                qVar4.f18930m = null;
                qVar4.f18926g = false;
                return;
        }
    }
}
