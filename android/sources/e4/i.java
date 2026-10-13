package e4;

import a5.k0;
import android.database.Cursor;
import android.graphics.Typeface;
import android.opengl.EGL14;
import android.os.SystemClock;
import android.util.Pair;
import androidx.appcompat.widget.b4;
import androidx.appcompat.widget.w;
import androidx.collection.SimpleArrayMap;
import androidx.core.util.Pools$SimplePool;
import androidx.work.impl.WorkDatabase_Impl;
import c5.v;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.play.agesignals.AgeSignalsAccessResult;
import com.google.android.play.agesignals.AgeSignalsManager;
import com.google.android.play.agesignals.AgeSignalsResult;
import hc.h0;
import io.sentry.SentryLevel;
import io.sentry.a1;
import io.sentry.q4;
import io.sentry.v5;
import ip.a0;
import ip.c0;
import ip.d0;
import ip.r0;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.Executor;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import javax.inject.Provider;
import kotlin.Lazy;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import nd.s;
import nd.x;
import qa.t;
import rd.u;
import th.f1;
import th.i1;
import th.m0;
import th.t1;

/* loaded from: classes.dex */
public final class i implements aq.m, c5.k, yb.b, a1, x, nc.o, AgeSignalsManager {

    /* renamed from: d, reason: collision with root package name */
    public Object f7952d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7953e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7954i;

    /* renamed from: v, reason: collision with root package name */
    public Object f7955v;

    public /* synthetic */ i(Object obj, Object obj2, Object obj3, Object obj4) {
        this.f7952d = obj;
        this.f7953e = obj2;
        this.f7954i = obj3;
        this.f7955v = obj4;
    }

    public static void H(long j, HashMap hashMap) {
        ArrayList arrayList = new ArrayList();
        for (Map.Entry entry : hashMap.entrySet()) {
            if (((Long) entry.getValue()).longValue() <= j) {
                arrayList.add(entry.getKey());
            }
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            hashMap.remove(arrayList.get(i5));
        }
    }

    public static void m(String str) {
        int eglGetError = EGL14.eglGetError();
        if (eglGetError == 12288) {
            return;
        }
        StringBuilder p3 = k0.d.p(str, ": EGL error: 0x");
        p3.append(Integer.toHexString(eglGetError));
        throw new RuntimeException(p3.toString());
    }

    @Override // nc.o
    public void A(int i5, s sVar, int i6) {
        if (w(i5, sVar)) {
            ((nc.n) this.f7954i).c(i6);
        }
    }

    @Override // aq.m
    public aq.n B(hq.e eVar) {
        return ((b4) this.f7952d).B(eVar);
    }

    @Override // nc.o
    public void C(int i5, s sVar) {
        if (w(i5, sVar)) {
            ((nc.n) this.f7954i).a();
        }
    }

    public MediaLoadData D(MediaLoadData mediaLoadData) {
        nd.g gVar = (nd.g) this.f7955v;
        Object obj = this.f7952d;
        long j = mediaLoadData.f5435f;
        long u5 = gVar.u(j, obj);
        long j5 = mediaLoadData.f5436g;
        long u6 = gVar.u(j5, obj);
        return (u5 == j && u6 == j5) ? mediaLoadData : new MediaLoadData(mediaLoadData.a, mediaLoadData.f5431b, mediaLoadData.f5432c, mediaLoadData.f5433d, mediaLoadData.f5434e, u5, u6);
    }

    public void E(e2.j jVar) {
        Object n6 = ((pr.h) this.f7954i).n(jVar);
        if (n6 instanceof pr.l) {
            Throwable th2 = ((pr.l) n6).a;
            if (th2 != null) {
                throw th2;
            }
            throw new h0("Channel was closed normally");
        }
        if (n6 instanceof pr.m) {
            throw new IllegalStateException("Check failed.");
        }
        if (((AtomicInteger) this.f7955v).getAndIncrement() == 0) {
            nr.x.t((sr.d) this.f7952d, null, new b4.d(this, (Continuation) null, 4), 3);
        }
    }

