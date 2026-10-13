package qa;

import android.net.Uri;
import android.os.Parcel;
import bg.y0;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.gms.identitycredentials.GetCredentialRequest;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.agesignals.AgeSignalsManager;
import hc.g1;
import ie.a0;
import ie.f0;
import ie.h0;
import ie.j0;
import ie.k0;
import ie.n0;
import ie.s0;
import ip.i0;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.locks.ReentrantLock;
import ke.d0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class t implements f0, AgeSignalsManager, r4.e, af.i, jg.d, uh.g, uq.f, OnCompleteListener, xq.n, vn.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16717d;

    /* renamed from: e, reason: collision with root package name */
    public Object f16718e;

    public /* synthetic */ t(int i5) {
        this.f16717d = i5;
    }

    public static void d(StringBuilder sb2, char[] cArr, char c6) {
        for (int i5 = 0; i5 < sb2.length(); i5++) {
            int length = cArr.length;
            int i6 = 0;
            while (true) {
                if (i6 < length) {
                    if (sb2.charAt(i5) == cArr[i6]) {
                        sb2.setCharAt(i5, c6);
                        break;
                    }
                    i6++;
                }
            }
        }
    }

    public static int e(y9.e eVar) {
        int ordinal = eVar.ordinal();
        if (ordinal == 0) {
            return 0;
        }
        int i5 = 1;
        if (ordinal != 1) {
            i5 = 2;
            if (ordinal != 2) {
                if (ordinal == 3) {
                    return 3;
                }
                throw new ap.a("Invalid DateStyle: ".concat(eVar.toString()), 9);
            }
        }
        return i5;
    }

    public static int f(y9.n nVar) {
        int ordinal = nVar.ordinal();
        if (ordinal == 0) {
            return 0;
        }
        int i5 = 1;
        if (ordinal != 1) {
            i5 = 2;
            if (ordinal != 2) {
                if (ordinal == 3) {
                    return 3;
                }
                throw new ap.a("Invalid DateStyle: ".concat(nVar.toString()), 9);
            }
        }
        return i5;
    }

    @Override // uh.g
    public Object a() {
        uh.f fVar = (uh.f) this.f16718e;
        if (fVar != null) {
            return fVar.a();
        }
        throw new IllegalStateException();
    }

    @Override // af.i
    public void accept(Object obj, Object obj2) {
        switch (this.f16717d) {
            case 5:
                GetCredentialRequest getCredentialRequest = (GetCredentialRequest) this.f16718e;
                tf.f fVar = new tf.f((jg.g) obj2, 1);
                tf.d dVar = (tf.d) ((tf.e) obj).o();
                ze.f a = cg.b.a();
                Parcel obtain = Parcel.obtain();
                obtain.writeInterfaceToken("com.google.android.gms.identitycredentials.internal.IIdentityCredentialService");
                int i5 = cg.a.a;
                obtain.writeStrongBinder(fVar);
                cg.a.b(obtain, getCredentialRequest);
                cg.a.b(obtain, a);
                ((tf.b) dVar).b(1, obtain);
                break;
            default:
                ve.l lVar = new ve.l((jg.g) obj2);
                vf.i iVar = (vf.i) ((vf.c) obj).o();
                se.e eVar = (se.e) this.f16718e;
                Parcel r5 = iVar.r();
                int i6 = vf.f.a;
                r5.writeStrongBinder(lVar);
                vf.f.c(r5, eVar);
                iVar.s(1, r5);
                break;
        }
    }

    @Override // uq.f
    public uq.e b(hq.b classId) {
        uq.e b10;
        Intrinsics.checkNotNullParameter(classId, "classId");
        Iterator it = nt.a.C((i0) this.f16718e, classId.a).iterator();
        while (it.hasNext()) {
            ip.f0 f0Var = (ip.f0) it.next();
            if ((f0Var instanceof vq.c) && (b10 = ((vq.c) f0Var).G.b(classId)) != null) {
                return b10;
            }
        }
        return null;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsManager
    public jg.l c(qh.g gVar) {
        qh.f fVar = (qh.f) this.f16718e;
        dg.g gVar2 = fVar.f16898c;
        if (gVar2 == null) {
            return qh.f.a(-2);
        }
        if (!fVar.b()) {
            return qh.f.a(-6);
        }
        jg.g gVar3 = new jg.g();
        gVar2.a().post(new dg.d(gVar2, gVar3, gVar3, new dg.d(fVar, gVar3, gVar3, gVar, 2), 0));
        return gVar3.a;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsManager
    public jg.l g(l8.a aVar) {
        qh.f fVar = (qh.f) this.f16718e;
        dg.g gVar = fVar.f16898c;
        if (gVar == null) {
            return qh.f.a(-2);
        }
        if (!fVar.b()) {
            return qh.f.a(-6);
        }
        jg.g gVar2 = new jg.g();
        gVar.a().post(new dg.d(gVar, gVar2, gVar2, new dg.d(fVar, gVar2, gVar2, aVar, 1), 0));
        return gVar2.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x005d  */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        long j7;
        n0 n0Var = (n0) h0Var;
        qd.h hVar = (qd.h) this.f16718e;
        long j10 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        int i6 = n0Var.f10699i;
        hVar.K.getClass();
        if (!(iOException instanceof g1) && !(iOException instanceof FileNotFoundException) && !(iOException instanceof a0) && !(iOException instanceof j0)) {
            int i10 = ie.m.f10690e;
            for (Throwable th2 = iOException; th2 != null; th2 = th2.getCause()) {
                if (!(th2 instanceof ie.m) || ((ie.m) th2).f10691d != 2008) {
                }
            }
            j7 = Math.min((i5 - 1) * 1000, 5000);
            bd.f fVar = j7 != -9223372036854775807L ? k0.f10683x : new bd.f(0, j7, false);
            hVar.O.p(loadEventInfo, i6, iOException, !fVar.a());
            return fVar;
        }
        j7 = -9223372036854775807L;
        if (j7 != -9223372036854775807L) {
        }
        hVar.O.p(loadEventInfo, i6, iOException, !fVar.a());
        return fVar;
    }

    @Override // r4.e
    public o4.e l0() {
        ArrayList arrayList = (ArrayList) this.f16718e;
        return ((y4.a) arrayList.get(0)).c() ? new o4.j(arrayList, 1) : new o4.m(arrayList);
    }

    @Override // xq.n
    public void lock() {
        ((ReentrantLock) this.f16718e).lock();
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        ((CountDownLatch) this.f16718e).countDown();
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        th.s sVar = (th.s) this.f16718e;
        List list = (List) obj;
        int a = sVar.f18569b.a();
        Iterator it = sVar.e().iterator();
        while (it.hasNext()) {
            File file = (File) it.next();
            if (!list.contains(file.getName()) && th.s.b(file, true) != a) {
                th.s.g(file);
            }
        }
    }

    @Override // r4.e
    public List r0() {
        return (ArrayList) this.f16718e;
    }

    @Override // r4.e
    public boolean t0() {
        ArrayList arrayList = (ArrayList) this.f16718e;
        return arrayList.size() == 1 && ((y4.a) arrayList.get(0)).c();
    }

    @Override // xq.n
    public void unlock() {
        ((ReentrantLock) this.f16718e).unlock();
    }

    @Override // ie.f0
    public void v(h0 h0Var, long j, long j5) {
        n0 n0Var = (n0) h0Var;
        qd.h hVar = (qd.h) this.f16718e;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        hVar.K.getClass();
        hVar.O.l(loadEventInfo, n0Var.f10699i);
        rd.c cVar = (rd.c) n0Var.f10702x;
        rd.c cVar2 = hVar.f16837f0;
        int size = cVar2 == null ? 0 : cVar2.f17223m.size();
        long j10 = cVar.b(0).f17241b;
        int i5 = 0;
        while (i5 < size && hVar.f16837f0.b(i5).f17241b < j10) {
            i5++;
        }
        if (cVar.f17216d) {
            if (size - i5 > cVar.f17223m.size()) {
                ke.b.N("DashMediaSource", "Loaded out of sync manifest");
            } else {
                long j11 = hVar.f16842l0;
                if (j11 == -9223372036854775807L || cVar.f17220h * 1000 > j11) {
                    hVar.f16841k0 = 0;
                } else {
                    ke.b.N("DashMediaSource", "Loaded stale dynamic manifest: " + cVar.f17220h + ", " + hVar.f16842l0);
                }
            }
            int i6 = hVar.f16841k0;
            hVar.f16841k0 = i6 + 1;
            if (i6 < hVar.K.k(n0Var.f10699i)) {
                hVar.f16833b0.postDelayed(hVar.T, Math.min((hVar.f16841k0 - 1) * 1000, 5000));
                return;
            } else {
                hVar.a0 = new y0();
                return;
            }
        }
        hVar.f16837f0 = cVar;
        hVar.f16838g0 = cVar.f17216d & hVar.f16838g0;
        hVar.h0 = j - j5;
        hVar.f16839i0 = j;
        synchronized (hVar.R) {
            try {
                if (n0Var.f10698e.a == hVar.f16835d0) {
                    Uri uri2 = hVar.f16837f0.k;
                    if (uri2 == null) {
                        uri2 = n0Var.f10700v.f10756i;
                    }
                    hVar.f16835d0 = uri2;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (size != 0) {
            hVar.f16843m0 += i5;
            hVar.x(true);
            return;
        }
        rd.c cVar3 = hVar.f16837f0;
        if (!cVar3.f17216d) {
            hVar.x(true);
            return;
        }
        e4.c cVar4 = cVar3.f17221i;
        if (cVar4 == null) {
            hVar.u();
            return;
        }
        String str = (String) cVar4.f7939e;
        if (d0.a(str, "urn:mpeg:dash:utc:direct:2014") || d0.a(str, "urn:mpeg:dash:utc:direct:2012")) {
            try {
                hVar.f16840j0 = d0.L((String) cVar4.f7940i) - hVar.f16839i0;
                hVar.x(true);
                return;
            } catch (g1 e9) {
                ke.b.s("DashMediaSource", "Failed to resolve time offset.", e9);
                hVar.x(true);
                return;
            }
        }
        if (d0.a(str, "urn:mpeg:dash:utc:http-iso:2014") || d0.a(str, "urn:mpeg:dash:utc:http-iso:2012")) {
            n0 n0Var2 = new n0(hVar.X, Uri.parse((String) cVar4.f7940i), 5, new qd.g());
            hVar.Y.f(n0Var2, new ve.i(hVar), 1);
            hVar.O.r(new LoadEventInfo(n0Var2.f10698e), n0Var2.f10699i, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
        } else if (d0.a(str, "urn:mpeg:dash:utc:http-xsdate:2014") || d0.a(str, "urn:mpeg:dash:utc:http-xsdate:2012")) {
            n0 n0Var3 = new n0(hVar.X, Uri.parse((String) cVar4.f7940i), 5, new j8.c());
            hVar.Y.f(n0Var3, new ve.i(hVar), 1);
            hVar.O.r(new LoadEventInfo(n0Var3.f10698e), n0Var3.f10699i, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
        } else if (d0.a(str, "urn:mpeg:dash:utc:ntp:2014") || d0.a(str, "urn:mpeg:dash:utc:ntp:2012")) {
            hVar.u();
        } else {
            ke.b.s("DashMediaSource", "Failed to resolve time offset.", new IOException("Unsupported UTC timing scheme"));
            hVar.x(true);
        }
    }

    @Override // ie.f0
    public void z(h0 h0Var, long j, long j5, boolean z5) {
        ((qd.h) this.f16718e).w((n0) h0Var);
    }

    public /* synthetic */ t(int i5, Object obj) {
        this.f16717d = i5;
        this.f16718e = obj;
    }

    public /* synthetic */ t(vf.b bVar, se.e eVar) {
        this.f16717d = 10;
        this.f16718e = eVar;
    }

    public t(hc.b dimmingManager) {
        this.f16717d = 11;
        Intrinsics.checkNotNullParameter(dimmingManager, "dimmingManager");
        this.f16718e = dimmingManager;
    }

    public t(i0 packageFragmentProvider) {
        this.f16717d = 9;
        Intrinsics.checkNotNullParameter(packageFragmentProvider, "packageFragmentProvider");
        this.f16718e = packageFragmentProvider;
    }

    public t() {
        this.f16717d = 7;
        this.f16718e = new LinkedHashSet();
    }

    public t(ReentrantLock lock) {
        this.f16717d = 13;
        Intrinsics.checkNotNullParameter(lock, "lock");
        this.f16718e = lock;
    }
}
