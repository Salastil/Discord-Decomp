package e4;

import a5.f0;
import a5.h0;
import ad.g0;
import android.content.Context;
import android.database.Cursor;
import android.os.Bundle;
import android.text.Spannable;
import android.text.SpannableString;
import android.util.Log;
import android.view.MotionEvent;
import android.widget.EditText;
import androidx.datastore.preferences.protobuf.d1;
import androidx.lifecycle.MutableLiveData;
import androidx.work.impl.WorkDatabase_Impl;
import bs.r1;
import com.android.billingclient.api.BillingResult;
import com.discord.js_watchdog.SharedPreferencesKey;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.JSPointerDispatcher;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.google.android.exoplayer2.Format;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.b4;
import com.google.android.gms.internal.play_billing.c4;
import com.google.android.gms.internal.play_billing.d4;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.h4;
import com.google.android.gms.internal.play_billing.j4;
import com.google.android.gms.internal.play_billing.k4;
import com.google.android.gms.internal.play_billing.l4;
import com.google.android.gms.internal.play_billing.p4;
import com.google.android.gms.internal.play_billing.r4;
import com.google.android.gms.internal.play_billing.s;
import com.google.android.gms.internal.play_billing.s4;
import com.google.android.gms.internal.play_billing.t3;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.w1;
import com.google.android.gms.internal.play_billing.w3;
import com.google.android.gms.internal.play_billing.x3;
import com.google.android.gms.internal.play_billing.y3;
import com.google.android.gms.internal.play_billing.z3;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import fi.c0;
import fi.e0;
import io.sentry.g6;
import iq.i0;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.lang.reflect.Method;
import java.nio.channels.FileChannel;
import java.nio.channels.FileLock;
import java.nio.channels.OverlappingFileLockException;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Formatter;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import k2.a0;
import k2.x;
import k2.y;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.KSerializer;
import qc.v;
import rd.u;
import rp.b0;
import th.l0;
import th.m0;
import th.s0;
import th.u0;
import th.v0;
import v3.t;
import v3.w;
import yq.k0;

