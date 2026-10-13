package io.sentry.internal.debugmeta;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.os.IBinder;
import android.os.Looper;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;
import android.util.Pair;
import android.util.SparseArray;
import android.view.Choreographer;
import aq.q;
import aq.r;
import ar.i;
import bf.t;
import bs.g1;
import bs.p0;
import com.discord.R;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.otaliastudios.zoom.ZoomEngine;
import cq.h;
import cq.i0;
import cq.v;
import cq.x0;
import e4.j;
import go.n;
import hc.a1;
import hc.e1;
import hc.f1;
import hc.z0;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.k4;
import io.sentry.o4;
import io.sentry.v5;
import ip.f;
import ip.s0;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Properties;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import ke.a0;
import kotlin.Result;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlinx.serialization.KSerializer;
import nc.o;
import nd.s;
import nd.x;
import th.h1;
import uh.g;
import uq.d;
import uq.u;
import xq.e;
import xq.l;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.r0;
import yq.u0;
import yq.w0;
import yq.y;
import zp.m;
import zp.p;

/* loaded from: classes3.dex */
public final class c implements a, OnCompleteListener, g1, x, o, ILogger, g, uq.b, d, di.o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11621d;

    /* renamed from: e, reason: collision with root package name */
    public Object f11622e;

    /* renamed from: i, reason: collision with root package name */
    public Object f11623i;

    public /* synthetic */ c(int i5, Object obj, Object obj2) {
        this.f11621d = i5;
        this.f11622e = obj2;
        this.f11623i = obj;
    }

    public static boolean N(Bitmap bitmap) {
        if (bitmap == null) {
            return false;
        }
        if (bitmap.isRecycled()) {
            p8.a.z("BitmapPoolBackend", "Cannot reuse a recycled bitmap: %s", bitmap);
            return false;
        }
        if (bitmap.isMutable()) {
            return true;
        }
        p8.a.z("BitmapPoolBackend", "Cannot reuse an immutable bitmap: %s", bitmap);
        return false;
    }

    @Override // nc.o
    public void A(int i5, s sVar, int i6) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new bb.a(this, L, i6, 8));
        }
    }

    @Override // uq.d
    public ArrayList B(u container) {
        Intrinsics.checkNotNullParameter(container, "container");
        Iterable iterable = (List) container.f19063e.k(((tq.a) this.f11622e).f18693c);
        if (iterable == null) {
            iterable = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // nc.o
    public void C(int i5, s sVar) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new a1(this, L, 0));
        }
    }

    public c D(Object value, String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        String obj = value.toString();
        ((ArrayList) this.f11623i).add(key + ": " + obj);
        return this;
    }

    public boolean E(j id2) {
        boolean containsKey;
        Intrinsics.checkNotNullParameter(id2, "id");
        synchronized (this.f11622e) {
            containsKey = ((LinkedHashMap) this.f11623i).containsKey(id2);
        }
        return containsKey;
    }

    public void F() {
        d9.a.e(((String) this.f11622e).concat(""));
    }

    public void G(String name, String str, Function1 block) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(block, "block");
        LinkedHashMap linkedHashMap = ((t.b) this.f11623i).a;
        p pVar = new p(this, name, str);
        block.invoke(pVar);
        String internalName = (String) this.f11622e;
        ArrayList arrayList = pVar.f21375b;
        ArrayList parameters = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            parameters.add((String) ((kotlin.Pair) it.next()).f13474d);
        }
        String ret = (String) pVar.f21376c.f13474d;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        Intrinsics.checkNotNullParameter(ret, "ret");
        StringBuilder sb2 = new StringBuilder();
        sb2.append(name);
        sb2.append('(');
        sb2.append(CollectionsKt.O(parameters, "", null, null, r.f2651d, 30));
        sb2.append(')');
        if (ret.length() > 1) {
            ret = k0.d.h(';', "L", ret);
        }
        sb2.append(ret);
        String jvmDescriptor = sb2.toString();
        Intrinsics.checkNotNullParameter(internalName, "internalName");
        Intrinsics.checkNotNullParameter(jvmDescriptor, "jvmDescriptor");
        String str2 = internalName + '.' + jvmDescriptor;
        zp.r rVar = (zp.r) pVar.f21376c.f13475e;
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            arrayList2.add((zp.r) ((kotlin.Pair) it2.next()).f13475e);
        }
        linkedHashMap.put(str2, new m(rVar, arrayList2, pVar.a));
    }

    public Bitmap H(int i5) {
        Object pollFirst;
        k2.r rVar = (k2.r) this.f11623i;
        synchronized (rVar) {
            qa.g gVar = (qa.g) ((SparseArray) rVar.f13142e).get(i5);
            if (gVar == null) {
                pollFirst = null;
            } else {
                pollFirst = gVar.f16706c.pollFirst();
                if (((qa.g) rVar.f13143i) != gVar) {
                    rVar.G(gVar);
                    qa.g gVar2 = (qa.g) rVar.f13143i;
                    if (gVar2 == null) {
                        rVar.f13143i = gVar;
                        rVar.f13144v = gVar;
                    } else {
                        gVar.f16707d = gVar2;
                        gVar2.a = gVar;
                        rVar.f13143i = gVar;
                    }
                }
            }
        }
        if (pollFirst != null) {
            synchronized (this) {
                ((HashSet) this.f11622e).remove(pollFirst);
            }
        }
        Bitmap bitmap = (Bitmap) pollFirst;
        if (bitmap == null || !N(bitmap)) {
            return null;
        }
        bitmap.eraseColor(0);
        return bitmap;
    }

    public File I() {
        if (((File) this.f11622e) == null) {
            this.f11622e = new File(((Context) this.f11623i).getCacheDir(), "volley");
        }
        return (File) this.f11622e;
    }

    public b1 J(wp.a aVar) {
        b1 U;
        c0 c0Var = aVar.f19978f;
        return (c0Var == null || (U = com.facebook.imagepipeline.nativecode.c.U(c0Var)) == null) ? (i) ((fo.u) this.f11622e).getValue() : U;
    }

    public y K(s0 typeParameter, wp.a typeAttr) {
        Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
        Intrinsics.checkNotNullParameter(typeAttr, "typeAttr");
        Object invoke = ((e) this.f11623i).invoke(new r0(typeParameter, typeAttr));
        Intrinsics.checkNotNullExpressionValue(invoke, "invoke(...)");
        return (y) invoke;
    }

    public Pair L(int i5, s sVar) {
        s sVar2;
        e1 e1Var = (e1) this.f11622e;
        s sVar3 = null;
        if (sVar != null) {
            int i6 = 0;
            while (true) {
                if (i6 >= e1Var.f9667c.size()) {
                    sVar2 = null;
                    break;
                }
                if (((s) e1Var.f9667c.get(i6)).f15169d == sVar.f15169d) {
                    Object obj = sVar.a;
                    Object obj2 = e1Var.f9666b;
                    int i10 = com.google.android.exoplayer2.a.f5301v;
                    sVar2 = sVar.b(Pair.create(obj2, obj));
                    break;
                }
                i6++;
            }
            if (sVar2 == null) {
                return null;
            }
            sVar3 = sVar2;
        }
        return Pair.create(Integer.valueOf(i5 + e1Var.f9668d), sVar3);
    }

    public String M(String str) {
        String str2 = (String) this.f11623i;
        Resources resources = (Resources) this.f11622e;
        int identifier = resources.getIdentifier(str, "string", str2);
        if (identifier == 0) {
            return null;
        }
        return resources.getString(identifier);
    }

    public jp.c O(h proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        return ((e4.c) this.f11623i).N0(proto, nameResolver);
    }

    public Object P() {
        Object obj;
        k2.r rVar = (k2.r) this.f11623i;
        synchronized (rVar) {
            qa.g gVar = (qa.g) rVar.f13144v;
            if (gVar == null) {
                obj = null;
            } else {
                Object pollLast = gVar.f16706c.pollLast();
                if (gVar.f16706c.isEmpty()) {
                    rVar.G(gVar);
                    ((SparseArray) rVar.f13142e).remove(gVar.f16705b);
                }
                obj = pollLast;
            }
        }
        if (obj == null) {
            return obj;
        }
        synchronized (this) {
            ((HashSet) this.f11622e).remove(obj);
        }
        return obj;
    }

    public List Q(String workSpecId) {
        List i02;
        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
        synchronized (this.f11622e) {
            try {
                LinkedHashMap linkedHashMap = (LinkedHashMap) this.f11623i;
                LinkedHashMap linkedHashMap2 = new LinkedHashMap();
                for (Map.Entry entry : linkedHashMap.entrySet()) {
                    if (Intrinsics.areEqual(((j) entry.getKey()).a, workSpecId)) {
                        linkedHashMap2.put(entry.getKey(), entry.getValue());
                    }
                }
                Iterator it = linkedHashMap2.keySet().iterator();
                while (it.hasNext()) {
                    ((LinkedHashMap) this.f11623i).remove((j) it.next());
                }
                i02 = CollectionsKt.i0(linkedHashMap2.values());
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return i02;
    }

    public w3.j R(j id2) {
        w3.j jVar;
        Intrinsics.checkNotNullParameter(id2, "id");
        synchronized (this.f11622e) {
            jVar = (w3.j) ((LinkedHashMap) this.f11623i).remove(id2);
        }
        return jVar;
    }

    public ke.a S() {
        File file = (File) this.f11623i;
        File file2 = (File) this.f11622e;
        if (file2.exists()) {
            if (file.exists()) {
                file2.delete();
            } else if (!file2.renameTo(file)) {
                ke.b.N("AtomicFile", "Couldn't rename file " + file2 + " to backup file " + file);
            }
        }
        try {
            return new ke.a(file2);
        } catch (FileNotFoundException e9) {
            File parentFile = file2.getParentFile();
            if (parentFile == null || !parentFile.mkdirs()) {
                throw new IOException("Couldn't create " + file2, e9);
            }
            try {
                return new ke.a(file2);
            } catch (FileNotFoundException e10) {
                throw new IOException("Couldn't create " + file2, e10);
            }
        }
    }

    public n T(w0 substitutor, List list, wp.a aVar) {
        b1 b1Var;
        n nVar = new n();
        Iterator it = list.iterator();
        if (it.hasNext()) {
            y yVar = (y) it.next();
            ip.i a = yVar.r0().a();
            if (a instanceof f) {
                Set set = aVar.f19977e;
                Intrinsics.checkNotNullParameter(yVar, "<this>");
                Intrinsics.checkNotNullParameter(substitutor, "substitutor");
                b1 w02 = yVar.w0();
                if (w02 instanceof yq.s) {
                    yq.s sVar = (yq.s) w02;
                    c0 c0Var = sVar.f21068e;
                    if (!c0Var.r0().getParameters().isEmpty() && c0Var.r0().a() != null) {
                        List<s0> parameters = c0Var.r0().getParameters();
                        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                        ArrayList arrayList = new ArrayList(d0.l(parameters, 10));
                        for (s0 s0Var : parameters) {
                            yq.s0 s0Var2 = (yq.s0) CollectionsKt.M(s0Var.getIndex(), yVar.l0());
                            boolean z5 = set != null && set.contains(s0Var);
                            if (s0Var2 != null && !z5) {
                                u0 g6 = substitutor.g();
                                y b10 = s0Var2.b();
                                Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                                if (g6.e(b10) != null) {
                                    arrayList.add(s0Var2);
                                }
                            }
                            s0Var2 = new h0(s0Var);
                            arrayList.add(s0Var2);
                        }
                        c0Var = yq.c.q(c0Var, arrayList, null, 2);
                    }
                    c0 c0Var2 = sVar.f21069i;
                    if (!c0Var2.r0().getParameters().isEmpty() && c0Var2.r0().a() != null) {
                        List<s0> parameters2 = c0Var2.r0().getParameters();
                        Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
                        ArrayList arrayList2 = new ArrayList(d0.l(parameters2, 10));
                        for (s0 s0Var3 : parameters2) {
                            yq.s0 s0Var4 = (yq.s0) CollectionsKt.M(s0Var3.getIndex(), yVar.l0());
                            boolean z6 = set != null && set.contains(s0Var3);
                            if (s0Var4 != null && !z6) {
                                u0 g10 = substitutor.g();
                                y b11 = s0Var4.b();
                                Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                                if (g10.e(b11) != null) {
                                    arrayList2.add(s0Var4);
                                }
                            }
                            s0Var4 = new h0(s0Var3);
                            arrayList2.add(s0Var4);
                        }
                        c0Var2 = yq.c.q(c0Var2, arrayList2, null, 2);
                    }
                    b1Var = yq.c.e(c0Var, c0Var2);
                } else {
                    if (!(w02 instanceof c0)) {
                        throw new fo.n();
                    }
                    c0 c0Var3 = (c0) w02;
                    if (c0Var3.r0().getParameters().isEmpty() || c0Var3.r0().a() == null) {
                        b1Var = c0Var3;
                    } else {
                        List<s0> parameters3 = c0Var3.r0().getParameters();
                        Intrinsics.checkNotNullExpressionValue(parameters3, "getParameters(...)");
                        ArrayList arrayList3 = new ArrayList(d0.l(parameters3, 10));
                        for (s0 s0Var5 : parameters3) {
                            yq.s0 s0Var6 = (yq.s0) CollectionsKt.M(s0Var5.getIndex(), yVar.l0());
                            boolean z7 = set != null && set.contains(s0Var5);
                            if (s0Var6 != null && !z7) {
                                u0 g11 = substitutor.g();
                                y b12 = s0Var6.b();
                                Intrinsics.checkNotNullExpressionValue(b12, "getType(...)");
                                if (g11.e(b12) != null) {
                                    arrayList3.add(s0Var6);
                                }
                            }
                            s0Var6 = new h0(s0Var5);
                            arrayList3.add(s0Var6);
                        }
                        b1Var = yq.c.q(c0Var3, arrayList3, null, 2);
                    }
                }
                y h6 = substitutor.h(yq.c.h(b1Var, w02), c1.f21015w);
                Intrinsics.checkNotNullExpressionValue(h6, "safeSubstitute(...)");
                nVar.add(h6);
            } else if (a instanceof s0) {
                Set set2 = aVar.f19977e;
                if (set2 == null || !set2.contains(a)) {
                    List upperBounds = ((s0) a).getUpperBounds();
                    Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                    nVar.addAll(T(substitutor, upperBounds, aVar));
                } else {
                    nVar.add(J(aVar));
                }
            }
        }
        return kotlin.collections.c1.a(nVar);
    }

    public w3.j U(j id2) {
        w3.j jVar;
        Intrinsics.checkNotNullParameter(id2, "id");
        synchronized (this.f11622e) {
            try {
                LinkedHashMap linkedHashMap = (LinkedHashMap) this.f11623i;
                Object obj = linkedHashMap.get(id2);
                if (obj == null) {
                    obj = new w3.j(id2);
                    linkedHashMap.put(id2, obj);
                }
                jVar = (w3.j) obj;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return jVar;
    }

    public com.google.firebase.messaging.r V(hq.e name, String desc) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        String name2 = name.b();
        Intrinsics.checkNotNullExpressionValue(name2, "asString(...)");
        Intrinsics.checkNotNullParameter(name2, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        return new com.google.firebase.messaging.r(this, new q(k0.d.k(name2, desc)));
    }

    @Override // uh.g
    public Object a() {
        switch (this.f11621d) {
            case 21:
                return new th.s(((di.p) ((rd.u) this.f11622e).f17275e).f7601d, (h1) ((uh.f) this.f11623i).a());
            case 22:
                uh.f fVar = (uh.f) this.f11623i;
                return new th.g1((th.s) ((uh.f) this.f11622e).a(), (h1) fVar.a());
            default:
                return new com.google.android.play.core.integrity.c(((di.p) this.f11622e).f7601d, (di.a0) ((di.n) this.f11623i).a(), new j8.c());
        }
    }

    @Override // nd.x
    public void b(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new z0(this, L, loadEventInfo, mediaLoadData, 1));
        }
    }

    @Override // uq.b
    public Object c(a3.r container, i0 proto, y expectedType) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(expectedType, "expectedType");
        return null;
    }

    @Override // nc.o
    public void d(int i5, s sVar, Exception exc) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new androidx.fragment.app.e(this, L, exc, 18));
        }
    }

    @Override // uq.d
    public List e(a3.r container, iq.a callableProto, uq.a kind, int i5, cq.a1 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(callableProto, "callableProto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Iterable iterable = (List) proto.k(((tq.a) this.f11622e).j);
        if (iterable == null) {
            iterable = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // nd.x
    public void f(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new z0(this, L, loadEventInfo, mediaLoadData, 2));
        }
    }

    @Override // uq.d
    public List g(a3.r container, iq.a proto, uq.a kind) {
        List list;
        tq.a aVar = (tq.a) this.f11622e;
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        if (proto instanceof cq.n) {
            list = (List) ((cq.n) proto).k(aVar.f18692b);
        } else if (proto instanceof cq.a0) {
            list = (List) ((cq.a0) proto).k(aVar.f18694d);
        } else {
            if (!(proto instanceof i0)) {
                throw new IllegalStateException(("Unknown message: " + proto).toString());
            }
            int ordinal = kind.ordinal();
            if (ordinal == 1) {
                list = (List) ((i0) proto).k(aVar.f18695e);
            } else if (ordinal == 2) {
                list = (List) ((i0) proto).k(aVar.f18696f);
            } else {
                if (ordinal != 3) {
                    throw new IllegalStateException("Unsupported callable kind with property proto");
                }
                list = (List) ((i0) proto).k(aVar.f18697g);
            }
        }
        if (list == null) {
            list = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // nd.x
    public void h(int i5, s sVar, MediaLoadData mediaLoadData) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new hc.b1(this, L, mediaLoadData, 0));
        }
    }

    @Override // io.sentry.ILogger
    public void i(SentryLevel sentryLevel, Throwable th2, String str, Object... objArr) {
        ILogger iLogger = (ILogger) this.f11622e;
        if (iLogger == null || !w(sentryLevel)) {
            return;
        }
        iLogger.i(sentryLevel, th2, str, objArr);
    }

    @Override // uq.b
    public Object j(a3.r container, i0 proto, y expectedType) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(expectedType, "expectedType");
        cq.e eVar = (cq.e) zk.a.q(proto, ((tq.a) this.f11622e).f18699i);
        if (eVar == null) {
            return null;
        }
        return ((e4.c) this.f11623i).Z0(expectedType, eVar, (eq.g) container.f100b);
    }

    @Override // io.sentry.ILogger
    public void k(SentryLevel sentryLevel, String str, Throwable th2) {
        ILogger iLogger = (ILogger) this.f11622e;
        if (iLogger == null || !w(sentryLevel)) {
            return;
        }
        iLogger.k(sentryLevel, str, th2);
    }

    @Override // uq.d
    public List l(a3.r container, i0 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        ((tq.a) this.f11622e).getClass();
        m0 m0Var = m0.f13512d;
        ArrayList arrayList = new ArrayList(d0.l(m0Var, 10));
        Iterator<E> it = m0Var.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // uq.d
    public List m(a3.r container, iq.a proto, uq.a kind) {
        tq.a aVar = (tq.a) this.f11622e;
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        if (proto instanceof cq.a0) {
            aVar.getClass();
        } else {
            if (!(proto instanceof i0)) {
                throw new IllegalStateException(("Unknown message: " + proto).toString());
            }
            int ordinal = kind.ordinal();
            if (ordinal != 1 && ordinal != 2 && ordinal != 3) {
                throw new IllegalStateException(("Unsupported callable kind with property proto for receiver annotations: " + kind).toString());
            }
            aVar.getClass();
        }
        m0 m0Var = m0.f13512d;
        ArrayList arrayList = new ArrayList(d0.l(m0Var, 10));
        Iterator<E> it = m0Var.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // uq.d
    public ArrayList n(x0 proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Iterable iterable = (List) proto.k(((tq.a) this.f11622e).f18700l);
        if (iterable == null) {
            iterable = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), nameResolver));
        }
        return arrayList;
    }

    @Override // uq.d
    public List o(a3.r container, v proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Iterable iterable = (List) proto.k(((tq.a) this.f11622e).f18698h);
        if (iterable == null) {
            iterable = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        ((Map) ((e4.c) this.f11623i).f7940i).remove((jg.g) this.f11622e);
    }

    @Override // io.sentry.internal.debugmeta.a
    public List p() {
        ILogger iLogger = (ILogger) this.f11622e;
        ArrayList arrayList = new ArrayList();
        try {
            Enumeration<URL> resources = ((ClassLoader) this.f11623i).getResources("sentry-debug-meta.properties");
            while (resources.hasMoreElements()) {
                URL nextElement = resources.nextElement();
                try {
                    InputStream openStream = nextElement.openStream();
                    try {
                        Properties properties = new Properties();
                        properties.load(openStream);
                        arrayList.add(properties);
                        iLogger.u(SentryLevel.INFO, "Debug Meta Data Properties loaded from %s", nextElement);
                        if (openStream != null) {
                            openStream.close();
                        }
                    } catch (Throwable th2) {
                        if (openStream != null) {
                            try {
                                openStream.close();
                            } catch (Throwable th3) {
                                th2.addSuppressed(th3);
                            }
                        }
                        throw th2;
                    }
                } catch (RuntimeException e9) {
                    iLogger.i(SentryLevel.ERROR, e9, "%s file is malformed.", nextElement);
                }
            }
        } catch (IOException e10) {
            iLogger.i(SentryLevel.ERROR, e10, "Failed to load %s", "sentry-debug-meta.properties");
        }
        if (!arrayList.isEmpty()) {
            return arrayList;
        }
        iLogger.u(SentryLevel.INFO, "No %s file was found.", "sentry-debug-meta.properties");
        return null;
    }

    @Override // bs.g1
    public Object q(KClass key, ArrayList types) {
        Object i5;
        Object putIfAbsent;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(types, "types");
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f11623i;
        Class z5 = com.facebook.imagepipeline.nativecode.c.z(key);
        Object obj = concurrentHashMap.get(z5);
        if (obj == null && (putIfAbsent = concurrentHashMap.putIfAbsent(z5, (obj = new bs.f1()))) != null) {
            obj = putIfAbsent;
        }
        bs.f1 f1Var = (bs.f1) obj;
        ArrayList arrayList = new ArrayList(d0.l(types, 10));
        Iterator it = types.iterator();
        while (it.hasNext()) {
            arrayList.add(new p0((KType) it.next()));
        }
        ConcurrentHashMap concurrentHashMap2 = f1Var.a;
        Object obj2 = concurrentHashMap2.get(arrayList);
        if (obj2 == null) {
            try {
                fo.q qVar = Result.f13476e;
                i5 = (KSerializer) ((Function2) this.f11622e).invoke(key, types);
            } catch (Throwable th2) {
                fo.q qVar2 = Result.f13476e;
                i5 = ki.b.i(th2);
            }
            Result result = new Result(i5);
            Object putIfAbsent2 = concurrentHashMap2.putIfAbsent(arrayList, result);
            obj2 = putIfAbsent2 == null ? result : putIfAbsent2;
        }
        Intrinsics.checkNotNullExpressionValue(obj2, "getOrPut(...)");
        return ((Result) obj2).f13477d;
    }

    @Override // nc.o
    public void r(int i5, s sVar) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new a1(this, L, 2));
        }
    }

    @Override // nc.o
    public void s(int i5, s sVar) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new a1(this, L, 1));
        }
    }

    @Override // uq.d
    public List t(a3.r container, i0 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        ((tq.a) this.f11622e).getClass();
        m0 m0Var = m0.f13512d;
        ArrayList arrayList = new ArrayList(d0.l(m0Var, 10));
        Iterator<E> it = m0Var.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), (eq.g) container.f100b));
        }
        return arrayList;
    }

    @Override // io.sentry.ILogger
    public void u(SentryLevel sentryLevel, String str, Object... objArr) {
        ILogger iLogger = (ILogger) this.f11622e;
        if (iLogger == null || !w(sentryLevel)) {
            return;
        }
        iLogger.u(sentryLevel, str, objArr);
    }

    @Override // nd.x
    public void v(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new hc.c1(this, L, loadEventInfo, mediaLoadData, iOException, z5, 0));
        }
    }

    @Override // io.sentry.ILogger
    public boolean w(SentryLevel sentryLevel) {
        v5 v5Var = (v5) this.f11623i;
        return sentryLevel != null && v5Var.isDebug() && sentryLevel.ordinal() >= v5Var.getDiagnosticLevel().ordinal();
    }

    @Override // uq.d
    public ArrayList x(cq.s0 proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Iterable iterable = (List) proto.k(((tq.a) this.f11622e).k);
        if (iterable == null) {
            iterable = m0.f13512d;
        }
        ArrayList arrayList = new ArrayList(d0.l(iterable, 10));
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.add(O((h) it.next(), nameResolver));
        }
        return arrayList;
    }

    @Override // nd.x
    public void y(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new z0(this, L, loadEventInfo, mediaLoadData, 0));
        }
    }

    @Override // nd.x
    public void z(int i5, s sVar, MediaLoadData mediaLoadData) {
        Pair L = L(i5, sVar);
        if (L != null) {
            ((a0) ((f1) this.f11623i).j).c(new hc.b1(this, L, mediaLoadData, 1));
        }
    }

    public /* synthetic */ c(int i5, boolean z5) {
        this.f11621d = i5;
    }

    public /* synthetic */ c(Object obj, Object obj2, int i5, boolean z5) {
        this.f11621d = i5;
        this.f11622e = obj;
        this.f11623i = obj2;
    }

    public /* synthetic */ c(Object obj, Object obj2, Object obj3, int i5) {
        this.f11621d = i5;
        this.f11622e = obj;
        this.f11623i = obj2;
    }

    public c(Context context, int i5) {
        this.f11621d = i5;
        switch (i5) {
            case 7:
                this.f11623i = context;
                this.f11622e = null;
                break;
            default:
                t.g(context);
                Resources resources = context.getResources();
                this.f11622e = resources;
                this.f11623i = resources.getResourcePackageName(R.string.common_google_play_services_unknown_issue);
                break;
        }
    }

    public c(IBinder iBinder) {
        this.f11621d = 25;
        String interfaceDescriptor = iBinder.getInterfaceDescriptor();
        if (Objects.equals(interfaceDescriptor, "android.os.IMessenger")) {
            this.f11622e = new Messenger(iBinder);
            this.f11623i = null;
        } else if (Objects.equals(interfaceDescriptor, "com.google.android.gms.iid.IMessengerCompat")) {
            this.f11623i = new xe.f(iBinder);
            this.f11622e = null;
        } else {
            Log.w("MessengerIpcClient", "Invalid interface descriptor: ".concat(String.valueOf(interfaceDescriptor)));
            throw new RemoteException();
        }
    }

    public c(int i5) {
        this.f11621d = i5;
        switch (i5) {
            case 13:
                this.f11622e = Choreographer.getInstance();
                this.f11623i = Looper.myLooper();
                break;
            case 16:
                ArrayList arrayList = new ArrayList(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                ArrayList arrayList2 = new ArrayList(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                arrayList.add(net.time4j.tz.m.f15346w);
                Iterator it = net.time4j.tz.i.K.entrySet().iterator();
                while (it.hasNext()) {
                    net.time4j.tz.o oVar = (net.time4j.tz.o) ((Map.Entry) it.next()).getValue();
                    net.time4j.tz.h hVar = net.time4j.tz.i.F;
                    if (oVar != hVar || net.time4j.tz.i.G == hVar) {
                        Iterator it2 = oVar.a().iterator();
                        while (it2.hasNext()) {
                            net.time4j.tz.f c6 = net.time4j.tz.i.c((String) it2.next());
                            if (!arrayList.contains(c6)) {
                                arrayList.add(c6);
                            }
                        }
                        arrayList2.addAll(arrayList);
                        Iterator it3 = oVar.b().keySet().iterator();
                        while (it3.hasNext()) {
                            net.time4j.tz.f c8 = net.time4j.tz.i.c((String) it3.next());
                            if (!arrayList2.contains(c8)) {
                                arrayList2.add(c8);
                            }
                        }
                    }
                }
                bg.s sVar = net.time4j.tz.i.f15336e;
                Collections.sort(arrayList, sVar);
                Collections.sort(arrayList2, sVar);
                this.f11622e = Collections.unmodifiableList(arrayList);
                this.f11623i = Collections.unmodifiableList(arrayList2);
                break;
            case 18:
                this.f11622e = new HashSet();
                this.f11623i = new k2.r(13);
                break;
            case 24:
                this.f11622e = new Object();
                this.f11623i = new LinkedHashMap();
                break;
            default:
                this.f11622e = new ArrayList();
                this.f11623i = new ArrayList();
                break;
        }
    }

    public c(ZoomEngine engine) {
        this.f11621d = 9;
        Intrinsics.checkNotNullParameter(engine, "engine");
        this.f11622e = engine;
        this.f11623i = new ArrayList();
    }

    public c(wp.e projectionComputer) {
        this.f11621d = 27;
        yq.f options = new yq.f();
        Intrinsics.checkNotNullParameter(projectionComputer, "projectionComputer");
        Intrinsics.checkNotNullParameter(options, "options");
        l lVar = new l("Type parameter upper bound erasure results");
        this.f11622e = fo.l.a(new zq.i(1, this));
        e c6 = lVar.c(new aq.a(25, this));
        Intrinsics.checkNotNullExpressionValue(c6, "createMemoizedFunction(...)");
        this.f11623i = c6;
    }

    public c(String sectionName) {
        this.f11621d = 15;
        Intrinsics.checkNotNullParameter(sectionName, "sectionName");
        this.f11622e = sectionName;
        this.f11623i = new ArrayList();
    }

    public c(ILogger iLogger) {
        this.f11621d = 0;
        ClassLoader classLoader = c.class.getClassLoader();
        this.f11622e = iLogger;
        this.f11623i = ys.d.x(classLoader);
    }

    public c(ip.a0 module, e4.i notFoundClasses, tq.a protocol) {
        this.f11621d = 23;
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        this.f11622e = protocol;
        this.f11623i = new e4.c(module, notFoundClasses);
    }

    public c(k4 k4Var, List list) {
        this.f11621d = 12;
        d9.a.L(k4Var, "SentryEnvelopeHeader is required.");
        this.f11622e = k4Var;
        d9.a.L(list, "SentryEnvelope items are required.");
        this.f11623i = list;
    }

    public c(CloseableReference closeableReference, r9.f type) {
        this.f11621d = 19;
        Intrinsics.checkNotNullParameter(type, "type");
        this.f11622e = closeableReference;
        this.f11623i = type;
    }

    public c(io.sentry.protocol.v vVar, io.sentry.protocol.t tVar, o4 o4Var) {
        this.f11621d = 12;
        this.f11622e = new k4(vVar, tVar, null);
        ArrayList arrayList = new ArrayList(1);
        arrayList.add(o4Var);
        this.f11623i = arrayList;
    }

    public c(File file) {
        this.f11621d = 14;
        this.f11622e = file;
        this.f11623i = new File(file.getPath() + ".bak");
    }

    public c(Function2 compute) {
        this.f11621d = 5;
        Intrinsics.checkNotNullParameter(compute, "compute");
        this.f11622e = compute;
        this.f11623i = new ConcurrentHashMap();
    }

    public c(t.b bVar, String className) {
        this.f11621d = 28;
        Intrinsics.checkNotNullParameter(className, "className");
        this.f11623i = bVar;
        this.f11622e = className;
    }
}