    public synchronized void F(c5.m mVar) {
        BlockingQueue blockingQueue;
        try {
            String cacheKey = mVar.getCacheKey();
            List list = (List) ((HashMap) this.f7952d).remove(cacheKey);
            if (list != null && !list.isEmpty()) {
                if (v.a) {
                    v.d("%d waiting requests for cacheKey=%s; resend to network", Integer.valueOf(list.size()), cacheKey);
                }
                c5.m mVar2 = (c5.m) list.remove(0);
                ((HashMap) this.f7952d).put(cacheKey, list);
                mVar2.setNetworkRequestCompleteListener(this);
                if (((c5.c) this.f7954i) != null && (blockingQueue = (BlockingQueue) this.f7955v) != null) {
                    try {
                        blockingQueue.put(mVar2);
                    } catch (InterruptedException e9) {
                        v.c("Couldn't add request to queue. %s", e9.toString());
                        Thread.currentThread().interrupt();
                        c5.c cVar = (c5.c) this.f7954i;
                        cVar.f3326w = true;
                        cVar.interrupt();
                    }
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // aq.m
    public void G(hq.e eVar, mq.f value) {
        Intrinsics.checkNotNullParameter(value, "value");
        ((b4) this.f7952d).G(eVar, value);
    }

    public rd.b I(List list) {
        rd.b bVar;
        HashMap hashMap = (HashMap) this.f7954i;
        ArrayList i5 = i(list);
        if (i5.size() < 2) {
            return (rd.b) fi.p.h(null, i5);
        }
        Collections.sort(i5, new com.facebook.react.uimanager.a(22));
        ArrayList arrayList = new ArrayList();
        int i6 = 0;
        int i10 = ((rd.b) i5.get(0)).f17212c;
        int i11 = 0;
        while (true) {
            if (i11 >= i5.size()) {
                break;
            }
            rd.b bVar2 = (rd.b) i5.get(i11);
            if (i10 == bVar2.f17212c) {
                arrayList.add(new Pair(bVar2.f17211b, Integer.valueOf(bVar2.f17213d)));
                i11++;
            } else if (arrayList.size() == 1) {
                return (rd.b) i5.get(0);
            }
        }
        rd.b bVar3 = (rd.b) hashMap.get(arrayList);
        if (bVar3 != null) {
            return bVar3;
        }
        List subList = i5.subList(0, arrayList.size());
        int i12 = 0;
        for (int i13 = 0; i13 < subList.size(); i13++) {
            i12 += ((rd.b) subList.get(i13)).f17213d;
        }
        int nextInt = ((Random) this.f7955v).nextInt(i12);
        int i14 = 0;
        while (true) {
            if (i6 >= subList.size()) {
                bVar = (rd.b) fi.p.i(subList);
                break;
            }
            bVar = (rd.b) subList.get(i6);
            i14 += bVar.f17213d;
            if (nextInt < i14) {
                break;
            }
            i6++;
        }
        hashMap.put(arrayList, bVar);
        return bVar;
    }

    @Override // aq.m
    public void J(hq.e eVar, hq.b enumClassId, hq.e enumEntryName) {
        Intrinsics.checkNotNullParameter(enumClassId, "enumClassId");
        Intrinsics.checkNotNullParameter(enumEntryName, "enumEntryName");
        ((b4) this.f7952d).J(eVar, enumClassId, enumEntryName);
    }

    @Override // io.sentry.a1
    public void a(long j) {
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = (ScheduledThreadPoolExecutor) this.f7952d;
        io.sentry.r a = ((io.sentry.util.a) this.f7953e).a();
        try {
            if (!scheduledThreadPoolExecutor.isShutdown()) {
                scheduledThreadPoolExecutor.shutdown();
                try {
                    if (!scheduledThreadPoolExecutor.awaitTermination(j, TimeUnit.MILLISECONDS)) {
                        scheduledThreadPoolExecutor.shutdownNow();
                    }
                } catch (InterruptedException unused) {
                    scheduledThreadPoolExecutor.shutdownNow();
                    Thread.currentThread().interrupt();
                }
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // nd.x
    public void b(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).s(loadEventInfo, D(mediaLoadData));
        }
    }

    @Override // com.google.android.play.agesignals.AgeSignalsManager
    public jg.l c(qh.g gVar) {
        qh.a aVar = (qh.a) this.f7954i;
        if (aVar != null) {
            return k0.r(aVar);
        }
        AgeSignalsAccessResult ageSignalsAccessResult = (AgeSignalsAccessResult) this.f7955v;
        return ageSignalsAccessResult != null ? k0.s(ageSignalsAccessResult) : k0.r(new IllegalStateException("FakeAgeSignalsManager not configured with an age signals access response or exception."));
    }

    @Override // nc.o
    public void d(int i5, s sVar, Exception exc) {
        if (w(i5, sVar)) {
            ((nc.n) this.f7954i).d(exc);
        }
    }

    @Override // io.sentry.a1
    public void e() {
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = (ScheduledThreadPoolExecutor) this.f7952d;
        try {
            scheduledThreadPoolExecutor.submit(new com.google.firebase.messaging.s(24, this));
        } catch (RejectedExecutionException e9) {
            v5 v5Var = (v5) this.f7955v;
            if (v5Var != null) {
                v5Var.getLogger().k(SentryLevel.WARNING, "Prewarm task rejected from " + scheduledThreadPoolExecutor, e9);
            }
        }
    }

    @Override // nd.x
    public void f(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).k(loadEventInfo, D(mediaLoadData));
        }
    }

    @Override // com.google.android.play.agesignals.AgeSignalsManager
    public jg.l g(l8.a aVar) {
        qh.a aVar2 = (qh.a) this.f7952d;
        if (aVar2 != null) {
            return k0.r(aVar2);
        }
        AgeSignalsResult ageSignalsResult = (AgeSignalsResult) this.f7953e;
        return ageSignalsResult != null ? k0.s(ageSignalsResult) : k0.r(new IllegalStateException("FakeAgeSignalsManager not configured with a response or exception."));
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new com.google.firebase.messaging.r(4, (Executor) ((Provider) this.f7952d).get(), (dc.d) ((Provider) this.f7953e).get(), (m) ((m) this.f7954i).get(), (ec.c) ((Provider) this.f7955v).get());
    }

    @Override // nd.x
    public void h(int i5, s sVar, MediaLoadData mediaLoadData) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).f(D(mediaLoadData));
        }
    }

