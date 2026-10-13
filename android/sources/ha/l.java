package ha;

import a5.a0;
import ad.d0;
import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.util.Log;
import android.view.Window;
import androidx.appcompat.widget.q;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import ie.f0;
import ie.h0;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.v5;
import io.sentry.y1;
import ip.n;
import ip.p;
import ip.r0;
import ip.u;
import iq.x;
import java.io.File;
import java.io.IOException;
import java.net.InetAddress;
import java.net.URI;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Collection;
import java.util.Collections;
import java.util.ConcurrentModificationException;
import java.util.Currency;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import java.util.TimeZone;
import java.util.UUID;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicIntegerArray;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.g0;
import lp.i0;
import lp.j0;
import lp.k0;
import lp.z;
import rq.o;
import vp.v;
import yq.y;

/* loaded from: classes3.dex */
public final class l implements q, u, aq.m, ih.a, j, n.u, jg.d, jg.c, jg.b, n, f0, jk.c, n1.h, qa.e {

    /* renamed from: d, reason: collision with root package name */
    public Object f9613d;

    public /* synthetic */ l(Object obj) {
        this.f9613d = obj;
    }

    @Override // ip.u
    public u A(ip.c cVar) {
        ip.c kind = ip.c.f12124e;
        Intrinsics.checkNotNullParameter(kind, "kind");
        return this;
    }

    @Override // aq.m
    public aq.n B(hq.e eVar) {
        if ("b".equals(eVar.b())) {
            return new bq.c(this, 2);
        }
        return null;
    }

    @Override // ha.j
    public void C(Object obj) {
        ((k) this.f9613d).getClass();
    }

    @Override // ip.u
    public u D(p visibility) {
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        return this;
    }

    @Override // jg.b
    public void E() {
        ((CountDownLatch) this.f9613d).countDown();
    }

    @Override // ip.n
    public Object I(i0 descriptor, Object obj) {
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h.n((jq.h) this.f9613d, descriptor, builder);
        return Unit.a;
    }

