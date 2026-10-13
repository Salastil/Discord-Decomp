package e4;

import android.database.Cursor;
import android.graphics.Rect;
import android.media.MediaCodec;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.SparseIntArray;
import androidx.work.impl.WorkDatabase_Impl;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.gms.cloudmessaging.Rpc;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;
import com.google.android.gms.tasks.Task;
import io.sentry.ILogger;
import io.sentry.y2;
import ip.a0;
import ip.o0;
import ip.s0;
import java.io.IOException;
import java.io.Writer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.Callable;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import javax.inject.Provider;
import ke.b0;
import ke.d0;
import ke.w;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import lp.r0;
import mq.t;
import mq.u;
import mq.x;
import mq.z;
import okhttp3.Call;
import okhttp3.Headers;
import okhttp3.Request;
import okhttp3.Response;
import qc.v;
import th.k1;
import th.l0;
import th.u0;
import yq.b1;
import yq.c0;
import yq.h0;
import yq.p0;
import yq.s;
import yq.y;

/* loaded from: classes.dex */
public final class c implements qc.e, aq.o, cd.k, yb.b, ps.h, ha.i, y2, zq.b, u0, uh.g, jg.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7938d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7939e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7940i;

    public /* synthetic */ c(int i5, Object obj, Object obj2) {
        this.f7938d = i5;
        this.f7939e = obj;
        this.f7940i = obj2;
    }

    public static int P0(jj.l lVar, jj.l lVar2) {
        return jb.a.G(jj.l.a(lVar, lVar2));
    }

    public static void U0(HashMap hashMap, jj.l lVar) {
        Integer num = (Integer) hashMap.get(lVar);
        hashMap.put(lVar, Integer.valueOf(num != null ? 1 + num.intValue() : 1));
    }

    public static nj.b a1(nj.b bVar, jj.l lVar, jj.l lVar2, jj.l lVar3, jj.l lVar4, int i5, int i6) {
        float f2 = i5 - 0.5f;
        float f10 = i6 - 0.5f;
        return m3.n.M0(bVar, i5, i6, nj.e.a(0.5f, 0.5f, f2, 0.5f, f2, f10, 0.5f, f10, lVar.a, lVar.f12810b, lVar4.a, lVar4.f12810b, lVar3.a, lVar3.f12810b, lVar2.a, lVar2.f12810b));
    }

    @Override // zq.b
    public cr.i A(s0 s0Var) {
        return m3.n.R(s0Var);
    }

    @Override // zq.b
    public c0 A0(cr.d dVar) {
        return m3.n.l(dVar);
    }

    @Override // zq.b
    public boolean B(cr.d dVar) {
        return m3.n.h0(dVar);
    }

    @Override // zq.b
    public p0 B0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        c0 l6 = m3.n.l(dVar);
        if (l6 == null) {
            l6 = i0(dVar);
        }
        return m3.n.R0(l6);
    }

    @Override // io.sentry.y2
    public String C() {
        return ((io.sentry.vendor.gson.stream.c) this.f7939e).f12063v;
    }

    @Override // io.sentry.y2
    public y2 C0(String str) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        if (str == null) {
            cVar.getClass();
            throw new NullPointerException("name == null");
        }
        if (cVar.f12066y != null) {
            throw new IllegalStateException();
        }
        if (cVar.f12062i == 0) {
            throw new IllegalStateException("JsonWriter is closed.");
        }
        cVar.f12066y = str;
        return this;
    }

    @Override // zq.b
    public c0 D(s sVar) {
        return m3.n.r0(sVar);
    }

    @Override // zq.b
    public c0 D0(s sVar) {
        return m3.n.r0(sVar);
    }

    @Override // zq.b
    public boolean E(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.i(eVar) != null;
    }

    @Override // zq.b
    public boolean E0(cr.h hVar) {
        return m3.n.b0(hVar);
    }

    @Override // zq.b
    public yq.s0 F(cr.d dVar, int i5) {
        return m3.n.H(dVar, i5);
    }

    @Override // zq.b
    public c0 F0(s sVar) {
        return m3.n.T0(sVar);
    }

    @Override // zq.b
    public cr.b G(cr.c cVar) {
        return m3.n.s(cVar);
    }

    @Override // ha.i
    public int G0(o8.f fVar) {
        return ((ha.i) this.f7939e).G0(fVar);
    }

    @Override // io.sentry.y2
    public y2 H(boolean z5) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        cVar.q();
        cVar.c();
        cVar.f12060d.write(z5 ? "true" : "false");
        return this;
    }

    @Override // qc.e
    public void H0() {
        w wVar = (w) this.f7940i;
        byte[] bArr = d0.f13298f;
        wVar.getClass();
        wVar.D(bArr, bArr.length);
    }

    @Override // zq.b
    public cr.c I(cr.e eVar) {
        cr.f fVar;
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        yq.o i5 = m3.n.i(eVar);
        if (i5 == null || (fVar = m3.n.w0(i5)) == null) {
            fVar = (cr.f) eVar;
        }
        return m3.n.h(this, fVar);
    }

    @Override // zq.b
    public boolean I0(cr.e eVar) {
        return m3.n.d0(eVar);
    }

    @Override // zq.b
    public c0 J(s sVar) {
        return m3.n.T0(sVar);
    }

    @Override // zq.b
    public s J0(cr.d dVar) {
        return m3.n.k(dVar);
    }

    @Override // zq.b
    public void K(cr.e eVar) {
        m3.n.o0(eVar);
    }

    @Override // zq.b
    public boolean K0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return receiver instanceof zp.f;
    }

    @Override // zq.b
    public c0 L(cr.d dVar) {
        c0 T0;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        s k = m3.n.k(dVar);
        if (k != null && (T0 = m3.n.T0(k)) != null) {
            return T0;
        }
        c0 l6 = m3.n.l(dVar);
        Intrinsics.checkNotNull(l6);
        return l6;
    }

    @Override // zq.b
    public boolean L0(b1 b1Var) {
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        return m3.n.h0(i0(b1Var)) != m3.n.h0(L(b1Var));
    }

    @Override // zq.b
    public boolean M(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        c0 l6 = m3.n.l(eVar);
        return (l6 != null ? I(l6) : null) != null;
    }

    @Override // cd.k
    /* renamed from: M0, reason: merged with bridge method [inline-methods] */
    public cd.c n(cd.j jVar) {
        MediaCodec mediaCodec;
        String str = jVar.a.a;
        cd.c cVar = null;
        try {
            ke.b.c("createCodec:" + str);
            mediaCodec = MediaCodec.createByCodecName(str);
            try {
                cd.c cVar2 = new cd.c(mediaCodec, (HandlerThread) ((cd.b) this.f7939e).get(), (HandlerThread) ((cd.b) this.f7940i).get());
                try {
                    ke.b.t();
                    cd.c.a(cVar2, jVar.f3436b, jVar.f3438d, jVar.f3439e);
                    return cVar2;
                } catch (Exception e9) {
                    e = e9;
                    cVar = cVar2;
                    if (cVar != null) {
                        cVar.release();
                    } else if (mediaCodec != null) {
                        mediaCodec.release();
                    }
                    throw e;
                }
            } catch (Exception e10) {
                e = e10;
            }
        } catch (Exception e11) {
            e = e11;
            mediaCodec = null;
        }
    }

    @Override // jg.a
    public Object N(Task task) {
        Rpc rpc = (Rpc) this.f7939e;
        Bundle bundle = (Bundle) this.f7940i;
        rpc.getClass();
        if (!task.m()) {
            return task;
        }
        Bundle bundle2 = (Bundle) task.i();
        return (bundle2 == null || !bundle2.containsKey("google.messenger")) ? task : rpc.a(bundle).n(xe.g.f20405i, xe.c.f20401v);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v0, types: [kotlin.Pair] */
    public jp.c N0(cq.h proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        ip.f l6 = nf.e.l((a0) this.f7939e, nt.a.r(nameResolver, proto.f7109i), (i) this.f7940i);
        Map d6 = v0.d();
        if (proto.f7110v.size() != 0 && !ar.l.f(l6)) {
            int i5 = kq.e.a;
            if (kq.e.n(l6, ip.g.f12142w)) {
                Collection q5 = l6.q();
                Intrinsics.checkNotNullExpressionValue(q5, "getConstructors(...)");
                lp.h hVar = (lp.h) CollectionsKt.a0(q5);
                if (hVar != null) {
                    List P = hVar.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    int a = kotlin.collections.u0.a(kotlin.collections.d0.l(P, 10));
                    if (a < 16) {
                        a = 16;
                    }
                    LinkedHashMap linkedHashMap = new LinkedHashMap(a);
                    for (Object obj : P) {
                        linkedHashMap.put(((r0) obj).getName(), obj);
                    }
                    List<cq.f> list = proto.f7110v;
                    Intrinsics.checkNotNullExpressionValue(list, "getArgumentList(...)");
                    ArrayList arrayList = new ArrayList();
                    for (cq.f fVar : list) {
                        Intrinsics.checkNotNull(fVar);
                        r0 r0Var = (r0) linkedHashMap.get(nt.a.u(nameResolver, fVar.f7080i));
                        if (r0Var != null) {
                            hq.e u5 = nt.a.u(nameResolver, fVar.f7080i);
                            y type = r0Var.getType();
                            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                            cq.e eVar = fVar.f7081v;
                            Intrinsics.checkNotNullExpressionValue(eVar, "getValue(...)");
                            mq.g Z0 = Z0(type, eVar, nameResolver);
                            r5 = Q0(Z0, type, eVar) ? Z0 : null;
                            if (r5 == null) {
                                String message = "Unexpected argument value: actual type " + eVar.f7059i + " != expected type " + type;
                                Intrinsics.checkNotNullParameter(message, "message");
                                r5 = new mq.j(message);
                            }
                            r5 = new Pair(u5, r5);
                        }
                        if (r5 != null) {
                            arrayList.add(r5);
                        }
                    }
                    d6 = v0.m(arrayList);
                }
            }
        }
        return new jp.c(l6.k(), d6, o0.f12151g);
    }

    @Override // io.sentry.y2
    public y2 O() {
        ((io.sentry.vendor.gson.stream.c) this.f7939e).f('}', 3, 5);
        return this;
    }

    public void O0(DecoderCounters decoderCounters) {
        synchronized (decoderCounters) {
        }
        Handler handler = (Handler) this.f7939e;
        if (handler != null) {
            handler.post(new jc.q(this, decoderCounters, 1));
        }
    }

    @Override // zq.b
    public boolean P(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.Z(m3.n.R0(eVar));
    }

    @Override // zq.b
    public boolean Q(cr.h hVar) {
        return m3.n.X(hVar);
    }

    public boolean Q0(mq.g gVar, y yVar, cq.e eVar) {
        a0 a0Var = (a0) this.f7939e;
        cq.d dVar = eVar.f7059i;
        int i5 = dVar == null ? -1 : uq.c.a[dVar.ordinal()];
        if (i5 == 10) {
            ip.i a = yVar.r0().a();
            ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
            if (fVar == null) {
                return true;
            }
            hq.e eVar2 = fp.i.f8859e;
            return fp.i.b(fVar, fp.o.Q);
        }
        if (i5 != 13) {
            return Intrinsics.areEqual(gVar.a(a0Var), yVar);
        }
        if (gVar instanceof mq.b) {
            Object obj = ((mq.b) gVar).a;
            if (((List) obj).size() == eVar.H.size()) {
                y g6 = a0Var.g().g(yVar);
                if (g6 == null) {
                    return false;
                }
                Iterable e9 = kotlin.collections.c0.e((Collection) obj);
                if ((e9 instanceof Collection) && ((Collection) e9).isEmpty()) {
                    return true;
                }
                Iterator it = e9.iterator();
                while (((yo.b) it).f20994i) {
                    int nextInt = ((kotlin.collections.r0) it).nextInt();
                    mq.g gVar2 = (mq.g) ((List) obj).get(nextInt);
                    cq.e eVar3 = (cq.e) eVar.H.get(nextInt);
                    Intrinsics.checkNotNullExpressionValue(eVar3, "getArrayElement(...)");
                    if (!Q0(gVar2, g6, eVar3)) {
                        return false;
                    }
                }
                return true;
            }
        }
        throw new IllegalStateException(("Deserialized ArrayValue should have the same number of elements as the original array value: " + gVar).toString());
    }

    @Override // io.sentry.y2
    public void R(String str) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        if (str != null) {
            cVar.getClass();
            if (str.length() != 0) {
                cVar.f12063v = str;
                cVar.f12064w = ": ";
                return;
            }
        }
        cVar.f12063v = null;
        cVar.f12064w = ":";
    }

    public Object R0(Class key) {
        Intrinsics.checkNotNullParameter(key, "key");
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f7940i;
        Object obj = concurrentHashMap.get(key);
        if (obj != null) {
            return obj;
        }
        Object invoke = ((Function1) this.f7939e).invoke(key);
        Object putIfAbsent = concurrentHashMap.putIfAbsent(key, invoke);
        return putIfAbsent == null ? invoke : putIfAbsent;
    }

    @Override // zq.b
    public b1 S(cr.c cVar) {
        return m3.n.s0(cVar);
    }

    public byte[] S0() {
        Callable callable;
        if (((byte[]) this.f7939e) == null && (callable = (Callable) this.f7940i) != null) {
            this.f7939e = (byte[]) callable.call();
        }
        byte[] bArr = (byte[]) this.f7939e;
        return bArr != null ? bArr : new byte[0];
    }

    @Override // zq.b
    public yq.s0 T(cr.e eVar, int i5) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        if (i5 < 0 || i5 >= m3.n.f(eVar)) {
            return null;
        }
        return m3.n.H(eVar, i5);
    }

    public ArrayList T0(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.f7939e;
        a3.o g6 = a3.o.g(1, "SELECT work_spec_id FROM dependency WHERE prerequisite_id=?");
        if (str == null) {
            g6.S(1);
        } else {
            g6.n(1, str);
        }
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            ArrayList arrayList = new ArrayList(D.getCount());
            while (D.moveToNext()) {
                arrayList.add(D.isNull(0) ? null : D.getString(0));
            }
            return arrayList;
        } finally {
            D.close();
            g6.i();
        }
    }

    @Override // zq.b
    public cr.d U(cr.d dVar) {
        return m3.n.V0(this, dVar);
    }

    @Override // zq.b
    public yq.s0 V(lq.b bVar) {
        return m3.n.E0(bVar);
    }

    public boolean V0(jj.l lVar) {
        float f2 = lVar.a;
        if (f2 < 0.0f) {
            return false;
        }
        nj.b bVar = (nj.b) this.f7939e;
        if (f2 >= bVar.f15510d) {
            return false;
        }
        float f10 = lVar.f12810b;
        return f10 > 0.0f && f10 < ((float) bVar.f15511e);
    }

    @Override // zq.b
    public s0 W(cr.h hVar, int i5) {
        return m3.n.L(hVar, i5);
    }

    public g0.n W0() {
        g0.n nVar = (g0.n) ((u.n) this.f7940i).getValue();
        if (nVar != null) {
            return nVar;
        }
        throw new IllegalStateException("Intrinsic size is queried but there is no measure policy in place.");
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // zq.b
    public yq.s0 X(cr.g gVar, int i5) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        if (gVar instanceof cr.f) {
            return m3.n.H((cr.d) gVar, i5);
        }
        if (gVar instanceof cr.a) {
            E e9 = ((cr.a) gVar).get(i5);
            Intrinsics.checkNotNullExpressionValue(e9, "get(...)");
            return (yq.s0) e9;
        }
        throw new IllegalStateException(("unknown type argument list type: " + gVar + ", " + Reflection.getOrCreateKotlinClass(gVar.getClass())).toString());
    }

    public yq.o0 X0() {
        Intrinsics.checkNotNullParameter(this, "typeSystemContext");
        zq.e kotlinTypePreparator = zq.e.a;
        Intrinsics.checkNotNullParameter(kotlinTypePreparator, "kotlinTypePreparator");
        zq.f kotlinTypeRefiner = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return new yq.o0(true, true, this, kotlinTypePreparator, kotlinTypeRefiner);
    }

    @Override // zq.b
    public zq.j Y(cr.c cVar) {
        return m3.n.S0(cVar);
    }

    public y2 Y0() {
        ((io.sentry.vendor.gson.stream.c) this.f7939e).i();
        return this;
    }

    @Override // aq.o
    public aq.m Z(hq.b classId, np.a source) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(source, "source");
        return ((androidx.appcompat.widget.w) this.f7939e).H(classId, source, (ArrayList) this.f7940i);
    }

    public mq.g Z0(y type, cq.e value, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(type, "expectedType");
        Intrinsics.checkNotNullParameter(value, "value");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        boolean m5 = s4.h.m(eq.e.N, value.J, "get(...)");
        cq.d dVar = value.f7059i;
        switch (dVar == null ? -1 : uq.c.a[dVar.ordinal()]) {
            case 1:
                byte b10 = (byte) value.f7060v;
                return m5 ? new z(b10) : new mq.d(b10);
            case 2:
                return new mq.e(Character.valueOf((char) value.f7060v));
            case 3:
                short s2 = (short) value.f7060v;
                return m5 ? new z(s2) : new mq.w(s2);
            case 4:
                int i5 = (int) value.f7060v;
                return m5 ? new z(i5) : new mq.k(i5);
            case 5:
                long j = value.f7060v;
                return m5 ? new z(j) : new u(j);
            case 6:
                return new mq.c(value.f7061w);
            case 7:
                return new mq.c(value.f7062x);
            case 8:
                return new mq.c(Boolean.valueOf(value.f7060v != 0));
            case 9:
                return new x(nameResolver.getString(value.f7063y));
            case 10:
                return new t(nt.a.r(nameResolver, value.E), value.I);
            case 11:
                return new mq.i(nt.a.r(nameResolver, value.E), nt.a.u(nameResolver, value.F));
            case 12:
                cq.h hVar = value.G;
                Intrinsics.checkNotNullExpressionValue(hVar, "getAnnotation(...)");
                jp.c value2 = N0(hVar, nameResolver);
                Intrinsics.checkNotNullParameter(value2, "value");
                return new mq.a((Object) value2);
            case 13:
                List<cq.e> list = value.H;
                Intrinsics.checkNotNullExpressionValue(list, "getArrayElementList(...)");
                ArrayList value3 = new ArrayList(kotlin.collections.d0.l(list, 10));
                for (cq.e eVar : list) {
                    c0 e9 = ((a0) this.f7939e).g().e();
                    Intrinsics.checkNotNullExpressionValue(e9, "getAnyType(...)");
                    Intrinsics.checkNotNull(eVar);
                    value3.add(Z0(e9, eVar, nameResolver));
                }
                Intrinsics.checkNotNullParameter(value3, "value");
                Intrinsics.checkNotNullParameter(type, "type");
                return new mq.y(value3, type);
            default:
                throw new IllegalStateException(("Unsupported annotation argument type: " + value.f7059i + " (expected " + type + ')').toString());
        }
    }

    @Override // th.u0
    public Object a() {
        switch (this.f7938d) {
            case 22:
                th.v0 v0Var = (th.v0) this.f7939e;
                List<String> list = (List) this.f7940i;
                v0Var.getClass();
                Map map = (Map) v0Var.b(new e(22, v0Var, list));
                HashMap hashMap = new HashMap();
                for (String str : list) {
                    th.s0 s0Var = (th.s0) map.get(str);
                    if (s0Var == null) {
                        hashMap.put(str, 8);
                    } else {
                        th.r0 r0Var = s0Var.f18571c;
                        int i5 = r0Var.f18561d;
                        if (i5 == 1 || i5 == 7 || i5 == 2 || i5 == 9 || i5 == 3) {
                            try {
                                r0Var.f18561d = 6;
                                ((Executor) v0Var.f18603f.a()).execute(new ii.o(20, v0Var, s0Var));
                                v0Var.f18599b.b(str);
                            } catch (l0 unused) {
                                th.v0.f18598g.e("Session %d with pack %s does not exist, no need to cancel.", Integer.valueOf(s0Var.a), str);
                            }
                        }
                        hashMap.put(str, Integer.valueOf(r0Var.f18561d));
                    }
                }
                return hashMap;
            default:
                int i6 = 7;
                return new k1((th.s) ((uh.f) this.f7939e).a(), new uh.f(new rd.u(i6, (qa.t) this.f7940i)));
        }
    }

    @Override // io.sentry.y2
    public y2 a0(Number number) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        if (number == null) {
            cVar.i();
            return this;
        }
        cVar.q();
        String obj = number.toString();
        if (cVar.f12065x || !(obj.equals("-Infinity") || obj.equals("Infinity") || obj.equals("NaN"))) {
            cVar.c();
            cVar.f12060d.append((CharSequence) obj);
            return this;
        }
        throw new IllegalArgumentException("Numeric values must be finite, but was " + number);
    }

    @Override // zq.b
    public h0 b(cr.d dVar) {
        return m3.n.m(dVar);
    }

    @Override // zq.b
    public boolean b0(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return receiver instanceof lq.a;
    }

    public void b1(w3.j workSpecId, int i5) {
        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
        ((h4.b) this.f7940i).a(new f4.m((w3.e) this.f7939e, workSpecId, false, i5));
    }

    @Override // zq.b
    public void c(cr.e eVar) {
        m3.n.n0(eVar);
    }

    @Override // zq.b
    public b1 c0(ArrayList types) {
        c0 c0Var;
        Intrinsics.checkNotNullParameter(types, "types");
        Intrinsics.checkNotNullParameter(types, "types");
        int size = types.size();
        if (size == 0) {
            throw new IllegalStateException("Expected some types");
        }
        if (size == 1) {
            return (b1) CollectionsKt.Y(types);
        }
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(types, 10));
        Iterator it = types.iterator();
        boolean z5 = false;
        boolean z6 = false;
        while (it.hasNext()) {
            b1 b1Var = (b1) it.next();
            z5 = z5 || yq.c.j(b1Var);
            if (b1Var instanceof c0) {
                c0Var = (c0) b1Var;
            } else {
                if (!(b1Var instanceof s)) {
                    throw new fo.n();
                }
                Intrinsics.checkNotNullParameter(b1Var, "<this>");
                c0Var = ((s) b1Var).f21068e;
                z6 = true;
            }
            arrayList.add(c0Var);
        }
        if (z5) {
            return ar.l.c(ar.k.U, types.toString());
        }
        zq.u uVar = zq.u.a;
        if (!z6) {
            return uVar.b(arrayList);
        }
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(types, 10));
        Iterator it2 = types.iterator();
        while (it2.hasNext()) {
            arrayList2.add(yq.c.E((b1) it2.next()));
        }
        return yq.c.e(uVar.b(arrayList), uVar.b(arrayList2));
    }

    public v c1(int i5) {
        int i6 = 0;
        while (true) {
            int[] iArr = (int[]) this.f7939e;
            if (i6 >= iArr.length) {
                ke.b.r("BaseMediaChunkOutput", "Unmatched track of type: " + i5);
                return new qc.i();
            }
            if (i5 == iArr[i6]) {
                return ((nd.p0[]) this.f7940i)[i6];
            }
            i6++;
        }
    }

    @Override // zq.b
    public b1 d(cr.f fVar, cr.f fVar2) {
        return m3.n.D(this, fVar, fVar2);
    }

    @Override // qc.e
    public qc.d d0(qc.k kVar, long j) {
        int H;
        long position = kVar.getPosition();
        int min = (int) Math.min(20000L, kVar.getLength() - position);
        w wVar = (w) this.f7940i;
        wVar.C(min);
        kVar.C(wVar.a, 0, min);
        int i5 = -1;
        int i6 = -1;
        long j5 = -9223372036854775807L;
        while (wVar.a() >= 4) {
            if (ad.x.H(wVar.a, wVar.f13363b) != 442) {
                wVar.G(1);
            } else {
                wVar.G(4);
                long c6 = ad.y.c(wVar);
                if (c6 != -9223372036854775807L) {
                    long b10 = ((b0) this.f7939e).b(c6);
                    if (b10 > j) {
                        return j5 == -9223372036854775807L ? new qc.d(-1, b10, position) : new qc.d(0, -9223372036854775807L, position + i6);
                    }
                    if (b10 + 100000 > j) {
                        return new qc.d(0, -9223372036854775807L, position + wVar.f13363b);
                    }
                    j5 = b10;
                    i6 = wVar.f13363b;
                }
                int i10 = wVar.f13364c;
                if (wVar.a() >= 10) {
                    wVar.G(9);
                    int u5 = wVar.u() & 7;
                    if (wVar.a() >= u5) {
                        wVar.G(u5);
                        if (wVar.a() >= 4) {
                            if (ad.x.H(wVar.a, wVar.f13363b) == 443) {
                                wVar.G(4);
                                int z5 = wVar.z();
                                if (wVar.a() < z5) {
                                    wVar.F(i10);
                                } else {
                                    wVar.G(z5);
                                }
                            }
                            while (true) {
                                if (wVar.a() < 4 || (H = ad.x.H(wVar.a, wVar.f13363b)) == 442 || H == 441 || (H >>> 8) != 1) {
                                    break;
                                }
                                wVar.G(4);
                                if (wVar.a() < 2) {
                                    wVar.F(i10);
                                    break;
                                }
                                wVar.F(Math.min(wVar.f13364c, wVar.f13363b + wVar.z()));
                            }
                        } else {
                            wVar.F(i10);
                        }
                    } else {
                        wVar.F(i10);
                    }
                } else {
                    wVar.F(i10);
                }
                i5 = wVar.f13363b;
            }
        }
        return j5 != -9223372036854775807L ? new qc.d(-2, j5, position + i5) : qc.d.f16762d;
    }

    public sj.a d1(jj.l lVar, jj.l lVar2) {
        nj.b bVar = (nj.b) this.f7939e;
        int i5 = (int) lVar.a;
        int i6 = (int) lVar.f12810b;
        int i10 = (int) lVar2.a;
        int i11 = (int) lVar2.f12810b;
        boolean z5 = Math.abs(i11 - i6) > Math.abs(i10 - i5);
        if (z5) {
            i6 = i5;
            i5 = i6;
            i11 = i10;
            i10 = i11;
        }
        int abs = Math.abs(i10 - i5);
        int abs2 = Math.abs(i11 - i6);
        int i12 = (-abs) / 2;
        int i13 = i6 < i11 ? 1 : -1;
        int i14 = i5 >= i10 ? -1 : 1;
        boolean b10 = bVar.b(z5 ? i6 : i5, z5 ? i5 : i6);
        int i15 = 0;
        while (i5 != i10) {
            boolean b11 = bVar.b(z5 ? i6 : i5, z5 ? i5 : i6);
            if (b11 != b10) {
                i15++;
                b10 = b11;
            }
            i12 += abs2;
            if (i12 > 0) {
                if (i6 == i11) {
                    break;
                }
                i6 += i13;
                i12 -= abs;
            }
            i5 += i14;
        }
        return new sj.a(lVar, lVar2, i15);
    }

    @Override // zq.b
    public cr.c e(c0 c0Var) {
        return m3.n.h(this, c0Var);
    }

    @Override // zq.b
    public int e0(cr.d dVar) {
        return m3.n.f(dVar);
    }

    public void e1(boolean z5, Status status) {
        HashMap hashMap;
        HashMap hashMap2;
        synchronized (((Map) this.f7939e)) {
            hashMap = new HashMap((Map) this.f7939e);
        }
        synchronized (((Map) this.f7940i)) {
            hashMap2 = new HashMap((Map) this.f7940i);
        }
        for (Map.Entry entry : hashMap.entrySet()) {
            if (z5 || ((Boolean) entry.getValue()).booleanValue()) {
                ((BasePendingResult) entry.getKey()).forceFailureUnlessReady(status);
            }
        }
        for (Map.Entry entry2 : hashMap2.entrySet()) {
            if (z5 || ((Boolean) entry2.getValue()).booleanValue()) {
                ((jg.g) entry2.getKey()).c(new ze.e(status));
            }
        }
    }

    @Override // zq.b
    public Collection f(cr.h hVar) {
        return m3.n.Q0(hVar);
    }

    @Override // io.sentry.y2
    public y2 f0() {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        cVar.q();
        cVar.c();
        cVar.f12060d.append((CharSequence) ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        return this;
    }

    @Override // io.sentry.y2
    public y2 g(long j) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        cVar.q();
        cVar.c();
        cVar.f12060d.write(Long.toString(j));
        return this;
    }

    @Override // ha.i
    public boolean g0(hc.m mVar) {
        return ((ha.i) this.f7939e).g0(mVar);
    }

    @Override // javax.inject.Provider
    public Object get() {
        l8.a aVar = new l8.a(6);
        j8.c cVar = new j8.c();
        Object obj = ((Provider) this.f7939e).get();
        Provider provider = (Provider) this.f7940i;
        return new dc.h(aVar, cVar, dc.a.f7466f, (dc.j) obj, provider);
    }

    @Override // zq.b
    public c0 h(cr.e eVar) {
        return m3.n.W0(eVar, true);
    }

    @Override // zq.b
    public boolean h0(cr.h c12, cr.h c22) {
        Intrinsics.checkNotNullParameter(c12, "c1");
        Intrinsics.checkNotNullParameter(c22, "c2");
        if (!(c12 instanceof p0)) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (!(c22 instanceof p0)) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (m3.n.e(c12, c22)) {
            return true;
        }
        p0 p0Var = (p0) c12;
        p0 p0Var2 = (p0) c22;
        Map map = (Map) this.f7939e;
        if (((zq.c) this.f7940i).a(p0Var, p0Var2)) {
            return true;
        }
        if (map == null) {
            return false;
        }
        p0 p0Var3 = (p0) map.get(p0Var);
        p0 p0Var4 = (p0) map.get(p0Var2);
        if (p0Var3 == null || !Intrinsics.areEqual(p0Var3, p0Var2)) {
            return p0Var4 != null && Intrinsics.areEqual(p0Var4, p0Var);
        }
        return true;
    }

    @Override // zq.b
    public c0 i(cr.e eVar) {
        return m3.n.W0(eVar, false);
    }

    @Override // zq.b
    public c0 i0(cr.d dVar) {
        c0 r02;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        s k = m3.n.k(dVar);
        if (k != null && (r02 = m3.n.r0(k)) != null) {
            return r02;
        }
        c0 l6 = m3.n.l(dVar);
        Intrinsics.checkNotNull(l6);
        return l6;
    }

    @Override // zq.b
    public boolean j(cr.h hVar) {
        return m3.n.Z(hVar);
    }

    @Override // zq.b
    public void j0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        s k = m3.n.k(dVar);
        if (k != null) {
            m3.n.j(k);
        }
    }

    @Override // zq.b
    public boolean k(cr.h hVar) {
        return m3.n.a0(hVar);
    }

    @Override // zq.b
    public Collection k0(cr.e eVar) {
        return m3.n.D0(this, eVar);
    }

    @Override // zq.b
    public boolean l(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        c0 l6 = m3.n.l(dVar);
        return (l6 != null ? m3.n.i(l6) : null) != null;
    }

    @Override // zq.b
    public cr.g l0(cr.e eVar) {
        return m3.n.g(eVar);
    }

    @Override // io.sentry.y2
    public y2 m(double d6) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        cVar.q();
        if (cVar.f12065x || !(Double.isNaN(d6) || Double.isInfinite(d6))) {
            cVar.c();
            cVar.f12060d.append((CharSequence) Double.toString(d6));
            return this;
        }
        throw new IllegalArgumentException("Numeric values must be finite, but was " + d6);
    }

    @Override // zq.b
    public void m0(cr.e eVar, cr.h constructor) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
    }

    @Override // io.sentry.y2
    public y2 n0() {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        cVar.q();
        cVar.c();
        int i5 = cVar.f12062i;
        int[] iArr = cVar.f12061e;
        if (i5 == iArr.length) {
            cVar.f12061e = Arrays.copyOf(iArr, i5 * 2);
        }
        int[] iArr2 = cVar.f12061e;
        int i6 = cVar.f12062i;
        cVar.f12062i = i6 + 1;
        iArr2[i6] = 3;
        cVar.f12060d.write(123);
        return this;
    }

    @Override // zq.b
    public boolean o(cr.h hVar) {
        return m3.n.f0(hVar);
    }

    @Override // io.sentry.y2
    public y2 o0(ILogger iLogger, Object obj) {
        ((ha.l) this.f7940i).a0(this, iLogger, obj);
        return this;
    }

    @Override // ps.h
    public void onFailure(Call call, IOException e9) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(e9, "e");
        ((dt.g) this.f7939e).f(e9, null);
    }

    /* JADX WARN: Code restructure failed: missing block: B:88:0x0134, code lost:
    
        if (r4 <= r3.f13546e) goto L89;
     */
    @Override // ps.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onResponse(Call call, Response response) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(response, "response");
        hc.k kVar = response.J;
        boolean z5 = true;
        try {
            ((dt.g) this.f7939e).e(response, kVar);
            Intrinsics.checkNotNull(kVar);
            ts.j f2 = kVar.f();
            Headers responseHeaders = response.f16090x;
            Intrinsics.checkNotNullParameter(responseHeaders, "responseHeaders");
            int size = responseHeaders.size();
            int i5 = 0;
            boolean z6 = false;
            Integer num = null;
            boolean z7 = false;
            Integer num2 = null;
            boolean z8 = false;
            boolean z10 = false;
            while (i5 < size) {
                int i6 = i5 + 1;
                if (kotlin.text.x.i(responseHeaders.b(i5), "Sec-WebSocket-Extensions", z5)) {
                    String h6 = responseHeaders.h(i5);
                    int i10 = 0;
                    while (i10 < h6.length()) {
                        boolean z11 = z5;
                        Headers headers = responseHeaders;
                        int g6 = qs.b.g(',', i10, 0, 4, h6);
                        int e9 = qs.b.e(';', i10, g6, h6);
                        String y5 = qs.b.y(i10, e9, h6);
                        int i11 = e9 + 1;
                        if (kotlin.text.x.i(y5, "permessage-deflate", z11)) {
                            if (z6) {
                                z10 = true;
                            }
                            i10 = i11;
                            while (i10 < g6) {
                                int e10 = qs.b.e(';', i10, g6, h6);
                                int e11 = qs.b.e('=', i10, e10, h6);
                                String y6 = qs.b.y(i10, e11, h6);
                                String P = e11 < e10 ? StringsKt.P(qs.b.y(e11 + 1, e10, h6)) : null;
                                int i12 = e10 + 1;
                                String str = h6;
                                if (kotlin.text.x.i(y6, "client_max_window_bits", true)) {
                                    if (num != null) {
                                        z10 = true;
                                    }
                                    num = P == null ? null : StringsKt.toIntOrNull(P);
                                    if (num == null) {
                                        i10 = i12;
                                        h6 = str;
                                        z10 = true;
                                    } else {
                                        i10 = i12;
                                        h6 = str;
                                    }
                                } else {
                                    if (kotlin.text.x.i(y6, "client_no_context_takeover", true)) {
                                        z10 = P != null ? true : z7 ? true : z10;
                                        z7 = true;
                                    } else {
                                        if (kotlin.text.x.i(y6, "server_max_window_bits", true)) {
                                            if (num2 != null) {
                                                z10 = true;
                                            }
                                            num2 = P == null ? null : StringsKt.toIntOrNull(P);
                                            if (num2 == null) {
                                            }
                                        } else if (kotlin.text.x.i(y6, "server_no_context_takeover", true)) {
                                            if (z8) {
                                                z10 = true;
                                            }
                                            if (P != null) {
                                                z10 = true;
                                            }
                                            i10 = i12;
                                            h6 = str;
                                            z8 = true;
                                        }
                                        i10 = i12;
                                        h6 = str;
                                        z10 = true;
                                    }
                                    i10 = i12;
                                    h6 = str;
                                }
                            }
                            responseHeaders = headers;
                            z5 = true;
                            z6 = true;
                        } else {
                            responseHeaders = headers;
                            i10 = i11;
                            z5 = true;
                            z10 = true;
                        }
                    }
                }
                i5 = i6;
            }
            ((dt.g) this.f7939e).f7775d = new dt.h(z6, num, z7, num2, z8, z10);
            try {
                if (!z10 && num == null) {
                    if (num2 != null) {
                        IntRange intRange = new IntRange(8, 15, 1);
                        int intValue = num2.intValue();
                        if (8 <= intValue) {
                        }
                    }
                    ((dt.g) this.f7939e).g(qs.b.f17056g + " WebSocket " + ((Request) this.f7940i).a.f(), f2);
                    dt.g gVar = (dt.g) this.f7939e;
                    gVar.a.onOpen(gVar, response);
                    ((dt.g) this.f7939e).h();
                    return;
                }
                ((dt.g) this.f7939e).g(qs.b.f17056g + " WebSocket " + ((Request) this.f7940i).a.f(), f2);
                dt.g gVar2 = (dt.g) this.f7939e;
                gVar2.a.onOpen(gVar2, response);
                ((dt.g) this.f7939e).h();
                return;
            } catch (Exception e12) {
                ((dt.g) this.f7939e).f(e12, null);
                return;
            }
            dt.g gVar3 = (dt.g) this.f7939e;
            synchronized (gVar3) {
                gVar3.f7784o.clear();
                gVar3.c(1010, "unexpected Sec-WebSocket-Extensions in response header");
            }
        } catch (IOException e13) {
            if (kVar != null) {
                kVar.c(true, true, null);
            }
            ((dt.g) this.f7939e).f(e13, response);
            qs.b.c(response);
        }
    }

    @Override // zq.b
    public b1 p(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        return m3.n.u0(dVar);
    }

    @Override // zq.b
    public boolean p0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        return !Intrinsics.areEqual(m3.n.R0(i0(dVar)), m3.n.R0(L(dVar)));
    }

    @Override // ha.i
    public CloseableReference q(Object obj, CloseableReference closeableReference) {
        ((ha.j) this.f7940i).C(obj);
        return ((ha.i) this.f7939e).q(obj, closeableReference);
    }

    @Override // io.sentry.y2
    public y2 q0(Boolean bool) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        if (bool == null) {
            cVar.i();
            return this;
        }
        cVar.q();
        cVar.c();
        cVar.f12060d.write(bool.booleanValue() ? "true" : "false");
        return this;
    }

    @Override // zq.b
    public c0 r(y yVar) {
        return m3.n.l(yVar);
    }

    @Override // zq.b
    public b1 r0(yq.s0 s0Var) {
        return m3.n.P(this, s0Var);
    }

    @Override // io.sentry.y2
    public y2 s(String str) {
        io.sentry.vendor.gson.stream.c cVar = (io.sentry.vendor.gson.stream.c) this.f7939e;
        if (str == null) {
            cVar.i();
            return this;
        }
        cVar.q();
        cVar.c();
        cVar.o(str);
        return this;
    }

    @Override // zq.b
    public boolean s0(cr.e eVar, cr.e eVar2) {
        return m3.n.V(eVar, eVar2);
    }

    @Override // zq.b
    public boolean t(yq.s0 s0Var) {
        return m3.n.m0(s0Var);
    }

    @Override // zq.b
    public c0 t0(cr.e eVar) {
        cr.b bVar = cr.b.f7316d;
        return m3.n.r(eVar);
    }

    public String toString() {
        switch (this.f7938d) {
            case 20:
                return ((String) this.f7939e) + ", " + ((String) this.f7940i);
            default:
                return super.toString();
        }
    }

    @Override // zq.b
    public boolean u(cr.h hVar) {
        return m3.n.g0(hVar);
    }

    @Override // zq.b
    public int u0(cr.h hVar) {
        return m3.n.x0(hVar);
    }

    @Override // zq.b
    public zq.a v(cr.e eVar) {
        return m3.n.P0(this, eVar);
    }

    @Override // zq.b
    public cr.i v0(yq.s0 s0Var) {
        return m3.n.S(s0Var);
    }

    @Override // zq.b
    public boolean w(cr.h hVar) {
        return m3.n.i0(hVar);
    }

    @Override // zq.b
    public p0 w0(cr.e eVar) {
        return m3.n.R0(eVar);
    }

    @Override // io.sentry.y2
    public void x(boolean z5) {
        ((io.sentry.vendor.gson.stream.c) this.f7939e).f12065x = z5;
    }

    @Override // zq.b
    public boolean x0(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.f0(m3.n.R0(eVar));
    }

    @Override // zq.b
    public boolean y(cr.c cVar) {
        return m3.n.l0(cVar);
    }

    @Override // zq.b
    public int y0(cr.g gVar) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        if (gVar instanceof cr.e) {
            return m3.n.f((cr.d) gVar);
        }
        if (gVar instanceof cr.a) {
            return ((cr.a) gVar).size();
        }
        throw new IllegalStateException(("unknown type argument list type: " + gVar + ", " + Reflection.getOrCreateKotlinClass(gVar.getClass())).toString());
    }

    @Override // zq.b
    public boolean z(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.i0(B0(eVar)) && !m3.n.j0(eVar);
    }

    @Override // zq.b
    public boolean z0(s0 s0Var, cr.h hVar) {
        return m3.n.U(s0Var, hVar);
    }

    public c(int i5, byte b10) {
        this.f7938d = i5;
        switch (i5) {
            case 5:
                ye.e eVar = ye.e.f20918d;
                this.f7939e = new SparseIntArray();
                this.f7940i = eVar;
                break;
            case 17:
                this.f7939e = new Rect();
                this.f7940i = new Rect();
                break;
            case 28:
                break;
            default:
                this.f7939e = Collections.synchronizedMap(new WeakHashMap());
                this.f7940i = Collections.synchronizedMap(new WeakHashMap());
                break;
        }
    }

    @Override // ha.i
    public CloseableReference get(Object obj) {
        ha.j jVar = (ha.j) this.f7940i;
        CloseableReference closeableReference = ((ha.i) this.f7939e).get(obj);
        if (closeableReference == null) {
            jVar.q(obj);
            return closeableReference;
        }
        jVar.m(obj);
        return closeableReference;
    }

    public c(Writer writer, int i5) {
        this.f7938d = 12;
        this.f7939e = new io.sentry.vendor.gson.stream.c(writer);
        ha.l lVar = new ha.l();
        lVar.f9613d = new a5.a0(i5, 8);
        this.f7940i = lVar;
    }

    public c(HashMap hashMap, zq.c equalityAxioms) {
        this.f7938d = 15;
        Intrinsics.checkNotNullParameter(equalityAxioms, "equalityAxioms");
        zq.f kotlinTypeRefiner = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        zq.e kotlinTypePreparator = zq.e.a;
        Intrinsics.checkNotNullParameter(kotlinTypePreparator, "kotlinTypePreparator");
        this.f7939e = hashMap;
        this.f7940i = equalityAxioms;
    }

    public c(Object obj) {
        this.f7938d = 27;
        this.f7939e = obj;
        this.f7940i = Thread.currentThread();
    }

    public c(Function1 compute) {
        this.f7938d = 7;
        Intrinsics.checkNotNullParameter(compute, "compute");
        this.f7939e = compute;
        this.f7940i = new ConcurrentHashMap();
    }

    public c(qa.p pool, a5.a0 pooledByteStreams) {
        this.f7938d = 19;
        Intrinsics.checkNotNullParameter(pool, "pool");
        Intrinsics.checkNotNullParameter(pooledByteStreams, "pooledByteStreams");
        this.f7939e = pool;
        this.f7940i = pooledByteStreams;
    }

    public c(WorkDatabase_Impl database) {
        this.f7938d = 0;
        this.f7939e = database;
        Intrinsics.checkNotNullParameter(database, "database");
        this.f7940i = new b(database, false, 0);
    }

    public c(i0.u layoutNode) {
        this.f7938d = 11;
        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
        this.f7939e = layoutNode;
        this.f7940i = tn.g.s(null);
    }

    public c(a0 module, i notFoundClasses) {
        this.f7938d = 24;
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
        this.f7939e = module;
        this.f7940i = notFoundClasses;
    }

    public c(nj.b bVar) {
        this.f7938d = 21;
        this.f7939e = bVar;
        this.f7940i = new jc.o0(bVar);
    }

    public c(w3.e processor, h4.b workTaskExecutor) {
        this.f7938d = 25;
        Intrinsics.checkNotNullParameter(processor, "processor");
        Intrinsics.checkNotNullParameter(workTaskExecutor, "workTaskExecutor");
        this.f7939e = processor;
        this.f7940i = workTaskExecutor;
    }

    public c(b0 b0Var) {
        this.f7938d = 2;
        this.f7939e = b0Var;
        this.f7940i = new w();
    }

    public c(int i5) {
        this.f7938d = 6;
        cd.b bVar = new cd.b(i5, 0);
        cd.b bVar2 = new cd.b(i5, 1);
        this.f7939e = bVar;
        this.f7940i = bVar2;
    }

    public c(MediaCodec.CryptoInfo cryptoInfo) {
        this.f7938d = 16;
        this.f7939e = cryptoInfo;
        this.f7940i = new MediaCodec.CryptoInfo.Pattern(0, 0);
    }

    public c(ArrayList arrayList, ArrayList arrayList2) {
        this.f7938d = 1;
        int size = arrayList.size();
        this.f7939e = new int[size];
        this.f7940i = new float[size];
        for (int i5 = 0; i5 < size; i5++) {
            ((int[]) this.f7939e)[i5] = ((Integer) arrayList.get(i5)).intValue();
            ((float[]) this.f7940i)[i5] = ((Float) arrayList2.get(i5)).floatValue();
        }
    }

    public c(int i5, int i6) {
        this.f7938d = 1;
        this.f7939e = new int[]{i5, i6};
        this.f7940i = new float[]{0.0f, 1.0f};
    }

    public c(int i5, int i6, int i10) {
        this.f7938d = 1;
        this.f7939e = new int[]{i5, i6, i10};
        this.f7940i = new float[]{0.0f, 0.5f, 1.0f};
    }

    public c(Callable callable) {
        this.f7938d = 13;
        this.f7940i = callable;
    }
}
