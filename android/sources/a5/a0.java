package a5;

import android.graphics.Bitmap;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.os.Parcel;
import android.util.Log;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import com.google.android.gms.internal.play_billing.x4;
import com.linkedin.android.litr.io.MediaRange;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.io.File;
import java.io.InputStream;
import java.io.OutputStream;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.net.InetAddress;
import java.net.URI;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Collection;
import java.util.Currency;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicIntegerArray;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonNull;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import th.r0;
import th.s0;
import th.u0;
import th.v0;

/* loaded from: classes.dex */
public final /* synthetic */ class a0 implements cd.x, lb.c, n9.b, u0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f123d;

    /* renamed from: e, reason: collision with root package name */
    public int f124e;

    /* renamed from: i, reason: collision with root package name */
    public Object f125i;

    public /* synthetic */ a0(int i5, int i6, Object obj) {
        this.f123d = i6;
        this.f125i = obj;
        this.f124e = i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x00ad  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x00b1  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00a4  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x002a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object c(a0 a0Var, fo.b bVar, lo.a aVar) {
        ds.z frame;
        int i5;
        byte g6;
        LinkedHashMap linkedHashMap;
        ds.a aVar2;
        LinkedHashMap linkedHashMap2;
        a0 a0Var2;
        byte b10;
        ds.a aVar3 = (ds.a) a0Var.f125i;
        if (aVar instanceof ds.z) {
            frame = (ds.z) aVar;
            int i6 = frame.f7760y;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                frame.f7760y = i6 - Integer.MIN_VALUE;
                Object obj = frame.f7758w;
                ko.a aVar4 = ko.a.f13464d;
                i5 = frame.f7760y;
                if (i5 != 0) {
                    ki.b.R(obj);
                    g6 = aVar3.g((byte) 6);
                    if (aVar3.y() == 4) {
                        ds.a.q(aVar3, "Unexpected leading comma", 0, null, 6);
                        throw null;
                    }
                    linkedHashMap = new LinkedHashMap();
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    String str = frame.f7757v;
                    linkedHashMap2 = frame.f7756i;
                    a0Var2 = frame.f7755e;
                    fo.b bVar2 = frame.f7754d;
                    ki.b.R(obj);
                    linkedHashMap2.put(str, (JsonElement) obj);
                    b10 = ((ds.a) a0Var2.f125i).f();
                    if (b10 != 4) {
                        if (b10 != 7) {
                            ds.a.q((ds.a) a0Var2.f125i, "Expected end of the object or comma", 0, null, 6);
                            throw null;
                        }
                        ds.a aVar5 = (ds.a) a0Var2.f125i;
                        if (b10 != 6) {
                            aVar5.g((byte) 7);
                        } else if (b10 == 4) {
                            ds.s.n(aVar5, "object");
                            throw null;
                        }
                        return new JsonObject(linkedHashMap2);
                    }
                    g6 = b10;
                    a0Var = a0Var2;
                    linkedHashMap = linkedHashMap2;
                    bVar = bVar2;
                }
                aVar2 = (ds.a) a0Var.f125i;
                if (aVar2.c()) {
                    linkedHashMap2 = linkedHashMap;
                    a0Var2 = a0Var;
                    b10 = g6;
                    ds.a aVar52 = (ds.a) a0Var2.f125i;
                    if (b10 != 6) {
                    }
                    return new JsonObject(linkedHashMap2);
                }
                String j = aVar2.j();
                aVar2.g((byte) 5);
                Unit unit = Unit.a;
                frame.f7754d = bVar;
                frame.f7755e = a0Var;
                frame.f7756i = linkedHashMap;
                frame.f7757v = j;
                frame.f7760y = 1;
                fo.c cVar = (fo.c) bVar;
                cVar.getClass();
                Intrinsics.checkNotNull(frame, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
                cVar.f8807i = frame;
                cVar.f8806e = unit;
                Intrinsics.checkNotNullParameter(frame, "frame");
                return aVar4;
            }
        }
        frame = new ds.z(a0Var, aVar);
        Object obj2 = frame.f7758w;
        ko.a aVar42 = ko.a.f13464d;
        i5 = frame.f7760y;
        if (i5 != 0) {
        }
        aVar2 = (ds.a) a0Var.f125i;
        if (aVar2.c()) {
        }
    }

    public JsonPrimitive A(boolean z5) {
        ds.a aVar = (ds.a) this.f125i;
        String l6 = !z5 ? aVar.l() : aVar.j();
        return (z5 || !Intrinsics.areEqual(l6, "null")) ? new cs.l(l6, z5) : JsonNull.INSTANCE;
    }

    public synchronized boolean B(String str) {
        for (String str2 : (String[]) this.f125i) {
            if (str.equals(str2)) {
                return false;
            }
        }
        StringBuilder sb2 = new StringBuilder("Recording new base apk path: ");
        sb2.append(str);
        sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        D(sb2);
        Log.w("SoLoader", sb2.toString());
        String[] strArr = (String[]) this.f125i;
        int i5 = this.f124e;
        strArr[i5 % strArr.length] = str;
        this.f124e = i5 + 1;
        return true;
    }

    public void C(p0.b bVar) {
        int i5 = this.f124e;
        Object[] objArr = (Object[]) this.f125i;
        if (i5 < objArr.length) {
            objArr[i5] = bVar;
            this.f124e = i5 + 1;
        }
    }

    public synchronized void D(StringBuilder sb2) {
        try {
            sb2.append("Previously recorded ");
            sb2.append(this.f124e);
            sb2.append(" base apk paths.");
            if (this.f124e > 0) {
                sb2.append(" Most recent ones:");
            }
            int i5 = 0;
            while (true) {
                String[] strArr = (String[]) this.f125i;
                if (i5 < strArr.length) {
                    int i6 = (this.f124e - i5) - 1;
                    if (i6 >= 0) {
                        String str = strArr[i6 % strArr.length];
                        sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                        sb2.append(str);
                        sb2.append(" (");
                        sb2.append(new File(str).exists() ? "exists" : "does not exist");
                        sb2.append(")");
                    }
                    i5++;
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v2, types: [java.util.HashMap] */
    /* JADX WARN: Type inference failed for: r4v3, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r4v4, types: [java.util.HashMap] */
    /* JADX WARN: Type inference failed for: r4v5, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r4v7, types: [java.util.ArrayList] */
    public Object E(ILogger iLogger, Object obj) {
        Object F;
        HashSet hashSet = (HashSet) this.f125i;
        if (obj == null) {
            return null;
        }
        if (obj instanceof Character) {
            return obj.toString();
        }
        if (obj instanceof Number) {
            return obj;
        }
        if (obj instanceof Boolean) {
            return obj;
        }
        if (obj instanceof String) {
            return obj;
        }
        if (obj instanceof Locale) {
            return obj.toString();
        }
        if (obj instanceof AtomicIntegerArray) {
            return io.sentry.util.c.a((AtomicIntegerArray) obj);
        }
        if (obj instanceof AtomicBoolean) {
            return Boolean.valueOf(((AtomicBoolean) obj).get());
        }
        if (obj instanceof URI) {
            return obj.toString();
        }
        if (obj instanceof InetAddress) {
            return obj.toString();
        }
        if (obj instanceof UUID) {
            return obj.toString();
        }
        if (obj instanceof Currency) {
            return obj.toString();
        }
        if (obj instanceof Calendar) {
            return io.sentry.util.c.d((Calendar) obj);
        }
        if (obj.getClass().isEnum()) {
            return obj.toString();
        }
        if (hashSet.contains(obj)) {
            iLogger.u(SentryLevel.INFO, "Cyclic reference detected. Calling toString() on object.", new Object[0]);
            return obj.toString();
        }
        hashSet.add(obj);
        try {
            if (hashSet.size() > this.f124e) {
                hashSet.remove(obj);
                iLogger.u(SentryLevel.INFO, "Max depth exceeded. Calling toString() on object.", new Object[0]);
                return obj.toString();
            }
            try {
                if (obj.getClass().isArray()) {
                    F = new ArrayList();
                    for (Object obj2 : (Object[]) obj) {
                        F.add(E(iLogger, obj2));
                    }
                } else if (obj instanceof Collection) {
                    F = new ArrayList();
                    Iterator it = ((Collection) obj).iterator();
                    while (it.hasNext()) {
                        F.add(E(iLogger, it.next()));
                    }
                } else if (obj instanceof Map) {
                    F = s(iLogger, (Map) obj);
                } else {
                    F = F(iLogger, obj);
                    if (F.isEmpty()) {
                        F = obj.toString();
                    }
                }
                hashSet.remove(obj);
                return F;
            } catch (Exception e9) {
                iLogger.k(SentryLevel.INFO, "Not serializing object due to throwing sub-path.", e9);
                hashSet.remove(obj);
                return null;
            }
        } catch (Throwable th2) {
            hashSet.remove(obj);
            throw th2;
        }
    }

    public HashMap F(ILogger iLogger, Object obj) {
        Field[] declaredFields = obj.getClass().getDeclaredFields();
        HashMap hashMap = new HashMap();
        for (Field field : declaredFields) {
            if (!Modifier.isTransient(field.getModifiers()) && !Modifier.isStatic(field.getModifiers())) {
                String name = field.getName();
                try {
                    field.setAccessible(true);
                    hashMap.put(name, E(iLogger, field.get(obj)));
                    field.setAccessible(false);
                } catch (Exception unused) {
                    iLogger.u(SentryLevel.INFO, s4.h.f("Cannot access field ", name, "."), new Object[0]);
                }
            }
        }
        return hashMap;
    }

    public void G(int i5, int i6) {
        int[] iArr = (int[]) this.f125i;
        int i10 = iArr[i5];
        iArr[i5] = iArr[i6];
        iArr[i6] = i10;
        int i11 = i5 + 1;
        int i12 = i6 + 1;
        int i13 = iArr[i11];
        iArr[i11] = iArr[i12];
        iArr[i12] = i13;
        int i14 = i5 + 2;
        int i15 = i6 + 2;
        int i16 = iArr[i14];
        iArr[i14] = iArr[i15];
        iArr[i15] = i16;
    }

    public void H(String text) {
        Intrinsics.checkNotNullParameter(text, "text");
        int length = text.length();
        if (length == 0) {
            return;
        }
        n(this.f124e, length);
        text.getChars(0, text.length(), (char[]) this.f125i, this.f124e);
        this.f124e += length;
    }

    public String I(x4 x4Var) {
        d0 d0Var = (d0) this.f125i;
        int i5 = this.f124e;
        try {
            if (d0Var.G == null) {
                throw null;
            }
            com.google.android.gms.internal.play_billing.j jVar = d0Var.G;
            String packageName = d0Var.E.getPackageName();
            String str = i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? i5 != 6 ? "QUERY_PRODUCT_DETAILS_ASYNC" : "START_CONNECTION" : "IS_FEATURE_SUPPORTED" : "CONSUME_ASYNC" : "ACKNOWLEDGE_PURCHASE" : "LAUNCH_BILLING_FLOW";
            b0 b0Var = new b0(x4Var);
            com.google.android.gms.internal.play_billing.g gVar = (com.google.android.gms.internal.play_billing.g) jVar;
            Parcel v5 = gVar.v();
            v5.writeString(packageName);
            v5.writeString(str);
            int i6 = com.google.android.gms.internal.play_billing.f.a;
            v5.writeStrongBinder(b0Var);
            gVar.x(1, v5);
            return "billingOverrideService.getBillingOverride";
        } catch (Exception e9) {
            d0Var.O(95, 28, g0.f172r);
            com.google.android.gms.internal.play_billing.s.i("BillingClientTesting", "An error occurred while retrieving billing override.", e9);
            x4Var.a(0);
            return "billingOverrideService.getBillingOverride";
        }
    }

    @Override // th.u0
    public Object a() {
        v0 v0Var = (v0) this.f125i;
        int i5 = this.f124e;
        s0 a = v0Var.a(i5);
        th.s sVar = v0Var.a;
        int i6 = a.f18570b;
        r0 r0Var = a.f18571c;
        int i10 = r0Var.f18561d;
        long j = r0Var.f18559b;
        String str = r0Var.a;
        if (i10 != 5 && i10 != 6 && i10 != 4) {
            throw new th.l0(String.format("Could not safely delete session %d because it is not in a terminal state.", Integer.valueOf(i5)), i5);
        }
        if (sVar.c(i6, j, str).exists()) {
            th.s.g(sVar.c(i6, j, str));
        }
        int i11 = r0Var.f18561d;
        if ((i11 != 5 && i11 != 6) || !sVar.j(i6, j, str).exists()) {
            return null;
        }
        th.s.g(sVar.j(i6, j, str));
        return null;
    }

    @Override // cd.x
    public MediaCodecInfo b(int i5) {
        if (((MediaCodecInfo[]) this.f125i) == null) {
            this.f125i = new MediaCodecList(this.f124e).getCodecInfos();
        }
        return ((MediaCodecInfo[]) this.f125i)[i5];
    }

    @Override // n9.b
    public synchronized void clear() {
        f();
    }

    @Override // n9.b
    public synchronized boolean contains(int i5) {
        boolean z5;
        if (i5 == this.f124e) {
            z5 = CloseableReference.t((CloseableReference) this.f125i);
        }
        return z5;
    }

    public void d(long j) {
        int i5 = this.f124e;
        long[] jArr = (long[]) this.f125i;
        if (i5 == jArr.length) {
            this.f125i = Arrays.copyOf(jArr, i5 * 2);
        }
        long[] jArr2 = (long[]) this.f125i;
        int i6 = this.f124e;
        this.f124e = i6 + 1;
        jArr2[i6] = j;
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, com.facebook.soloader.b0[] b0VarArr) {
        int i5;
        lb.c[] cVarArr;
        do {
            i5 = this.f124e;
            cVarArr = (lb.c[]) this.f125i;
            if (i5 >= 8) {
                return false;
            }
            this.f124e = i5 + 1;
        } while (!cVarArr[i5].e(unsatisfiedLinkError, b0VarArr));
        return true;
    }

    public synchronized void f() {
        CloseableReference.l((CloseableReference) this.f125i);
        this.f125i = null;
        this.f124e = -1;
    }

    @Override // n9.b
    public synchronized CloseableReference g() {
        return CloseableReference.g((CloseableReference) this.f125i);
    }

    @Override // cd.x
    public boolean h(String str, String str2, MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.isFeatureSupported(str);
    }

    @Override // n9.b
    public synchronized CloseableReference i() {
        try {
        } finally {
            f();
        }
        return CloseableReference.g((CloseableReference) this.f125i);
    }

    @Override // n9.b
    public synchronized CloseableReference j(int i5) {
        return this.f124e == i5 ? CloseableReference.g((CloseableReference) this.f125i) : null;
    }

    @Override // n9.b
    public void k(int i5, CloseableReference bitmapReference) {
        Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
    }

    @Override // n9.b
    public synchronized void l(int i5, CloseableReference bitmapReference) {
        try {
            Intrinsics.checkNotNullParameter(bitmapReference, "bitmapReference");
            if (((CloseableReference) this.f125i) != null) {
                Object q5 = bitmapReference.q();
                CloseableReference closeableReference = (CloseableReference) this.f125i;
                if (Intrinsics.areEqual(q5, closeableReference != null ? (Bitmap) closeableReference.q() : null)) {
                    return;
                }
            }
            CloseableReference.l((CloseableReference) this.f125i);
            this.f125i = CloseableReference.g(bitmapReference);
            this.f124e = i5;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public void m(InputStream inputStream, OutputStream outputStream) {
        qa.n nVar = (qa.n) this.f125i;
        int i5 = this.f124e;
        byte[] bArr = (byte[]) nVar.get(i5);
        while (true) {
            try {
                int read = inputStream.read(bArr, 0, i5);
                if (read == -1) {
                    return;
                } else {
                    outputStream.write(bArr, 0, read);
                }
            } finally {
                nVar.release(bArr);
            }
        }
    }

    public void n(int i5, int i6) {
        int i10 = i6 + i5;
        char[] cArr = (char[]) this.f125i;
        if (cArr.length <= i10) {
            int i11 = i5 * 2;
            if (i10 < i11) {
                i10 = i11;
            }
            char[] copyOf = Arrays.copyOf(cArr, i10);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            this.f125i = copyOf;
        }
    }

    public long o(int i5) {
        if (i5 >= 0 && i5 < this.f124e) {
            return ((long[]) this.f125i)[i5];
        }
        StringBuilder r5 = a3.e.r(i5, "Invalid index ", ", size is ");
        r5.append(this.f124e);
        throw new IndexOutOfBoundsException(r5.toString());
    }

    @Override // cd.x
    public boolean p(String str, MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.isFeatureRequired(str);
    }

    @Override // cd.x
    public int q() {
        if (((MediaCodecInfo[]) this.f125i) == null) {
            this.f125i = new MediaCodecList(this.f124e).getCodecInfos();
        }
        return ((MediaCodecInfo[]) this.f125i).length;
    }

    public boolean r() {
        return this.f124e < ((ArrayList) this.f125i).size();
    }

    public HashMap s(ILogger iLogger, Map map) {
        HashMap hashMap = new HashMap();
        for (Object obj : map.keySet()) {
            Object obj2 = map.get(obj);
            if (obj2 != null) {
                hashMap.put(obj.toString(), E(iLogger, obj2));
            } else {
                hashMap.put(obj.toString(), null);
            }
        }
        return hashMap;
    }

    public void t(int i5, int i6, int i10) {
        int i11 = this.f124e;
        int i12 = i11 + 3;
        int[] iArr = (int[]) this.f125i;
        if (i12 >= iArr.length) {
            int[] copyOf = Arrays.copyOf(iArr, iArr.length * 2);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
            this.f125i = copyOf;
        }
        int[] iArr2 = (int[]) this.f125i;
        iArr2[i11] = i5 + i10;
        iArr2[i11 + 1] = i6 + i10;
        iArr2[i11 + 2] = i10;
        this.f124e = i12;
    }

    public String toString() {
        switch (this.f123d) {
            case 3:
                return new String((char[]) this.f125i, 0, this.f124e);
            default:
                return super.toString();
        }
    }

    @Override // cd.x
    public boolean u() {
        return true;
    }

    public void v(int i5, int i6, int i10, int i11) {
        int i12 = this.f124e;
        int i13 = i12 + 4;
        int[] iArr = (int[]) this.f125i;
        if (i13 >= iArr.length) {
            int[] copyOf = Arrays.copyOf(iArr, iArr.length * 2);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
            this.f125i = copyOf;
        }
        int[] iArr2 = (int[]) this.f125i;
        iArr2[i12] = i5;
        iArr2[i12 + 1] = i6;
        iArr2[i12 + 2] = i10;
        iArr2[i12 + 3] = i11;
        this.f124e = i13;
    }

    public void w(int i5, int i6) {
        if (i5 < i6) {
            int i10 = i5 - 3;
            for (int i11 = i5; i11 < i6; i11 += 3) {
                int[] iArr = (int[]) this.f125i;
                int i12 = iArr[i11];
                int i13 = iArr[i6];
                if (i12 < i13 || (i12 == i13 && iArr[i11 + 1] <= iArr[i6 + 1])) {
                    i10 += 3;
                    G(i10, i11);
                }
            }
            G(i10 + 3, i6);
            w(i5, i10);
            w(i10 + 6, i6);
        }
    }

    public JsonElement x() {
        JsonElement jsonObject;
        Object obj;
        Object invoke;
        Object eVar;
        ds.a aVar = (ds.a) this.f125i;
        byte y5 = aVar.y();
        if (y5 == 1) {
            return A(true);
        }
        if (y5 == 0) {
            return A(false);
        }
        if (y5 != 6) {
            if (y5 == 8) {
                return y();
            }
            ds.a.q(aVar, "Cannot read Json element because of unexpected ".concat(ds.s.t(y5)), 0, null, 6);
            throw null;
        }
        int i5 = this.f124e + 1;
        this.f124e = i5;
        if (i5 == 200) {
            ds.y block = new ds.y(this, null);
            Intrinsics.checkNotNullParameter(block, "block");
            j8.c cVar = new j8.c();
            Unit unit = Unit.a;
            ko.a aVar2 = fo.a.a;
            Intrinsics.checkNotNullParameter(cVar, "<this>");
            Intrinsics.checkNotNullParameter(block, "block");
            fo.c cVar2 = new fo.c(null);
            cVar2.f8805d = block;
            cVar2.f8806e = unit;
            Intrinsics.checkNotNull(cVar2, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
            cVar2.f8807i = cVar2;
            ko.a aVar3 = fo.a.a;
            cVar2.f8808v = aVar3;
            while (true) {
                obj = cVar2.f8808v;
                Continuation completion = cVar2.f8807i;
                if (completion == null) {
                    break;
                }
                fo.q qVar = Result.f13476e;
                if (Intrinsics.areEqual(aVar3, obj)) {
                    try {
                        ds.y yVar = cVar2.f8805d;
                        Unit unit2 = cVar2.f8806e;
                        if (yVar == null) {
                            Intrinsics.checkNotNullParameter(yVar, "<this>");
                            Intrinsics.checkNotNullParameter(completion, "completion");
                            Intrinsics.checkNotNullParameter(completion, "completion");
                            CoroutineContext context = completion.getContext();
                            if (context == kotlin.coroutines.g.f13538d) {
                                Intrinsics.checkNotNull(completion, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
                                eVar = new ko.d(completion);
                            } else {
                                Intrinsics.checkNotNull(completion, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
                                eVar = new ko.e(completion, context);
                            }
                            invoke = ((Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(yVar, 3)).invoke(cVar2, unit2, eVar);
                        } else {
                            invoke = ((Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(yVar, 3)).invoke(cVar2, unit2, completion);
                        }
                        if (invoke != ko.a.f13464d) {
                            completion.resumeWith(invoke);
                        }
                    } catch (Throwable th2) {
                        fo.q qVar2 = Result.f13476e;
                        completion.resumeWith(ki.b.i(th2));
                    }
                } else {
                    cVar2.f8808v = aVar3;
                    completion.resumeWith(obj);
                }
            }
            ki.b.R(obj);
            jsonObject = (JsonElement) obj;
        } else {
            byte g6 = aVar.g((byte) 6);
            if (aVar.y() == 4) {
                ds.a.q(aVar, "Unexpected leading comma", 0, null, 6);
                throw null;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            while (true) {
                if (!aVar.c()) {
                    break;
                }
                String j = aVar.j();
                aVar.g((byte) 5);
                linkedHashMap.put(j, x());
                g6 = aVar.f();
                if (g6 != 4) {
                    if (g6 != 7) {
                        ds.a.q(aVar, "Expected end of the object or comma", 0, null, 6);
                        throw null;
                    }
                }
            }
            if (g6 == 6) {
                aVar.g((byte) 7);
            } else if (g6 == 4) {
                ds.s.n(aVar, "object");
                throw null;
            }
            jsonObject = new JsonObject(linkedHashMap);
        }
        this.f124e--;
        return jsonObject;
    }

    public kotlinx.serialization.json.a y() {
        ds.a aVar = (ds.a) this.f125i;
        byte f2 = aVar.f();
        if (aVar.y() == 4) {
            ds.a.q(aVar, "Unexpected leading comma", 0, null, 6);
            throw null;
        }
        ArrayList arrayList = new ArrayList();
        while (aVar.c()) {
            arrayList.add(x());
            f2 = aVar.f();
            if (f2 != 4) {
                boolean z5 = f2 == 9;
                int i5 = aVar.f7691b;
                if (!z5) {
                    ds.a.q(aVar, "Expected end of the array or comma", i5, null, 4);
                    throw null;
                }
            }
        }
        if (f2 == 8) {
            aVar.g((byte) 9);
        } else if (f2 == 4) {
            ds.s.n(aVar, "array");
            throw null;
        }
        return new kotlinx.serialization.json.a(arrayList);
    }

    public long z(qc.g gVar) {
        ke.w wVar = (ke.w) this.f125i;
        int i5 = 0;
        gVar.j(wVar.a, 0, 1, false);
        int i6 = wVar.a[0] & 255;
        if (i6 == 0) {
            return Long.MIN_VALUE;
        }
        int i10 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i11 = 0;
        while ((i6 & i10) == 0) {
            i10 >>= 1;
            i11++;
        }
        int i12 = i6 & (~i10);
        gVar.j(wVar.a, 1, i11, false);
        while (i5 < i11) {
            i5++;
            i12 = (wVar.a[i5] & 255) + (i12 << 8);
        }
        this.f124e = i11 + 1 + this.f124e;
        return i12;
    }

    public /* synthetic */ a0(int i5, short s2) {
        this.f123d = i5;
    }

    public a0(androidx.appcompat.widget.v configuration, ds.a lexer) {
        this.f123d = 4;
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(lexer, "lexer");
        this.f125i = lexer;
    }

    public a0(lb.c[] cVarArr) {
        this.f123d = 11;
        this.f125i = cVarArr;
        this.f124e = 0;
    }

    public a0(qa.n nVar) {
        this.f123d = 15;
        o8.h.a(true);
        this.f124e = 16384;
        this.f125i = nVar;
    }

    public a0(char c6, int i5) {
        this.f123d = i5;
        switch (i5) {
            case 10:
                this.f125i = new String[5];
                this.f124e = 0;
                break;
            case 13:
                this.f125i = new Object[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
                break;
            case 19:
                this.f125i = new ke.w(8);
                break;
            default:
                this.f125i = new long[32];
                break;
        }
    }

    public a0(int i5, boolean z5) {
        this.f123d = 14;
        this.f124e = i5;
        this.f125i = new MediaRange();
    }

    public a0(int i5, c5.e eVar) {
        this.f123d = 16;
        this.f124e = i5;
        this.f125i = new c5.e[]{eVar};
    }

    public a0(c5.e eVar, c5.e eVar2) {
        this.f123d = 16;
        this.f124e = 62;
        this.f125i = new c5.e[]{eVar, eVar2};
    }

    public a0(ArrayList routes) {
        this.f123d = 18;
        Intrinsics.checkNotNullParameter(routes, "routes");
        this.f125i = routes;
    }

    public a0(int i5, c5.e[] eVarArr) {
        this.f123d = 5;
        this.f124e = i5;
        this.f125i = eVarArr;
    }

    public a0(int i5, int i6) {
        this.f123d = i6;
        switch (i6) {
            case 8:
                this.f125i = new HashSet();
                this.f124e = i5;
                break;
            default:
                this.f125i = new int[i5];
                break;
        }
    }

    public a0(boolean z5, boolean z6) {
        this.f123d = 2;
        this.f124e = (z5 || z6) ? 1 : 0;
    }
}
