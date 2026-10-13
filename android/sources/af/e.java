package af;

import android.app.ActivityManager;
import android.app.Application;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.SparseIntArray;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.google.android.gms.common.api.GoogleApiActivity;
import com.google.android.gms.common.api.Status;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class e implements Handler.Callback {
    public static final Status M = new Status(4, "Sign-out occurred while this API call was in progress.", null, null);
    public static final Status N = new Status(4, "The user must be signed in to make this API call.", null, null);
    public static final Object O = new Object();
    public static e P;
    public final AtomicInteger E;
    public final AtomicInteger F;
    public final ConcurrentHashMap G;
    public m H;
    public final s.f I;
    public final s.f J;
    public final fg.a K;
    public volatile boolean L;

    /* renamed from: d, reason: collision with root package name */
    public long f551d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f552e;

    /* renamed from: i, reason: collision with root package name */
    public bf.j f553i;

    /* renamed from: v, reason: collision with root package name */
    public df.b f554v;

    /* renamed from: w, reason: collision with root package name */
    public final Context f555w;

    /* renamed from: x, reason: collision with root package name */
    public final ye.e f556x;

    /* renamed from: y, reason: collision with root package name */
    public final e4.c f557y;

    public e(Context context, Looper looper) {
        ye.e eVar = ye.e.f20918d;
        this.f551d = 10000L;
        this.f552e = false;
        this.E = new AtomicInteger(1);
        this.F = new AtomicInteger(0);
        this.G = new ConcurrentHashMap(5, 0.75f, 1);
        this.H = null;
        this.I = new s.f(0);
        this.J = new s.f(0);
        this.L = true;
        this.f555w = context;
        fg.a aVar = new fg.a(looper, this);
        Looper.getMainLooper();
        this.K = aVar;
        this.f556x = eVar;
        this.f557y = new e4.c(5, (byte) 0);
        PackageManager packageManager = context.getPackageManager();
        if (gf.c.f9237e == null) {
            gf.c.f9237e = Boolean.valueOf(gf.c.c() && packageManager.hasSystemFeature("android.hardware.type.automotive"));
        }
        if (gf.c.f9237e.booleanValue()) {
            this.L = false;
        }
        aVar.sendMessage(aVar.obtainMessage(6));
    }

    public static void a() {
        synchronized (O) {
            try {
                e eVar = P;
                if (eVar != null) {
                    eVar.F.incrementAndGet();
                    fg.a aVar = eVar.K;
                    aVar.sendMessageAtFrontOfQueue(aVar.obtainMessage(10));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static Status e(a aVar, ye.b bVar) {
        return new Status(17, a3.e.l("API: ", (String) aVar.f532b.f7944i, " is not available on this device. Connection failed with: ", String.valueOf(bVar)), bVar.f20907i, bVar);
    }

    public static e g(Context context) {
        e eVar;
        HandlerThread handlerThread;
        synchronized (O) {
            if (P == null) {
                synchronized (bf.f0.f2872g) {
                    try {
                        handlerThread = bf.f0.f2874i;
                        if (handlerThread == null) {
                            HandlerThread handlerThread2 = new HandlerThread("GoogleApiHandler", 9);
                            bf.f0.f2874i = handlerThread2;
                            handlerThread2.start();
                            handlerThread = bf.f0.f2874i;
                        }
                    } finally {
                    }
                }
                Looper looper = handlerThread.getLooper();
                Context applicationContext = context.getApplicationContext();
                Object obj = ye.e.f20917c;
                P = new e(applicationContext, looper);
            }
            eVar = P;
        }
        return eVar;
    }

    public final void b(m mVar) {
        synchronized (O) {
            try {
                if (this.H != mVar) {
                    this.H = mVar;
                    this.I.clear();
                }
                this.I.addAll(mVar.f575x);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean c() {
        if (this.f552e) {
            return false;
        }
        bf.i iVar = (bf.i) bf.h.a().a;
        if (iVar != null && !iVar.f2890e) {
            return false;
        }
        int i5 = ((SparseIntArray) this.f557y.f7939e).get(203400000, -1);
        return i5 == -1 || i5 == 0;
    }

    public final boolean d(ye.b bVar, int i5) {
        ye.e eVar = this.f556x;
        eVar.getClass();
        Context context = this.f555w;
        if (!jf.a.i(context)) {
            int i6 = bVar.f20906e;
            PendingIntent pendingIntent = bVar.f20907i;
            if (!((i6 == 0 || pendingIntent == null) ? false : true)) {
                pendingIntent = null;
                Intent a = eVar.a(context, null, i6);
                if (a != null) {
                    pendingIntent = PendingIntent.getActivity(context, 0, a, 201326592);
                }
            }
            if (pendingIntent != null) {
                int i10 = GoogleApiActivity.f5650e;
                Intent intent = new Intent(context, (Class<?>) GoogleApiActivity.class);
                intent.putExtra("pending_intent", pendingIntent);
                intent.putExtra("failing_client_id", i5);
                intent.putExtra("notify_manager", true);
                eVar.g(context, i6, PendingIntent.getActivity(context, 0, intent, xf.d.a | 134217728));
                return true;
            }
        }
        return false;
    }

    public final q f(ze.i iVar) {
        a aVar = iVar.f21211e;
        ConcurrentHashMap concurrentHashMap = this.G;
        q qVar = (q) concurrentHashMap.get(aVar);
        if (qVar == null) {
            qVar = new q(this, iVar);
            concurrentHashMap.put(aVar, qVar);
        }
        if (qVar.f583g.k()) {
            this.J.add(aVar);
        }
        qVar.l();
        return qVar;
    }

    public final void h(ye.b bVar, int i5) {
        if (d(bVar, i5)) {
            return;
        }
        fg.a aVar = this.K;
        aVar.sendMessage(aVar.obtainMessage(5, i5, 0, bVar));
    }

    /* JADX WARN: Removed duplicated region for block: B:167:0x0305  */
    @Override // android.os.Handler.Callback
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean handleMessage(Message message) {
        q qVar;
        boolean z5;
        ye.d[] g6;
        Context context = this.f555w;
        s.f fVar = this.J;
        fg.a aVar = this.K;
        ConcurrentHashMap concurrentHashMap = this.G;
        int i5 = message.what;
        long j = LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES;
        switch (i5) {
            case 1:
                if (true == ((Boolean) message.obj).booleanValue()) {
                    j = 10000;
                }
                this.f551d = j;
                aVar.removeMessages(12);
                Iterator it = concurrentHashMap.keySet().iterator();
                while (it.hasNext()) {
                    aVar.sendMessageDelayed(aVar.obtainMessage(12, (a) it.next()), this.f551d);
                }
                return true;
            case 2:
                message.obj.getClass();
                throw new ClassCastException();
            case 3:
                for (q qVar2 : concurrentHashMap.values()) {
                    bf.t.c(qVar2.f592r.K);
                    qVar2.f590p = null;
                    qVar2.l();
                }
                return true;
            case 4:
            case 8:
            case 13:
                z zVar = (z) message.obj;
                ze.i iVar = zVar.f610c;
                e0 e0Var = zVar.a;
                q qVar3 = (q) concurrentHashMap.get(iVar.f21211e);
                if (qVar3 == null) {
                    qVar3 = f(zVar.f610c);
                }
                if (!qVar3.f583g.k() || this.F.get() == zVar.f609b) {
                    qVar3.m(e0Var);
                    return true;
                }
                e0Var.a(M);
                qVar3.p();
                return true;
            case 5:
                int i6 = message.arg1;
                ye.b bVar = (ye.b) message.obj;
                Iterator it2 = concurrentHashMap.values().iterator();
                while (true) {
                    if (it2.hasNext()) {
                        qVar = (q) it2.next();
                        if (qVar.f586l == i6) {
                        }
                    } else {
                        qVar = null;
                    }
                }
                if (qVar == null) {
                    Log.wtf("GoogleApiManager", s4.h.e(i6, "Could not find API instance ", " while trying to fail enqueued calls."), new Exception());
                    return true;
                }
                int i10 = bVar.f20906e;
                if (i10 != 13) {
                    qVar.c(e(qVar.f584h, bVar));
                    return true;
                }
                this.f556x.getClass();
                int i11 = ye.i.f20923e;
                qVar.c(new Status(17, a3.e.l("Error resolution was canceled by the user, original error message: ", ye.b.h(i10), ": ", bVar.f20908v), null, null));
                return true;
            case 6:
                if (context.getApplicationContext() instanceof Application) {
                    c.a((Application) context.getApplicationContext());
                    c cVar = c.f542w;
                    o oVar = new o(this);
                    cVar.getClass();
                    synchronized (cVar) {
                        cVar.f545i.add(oVar);
                    }
                    AtomicBoolean atomicBoolean = cVar.f543d;
                    AtomicBoolean atomicBoolean2 = cVar.f544e;
                    if (!atomicBoolean2.get()) {
                        if (gf.e.b()) {
                            z5 = true;
                            if (!z5) {
                                this.f551d = LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES;
                                return true;
                            }
                        } else {
                            ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
                            ActivityManager.getMyMemoryState(runningAppProcessInfo);
                            if (!atomicBoolean2.getAndSet(true) && runningAppProcessInfo.importance > 100) {
                                atomicBoolean.set(true);
                            }
                        }
                    }
                    z5 = atomicBoolean.get();
                    if (!z5) {
                    }
                }
                return true;
            case 7:
                f((ze.i) message.obj);
                return true;
            case 9:
                if (concurrentHashMap.containsKey(message.obj)) {
                    q qVar4 = (q) concurrentHashMap.get(message.obj);
                    bf.t.c(qVar4.f592r.K);
                    if (qVar4.f588n) {
                        qVar4.l();
                        return true;
                    }
                }
                return true;
            case 10:
                fVar.getClass();
                s.a aVar2 = new s.a(fVar);
                while (aVar2.hasNext()) {
                    q qVar5 = (q) concurrentHashMap.remove((a) aVar2.next());
                    if (qVar5 != null) {
                        qVar5.p();
                    }
                }
                fVar.clear();
                return true;
            case 11:
                if (concurrentHashMap.containsKey(message.obj)) {
                    q qVar6 = (q) concurrentHashMap.get(message.obj);
                    e eVar = qVar6.f592r;
                    bf.t.c(eVar.K);
                    boolean z6 = qVar6.f588n;
                    if (z6) {
                        a aVar3 = qVar6.f584h;
                        fg.a aVar4 = qVar6.f592r.K;
                        if (z6) {
                            aVar4.removeMessages(11, aVar3);
                            aVar4.removeMessages(9, aVar3);
                            qVar6.f588n = false;
                        }
                        qVar6.c(eVar.f556x.b(eVar.f555w, ye.f.a) == 18 ? new Status(21, "Connection timed out waiting for Google Play services update to complete.", null, null) : new Status(22, "API failed to connect while resuming due to an unknown error.", null, null));
                        qVar6.f583g.b("Timing out connection while resuming.");
                        return true;
                    }
                }
                return true;
            case 12:
                if (concurrentHashMap.containsKey(message.obj)) {
                    q qVar7 = (q) concurrentHashMap.get(message.obj);
                    bf.t.c(qVar7.f592r.K);
                    ze.c cVar2 = qVar7.f583g;
                    if (cVar2.isConnected() && qVar7.k.isEmpty()) {
                        e4.c cVar3 = qVar7.f585i;
                        if (((Map) cVar3.f7939e).isEmpty() && ((Map) cVar3.f7940i).isEmpty()) {
                            cVar2.b("Timing out service connection.");
                            return true;
                        }
                        qVar7.h();
                    }
                    return true;
                }
                return true;
            case 14:
                message.obj.getClass();
                throw new ClassCastException();
            case 15:
                r rVar = (r) message.obj;
                if (concurrentHashMap.containsKey(rVar.a)) {
                    q qVar8 = (q) concurrentHashMap.get(rVar.a);
                    if (qVar8.f589o.contains(rVar) && !qVar8.f588n) {
                        if (qVar8.f583g.isConnected()) {
                            qVar8.e();
                            return true;
                        }
                        qVar8.l();
                        return true;
                    }
                }
                return true;
            case 16:
                r rVar2 = (r) message.obj;
                if (concurrentHashMap.containsKey(rVar2.a)) {
                    q qVar9 = (q) concurrentHashMap.get(rVar2.a);
                    ArrayList arrayList = qVar9.f589o;
                    e eVar2 = qVar9.f592r;
                    LinkedList<e0> linkedList = qVar9.f582f;
                    if (arrayList.remove(rVar2)) {
                        eVar2.K.removeMessages(15, rVar2);
                        eVar2.K.removeMessages(16, rVar2);
                        ye.d dVar = rVar2.f593b;
                        ArrayList arrayList2 = new ArrayList(linkedList.size());
                        for (e0 e0Var2 : linkedList) {
                            if ((e0Var2 instanceof w) && (g6 = ((w) e0Var2).g(qVar9)) != null) {
                                int length = g6.length;
                                int i12 = 0;
                                while (true) {
                                    if (i12 >= length) {
                                        break;
                                    }
                                    if (!bf.t.j(g6[i12], dVar)) {
                                        i12++;
                                    } else if (i12 >= 0) {
                                        arrayList2.add(e0Var2);
                                    }
                                }
                            }
                        }
                        int size = arrayList2.size();
                        for (int i13 = 0; i13 < size; i13++) {
                            e0 e0Var3 = (e0) arrayList2.get(i13);
                            linkedList.remove(e0Var3);
                            e0Var3.b(new ze.o(dVar));
                        }
                    }
                }
                return true;
            case 17:
                bf.j jVar = this.f553i;
                if (jVar != null) {
                    if (jVar.f2894d > 0 || c()) {
                        if (this.f554v == null) {
                            this.f554v = new df.b(this.f555w, null, df.b.k, bf.k.f2896e, ze.h.f21206c);
                        }
                        this.f554v.c(jVar);
                    }
                    this.f553i = null;
                    return true;
                }
                return true;
            case 18:
                y yVar = (y) message.obj;
                long j5 = yVar.f607c;
                bf.g gVar = yVar.a;
                int i14 = yVar.f606b;
                if (j5 == 0) {
                    bf.j jVar2 = new bf.j(i14, Arrays.asList(gVar));
                    if (this.f554v == null) {
                        this.f554v = new df.b(this.f555w, null, df.b.k, bf.k.f2896e, ze.h.f21206c);
                    }
                    this.f554v.c(jVar2);
                    return true;
                }
                bf.j jVar3 = this.f553i;
                if (jVar3 != null) {
                    List list = jVar3.f2895e;
                    if (jVar3.f2894d != i14 || (list != null && list.size() >= yVar.f608d)) {
                        aVar.removeMessages(17);
                        bf.j jVar4 = this.f553i;
                        if (jVar4 != null) {
                            if (jVar4.f2894d > 0 || c()) {
                                if (this.f554v == null) {
                                    this.f554v = new df.b(this.f555w, null, df.b.k, bf.k.f2896e, ze.h.f21206c);
                                }
                                this.f554v.c(jVar4);
                            }
                            this.f553i = null;
                        }
                    } else {
                        bf.j jVar5 = this.f553i;
                        if (jVar5.f2895e == null) {
                            jVar5.f2895e = new ArrayList();
                        }
                        jVar5.f2895e.add(gVar);
                    }
                }
                if (this.f553i == null) {
                    ArrayList arrayList3 = new ArrayList();
                    arrayList3.add(gVar);
                    this.f553i = new bf.j(i14, arrayList3);
                    aVar.sendMessageDelayed(aVar.obtainMessage(17), yVar.f607c);
                    return true;
                }
                return true;
            case 19:
                this.f552e = false;
                return true;
            default:
                Log.w("GoogleApiManager", "Unknown message id: " + i5);
                return false;
        }
    }
}