    @Override // ip.u
    public u K(ip.l owner) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        return this;
    }

    public lh.d M(lh.d dVar) {
        return dVar instanceof lh.j ? dVar : new lh.b(-((lh.i) this.f9613d).j(), dVar);
    }

    public float N(fk.c cVar, fk.c cVar2) {
        int i5 = (int) cVar.a;
        int i6 = (int) cVar.f12810b;
        int i10 = (int) cVar2.a;
        int i11 = (int) cVar2.f12810b;
        float e02 = e0(i5, i6, i10, i11);
        float e03 = e0((int) cVar2.a, i11, (int) cVar.a, i6);
        return Float.isNaN(e02) ? e03 / 7.0f : Float.isNaN(e03) ? e02 / 7.0f : (e02 + e03) / 14.0f;
    }

    public void O() {
        ArrayList arrayList;
        synchronized (this) {
            arrayList = new ArrayList(((HashMap) this.f9613d).values());
            ((HashMap) this.f9613d).clear();
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            EncodedImage encodedImage = (EncodedImage) arrayList.get(i5);
            if (encodedImage != null) {
                encodedImage.close();
            }
        }
    }

    public void P(iq.d dVar) {
        if (!dVar.i()) {
            if (!(dVar instanceof x)) {
                String valueOf = String.valueOf(dVar.getClass());
                throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder(valueOf.length() + 49), "Has a new type of ByteString been created? Found ", valueOf));
            }
            x xVar = (x) dVar;
            P(xVar.f12245i);
            P(xVar.f12246v);
            return;
        }
        int size = dVar.size();
        int[] iArr = x.E;
        int binarySearch = Arrays.binarySearch(iArr, size);
        if (binarySearch < 0) {
            binarySearch = (-(binarySearch + 1)) - 1;
        }
        int i5 = iArr[binarySearch + 1];
        Stack stack = (Stack) this.f9613d;
        if (stack.isEmpty() || ((iq.d) stack.peek()).size() >= i5) {
            stack.push(dVar);
            return;
        }
        int i6 = iArr[binarySearch];
        iq.d dVar2 = (iq.d) stack.pop();
        while (!stack.isEmpty() && ((iq.d) stack.peek()).size() < i6) {
            dVar2 = new x((iq.d) stack.pop(), dVar2);
        }
        x xVar2 = new x(dVar2, dVar);
        while (!stack.isEmpty()) {
            int[] iArr2 = x.E;
            int binarySearch2 = Arrays.binarySearch(iArr2, xVar2.f12244e);
            if (binarySearch2 < 0) {
                binarySearch2 = (-(binarySearch2 + 1)) - 1;
            }
            if (((iq.d) stack.peek()).size() >= iArr2[binarySearch2 + 1]) {
                break;
            } else {
                xVar2 = new x((iq.d) stack.pop(), xVar2);
            }
        }
        stack.push(xVar2);
    }

    public fk.a Q(float f2, float f10, int i5, int i6) {
        fk.a b10;
        fk.a b11;
        int i10 = (int) (f10 * f2);
        int max = Math.max(0, i5 - i10);
        nj.b bVar = (nj.b) this.f9613d;
        int min = Math.min(bVar.f15510d - 1, i5 + i10) - max;
        float f11 = 3.0f * f2;
        if (min < f11) {
            throw jj.g.f12795i;
        }
        int max2 = Math.max(0, i6 - i10);
        int min2 = Math.min(bVar.f15511e - 1, i6 + i10) - max2;
        if (min2 < f11) {
            throw jj.g.f12795i;
        }
        nj.b bVar2 = (nj.b) this.f9613d;
        fk.b bVar3 = new fk.b(bVar2, max, max2, min, min2, f2);
        int i11 = bVar3.f8769e;
        int i12 = bVar3.f8767c;
        int i13 = i11 + i12;
        int i14 = bVar3.f8770f;
        int i15 = (i14 / 2) + bVar3.f8768d;
        int[] iArr = new int[3];
        for (int i16 = 0; i16 < i14; i16++) {
            int i17 = ((i16 & 1) == 0 ? (i16 + 1) / 2 : -((i16 + 1) / 2)) + i15;
            iArr[0] = 0;
            iArr[1] = 0;
            iArr[2] = 0;
            int i18 = i12;
            while (i18 < i13 && !bVar2.b(i18, i17)) {
                i18++;
            }
            int i19 = 0;
            while (i18 < i13) {
                if (!bVar2.b(i18, i17)) {
                    if (i19 == 1) {
                        i19++;
                    }
                    iArr[i19] = iArr[i19] + 1;
                } else if (i19 == 1) {
                    iArr[1] = iArr[1] + 1;
                } else if (i19 != 2) {
                    i19++;
                    iArr[i19] = iArr[i19] + 1;
                } else {
                    if (bVar3.a(iArr) && (b11 = bVar3.b(i17, i18, iArr)) != null) {
                        return b11;
                    }
                    iArr[0] = iArr[2];
                    iArr[1] = 1;
                    iArr[2] = 0;
                    i19 = 1;
                }
                i18++;
            }
            if (bVar3.a(iArr) && (b10 = bVar3.b(i17, i13, iArr)) != null) {
                return b10;
            }
        }
        ArrayList arrayList = bVar3.f8766b;
        if (arrayList.isEmpty()) {
            throw jj.g.f12795i;
        }
        return (fk.a) arrayList.get(0);
    }

    public ve.i R(hq.b classId, eq.f metadataVersion) {
        np.b m5;
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        String m6 = kotlin.text.x.m(classId.f10201b.a.a, '.', '$');
        hq.c cVar = classId.a;
        if (!cVar.a.c()) {
            m6 = cVar + '.' + m6;
        }
        Class M = com.facebook.imagepipeline.nativecode.b.M((ClassLoader) this.f9613d, m6);
        if (M == null || (m5 = com.facebook.imagepipeline.nativecode.c.m(M)) == null) {
            return null;
        }
        return new ve.i(m5);
    }

    public synchronized EncodedImage S(CacheKey cacheKey) {
        cacheKey.getClass();
        EncodedImage encodedImage = (EncodedImage) ((HashMap) this.f9613d).get(cacheKey);
        if (encodedImage != null) {
            synchronized (encodedImage) {
                if (!EncodedImage.isValid(encodedImage)) {
                    ((HashMap) this.f9613d).remove(cacheKey);
                    p8.a.t(l.class, "Found closed reference %d for key %s (%d)", Integer.valueOf(System.identityHashCode(encodedImage)), cacheKey.c(), Integer.valueOf(System.identityHashCode(cacheKey)));
                    return null;
                }
                encodedImage = EncodedImage.cloneOrNull(encodedImage);
            }
        }
        return encodedImage;
    }

    public ArrayList T(StackTraceElement[] stackTraceElementArr, boolean z5) {
        if (stackTraceElementArr == null || stackTraceElementArr.length <= 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (StackTraceElement stackTraceElement : stackTraceElementArr) {
            if (stackTraceElement != null) {
                String className = stackTraceElement.getClassName();
                if (z5 || !className.startsWith("io.sentry.") || className.startsWith("io.sentry.samples.") || className.startsWith("io.sentry.mobile.")) {
                    SentryStackFrame sentryStackFrame = new SentryStackFrame();
                    sentryStackFrame.H = U(className);
                    sentryStackFrame.f11746x = className;
                    sentryStackFrame.f11745w = stackTraceElement.getMethodName();
                    sentryStackFrame.f11744v = stackTraceElement.getFileName();
                    if (stackTraceElement.getLineNumber() >= 0) {
                        sentryStackFrame.f11747y = Integer.valueOf(stackTraceElement.getLineNumber());
                    }
                    sentryStackFrame.J = Boolean.valueOf(stackTraceElement.isNativeMethod());
                    arrayList.add(sentryStackFrame);
                    if (arrayList.size() >= 100) {
                        break;
                    }
                }
            }
        }
        Collections.reverse(arrayList);
        return arrayList;
    }

    public Boolean U(String str) {
        v5 v5Var = (v5) this.f9613d;
        if (str == null || str.isEmpty()) {
            return Boolean.TRUE;
        }
        Iterator<String> it = v5Var.getInAppIncludes().iterator();
        while (it.hasNext()) {
            if (str.startsWith(it.next())) {
                return Boolean.TRUE;
            }
        }
        Iterator<String> it2 = v5Var.getInAppExcludes().iterator();
        while (it2.hasNext()) {
            if (str.startsWith(it2.next())) {
                return Boolean.FALSE;
            }
        }
        return null;
    }

    public synchronized void V() {
        p8.a.q("Count = %d", Integer.valueOf(((HashMap) this.f9613d).size()), l.class);
    }

    public void W() {
        String str;
        d0 d0Var = (d0) ((u4.b) this.f9613d).f18810e;
        int i5 = ((lk.b) d0Var.f317e).e() ? 2 : 1;
        if (f0.e.a(i5, d0Var.f316d)) {
            return;
        }
        d0Var.f316d = i5;
        String str2 = (String) ((kk.a) ((e4.p) d0Var.f318i).k).a;
        WritableMap createMap = Arguments.createMap();
        if (i5 == 1) {
            str = "idle";
        } else {
            if (i5 != 2) {
                throw null;
            }
            str = "spinning";
        }
        createMap.putString("spinnerState", str);
        createMap.putString(StackTraceHelper.ID_KEY, str2);
        ((DeviceEventManagerModule.RCTDeviceEventEmitter) com.mkuczera.haptic.d.f6615b.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("spinnerStateChange", createMap);
        Iterator it = ((HashSet) d0Var.f320w).iterator();
        while (it.hasNext()) {
            ((gk.f) it.next()).a.a.getButton(-1).setEnabled(i5 == 1);
        }
    }

    public void X(CacheKey cacheKey) {
        EncodedImage encodedImage;
        cacheKey.getClass();
        synchronized (this) {
            encodedImage = (EncodedImage) ((HashMap) this.f9613d).remove(cacheKey);
        }
        if (encodedImage == null) {
            return;
        }
        try {
            encodedImage.isValid();
        } finally {
            encodedImage.close();
        }
    }

    public synchronized void Y(CacheKey cacheKey, EncodedImage encodedImage) {
        cacheKey.getClass();
        encodedImage.getClass();
        if (!EncodedImage.isValid(encodedImage)) {
            throw new IllegalArgumentException();
        }
        EncodedImage encodedImage2 = (EncodedImage) ((HashMap) this.f9613d).get(cacheKey);
        if (encodedImage2 == null) {
            return;
        }
        CloseableReference byteBufferRef = encodedImage2.getByteBufferRef();
        CloseableReference byteBufferRef2 = encodedImage.getByteBufferRef();
        if (byteBufferRef != null && byteBufferRef2 != null) {
            try {
                if (byteBufferRef.q() == byteBufferRef2.q()) {
                    ((HashMap) this.f9613d).remove(cacheKey);
                    byteBufferRef2.close();
                    byteBufferRef.close();
                    EncodedImage.closeSafely(encodedImage2);
                    V();
                    return;
                }
            } catch (Throwable th2) {
                byteBufferRef2.close();
                byteBufferRef.close();
                EncodedImage.closeSafely(encodedImage2);
                throw th2;
            }
        }
        CloseableReference.l(byteBufferRef2);
        CloseableReference.l(byteBufferRef);
        EncodedImage.closeSafely(encodedImage2);
    }

    public ip.f Z(op.n javaClass) {
        vp.q qVar;
        Intrinsics.checkNotNullParameter(javaClass, "javaClass");
        hq.c c6 = javaClass.c();
        if (c6 != null) {
            yp.f[] fVarArr = yp.f.f21006d;
        }
        Class<?> declaringClass = javaClass.a.getDeclaringClass();
        op.n nVar = declaringClass != null ? new op.n(declaringClass) : null;
        if (nVar != null) {
            ip.f Z = Z(nVar);
            o h0 = Z != null ? Z.h0() : null;
            ip.i a = h0 != null ? h0.a(javaClass.e(), qp.c.E) : null;
            if (a instanceof ip.f) {
                return (ip.f) a;
            }
        } else if (c6 != null && (qVar = (vp.q) CollectionsKt.firstOrNull(((up.d) this.f9613d).c(c6.b()))) != null) {
            Intrinsics.checkNotNullParameter(javaClass, "jClass");
            v vVar = qVar.H.f19478d;
            vVar.getClass();
            Intrinsics.checkNotNullParameter(javaClass, "javaClass");
            return vVar.v(javaClass.e(), javaClass);
        }
        return null;
    }

    @Override // ip.n
    public Object a(k0 descriptor, Object obj) {
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        h0(descriptor, builder, "setter");
        return Unit.a;
    }

    public void a0(e4.c cVar, ILogger iLogger, Object obj) {
        if (obj == null) {
            cVar.Y0();
            return;
        }
        if (obj instanceof Character) {
            cVar.s(Character.toString(((Character) obj).charValue()));
            return;
        }
        if (obj instanceof String) {
            cVar.s((String) obj);
            return;
        }
        if (obj instanceof Boolean) {
            cVar.H(((Boolean) obj).booleanValue());
            return;
        }
        if (obj instanceof Number) {
            cVar.a0((Number) obj);
            return;
        }
        if (obj instanceof Date) {
            try {
                cVar.s(ki.b.F((Date) obj));
                return;
            } catch (Exception e9) {
                iLogger.k(SentryLevel.ERROR, "Error when serializing Date", e9);
                cVar.Y0();
                return;
            }
        }
        if (obj instanceof TimeZone) {
            try {
                cVar.s(((TimeZone) obj).getID());
                return;
            } catch (Exception e10) {
                iLogger.k(SentryLevel.ERROR, "Error when serializing TimeZone", e10);
                cVar.Y0();
                return;
            }
        }
        if (obj instanceof y1) {
            ((y1) obj).serialize(cVar, iLogger);
            return;
        }
        if (obj instanceof Collection) {
            b0(cVar, iLogger, (Collection) obj);
            return;
        }
        int i5 = 0;
        if (obj instanceof boolean[]) {
            boolean[] zArr = (boolean[]) obj;
            ArrayList arrayList = new ArrayList(zArr.length);
            int length = zArr.length;
            while (i5 < length) {
                arrayList.add(Boolean.valueOf(zArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList);
            return;
        }
        if (obj instanceof byte[]) {
            byte[] bArr = (byte[]) obj;
            ArrayList arrayList2 = new ArrayList(bArr.length);
            int length2 = bArr.length;
            while (i5 < length2) {
                arrayList2.add(Byte.valueOf(bArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList2);
            return;
        }
        if (obj instanceof short[]) {
            short[] sArr = (short[]) obj;
            ArrayList arrayList3 = new ArrayList(sArr.length);
            int length3 = sArr.length;
            while (i5 < length3) {
                arrayList3.add(Short.valueOf(sArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList3);
            return;
        }
        if (obj instanceof char[]) {
            char[] cArr = (char[]) obj;
            ArrayList arrayList4 = new ArrayList(cArr.length);
            int length4 = cArr.length;
            while (i5 < length4) {
                arrayList4.add(Character.valueOf(cArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList4);
            return;
        }
        if (obj instanceof int[]) {
            int[] iArr = (int[]) obj;
            ArrayList arrayList5 = new ArrayList(iArr.length);
            int length5 = iArr.length;
            while (i5 < length5) {
                arrayList5.add(Integer.valueOf(iArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList5);
            return;
        }
        if (obj instanceof long[]) {
            long[] jArr = (long[]) obj;
            ArrayList arrayList6 = new ArrayList(jArr.length);
            int length6 = jArr.length;
            while (i5 < length6) {
                arrayList6.add(Long.valueOf(jArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList6);
            return;
        }
        if (obj instanceof float[]) {
            float[] fArr = (float[]) obj;
            ArrayList arrayList7 = new ArrayList(fArr.length);
            int length7 = fArr.length;
            while (i5 < length7) {
                arrayList7.add(Float.valueOf(fArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList7);
            return;
        }
        if (obj instanceof double[]) {
            double[] dArr = (double[]) obj;
            ArrayList arrayList8 = new ArrayList(dArr.length);
            int length8 = dArr.length;
            while (i5 < length8) {
                arrayList8.add(Double.valueOf(dArr[i5]));
                i5++;
            }
            b0(cVar, iLogger, arrayList8);
            return;
        }
        if (obj.getClass().isArray()) {
            b0(cVar, iLogger, Arrays.asList((Object[]) obj));
            return;
        }
        if (obj instanceof Map) {
            c0(cVar, iLogger, (Map) obj);
            return;
        }
        if (obj instanceof Locale) {
            cVar.s(obj.toString());
            return;
        }
        if (obj instanceof AtomicIntegerArray) {
            b0(cVar, iLogger, io.sentry.util.c.a((AtomicIntegerArray) obj));
            return;
        }
        if (obj instanceof AtomicBoolean) {
            cVar.H(((AtomicBoolean) obj).get());
            return;
        }
        if (obj instanceof URI) {
            cVar.s(obj.toString());
            return;
        }
        if (obj instanceof InetAddress) {
            cVar.s(obj.toString());
            return;
        }
        if (obj instanceof UUID) {
            cVar.s(obj.toString());
            return;
        }
        if (obj instanceof Currency) {
            cVar.s(obj.toString());
            return;
        }
        if (obj instanceof Calendar) {
            c0(cVar, iLogger, io.sentry.util.c.d((Calendar) obj));
            return;
        }
        if (obj.getClass().isEnum()) {
            cVar.s(obj.toString());
            return;
        }
        try {
            a0(cVar, iLogger, ((a0) this.f9613d).E(iLogger, obj));
        } catch (Exception e11) {
            iLogger.k(SentryLevel.ERROR, "Failed serializing unknown object.", e11);
            cVar.s("[OBJECT]");
        }
    }

    @Override // n.u
    public void b(n.j jVar, boolean z5) {
        i.x xVar;
        androidx.appcompat.app.a aVar = (androidx.appcompat.app.a) this.f9613d;
        n.j k = jVar.k();
        int i5 = 0;
        boolean z6 = k != jVar;
        if (z6) {
            jVar = k;
        }
        i.x[] xVarArr = aVar.f773i0;
        int length = xVarArr != null ? xVarArr.length : 0;
        while (true) {
            if (i5 < length) {
                xVar = xVarArr[i5];
                if (xVar != null && xVar.f10368h == jVar) {
                    break;
                } else {
                    i5++;
                }
            } else {
                xVar = null;
                break;
            }
        }
        if (xVar != null) {
            if (!z6) {
                aVar.K(xVar, z5);
            } else {
                aVar.I(xVar.a, xVar, k);
                aVar.K(xVar, true);
            }
        }
    }

    public void b0(e4.c cVar, ILogger iLogger, Collection collection) {
        io.sentry.vendor.gson.stream.c cVar2 = (io.sentry.vendor.gson.stream.c) cVar.f7939e;
        cVar2.q();
        cVar2.c();
        int i5 = cVar2.f12062i;
        int[] iArr = cVar2.f12061e;
        if (i5 == iArr.length) {
            cVar2.f12061e = Arrays.copyOf(iArr, i5 * 2);
        }
        int[] iArr2 = cVar2.f12061e;
        int i6 = cVar2.f12062i;
        cVar2.f12062i = i6 + 1;
        iArr2[i6] = 1;
        cVar2.f12060d.write(91);
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            a0(cVar, iLogger, it.next());
        }
        cVar2.f(']', 1, 2);
    }

    @Override // ip.u
    public ip.v build() {
        return (ar.c) this.f9613d;
    }

    @Override // ip.u
    public u c(m0 parameters) {
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        return this;
    }

    public void c0(e4.c cVar, ILogger iLogger, Map map) {
        cVar.n0();
        for (Object obj : map.keySet()) {
            if (obj instanceof String) {
                cVar.C0((String) obj);
                a0(cVar, iLogger, map.get(obj));
            }
        }
        cVar.O();
    }

    @Override // ip.u
    public u d(List parameters) {
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        return this;
    }

    public float d0(int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        double sqrt;
        int i18;
        l lVar;
        int i19;
        int i20 = 1;
        boolean z5 = Math.abs(i11 - i6) > Math.abs(i10 - i5);
        if (z5) {
            i13 = i5;
            i12 = i6;
            i15 = i10;
            i14 = i11;
        } else {
            i12 = i5;
            i13 = i6;
            i14 = i10;
            i15 = i11;
        }
        int abs = Math.abs(i14 - i12);
        int abs2 = Math.abs(i15 - i13);
        int i21 = 2;
        int i22 = (-abs) / 2;
        int i23 = i12 < i14 ? 1 : -1;
        int i24 = i13 < i15 ? 1 : -1;
        int i25 = i14 + i23;
        int i26 = i12;
        int i27 = i13;
        int i28 = 0;
        while (true) {
            if (i26 == i25) {
                i16 = i12;
                i17 = i21;
                break;
            }
            int i29 = z5 ? i27 : i26;
            boolean z6 = z5;
            int i30 = z5 ? i26 : i27;
            i16 = i12;
            if (i28 == i20) {
                i18 = i20;
                i19 = i13;
                lVar = this;
            } else {
                i18 = 0;
                lVar = this;
                i19 = i13;
            }
            if (i18 == ((nj.b) lVar.f9613d).b(i29, i30)) {
                if (i28 == 2) {
                    int i31 = i26 - i16;
                    int i32 = i27 - i19;
                    sqrt = Math.sqrt((i32 * i32) + (i31 * i31));
                    break;
                }
                i28++;
            }
            i22 += abs2;
            if (i22 > 0) {
                if (i27 == i15) {
                    i17 = 2;
                    break;
                }
                i27 += i24;
                i22 -= abs;
            }
            i26 += i23;
            i12 = i16;
            i13 = i19;
            z5 = z6;
            i20 = 1;
            i21 = 2;
        }
        if (i28 != i17) {
            return Float.NaN;
        }
        int i33 = i25 - i16;
        sqrt = Math.sqrt((r8 * r8) + (i33 * i33));
        return (float) sqrt;
    }

    @Override // n1.h
    public void e(Object obj) {
        o1.l e9 = (o1.l) obj;
        Intrinsics.checkNotNullParameter(e9, "e");
        nr.j jVar = (nr.j) this.f9613d;
        if (jVar.c()) {
            fo.q qVar = Result.f13476e;
            jVar.resumeWith(ki.b.i(e9));
        }
    }

    public float e0(int i5, int i6, int i10, int i11) {
        float f2;
        float f10;
        nj.b bVar = (nj.b) this.f9613d;
        float d02 = d0(i5, i6, i10, i11);
        int i12 = i5 - (i10 - i5);
        int i13 = 0;
        if (i12 < 0) {
            f2 = i5 / (i5 - i12);
            i12 = 0;
        } else {
            int i14 = bVar.f15510d;
            if (i12 >= i14) {
                float f11 = ((i14 - 1) - i5) / (i12 - i5);
                int i15 = i14 - 1;
                f2 = f11;
                i12 = i15;
            } else {
                f2 = 1.0f;
            }
        }
        float f12 = i6;
        int i16 = (int) (f12 - ((i11 - i6) * f2));
        if (i16 < 0) {
            f10 = f12 / (i6 - i16);
        } else {
            int i17 = bVar.f15511e;
            if (i16 >= i17) {
                f10 = ((i17 - 1) - i6) / (i16 - i6);
                i13 = i17 - 1;
            } else {
                i13 = i16;
                f10 = 1.0f;
            }
        }
        return (d0(i5, i6, (int) (((i12 - i5) * f10) + i5), i13) + d02) - 1.0f;
    }

    @Override // ip.u
    public u f(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this;
    }

    public Object f0(z classifier, StringBuilder builder) {
        StringBuilder sb2;
        lp.h G;
        String str;
        Intrinsics.checkNotNullParameter(classifier, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) this.f9613d;
        jq.k kVar = hVar.f13052d;
        boolean z5 = classifier.b() == ip.g.f12141v;
        if (!hVar.q()) {
            List p02 = classifier.p0();
            Intrinsics.checkNotNullExpressionValue(p02, "getContextReceivers(...)");
            hVar.B(builder, p02);
            hVar.x(builder, classifier, null);
            if (!z5) {
                p visibility = classifier.getVisibility();
                Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
                hVar.g0(visibility, builder);
            }
            if ((classifier.b() != ip.g.f12139e || classifier.e() != ip.z.f12183w) && (!classifier.b().a() || classifier.e() != ip.z.f12180e)) {
                ip.z e9 = classifier.e();
                Intrinsics.checkNotNullExpressionValue(e9, "getModality(...)");
                hVar.L(e9, builder, jq.h.u(classifier));
            }
            hVar.K(classifier, builder);
            hVar.N(builder, hVar.p().contains(jq.i.E) && classifier.A(), "inner");
            hVar.N(builder, hVar.p().contains(jq.i.G) && classifier.s0(), "data");
            hVar.N(builder, hVar.p().contains(jq.i.H) && classifier.isInline(), "inline");
            hVar.N(builder, hVar.p().contains(jq.i.N) && classifier.isValue(), "value");
            hVar.N(builder, hVar.p().contains(jq.i.M) && classifier.t(), "fun");
            Intrinsics.checkNotNullParameter(classifier, "classifier");
            if (classifier instanceof r0) {
                str = "typealias";
            } else if (classifier.o()) {
                str = "companion object";
            } else {
                int ordinal = classifier.b().ordinal();
                if (ordinal == 0) {
                    str = "class";
                } else if (ordinal == 1) {
                    str = "interface";
                } else if (ordinal == 2) {
                    str = "enum class";
                } else if (ordinal == 3) {
                    str = "enum entry";
                } else if (ordinal == 4) {
                    str = "annotation class";
                } else {
                    if (ordinal != 5) {
                        throw new fo.n();
                    }
                    str = "object";
                }
            }
            builder.append(hVar.I(str));
        }
        if (kq.e.l(classifier)) {
            if (((Boolean) kVar.G.getValue(kVar, jq.k.Y[31])).booleanValue()) {
                if (hVar.q()) {
                    builder.append("companion object");
                }
                jq.h.W(builder);
                ip.l h6 = classifier.h();
                if (h6 != null) {
                    builder.append("of ");
                    hq.e name = h6.getName();
                    Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                    builder.append(hVar.O(name, false));
                }
            }
            if (hVar.t() || !Intrinsics.areEqual(classifier.getName(), hq.g.f10212b)) {
                if (!hVar.q()) {
                    jq.h.W(builder);
                }
                hq.e name2 = classifier.getName();
                Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                builder.append(hVar.O(name2, true));
            }
        } else {
            if (!hVar.q()) {
                jq.h.W(builder);
            }
            hVar.P(classifier, builder, true);
        }
        if (!z5) {
            List l6 = classifier.l();
            Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
            hVar.c0(builder, l6, false);
            hVar.z(classifier, builder);
            if (!classifier.b().a() && ((Boolean) kVar.f13068i.getValue(kVar, jq.k.Y[7])).booleanValue() && (G = classifier.G()) != null) {
                builder.append(" ");
                hVar.x(builder, G, null);
                lp.h hVar2 = G;
                p visibility2 = hVar2.getVisibility();
                Intrinsics.checkNotNullExpressionValue(visibility2, "getVisibility(...)");
                hVar.g0(visibility2, builder);
                builder.append(hVar.I("constructor"));
                List P = hVar2.P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                hVar.f0(builder, P, G.w());
            }
            if (!((Boolean) kVar.f13081x.getValue(kVar, jq.k.Y[22])).booleanValue() && !fp.i.F(classifier.k())) {
                Collection b10 = classifier.n().b();
                Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
                if (!b10.isEmpty() && (b10.size() != 1 || !fp.i.y((y) b10.iterator().next()))) {
                    jq.h.W(builder);
                    builder.append(": ");
                    sb2 = builder;
                    CollectionsKt.N(b10, sb2, ", ", null, null, new jq.g(hVar, 1), 60);
                    hVar.h0(sb2, l6);
                }
            }
            sb2 = builder;
            hVar.h0(sb2, l6);
        }
        return Unit.a;
    }

    @Override // ip.n
    public /* bridge */ /* synthetic */ Object g(ip.v vVar, Object obj) {
        g0(vVar, (StringBuilder) obj);
        return Unit.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x00bb, code lost:
    
        if (((java.lang.Boolean) r2.O.getValue(r2, jq.k.Y[39])).booleanValue() != false) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00ff, code lost:
    
        if (((java.lang.Boolean) r2.O.getValue(r2, jq.k.Y[39])).booleanValue() != false) goto L37;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x01b1, code lost:
    
        if (fp.i.E(r2, fp.o.f8882d) == false) goto L56;
     */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00c6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void g0(ip.v descriptor, StringBuilder builder) {
        boolean z5;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) this.f9613d;
        jq.k kVar = hVar.f13052d;
        jq.k kVar2 = hVar.f13052d;
        if (!hVar.q()) {
            an.b bVar = kVar2.f13066g;
            KProperty[] kPropertyArr = jq.k.Y;
            if (!((Boolean) bVar.getValue(kVar2, kPropertyArr[5])).booleanValue()) {
                List a0 = descriptor.a0();
                Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
                hVar.B(builder, a0);
                hVar.x(builder, descriptor, null);
                p visibility = descriptor.getVisibility();
                Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
                hVar.g0(visibility, builder);
                hVar.M(descriptor, builder);
                if (((Boolean) kVar2.T.getValue(kVar2, kPropertyArr[44])).booleanValue()) {
                    hVar.K(descriptor, builder);
                }
                hVar.S(descriptor, builder);
                if (((Boolean) kVar2.T.getValue(kVar2, kPropertyArr[44])).booleanValue()) {
                    boolean z6 = false;
                    if (descriptor.isOperator()) {
                        Collection i5 = descriptor.i();
                        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
                        Collection collection = i5;
                        if (!collection.isEmpty()) {
                            Iterator it = collection.iterator();
                            while (true) {
                                if (!it.hasNext()) {
                                    break;
                                } else if (((ip.v) it.next()).isOperator()) {
                                }
                            }
                        }
                        z5 = true;
                        if (descriptor.isInfix()) {
                            Collection i6 = descriptor.i();
                            Intrinsics.checkNotNullExpressionValue(i6, "getOverriddenDescriptors(...)");
                            Collection collection2 = i6;
                            if (!collection2.isEmpty()) {
                                Iterator it2 = collection2.iterator();
                                while (true) {
                                    if (!it2.hasNext()) {
                                        break;
                                    } else if (((ip.v) it2.next()).isInfix()) {
                                    }
                                }
                            }
                            z6 = true;
                        }
                        hVar.N(builder, descriptor.F(), "tailrec");
                        hVar.N(builder, descriptor.isSuspend(), "suspend");
                        hVar.N(builder, descriptor.isInline(), "inline");
                        hVar.N(builder, z6, "infix");
                        hVar.N(builder, z5, "operator");
                    }
                    z5 = false;
                    if (descriptor.isInfix()) {
                    }
                    hVar.N(builder, descriptor.F(), "tailrec");
                    hVar.N(builder, descriptor.isSuspend(), "suspend");
                    hVar.N(builder, descriptor.isInline(), "inline");
                    hVar.N(builder, z6, "infix");
                    hVar.N(builder, z5, "operator");
                } else {
                    hVar.N(builder, descriptor.isSuspend(), "suspend");
                }
                hVar.J(descriptor, builder);
                if (hVar.t()) {
                    if (descriptor.f0()) {
                        builder.append("/*isHiddenToOvercomeSignatureClash*/ ");
                    }
                    if (descriptor.k0()) {
                        builder.append("/*isHiddenForResolutionEverywhereBesideSupercalls*/ ");
                    }
                }
            }
            builder.append(hVar.I("fun"));
            builder.append(" ");
            List typeParameters = descriptor.getTypeParameters();
            Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
            hVar.c0(builder, typeParameters, true);
            hVar.U(descriptor, builder);
        }
        hVar.P(descriptor, builder, true);
        List P = descriptor.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        hVar.f0(builder, P, descriptor.w());
        hVar.V(descriptor, builder);
        y returnType = descriptor.getReturnType();
        an.b bVar2 = kVar.f13069l;
        KProperty[] kPropertyArr2 = jq.k.Y;
        if (!((Boolean) bVar2.getValue(kVar, kPropertyArr2[10])).booleanValue()) {
            if (!((Boolean) kVar.k.getValue(kVar, kPropertyArr2[9])).booleanValue() && returnType != null) {
                hq.e eVar = fp.i.f8859e;
            }
            builder.append(": ");
            builder.append(returnType == null ? "[NULL]" : hVar.X(returnType));
        }
        List typeParameters2 = descriptor.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters2, "getTypeParameters(...)");
        hVar.h0(builder, typeParameters2);
    }

    @Override // r8.d
    public Object get(int i5) {
        Bitmap createBitmap = Bitmap.createBitmap(1, (int) Math.ceil(i5 / 2.0d), Bitmap.Config.RGB_565);
        Intrinsics.checkNotNullExpressionValue(createBitmap, "createBitmap(...)");
        ((Set) this.f9613d).add(createBitmap);
        return createBitmap;
    }

    @Override // n.u
    public boolean h(n.j jVar) {
        Window.Callback callback;
        androidx.appcompat.app.a aVar = (androidx.appcompat.app.a) this.f9613d;
        if (jVar != jVar.k() || !aVar.f768c0 || (callback = aVar.I.getCallback()) == null || aVar.f778n0) {
            return true;
        }
        callback.onMenuOpened(108, jVar);
        return true;
    }

    public void h0(g0 g0Var, StringBuilder sb2, String str) {
        jq.h hVar = (jq.h) this.f9613d;
        jq.k kVar = hVar.f13052d;
        int ordinal = ((jq.p) kVar.H.getValue(kVar, jq.k.Y[32])).ordinal();
        if (ordinal != 0) {
            if (ordinal == 1) {
                g0(g0Var, sb2);
                return;
            } else {
                if (ordinal != 2) {
                    throw new fo.n();
                }
                return;
            }
        }
        hVar.K(g0Var, sb2);
        sb2.append(str.concat(" for "));
        ip.m0 B0 = g0Var.B0();
        Intrinsics.checkNotNullExpressionValue(B0, "getCorrespondingProperty(...)");
        jq.h.n(hVar, B0, sb2);
    }

    @Override // aq.m
    public aq.m k(hq.b bVar, hq.e eVar) {
        return null;
    }

    @Override // ie.f0
    public bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        qd.h hVar = (qd.h) ((gj.c) this.f9613d).f9329e;
        ke.b.s("DashMediaSource", "Failed to resolve time offset.", iOException);
        hVar.x(true);
        return ie.k0.f10682w;
    }

    @Override // ha.j
    public void m(Object obj) {
        ((k) this.f9613d).getClass();
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0074  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x010d  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x013e  */
    @Override // ip.n
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Object n(lp.h constructorDescriptor, Object obj) {
        boolean z5;
        boolean z6;
        lp.h G;
        ArrayList arrayList;
        boolean z7 = constructorDescriptor.f14144b0;
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(constructorDescriptor, "constructorDescriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) this.f9613d;
        hVar.getClass();
        hVar.x(builder, constructorDescriptor, null);
        jq.k kVar = hVar.f13052d;
        an.b bVar = kVar.f13072o;
        KProperty[] kPropertyArr = jq.k.Y;
        if (((Boolean) bVar.getValue(kVar, kPropertyArr[13])).booleanValue() || constructorDescriptor.s().e() != ip.z.f12181i) {
            p visibility = constructorDescriptor.getVisibility();
            Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
            if (hVar.g0(visibility, builder)) {
                z5 = true;
                hVar.J(constructorDescriptor, builder);
                z6 = (((Boolean) kVar.P.getValue(kVar, kPropertyArr[40])).booleanValue() && z7 && !z5) ? false : true;
                if (z6) {
                    builder.append(hVar.I("constructor"));
                }
                ip.f h6 = constructorDescriptor.h();
                Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                if (((Boolean) kVar.A.getValue(kVar, kPropertyArr[25])).booleanValue()) {
                    if (z6) {
                        builder.append(" ");
                    }
                    hVar.P(h6, builder, true);
                    List typeParameters = constructorDescriptor.getTypeParameters();
                    Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
                    hVar.c0(builder, typeParameters, false);
                }
                List P = constructorDescriptor.P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                hVar.f0(builder, P, constructorDescriptor.w());
                if (((Boolean) kVar.f13074q.getValue(kVar, kPropertyArr[15])).booleanValue() && !z7 && h6 != null && (G = h6.G()) != null) {
                    List P2 = G.P();
                    Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                    arrayList = new ArrayList();
                    for (Object obj2 : P2) {
                        lp.r0 r0Var = (lp.r0) obj2;
                        if (!r0Var.C0() && r0Var.H == null) {
                            arrayList.add(obj2);
                        }
                    }
                    if (!arrayList.isEmpty()) {
                        builder.append(" : ");
                        builder.append(hVar.I("this"));
                        builder.append(CollectionsKt.O(arrayList, ", ", "(", ")", jq.d.K, 24));
                    }
                }
                if (((Boolean) kVar.A.getValue(kVar, jq.k.Y[25])).booleanValue()) {
                    List typeParameters2 = constructorDescriptor.getTypeParameters();
                    Intrinsics.checkNotNullExpressionValue(typeParameters2, "getTypeParameters(...)");
                    hVar.h0(builder, typeParameters2);
                }
                return Unit.a;
            }
        }
        z5 = false;
        hVar.J(constructorDescriptor, builder);
        if (((Boolean) kVar.P.getValue(kVar, kPropertyArr[40])).booleanValue()) {
        }
        if (z6) {
        }
        ip.f h62 = constructorDescriptor.h();
        Intrinsics.checkNotNullExpressionValue(h62, "getContainingDeclaration(...)");
        if (((Boolean) kVar.A.getValue(kVar, kPropertyArr[25])).booleanValue()) {
        }
        List P3 = constructorDescriptor.P();
        Intrinsics.checkNotNullExpressionValue(P3, "getValueParameters(...)");
        hVar.f0(builder, P3, constructorDescriptor.w());
        if (((Boolean) kVar.f13074q.getValue(kVar, kPropertyArr[15])).booleanValue()) {
            List P22 = G.P();
            Intrinsics.checkNotNullExpressionValue(P22, "getValueParameters(...)");
            arrayList = new ArrayList();
            while (r1.hasNext()) {
            }
            if (!arrayList.isEmpty()) {
            }
        }
        if (((Boolean) kVar.A.getValue(kVar, jq.k.Y[25])).booleanValue()) {
        }
        return Unit.a;
    }

    @Override // ip.u
    public u o(y type) {
        Intrinsics.checkNotNullParameter(type, "type");
        return this;
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        ((CountDownLatch) this.f9613d).countDown();
    }

    @Override // n1.h
    public void onResult(Object obj) {
        n1.q result = (n1.q) obj;
        Intrinsics.checkNotNullParameter(result, "result");
        nr.j jVar = (nr.j) this.f9613d;
        if (jVar.c()) {
            fo.q qVar = Result.f13476e;
            jVar.resumeWith(result);
        }
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        ((CountDownLatch) this.f9613d).countDown();
    }

    @Override // ip.u
    public u p(ip.z modality) {
        Intrinsics.checkNotNullParameter(modality, "modality");
        return this;
    }

    @Override // ha.j
    public void q(Object obj) {
        ((k) this.f9613d).getClass();
    }

    @Override // ip.u
    public u r() {
        nq.b userDataKey = tp.e.f18689e0;
        Intrinsics.checkNotNullParameter(userDataKey, "userDataKey");
        return this;
    }

    @Override // s8.c
    public void release(Object obj) {
        Bitmap value = (Bitmap) obj;
        Intrinsics.checkNotNullParameter(value, "value");
        ((Set) this.f9613d).remove(value);
        value.recycle();
    }

    @Override // ih.a
    public void t(Typeface typeface) {
        ch.c cVar = (ch.c) this.f9613d;
        if (cVar.z(typeface)) {
            cVar.l(false);
        }
    }

    @Override // ip.u
    public u u(jp.h additionalAnnotations) {
        Intrinsics.checkNotNullParameter(additionalAnnotations, "additionalAnnotations");
        return this;
    }

    @Override // ie.f0
    public void v(h0 h0Var, long j, long j5) {
        boolean z5;
        gj.c cVar = (gj.c) this.f9613d;
        synchronized (ke.b.f13283i) {
            z5 = ke.b.j;
        }
        if (z5) {
            cVar.R();
            return;
        }
        IOException iOException = new IOException(new ConcurrentModificationException());
        qd.h hVar = (qd.h) cVar.f9329e;
        ke.b.s("DashMediaSource", "Failed to resolve time offset.", iOException);
        hVar.x(true);
    }

    @Override // ip.n
    public Object w(j0 descriptor, Object obj) {
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        h0(descriptor, builder, "getter");
        return Unit.a;
    }

    public l(int i5, boolean z5) {
        switch (i5) {
            case 15:
                this.f9613d = new io.sentry.util.e(new i7.a(27));
                break;
            case 16:
                this.f9613d = new Stack();
                break;
            case 18:
                this.f9613d = new CountDownLatch(1);
                break;
            case 29:
                Set newSetFromMap = Collections.newSetFromMap(new IdentityHashMap());
                Intrinsics.checkNotNullExpressionValue(newSetFromMap, "newIdentityHashSet(...)");
                this.f9613d = newSetFromMap;
                break;
            default:
                this.f9613d = new AtomicReference(null);
                break;
        }
    }

    public l(ClassLoader classLoader) {
        Intrinsics.checkNotNullParameter(classLoader, "classLoader");
        this.f9613d = classLoader;
    }

    public l(Context context) {
        boolean isEmpty;
        SharedPreferences sharedPreferences = context.getSharedPreferences("com.google.android.gms.appid", 0);
        this.f9613d = sharedPreferences;
        File file = new File(context.getNoBackupFilesDir(), "com.google.android.gms.appid-no-backup");
        if (file.exists()) {
            return;
        }
        try {
            if (file.createNewFile()) {
                synchronized (this) {
                    isEmpty = sharedPreferences.getAll().isEmpty();
                }
                if (isEmpty) {
                    return;
                }
                Log.i("FirebaseMessaging", "App restored, clearing state");
                synchronized (this) {
                    sharedPreferences.edit().clear().commit();
                }
            }
        } catch (IOException e9) {
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "Error creating file in no backup dir: " + e9.getMessage());
            }
        }
    }

    @Override // ip.u
    public u F() {
        return this;
    }

    @Override // ip.u
    public u L() {
        return this;
    }

    @Override // ip.u
    public u i() {
        return this;
    }

    @Override // aq.m
    public void j() {
    }

    @Override // ip.u
    public u s() {
        return this;
    }

    @Override // ip.u
    public u y() {
        return this;
    }

    @Override // ip.u
    public u H(lp.u uVar) {
        return this;
    }

    @Override // aq.m
    public void G(hq.e eVar, mq.f fVar) {
    }

    @Override // aq.m
    public void x(hq.e eVar, Object obj) {
    }

    @Override // aq.m
    public void J(hq.e eVar, hq.b bVar, hq.e eVar2) {
    }

    @Override // ie.f0
    public void z(h0 h0Var, long j, long j5, boolean z5) {
    }
}
