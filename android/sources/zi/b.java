package zi;

import android.text.TextUtils;
import e4.r;
import java.io.IOException;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21251d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f21252e;

    public /* synthetic */ b(c cVar, int i5) {
        this.f21251d = i5;
        this.f21252e = cVar;
    }

    /* JADX WARN: Finally extract failed */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0053 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        aj.b I;
        aj.b g6;
        switch (this.f21251d) {
            case 0:
                this.f21252e.a();
                return;
            case 1:
                c cVar = this.f21252e;
                Object obj = c.f21253m;
                synchronized (obj) {
                    try {
                        ki.g gVar = cVar.a;
                        gVar.a();
                        r d6 = r.d(gVar.a);
                        try {
                            I = cVar.f21255c.I();
                            if (d6 != null) {
                                d6.u();
                            }
                        } catch (Throwable th2) {
                            if (d6 != null) {
                                d6.u();
                            }
                            throw th2;
                        }
                    } finally {
                    }
                }
                try {
                    int i5 = I.f641b;
                    if (!(i5 == 5)) {
                        if (!(i5 == 3)) {
                            if (cVar.f21256d.a(I)) {
                                g6 = cVar.b(I);
                                synchronized (obj) {
                                    try {
                                        ki.g gVar2 = cVar.a;
                                        gVar2.a();
                                        r d7 = r.d(gVar2.a);
                                        try {
                                            cVar.f21255c.D(g6);
                                            if (d7 != null) {
                                                d7.u();
                                            }
                                        } catch (Throwable th3) {
                                            if (d7 != null) {
                                                d7.u();
                                            }
                                            throw th3;
                                        }
                                    } finally {
                                    }
                                }
                                synchronized (cVar) {
                                    try {
                                        if (cVar.k.size() != 0 && !TextUtils.equals(I.a, g6.a)) {
                                            Iterator it = cVar.k.iterator();
                                            if (it.hasNext()) {
                                                if (it.next() != null) {
                                                    throw new ClassCastException();
                                                }
                                                throw null;
                                            }
                                        }
                                    } finally {
                                    }
                                }
                                if (g6.f641b == 4) {
                                    String str = g6.a;
                                    synchronized (cVar) {
                                        cVar.j = str;
                                    }
                                }
                                int i6 = g6.f641b;
                                if (i6 == 5) {
                                    cVar.h(new e());
                                    return;
                                } else if (i6 == 2 || i6 == 1) {
                                    cVar.h(new IOException("Installation ID could not be validated with the Firebase servers (maybe it was deleted). Firebase Installations will need to create a new Installation ID and auth token. Please retry your last request."));
                                    return;
                                } else {
                                    cVar.i(g6);
                                    return;
                                }
                            }
                            return;
                        }
                    }
                    g6 = cVar.g(I);
                    synchronized (obj) {
                    }
                } catch (e e9) {
                    cVar.h(e9);
                    return;
                }
                break;
            default:
                this.f21252e.a();
                return;
        }
    }
}