    public ArrayList i(List list) {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        HashMap hashMap = (HashMap) this.f7952d;
        H(elapsedRealtime, hashMap);
        HashMap hashMap2 = (HashMap) this.f7953e;
        H(elapsedRealtime, hashMap2);
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            rd.b bVar = (rd.b) list.get(i5);
            if (!hashMap.containsKey(bVar.f17211b) && !hashMap2.containsKey(Integer.valueOf(bVar.f17212c))) {
                arrayList.add(bVar);
            }
        }
        return arrayList;
    }

    @Override // io.sentry.a1
    public boolean isClosed() {
        io.sentry.r a = ((io.sentry.util.a) this.f7953e).a();
        try {
            boolean isShutdown = ((ScheduledThreadPoolExecutor) this.f7952d).isShutdown();
            a.close();
            return isShutdown;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // aq.m
    public void j() {
        ((b4) this.f7953e).j();
        ((ArrayList) ((com.google.firebase.messaging.r) this.f7954i).f6259e).add(new mq.a((jp.b) CollectionsKt.Z((ArrayList) this.f7955v)));
    }

    @Override // aq.m
    public aq.m k(hq.b classId, hq.e eVar) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        return ((b4) this.f7952d).k(classId, eVar);
    }

    @Override // io.sentry.a1
    public Future l(Runnable runnable, long j) {
        return ((ScheduledThreadPoolExecutor) this.f7952d).schedule(runnable, j, TimeUnit.MILLISECONDS);
    }

    public void n(Object obj, ArrayList arrayList, HashSet hashSet) {
        if (arrayList.contains(obj)) {
            return;
        }
        if (hashSet.contains(obj)) {
            throw new RuntimeException("This graph contains cyclic dependencies");
        }
        hashSet.add(obj);
        ArrayList arrayList2 = (ArrayList) ((SimpleArrayMap) this.f7953e).get(obj);
        if (arrayList2 != null) {
            int size = arrayList2.size();
            for (int i5 = 0; i5 < size; i5++) {
                n(arrayList2.get(i5), arrayList, hashSet);
            }
        }
        hashSet.remove(obj);
        arrayList.add(obj);
    }

    public ip.f o(hq.b classId, List typeParametersCount) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(typeParametersCount, "typeParametersCount");
        return (ip.f) ((xq.e) this.f7955v).invoke(new d0(classId, typeParametersCount));
    }

    public g p(j id2) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(id2, "id");
        String str = id2.a;
        int i5 = id2.f7956b;
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.f7952d;
        a3.o g6 = a3.o.g(2, "SELECT * FROM SystemIdInfo WHERE work_spec_id=? AND generation=?");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        g6.z(2, i5);
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            int n6 = nf.e.n(D, "work_spec_id");
            int n10 = nf.e.n(D, "generation");
            int n11 = nf.e.n(D, "system_id");
            g gVar = null;
            String string = null;
            if (D.moveToFirst()) {
                if (!D.isNull(n6)) {
                    string = D.getString(n6);
                }
                gVar = new g(string, D.getInt(n10), D.getInt(n11));
            }
            return gVar;
        } finally {
            D.close();
            g6.i();
        }
    }

    public void q(g gVar) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.f7952d;
        workDatabase_Impl.b();
        workDatabase_Impl.c();
        try {
            ((b) this.f7953e).g(gVar);
            workDatabase_Impl.o();
        } finally {
            workDatabase_Impl.k();
        }
    }

    @Override // nc.o
    public void r(int i5, s sVar) {
        if (w(i5, sVar)) {
            ((nc.n) this.f7954i).b();
        }
    }

    @Override // nc.o
    public void s(int i5, s sVar) {
        if (w(i5, sVar)) {
            ((nc.n) this.f7954i).e();
        }
    }

    @Override // io.sentry.a1
    public Future submit(Runnable runnable) {
        ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = (ScheduledThreadPoolExecutor) this.f7952d;
        if (scheduledThreadPoolExecutor.getQueue().size() >= 271) {
            scheduledThreadPoolExecutor.purge();
        }
        if (scheduledThreadPoolExecutor.getQueue().size() < 271) {
            return scheduledThreadPoolExecutor.submit(runnable);
        }
        v5 v5Var = (v5) this.f7955v;
        if (v5Var != null) {
            v5Var.getLogger().u(SentryLevel.WARNING, "Task " + runnable + " rejected from " + scheduledThreadPoolExecutor, new Object[0]);
        }
        return new q4();
    }

    public boolean t(r0 descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        if (Intrinsics.areEqual((r0) this.f7953e, descriptor)) {
            return true;
        }
        i iVar = (i) this.f7952d;
        return iVar != null ? iVar.t(descriptor) : false;
    }

    public synchronized boolean u(c5.m mVar) {
        try {
            String cacheKey = mVar.getCacheKey();
            if (!((HashMap) this.f7952d).containsKey(cacheKey)) {
                ((HashMap) this.f7952d).put(cacheKey, null);
                mVar.setNetworkRequestCompleteListener(this);
                if (v.a) {
                    v.b("new request, sending to network %s", cacheKey);
                }
                return false;
            }
            List list = (List) ((HashMap) this.f7952d).get(cacheKey);
            if (list == null) {
                list = new ArrayList();
            }
            mVar.addMarker("waiting-for-response");
            list.add(mVar);
            ((HashMap) this.f7952d).put(cacheKey, list);
            if (v.a) {
                v.b("Request for cacheKey=%s is in flight, putting on hold.", cacheKey);
            }
            return true;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // nd.x
    public void v(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).q(loadEventInfo, D(mediaLoadData), iOException, z5);
        }
    }

    public boolean w(int i5, s sVar) {
        s sVar2;
        Object obj = this.f7952d;
        nd.g gVar = (nd.g) this.f7955v;
        if (sVar != null) {
            sVar2 = gVar.t(obj, sVar);
            if (sVar2 == null) {
                return false;
            }
        } else {
            sVar2 = null;
        }
        int w5 = gVar.w(i5, obj);
        a1.d dVar = (a1.d) this.f7953e;
        if (dVar.f14e != w5 || !ke.d0.a((s) dVar.f15i, sVar2)) {
            this.f7953e = new a1.d((CopyOnWriteArrayList) gVar.f15056i.f16v, w5, sVar2);
        }
        nc.n nVar = (nc.n) this.f7954i;
        if (nVar.a == w5 && ke.d0.a(nVar.f15046b, sVar2)) {
            return true;
        }
        this.f7954i = new nc.n(gVar.f15057v.f15047c, w5, sVar2);
        return true;
    }

    @Override // aq.m
    public void x(hq.e eVar, Object obj) {
        ((b4) this.f7952d).x(eVar, obj);
    }

    @Override // nd.x
    public void y(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).n(loadEventInfo, D(mediaLoadData));
        }
    }

    @Override // nd.x
    public void z(int i5, s sVar, MediaLoadData mediaLoadData) {
        if (w(i5, sVar)) {
            ((a1.d) this.f7953e).z(D(mediaLoadData));
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public i(di.p pVar) {
        u uVar = new u(5, pVar);
        uh.f b10 = uh.f.b(new i1(uVar, 0));
        uh.f b11 = uh.f.b(new io.sentry.internal.debugmeta.c((Object) uVar, (Object) b10, 21, false));
        uh.f b12 = uh.f.b(th.a.f18392b);
        uh.f b13 = uh.f.b(new io.sentry.internal.debugmeta.c((Object) b11, (Object) b10, 22, (boolean) (0 == true ? 1 : 0)));
        uh.f b14 = uh.f.b(new th.n(uVar, b12, b13, 0 == true ? 1 : 0));
        uh.f b15 = uh.f.b(new f1(uVar, 1));
        t tVar = new t(8);
        uh.f b16 = uh.f.b(m0.f18510c);
        uh.f b17 = uh.f.b(new com.google.firebase.messaging.r(14, b11, tVar, b12, b16));
        uh.f b18 = uh.f.b(th.a.a);
        uh.f b19 = uh.f.b(new f9.b(b11, tVar, b18, b12, b13));
        uh.f b20 = uh.f.b(new qd.f(6, b11));
        uh.f b21 = uh.f.b(new u(4, b11));
        w wVar = new w();
        wVar.f1141d = b11;
        wVar.f1142e = tVar;
        wVar.f1143i = b17;
        wVar.f1144v = b16;
        wVar.f1145w = b12;
        wVar.f1146x = b13;
        uh.f b22 = uh.f.b(new cc.k(b17, tVar, b19, b20, b21, uh.f.b(wVar), uh.f.b(new c(23, b11, tVar)), uh.f.b(new p9.c(b11, tVar, b17, b16, b12)), uh.f.b(new th.k0(b17, b11, uh.f.b(new r3.g(4, tVar)), 1)), 3));
        uh.f b23 = uh.f.b(m0.f18509b);
        uh.f b24 = uh.f.b(th.a.f18393c);
        uh.f b25 = uh.f.b(new cc.k(uVar, b17, b22, tVar, b12, b23, b16, b24, b13, 2));
        uh.f b26 = uh.f.b(new th.n(uVar, b14, uh.f.b(new b4(b15, b25, b12, uVar, b10, b16, b13)), 1));
        if (((uh.f) tVar.f16718e) != null) {
            throw new IllegalStateException();
        }
        tVar.f16718e = b26;
        uh.f b27 = uh.f.b(new t1(b11, tVar, b25, b18, uh.f.b(new th.h0(uVar, 1)), b17, b12, b23, b16, b13));
        this.f7952d = uh.f.b(new e(23, b27, uVar));
        uh.f b28 = uh.f.b(new th.h0(uVar, 0));
        uh.f b29 = uh.f.b(new f1(uVar, 0));
        this.f7953e = uh.f.b(new am.f(uVar, b11, b27, b28, b29));
        this.f7954i = uh.f.b(new th.k0(b17, b22, b29, 0));
        this.f7955v = uh.f.b(new qa.v(b17, b12, b13, b23, uh.f.b(new i1(uVar, 1)), tVar, b18, b24));
    }

    public i(xq.l storageManager, a0 module) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        this.f7952d = storageManager;
        this.f7953e = module;
        this.f7954i = storageManager.c(new c0(this, 0));
        this.f7955v = storageManager.c(new c0(this, 1));
    }

    public i(com.google.firebase.messaging.r rVar) {
        ArrayList arrayList;
        ba.b bVar = (ba.b) rVar.f6260i;
        bVar.getClass();
        this.f7952d = bVar;
        this.f7954i = CloseableReference.g((CloseableReference) rVar.f6261v);
        ArrayList arrayList2 = (ArrayList) rVar.f6262w;
        if (arrayList2 == null) {
            arrayList = null;
        } else {
            ArrayList arrayList3 = new ArrayList(arrayList2.size());
            Iterator it = arrayList2.iterator();
            while (it.hasNext()) {
                arrayList3.add(CloseableReference.g((CloseableReference) it.next()));
            }
            arrayList = arrayList3;
        }
        this.f7955v = arrayList;
        this.f7953e = (String) rVar.f6259e;
    }

    public i(ScheduledThreadPoolExecutor scheduledThreadPoolExecutor, v5 v5Var) {
        this.f7953e = new io.sentry.util.a();
        this.f7954i = new cc.a(12);
        this.f7952d = scheduledThreadPoolExecutor;
        this.f7955v = v5Var;
    }

    public i(v5 v5Var) {
        this(new ScheduledThreadPoolExecutor(1, new io.sentry.h0(1)), v5Var);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i(int i5) {
        this(new ScheduledThreadPoolExecutor(1, new io.sentry.h0(1)), (v5) null);
        switch (i5) {
            case 11:
                Random random = new Random();
                this.f7954i = new HashMap();
                this.f7955v = random;
                this.f7952d = new HashMap();
                this.f7953e = new HashMap();
                break;
            case 15:
                this.f7952d = new Pools$SimplePool(10);
                this.f7953e = new SimpleArrayMap(0);
                this.f7954i = new ArrayList();
                this.f7955v = new HashSet();
                break;
            default:
                break;
        }
    }

    public i(Typeface typeface, l2.b bVar) {
        int i5;
        int i6;
        int i10;
        int i11;
        this.f7955v = typeface;
        this.f7952d = bVar;
        this.f7954i = new k2.u(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
        int a = bVar.a(6);
        if (a != 0) {
            int i12 = a + bVar.f1591d;
            i5 = ((ByteBuffer) bVar.f1594v).getInt(((ByteBuffer) bVar.f1594v).getInt(i12) + i12);
        } else {
            i5 = 0;
        }
        this.f7953e = new char[i5 * 2];
        int a10 = bVar.a(6);
        if (a10 != 0) {
            int i13 = a10 + bVar.f1591d;
            i6 = ((ByteBuffer) bVar.f1594v).getInt(((ByteBuffer) bVar.f1594v).getInt(i13) + i13);
        } else {
            i6 = 0;
        }
        for (int i14 = 0; i14 < i6; i14++) {
            k2.x xVar = new k2.x(this, i14);
            l2.a b10 = xVar.b();
            int a11 = b10.a(4);
            Character.toChars(a11 != 0 ? ((ByteBuffer) b10.f1594v).getInt(a11 + b10.f1591d) : 0, (char[]) this.f7953e, i14 * 2);
            l2.a b11 = xVar.b();
            int a12 = b11.a(16);
            if (a12 != 0) {
                int i15 = a12 + b11.f1591d;
                i10 = ((ByteBuffer) b11.f1594v).getInt(((ByteBuffer) b11.f1594v).getInt(i15) + i15);
            } else {
                i10 = 0;
            }
            ta.a.h("invalid metadata codepoint length", i10 > 0);
            k2.u uVar = (k2.u) this.f7954i;
            l2.a b12 = xVar.b();
            int a13 = b12.a(16);
            if (a13 != 0) {
                int i16 = a13 + b12.f1591d;
                i11 = ((ByteBuffer) b12.f1594v).getInt(((ByteBuffer) b12.f1594v).getInt(i16) + i16);
            } else {
                i11 = 0;
            }
            uVar.a(xVar, 0, i11 - 1);
        }
    }

    public i(up.a components, up.e typeParameterResolver, Lazy delegateForDefaultTypeQualifiers) {
        Intrinsics.checkNotNullParameter(components, "components");
        Intrinsics.checkNotNullParameter(typeParameterResolver, "typeParameterResolver");
        Intrinsics.checkNotNullParameter(delegateForDefaultTypeQualifiers, "delegateForDefaultTypeQualifiers");
        this.f7952d = components;
        this.f7953e = typeParameterResolver;
        this.f7954i = delegateForDefaultTypeQualifiers;
        this.f7955v = new k2.r(this, typeParameterResolver);
    }
}