/* loaded from: classes.dex */
public class r implements f0, r1, k2.p, b0, td.p, u0, OnCompleteListener, w, yb.b, di.o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7999d;

    /* renamed from: e, reason: collision with root package name */
    public Object f8000e;

    /* renamed from: i, reason: collision with root package name */
    public Object f8001i;

    public /* synthetic */ r(int i5, Object obj, Object obj2) {
        this.f7999d = i5;
        this.f8000e = obj;
        this.f8001i = obj2;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0046 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0041 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static r d(Context context) {
        FileChannel fileChannel;
        FileLock fileLock;
        try {
            fileChannel = new RandomAccessFile(new File(context.getFilesDir(), "generatefid.lock"), "rw").getChannel();
            try {
                fileLock = fileChannel.lock();
            } catch (IOException | Error | OverlappingFileLockException e9) {
                e = e9;
                fileLock = null;
            }
        } catch (IOException | Error | OverlappingFileLockException e10) {
            e = e10;
            fileChannel = null;
            fileLock = null;
        }
        try {
            return new r(28, fileChannel, fileLock);
        } catch (IOException e11) {
            e = e11;
            Log.e("CrossProcessLock", "encountered error while creating and acquiring the lock, ignoring", e);
            if (fileLock != null) {
                try {
                    fileLock.release();
                } catch (IOException unused) {
                }
            }
            if (fileChannel != null) {
                try {
                    fileChannel.close();
                } catch (IOException unused2) {
                }
            }
            return null;
        } catch (Error e12) {
            e = e12;
            Log.e("CrossProcessLock", "encountered error while creating and acquiring the lock, ignoring", e);
            if (fileLock != null) {
            }
            if (fileChannel != null) {
            }
            return null;
        } catch (OverlappingFileLockException e13) {
            e = e13;
            Log.e("CrossProcessLock", "encountered error while creating and acquiring the lock, ignoring", e);
            if (fileLock != null) {
            }
            if (fileChannel != null) {
            }
            return null;
        }
    }

    public static k0 g(List attributes) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        return attributes.isEmpty() ? k0.f21046i : new k0(attributes);
    }

    public static r t(InputStream inputStream) {
        String str;
        DataInputStream dataInputStream = new DataInputStream(inputStream);
        byte readByte = dataInputStream.readByte();
        if (readByte == 1) {
            str = "arm64-v8a";
        } else if (readByte == 2) {
            str = "armeabi-v7a";
        } else if (readByte == 3) {
            str = "x86_64";
        } else {
            if (readByte != 4) {
                throw new RuntimeException(k0.d.i(readByte, "Unrecognized arch id: "));
            }
            str = "x86";
        }
        int readShort = dataInputStream.readShort() & 65535;
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < readShort; i5++) {
            byte[] bArr = new byte[dataInputStream.readShort() & 65535];
            dataInputStream.readFully(bArr);
            arrayList.add(new String(bArr, StandardCharsets.UTF_8));
        }
        return new r(str, arrayList);
    }

    public void A(u3 u3Var, int i5, long j, boolean z5) {
        e4 e4Var;
        try {
            d4 d4Var = (d4) ((e4) this.f8000e).l();
            d4Var.c();
            e4.E((e4) d4Var.f5728e, i5);
            this.f8000e = (e4) d4Var.a();
            t3 t3Var = (t3) u3Var.l();
            h4 h4Var = (h4) u3Var.w().l();
            h4Var.c();
            j4.s((j4) h4Var.f5728e, z5);
            t3Var.c();
            u3.r((u3) t3Var.f5728e, (j4) h4Var.a());
            u3 u3Var2 = (u3) t3Var.a();
            if (j == 0) {
                e4Var = (e4) this.f8000e;
            } else {
                d4 d4Var2 = (d4) ((e4) this.f8000e).l();
                d4Var2.g(j);
                e4Var = (e4) d4Var2.a();
            }
            G(u3Var2, e4Var);
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void B(z3 z3Var) {
        try {
            k4 t5 = l4.t();
            t5.e((e4) this.f8000e);
            t5.c();
            l4.w((l4) t5.f5728e, z3Var);
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void C(BillingResult billingResult, long j) {
        e4 e4Var;
        try {
            b4 r5 = c4.r();
            r5.c();
            c4.w((c4) r5.f5728e, 4);
            a4 a4Var = a4.IN_APP_BILLING_RESULT_UPDATE_ACTION;
            r5.c();
            c4.s((c4) r5.f5728e, a4Var);
            if (billingResult != null) {
                x3 s2 = y3.s();
                int i5 = billingResult.a;
                s2.c();
                y3.r((y3) s2.f5728e, i5);
                String str = billingResult.f3601c;
                s2.c();
                y3.u((y3) s2.f5728e, str);
                r5.c();
                c4.t((c4) r5.f5728e, (y3) s2.a());
            }
            k4 t5 = l4.t();
            if (j == 0) {
                e4Var = (e4) this.f8000e;
            } else {
                d4 d4Var = (d4) ((e4) this.f8000e).l();
                d4Var.g(j);
                e4Var = (e4) d4Var.a();
            }
            t5.e(e4Var);
            t5.c();
            l4.x((l4) t5.f5728e, (c4) r5.a());
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void D(p4 p4Var) {
        try {
            k4 t5 = l4.t();
            t5.e((e4) this.f8000e);
            b4 r5 = c4.r();
            r5.c();
            c4.u((c4) r5.f5728e);
            r5.c();
            c4.w((c4) r5.f5728e, 2);
            r5.c();
            c4.v((c4) r5.f5728e, p4Var);
            t5.c();
            l4.x((l4) t5.f5728e, (c4) r5.a());
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void E(r4 r4Var) {
        try {
            h0 h0Var = (h0) this.f8001i;
            k4 t5 = l4.t();
            t5.e((e4) this.f8000e);
            t5.c();
            l4.r((l4) t5.f5728e, r4Var);
            h0Var.A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void F(s4 s4Var) {
        if (s4Var == null) {
            return;
        }
        try {
            k4 t5 = l4.t();
            t5.e((e4) this.f8000e);
            t5.c();
            l4.s((l4) t5.f5728e, s4Var);
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void G(u3 u3Var, e4 e4Var) {
        if (u3Var == null) {
            return;
        }
        try {
            k4 t5 = l4.t();
            t5.e(e4Var);
            t5.c();
            l4.u((l4) t5.f5728e, u3Var);
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void H(w3 w3Var, e4 e4Var) {
        if (w3Var == null) {
            return;
        }
        try {
            k4 t5 = l4.t();
            t5.e(e4Var);
            t5.c();
            l4.v((l4) t5.f5728e, w3Var);
            ((h0) this.f8001i).A((l4) t5.a());
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    @Override // th.u0
    public Object a() {
        switch (this.f7999d) {
            case 22:
                v0 v0Var = (v0) this.f8000e;
                Bundle bundle = (Bundle) this.f8001i;
                int i5 = bundle.getInt(SharedPreferencesKey.SESSION_ID);
                if (i5 == 0) {
                    return Boolean.TRUE;
                }
                HashMap hashMap = v0Var.f18600c;
                Integer valueOf = Integer.valueOf(i5);
                if (!hashMap.containsKey(valueOf)) {
                    return Boolean.TRUE;
                }
                if (((s0) v0Var.f18600c.get(valueOf)).f18571c.f18561d == 6) {
                    return Boolean.FALSE;
                }
                ArrayList<String> stringArrayList = bundle.getStringArrayList("pack_names");
                if (stringArrayList == null || stringArrayList.isEmpty()) {
                    throw new l0("Session without pack received.");
                }
                return Boolean.valueOf(!m0.d(r0.f18571c.f18561d, bundle.getInt(a5.k0.b("status", stringArrayList.get(0)))));
            default:
                return new com.google.android.play.core.integrity.a((com.google.android.play.core.integrity.c) ((di.n) this.f8000e).a(), (com.google.android.play.core.integrity.f) ((di.n) this.f8001i).a());
        }
    }

    @Override // k2.p
    public boolean b(CharSequence charSequence, int i5, int i6, x xVar) {
        if ((xVar.f13160c & 4) > 0) {
            return true;
        }
        if (((a0) this.f8000e) == null) {
            this.f8000e = new a0(charSequence instanceof Spannable ? (Spannable) charSequence : new SpannableString(charSequence));
        }
        ((l8.a) this.f8001i).getClass();
        ((a0) this.f8000e).setSpan(new y(xVar), i5, i6, 33);
        return true;
    }

    @Override // bs.r1
    public KSerializer c(KClass key) {
        Object putIfAbsent;
        Intrinsics.checkNotNullParameter(key, "key");
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f8001i;
        Class z5 = com.facebook.imagepipeline.nativecode.c.z(key);
        Object obj = concurrentHashMap.get(z5);
        if (obj == null && (putIfAbsent = concurrentHashMap.putIfAbsent(z5, (obj = new bs.k((KSerializer) ((Function1) this.f8000e).invoke(key))))) != null) {
            obj = putIfAbsent;
        }
        return ((bs.k) obj).a;
    }

    public void e(Object obj, String str) {
        int length = str.length();
        String valueOf = String.valueOf(obj);
        ((ArrayList) this.f8000e).add(a3.e.n(new StringBuilder(length + 1 + valueOf.length()), str, "=", valueOf));
    }

    public boolean equals(Object obj) {
        switch (this.f7999d) {
            case 18:
                return (obj instanceof k1.a) && ((String) this.f8000e) == null && ((String) this.f8001i) == null;
            default:
                return super.equals(obj);
        }
    }

    public void f(long j, ke.w wVar) {
        if (wVar.a() < 9) {
            return;
        }
        int g6 = wVar.g();
        int g10 = wVar.g();
        int u5 = wVar.u();
        if (g6 == 434 && g10 == 1195456820 && u5 == 3) {
            tn.g.e(j, wVar, (v[]) this.f8001i);
        }
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new xb.d((Context) ((u) this.f8000e).f17275e, (k2.r) ((r3.g) this.f8001i).get());
    }

    @Override // k2.p
    public Object getResult() {
        return (a0) this.f8000e;
    }

    public void h(qc.l lVar, g0 g0Var) {
        v[] vVarArr = (v[]) this.f8001i;
        for (int i5 = 0; i5 < vVarArr.length; i5++) {
            g0Var.a();
            g0Var.b();
            v y5 = lVar.y(g0Var.f367d, 3);
            Format format = (Format) ((List) this.f8000e).get(i5);
            String str = format.I;
            ke.b.f("Invalid closed caption MIME type provided: " + str, "application/cea-608".equals(str) || "application/cea-708".equals(str));
            hc.f0 f0Var = new hc.f0();
            g0Var.b();
            f0Var.a = g0Var.f368e;
            f0Var.k = str;
            f0Var.f9672d = format.f5230v;
            f0Var.f9671c = format.f5229i;
            f0Var.C = format.a0;
            f0Var.f9679m = format.K;
            y5.e(new Format(f0Var));
            vVarArr[i5] = y5;
        }
    }

    public int hashCode() {
        switch (this.f7999d) {
            case 18:
                String str = (String) this.f8000e;
                int hashCode = str == null ? 0 : str.hashCode();
                String str2 = (String) this.f8001i;
                return hashCode ^ (str2 != null ? str2.hashCode() : 0);
            default:
                return super.hashCode();
        }
    }

    public byte[] i(fd.a aVar) {
        DataOutputStream dataOutputStream = (DataOutputStream) this.f8001i;
        ByteArrayOutputStream byteArrayOutputStream = (ByteArrayOutputStream) this.f8000e;
        byteArrayOutputStream.reset();
        try {
            dataOutputStream.writeBytes(aVar.f8493d);
            dataOutputStream.writeByte(0);
            String str = aVar.f8494e;
            if (str == null) {
                str = "";
            }
            dataOutputStream.writeBytes(str);
            dataOutputStream.writeByte(0);
            dataOutputStream.writeLong(aVar.f8495i);
            dataOutputStream.writeLong(aVar.f8496v);
            dataOutputStream.write(aVar.f8497w);
            dataOutputStream.flush();
            return byteArrayOutputStream.toByteArray();
        } catch (IOException e9) {
            throw new RuntimeException(e9);
        }
    }

    public ak.a j(int i5) {
        ak.a aVar;
        ak.a aVar2;
        ak.a[] aVarArr = (ak.a[]) this.f8001i;
        ak.a aVar3 = aVarArr[p(i5)];
        if (aVar3 != null) {
            return aVar3;
        }
        for (int i6 = 1; i6 < 5; i6++) {
            int p3 = p(i5) - i6;
            if (p3 >= 0 && (aVar2 = aVarArr[p3]) != null) {
                return aVar2;
            }
            int p5 = p(i5) + i6;
            if (p5 < aVarArr.length && (aVar = aVarArr[p5]) != null) {
                return aVar;
            }
        }
        return null;
    }

    @Override // td.p
    public ie.m0 k(td.l lVar, td.i iVar) {
        return new e(16, ((td.p) this.f8000e).k(lVar, iVar), (List) this.f8001i);
    }

    public int l(String key) {
        int intValue;
        Intrinsics.checkNotNullParameter(key, "keyQualifiedName");
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) this.f8000e;
        aq.a compute = new aq.a(1, this);
        Intrinsics.checkNotNullParameter(concurrentHashMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(compute, "compute");
        Integer num = (Integer) concurrentHashMap.get(key);
        if (num != null) {
            return num.intValue();
        }
        synchronized (concurrentHashMap) {
            try {
                Integer num2 = (Integer) concurrentHashMap.get(key);
                if (num2 != null) {
                    intValue = num2.intValue();
                } else {
                    Object invoke = compute.invoke(key);
                    concurrentHashMap.putIfAbsent(key, Integer.valueOf(((Number) invoke).intValue()));
                    intValue = ((Number) invoke).intValue();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return intValue;
    }

    public synchronized Map m() {
        try {
            if (((Map) this.f8001i) == null) {
                this.f8001i = Collections.unmodifiableMap(new HashMap((HashMap) this.f8000e));
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return (Map) this.f8001i;
    }

    public ArrayList n(String str) {
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) this.f8000e;
        a3.o g6 = a3.o.g(1, "SELECT DISTINCT tag FROM worktag WHERE work_spec_id=?");
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

    public void o(MotionEvent motionEvent, EventDispatcher eventDispatcher, boolean z5) {
        JSPointerDispatcher jSPointerDispatcher = (JSPointerDispatcher) this.f8000e;
        Method method = (Method) ((fo.u) this.f8001i).getValue();
        if (method != null) {
            if (method.getParameterTypes().length == 3) {
                method.invoke(jSPointerDispatcher, motionEvent, eventDispatcher, Boolean.valueOf(z5));
            } else {
                method.invoke(jSPointerDispatcher, motionEvent, eventDispatcher);
            }
        }
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        uh.q qVar = (uh.q) this.f8000e;
        jg.g gVar = (jg.g) this.f8001i;
        synchronized (qVar.f18925f) {
            qVar.f18924e.remove(gVar);
        }
    }

    public int p(int i5) {
        return i5 - ((ak.c) this.f8000e).f660h;
    }

    public void q(zk.a aVar) {
        g4.j jVar = (g4.j) this.f8001i;
        ((MutableLiveData) this.f8000e).i(aVar);
        if (aVar instanceof v3.v) {
            jVar.j((v3.v) aVar);
        } else if (aVar instanceof t) {
            jVar.k(((t) aVar).j);
        }
    }

    @Override // td.p
    public ie.m0 r() {
        return new e(16, ((td.p) this.f8000e).r(), (List) this.f8001i);
    }

    public void s(Exception exc, boolean z5) {
        this.f8001i = null;
        HashSet hashSet = (HashSet) this.f8000e;
        e0 k = e0.k(hashSet);
        hashSet.clear();
        c0 listIterator = k.listIterator(0);
        while (listIterator.hasNext()) {
            nc.c cVar = (nc.c) listIterator.next();
            cVar.getClass();
            cVar.i(z5 ? 1 : 3, exc);
        }
    }

    public String toString() {
        switch (this.f7999d) {
            case 3:
                Formatter formatter = new Formatter();
                try {
                    int i5 = 0;
                    for (ak.a aVar : (ak.a[]) this.f8001i) {
                        if (aVar == null) {
                            formatter.format("%3d:    |   %n", Integer.valueOf(i5));
                            i5++;
                        } else {
                            formatter.format("%3d: %3d|%3d%n", Integer.valueOf(i5), Integer.valueOf(aVar.f653f), Integer.valueOf(aVar.f652e));
                            i5++;
                        }
                    }
                    String formatter2 = formatter.toString();
                    formatter.close();
                    return formatter2;
                } catch (Throwable th2) {
                    try {
                        throw th2;
                    } catch (Throwable th3) {
                        try {
                            formatter.close();
                        } catch (Throwable th4) {
                            th2.addSuppressed(th4);
                        }
                        throw th3;
                    }
                }
            case 4:
                StringBuilder sb2 = new StringBuilder(100);
                sb2.append(this.f8001i.getClass().getSimpleName());
                sb2.append('{');
                ArrayList arrayList = (ArrayList) this.f8000e;
                int size = arrayList.size();
                for (int i6 = 0; i6 < size; i6++) {
                    sb2.append((String) arrayList.get(i6));
                    if (i6 < size - 1) {
                        sb2.append(", ");
                    }
                }
                sb2.append('}');
                return sb2.toString();
            case 17:
                String str = "[ ";
                if (((p0.e) this.f8000e) != null) {
                    for (int i10 = 0; i10 < 9; i10++) {
                        StringBuilder o6 = k0.d.o(str);
                        o6.append(((p0.e) this.f8000e).E[i10]);
                        o6.append(" ");
                        str = o6.toString();
                    }
                }
                StringBuilder p3 = k0.d.p(str, "] ");
                p3.append((p0.e) this.f8000e);
                return p3.toString();
            case 18:
                StringBuilder sb3 = new StringBuilder("Pair{");
                sb3.append(this.f8000e);
                sb3.append(" ");
                sb3.append(this.f8001i);
                sb3.append("}");
                return sb3.toString();
            default:
                return super.toString();
        }
    }

    public void u() {
        try {
            ((FileLock) this.f8001i).release();
            ((FileChannel) this.f8000e).close();
        } catch (IOException e9) {
            Log.e("CrossProcessLock", "encountered error while releasing, ignoring", e9);
        }
    }

    public void v(int i5, w1 w1Var) {
        Iterator it = (Iterator) this.f8000e;
        while (true) {
            Map.Entry entry = (Map.Entry) this.f8001i;
            if (entry == null || ((iq.l) entry.getKey()).f12229d >= i5) {
                return;
            }
            iq.l lVar = (iq.l) ((Map.Entry) this.f8001i).getKey();
            Object value = ((Map.Entry) this.f8001i).getValue();
            iq.h hVar = iq.h.f12209c;
            i0 i0Var = lVar.f12230e;
            int i6 = lVar.f12229d;
            if (lVar.f12231i) {
                for (Object obj : (List) value) {
                    if (i0Var == i0.f12214w) {
                        w1Var.C(i6, 3);
                        ((iq.a) obj).f(w1Var);
                        w1Var.C(i6, 4);
                    } else {
                        w1Var.C(i6, i0Var.f12218e);
                        iq.h.k(w1Var, i0Var, obj);
                    }
                }
            } else if (i0Var == i0.f12214w) {
                w1Var.C(i6, 3);
                ((iq.a) value).f(w1Var);
                w1Var.C(i6, 4);
            } else {
                w1Var.C(i6, i0Var.f12218e);
                iq.h.k(w1Var, i0Var, value);
            }
            if (it.hasNext()) {
                this.f8001i = (Map.Entry) it.next();
            } else {
                this.f8001i = null;
            }
        }
    }

    public void w(u3 u3Var) {
        try {
            G(u3Var, (e4) this.f8000e);
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void x(u3 u3Var, int i5) {
        try {
            d4 d4Var = (d4) ((e4) this.f8000e).l();
            d4Var.c();
            e4.E((e4) d4Var.f5728e, i5);
            this.f8000e = (e4) d4Var.a();
            w(u3Var);
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void y(u3 u3Var, int i5, long j) {
        try {
            d4 d4Var = (d4) ((e4) this.f8000e).l();
            d4Var.c();
            e4.E((e4) d4Var.f5728e, i5);
            e4 e4Var = (e4) d4Var.a();
            this.f8000e = e4Var;
            if (j != 0) {
                d4 d4Var2 = (d4) e4Var.l();
                d4Var2.g(j);
                e4Var = (e4) d4Var2.a();
            }
            G(u3Var, e4Var);
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public void z(u3 u3Var, long j, boolean z5) {
        e4 e4Var;
        try {
            t3 t3Var = (t3) u3Var.l();
            h4 h4Var = (h4) u3Var.w().l();
            h4Var.c();
            j4.s((j4) h4Var.f5728e, z5);
            t3Var.c();
            u3.r((u3) t3Var.f5728e, (j4) h4Var.a());
            u3 u3Var2 = (u3) t3Var.a();
            if (j == 0) {
                e4Var = (e4) this.f8000e;
            } else {
                d4 d4Var = (d4) ((e4) this.f8000e).l();
                d4Var.g(j);
                e4Var = (e4) d4Var.a();
            }
            G(u3Var2, e4Var);
        } catch (Throwable th2) {
            s.i("BillingLogger", "Unable to log.", th2);
        }
    }

    public /* synthetic */ r(int i5, boolean z5) {
        this.f7999d = i5;
    }

    public r(Context context, e4 e4Var) {
        this.f7999d = 1;
        h0 h0Var = new h0((char) 0, 0);
        try {
            wb.p.b(context);
            h0Var.f176i = wb.p.a().c(ub.a.f18820e).a("PLAY_BILLING_LIBRARY", new tb.c("proto"), new j8.b(1, (byte) 0));
        } catch (Throwable unused) {
            h0Var.f175e = true;
        }
        this.f8001i = h0Var;
        this.f8000e = e4Var;
    }

    public /* synthetic */ r(Object obj) {
        this.f7999d = 4;
        this.f8001i = obj;
        this.f8000e = new ArrayList();
    }

    public r(dm.c viewGroup) {
        this.f7999d = 8;
        Intrinsics.checkNotNullParameter(viewGroup, "viewGroup");
        this.f8000e = new JSPointerDispatcher(viewGroup);
        this.f8001i = fo.l.a(new com.discord.notifications.client.a(21));
    }

    public r(WorkDatabase_Impl database) {
        this.f7999d = 0;
        this.f8000e = database;
        Intrinsics.checkNotNullParameter(database, "database");
        this.f8001i = new b(database, false, 6);
        new h(database, 20);
    }

    public r(ak.c cVar) {
        this.f7999d = 3;
        this.f8000e = new ak.c(cVar);
        this.f8001i = new ak.a[(cVar.f661i - cVar.f660h) + 1];
    }

    public r(String str, ArrayList arrayList) {
        this.f7999d = 6;
        this.f8000e = str;
        this.f8001i = Collections.unmodifiableList(arrayList);
    }

    public r(int i5) {
        this.f7999d = i5;
        switch (i5) {
            case 11:
                this.f8000e = new HashMap();
                break;
            case 16:
                this.f8000e = new HashSet();
                break;
            case 24:
                this.f8000e = new MutableLiveData();
                this.f8001i = new g4.j();
                q(w.C);
                break;
            case 27:
                this.f8000e = new ConcurrentHashMap();
                this.f8001i = new AtomicInteger(0);
                break;
            default:
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
                this.f8000e = byteArrayOutputStream;
                this.f8001i = new DataOutputStream(byteArrayOutputStream);
                break;
        }
    }

    public r(p0.d dVar) {
        this.f7999d = 17;
        this.f8001i = dVar;
    }

    public r(List list) {
        this.f7999d = 2;
        this.f8000e = list;
        this.f8001i = new v[list.size()];
    }

    public r(Map states) {
        this.f7999d = 20;
        Intrinsics.checkNotNullParameter(states, "states");
        this.f8000e = states;
        xq.j d6 = new xq.l("Java nullability annotation states").d(new aq.a(14, this));
        Intrinsics.checkNotNullExpressionValue(d6, "createMemoizedFunctionWithNullableValues(...)");
        this.f8001i = d6;
    }

    public r(Function1 compute) {
        this.f7999d = 5;
        Intrinsics.checkNotNullParameter(compute, "compute");
        this.f8000e = compute;
        this.f8001i = new ConcurrentHashMap();
    }

    public r(EditText editText) {
        this.f7999d = 15;
        this.f8000e = editText;
        m2.i iVar = new m2.i(editText);
        this.f8001i = iVar;
        editText.addTextChangedListener(iVar);
        if (m2.a.f14316b == null) {
            synchronized (m2.a.a) {
                try {
                    if (m2.a.f14316b == null) {
                        m2.a aVar = new m2.a();
                        try {
                            m2.a.f14317c = Class.forName("android.text.DynamicLayout$ChangeWatcher", false, m2.a.class.getClassLoader());
                        } catch (Throwable unused) {
                        }
                        m2.a.f14316b = aVar;
                    }
                } finally {
                }
            }
        }
        editText.setEditableFactory(m2.a.f14316b);
    }

    public r(iq.k kVar) {
        this.f7999d = 13;
        Iterator it = ((d1) kVar.f12228d.a.entrySet()).iterator();
        this.f8000e = it;
        if (it.hasNext()) {
            this.f8001i = (Map.Entry) it.next();
        }
    }

    public r(g6 g6Var, g6 g6Var2) {
        this.f7999d = 12;
        this.f8001i = g6Var;
        this.f8000e = g6Var2;
    }
}
