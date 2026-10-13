package e4;

import android.content.Context;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.hardware.Camera;
import android.net.Uri;
import android.util.TypedValue;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import aq.s;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.material.appbar.MaterialToolbar;
import com.horcrux.svg.SVGLength$UnitType;
import com.horcrux.svg.l0;
import cp.c2;
import cp.o1;
import e.v;
import ip.f0;
import ip.r0;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.net.IDN;
import java.net.InetAddress;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.h0;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.ranges.IntRange;
import kotlin.reflect.KFunction;
import kotlin.reflect.KProperty;
import kotlin.text.StringsKt;
import lp.b0;
import okhttp3.MediaType;
import okio.Buffer;
import wq.t;
import yq.c0;
import yq.c1;
import yq.k0;
import yq.p0;
import yq.s0;
import yq.x;
import yq.y;

/* loaded from: classes.dex */
public abstract class f {
    public static Constructor a;

    /* renamed from: b, reason: collision with root package name */
    public static Method f7945b;

    /* renamed from: c, reason: collision with root package name */
    public static Method f7946c;

    /* renamed from: d, reason: collision with root package name */
    public static Constructor f7947d;

    /* renamed from: e, reason: collision with root package name */
    public static Method f7948e;

    public static boolean A(byte b10) {
        return b10 > -65;
    }

    public static boolean B(Double d6, boolean z5) {
        return d6 == null ? z5 : !d6.isNaN() && d6.doubleValue() >= 0.0d && d6.doubleValue() <= 1.0d;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0243  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x024d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object C(y type, s mode, Function3 writeGenericType) {
        boolean z5;
        hq.b bVar;
        Object d6;
        List list;
        aq.k kVar;
        boolean z6;
        aq.j d7;
        s sVar;
        Object C;
        int ordinal;
        boolean z7 = mode.f2653c;
        aq.g typeFactory = aq.g.f2633c;
        aq.g typeMappingConfiguration = aq.g.f2636f;
        Intrinsics.checkNotNullParameter(type, "kotlinType");
        Intrinsics.checkNotNullParameter(typeFactory, "factory");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(typeMappingConfiguration, "typeMappingConfiguration");
        Intrinsics.checkNotNullParameter(writeGenericType, "writeGenericType");
        Intrinsics.checkNotNullParameter(type, "kotlinType");
        if (nt.a.B(type)) {
            b0 b0Var = fp.q.a;
            Intrinsics.checkNotNullParameter(type, "suspendFunType");
            nt.a.B(type);
            fp.i v5 = com.facebook.imagepipeline.nativecode.c.v(type);
            jp.h annotations = type.getAnnotations();
            y v6 = nt.a.v(type);
            List s2 = nt.a.s(type);
            List w5 = nt.a.w(type);
            ArrayList arrayList = new ArrayList(d0.l(w5, 10));
            Iterator it = w5.iterator();
            while (it.hasNext()) {
                arrayList.add(((s0) it.next()).b());
            }
            k0.f21045e.getClass();
            k0 k0Var = k0.f21046i;
            p0 n6 = fp.q.a.n();
            Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
            Intrinsics.checkNotNullParameter(type, "<this>");
            nt.a.y(type);
            y b10 = ((s0) CollectionsKt.Q(type.l0())).b();
            Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
            ArrayList W = CollectionsKt.W(arrayList, yq.c.t(kotlin.collections.b0.c(com.facebook.imagepipeline.nativecode.c.d(b10)), k0Var, n6, false));
            c0 p3 = com.facebook.imagepipeline.nativecode.c.v(type).p();
            Intrinsics.checkNotNullExpressionValue(p3, "getNullableAnyType(...)");
            return C(nt.a.j(v5, annotations, v6, s2, W, p3, false).x0(type.t0()), mode, writeGenericType);
        }
        zq.n nVar = zq.n.f21398d;
        Intrinsics.checkNotNullParameter(nVar, "<this>");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(typeFactory, "typeFactory");
        Intrinsics.checkNotNullParameter(mode, "mode");
        p0 receiver = nVar.B0(type);
        if (m3.n.Z(receiver)) {
            Intrinsics.checkNotNullParameter(receiver, "$receiver");
            z5 = z7;
            if (!(receiver instanceof p0)) {
                throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
            }
            ip.i a10 = receiver.a();
            Intrinsics.checkNotNull(a10, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
            fp.k primitiveType = fp.i.u((ip.f) a10);
            if (primitiveType != null) {
                Intrinsics.checkNotNullParameter(primitiveType, "primitiveType");
                switch (primitiveType.ordinal()) {
                    case 0:
                        kVar = aq.l.a;
                        break;
                    case 1:
                        kVar = aq.l.f2643b;
                        break;
                    case 2:
                        kVar = aq.l.f2644c;
                        break;
                    case 3:
                        kVar = aq.l.f2645d;
                        break;
                    case 4:
                        kVar = aq.l.f2646e;
                        break;
                    case 5:
                        kVar = aq.l.f2647f;
                        break;
                    case 6:
                        kVar = aq.l.f2648g;
                        break;
                    case 7:
                        kVar = aq.l.f2649h;
                        break;
                    default:
                        throw new fo.n();
                }
                if (!m3.n.j0(type)) {
                    Intrinsics.checkNotNullParameter(nVar, "<this>");
                    Intrinsics.checkNotNullParameter(type, "type");
                    hq.c ENHANCED_NULLABILITY_ANNOTATION = rp.y.f17507p;
                    Intrinsics.checkNotNullExpressionValue(ENHANCED_NULLABILITY_ANNOTATION, "ENHANCED_NULLABILITY_ANNOTATION");
                    if (!m3.n.T(type, ENHANCED_NULLABILITY_ANNOTATION)) {
                        z6 = false;
                        d6 = nf.e.d(kVar, z6);
                    }
                }
                z6 = true;
                d6 = nf.e.d(kVar, z6);
            } else {
                Intrinsics.checkNotNullParameter(receiver, "$receiver");
                if (!(receiver instanceof p0)) {
                    throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
                }
                ip.i a11 = receiver.a();
                Intrinsics.checkNotNull(a11, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                fp.k s5 = fp.i.s((ip.f) a11);
                if (s5 != null) {
                    StringBuilder sb2 = new StringBuilder("[");
                    pq.c cVar = (pq.c) pq.c.K.get(s5);
                    if (cVar == null) {
                        pq.c.a(6);
                        throw null;
                    }
                    sb2.append(cVar.c());
                    d6 = aq.g.c(sb2.toString());
                } else {
                    Intrinsics.checkNotNullParameter(receiver, "$receiver");
                    if (!(receiver instanceof p0)) {
                        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
                    }
                    ip.i a12 = receiver.a();
                    if (a12 != null && fp.i.J(a12)) {
                        Intrinsics.checkNotNullParameter(receiver, "$receiver");
                        if (!(receiver instanceof p0)) {
                            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
                        }
                        ip.i a13 = receiver.a();
                        Intrinsics.checkNotNull(a13, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                        hq.d h6 = oq.e.h((ip.f) a13);
                        if (h6 != null) {
                            String str = hp.d.a;
                            bVar = hp.d.f(h6);
                        } else {
                            bVar = null;
                        }
                        if (bVar != null) {
                            if (!mode.f2657g && ((list = hp.d.f10158n) == null || !list.isEmpty())) {
                                Iterator it2 = list.iterator();
                                while (it2.hasNext()) {
                                    if (Intrinsics.areEqual(((hp.c) it2.next()).a, bVar)) {
                                    }
                                }
                            }
                            String e9 = pq.b.e(bVar);
                            Intrinsics.checkNotNullExpressionValue(e9, "internalNameByClassId(...)");
                            d6 = aq.g.d(e9);
                        }
                    }
                }
            }
            if (d6 == null) {
                Object d8 = nf.e.d(d6, mode.a);
                writeGenericType.invoke(type, d8, mode);
                return d8;
            }
            p0 r02 = type.r0();
            if (r02 instanceof x) {
                x xVar = (x) r02;
                y yVar = xVar.a;
                if (yVar != null) {
                    return C(com.facebook.imagepipeline.nativecode.c.U(yVar), mode, writeGenericType);
                }
                LinkedHashSet types = xVar.f21078b;
                Intrinsics.checkNotNullParameter(types, "types");
                throw new AssertionError("There should be no intersection type in existing descriptors, but found: " + CollectionsKt.O(types, null, null, null, null, 63));
            }
            ip.i a14 = r02.a();
            if (a14 == null) {
                throw new UnsupportedOperationException("no descriptor for type constructor of " + type);
            }
            if (ar.l.f(a14)) {
                aq.j d10 = aq.g.d("error/NonExistentClass");
                ip.f descriptor = (ip.f) a14;
                Intrinsics.checkNotNullParameter(type, "kotlinType");
                Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                return d10;
            }
            boolean z8 = a14 instanceof ip.f;
            if (z8 && fp.i.z(type)) {
                if (type.l0().size() != 1) {
                    throw new UnsupportedOperationException("arrays must have one type argument");
                }
                s0 s0Var = (s0) type.l0().get(0);
                y b11 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                if (s0Var.a() == c1.f21014v) {
                    C = aq.g.d("java/lang/Object");
                } else {
                    c1 effectiveVariance = s0Var.a();
                    Intrinsics.checkNotNullExpressionValue(effectiveVariance, "getProjectionKind(...)");
                    Intrinsics.checkNotNullParameter(effectiveVariance, "effectiveVariance");
                    if (z5 || ((ordinal = effectiveVariance.ordinal()) == 0 ? (sVar = mode.f2659i) == null : !(ordinal == 1 ? (sVar = mode.f2658h) != null : (sVar = mode.f2656f) != null))) {
                        sVar = mode;
                    }
                    C = C(b11, sVar, writeGenericType);
                }
                return aq.g.c("[" + aq.g.l((aq.l) C));
            }
            if (!z8) {
                if (a14 instanceof ip.s0) {
                    y F = com.facebook.imagepipeline.nativecode.c.F((ip.s0) a14);
                    if (type.t0()) {
                        F = com.facebook.imagepipeline.nativecode.c.S(F);
                    }
                    return C(F, mode, ir.e.f12259d);
                }
                if ((a14 instanceof r0) && mode.j) {
                    return C(((t) ((r0) a14)).C0(), mode, writeGenericType);
                }
                throw new UnsupportedOperationException("Unknown type " + type);
            }
            if (kq.g.b(a14) && !mode.f2652b) {
                Intrinsics.checkNotNullParameter(nVar, "<this>");
                Intrinsics.checkNotNullParameter(type, "inlineClassType");
                y yVar2 = (y) yq.c.d(type, new HashSet());
                if (yVar2 != null) {
                    return C(yVar2, new s(mode.a, true, mode.f2653c, mode.f2654d, mode.f2655e, mode.f2656f, mode.f2657g, mode.f2658h, mode.f2659i, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING), writeGenericType);
                }
            }
            if (z5) {
                hq.e eVar = fp.i.f8859e;
                if (fp.i.b((ip.f) a14, fp.o.Q)) {
                    d7 = aq.g.d("java/lang/Class");
                    writeGenericType.invoke(type, d7, mode);
                    return d7;
                }
            }
            ip.f fVar = (ip.f) a14;
            ip.f classDescriptor = fVar.a();
            Intrinsics.checkNotNullExpressionValue(classDescriptor, "getOriginal(...)");
            Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
            if (fVar.b() == ip.g.f12141v) {
                ip.l h7 = fVar.h();
                Intrinsics.checkNotNull(h7, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                fVar = (ip.f) h7;
            }
            ip.f a15 = fVar.a();
            Intrinsics.checkNotNullExpressionValue(a15, "getOriginal(...)");
            d7 = aq.g.d(l(a15, typeMappingConfiguration));
            writeGenericType.invoke(type, d7, mode);
            return d7;
        }
        z5 = z7;
        d6 = null;
        if (d6 == null) {
        }
    }

    public static MediaType D(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        try {
            return s(str);
        } catch (IllegalArgumentException unused) {
            return null;
        }
    }

    public static void E() {
        if (a == null || f7945b == null || f7946c == null) {
            Class<?> cls = Class.forName("com.google.android.exoplayer2.effect.ScaleAndRotateTransformation$Builder");
            a = cls.getConstructor(null);
            f7945b = cls.getMethod("setRotationDegrees", Float.TYPE);
            f7946c = cls.getMethod("build", null);
        }
        if (f7947d == null || f7948e == null) {
            Class<?> cls2 = Class.forName("com.google.android.exoplayer2.effect.DefaultVideoFrameProcessor$Factory$Builder");
            f7947d = cls2.getConstructor(null);
            f7948e = cls2.getMethod("build", null);
        }
    }

    public static void H(Camera.Parameters parameters, int i5) {
        List<String> supportedFocusModes = parameters.getSupportedFocusModes();
        if (supportedFocusModes == null || supportedFocusModes.isEmpty()) {
            return;
        }
        if (i5 == 2) {
            if ("continuous-picture".equals(parameters.getFocusMode())) {
                return;
            }
            if (supportedFocusModes.contains("continuous-picture")) {
                parameters.setFocusMode("continuous-picture");
                return;
            }
        }
        if (!"auto".equals(parameters.getFocusMode()) && supportedFocusModes.contains("auto")) {
            parameters.setFocusMode("auto");
        }
    }

    public static void I(Camera.Parameters parameters, String str) {
        List<String> supportedFlashModes;
        if (str.equals(parameters.getFlashMode()) || (supportedFlashModes = parameters.getSupportedFlashModes()) == null || !supportedFlashModes.contains(str)) {
            return;
        }
        parameters.setFlashMode(str);
    }

    public static void K(r8.e eVar, long j) {
        if (!(j >= 0)) {
            throw new IllegalArgumentException();
        }
        while (j > 0) {
            long skip = eVar.skip(j);
            if (skip <= 0) {
                if (eVar.read() == -1) {
                    return;
                } else {
                    skip = 1;
                }
            }
            j -= skip;
        }
    }

    public static final boolean L(byte[] byteArray, byte[] pattern) {
        Intrinsics.checkNotNullParameter(byteArray, "byteArray");
        Intrinsics.checkNotNullParameter(pattern, "pattern");
        return z(0, byteArray, pattern);
    }

    public static final String M(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        int i5 = 0;
        int i6 = -1;
        if (!StringsKt.D(str, ":", false)) {
            try {
                String ascii = IDN.toASCII(str);
                Intrinsics.checkNotNullExpressionValue(ascii, "toASCII(host)");
                Locale US = Locale.US;
                Intrinsics.checkNotNullExpressionValue(US, "US");
                String lowerCase = ascii.toLowerCase(US);
                Intrinsics.checkNotNullExpressionValue(lowerCase, "this as java.lang.String).toLowerCase(locale)");
                if (lowerCase.length() == 0) {
                    return null;
                }
                int length = lowerCase.length();
                int i10 = 0;
                while (i10 < length) {
                    int i11 = i10 + 1;
                    char charAt = lowerCase.charAt(i10);
                    if (Intrinsics.compare((int) charAt, 31) <= 0 || Intrinsics.compare((int) charAt, 127) >= 0 || StringsKt.I(" #%/:?@[\\]", charAt, 0, 6) != -1) {
                        return null;
                    }
                    i10 = i11;
                }
                return lowerCase;
            } catch (IllegalArgumentException unused) {
                return null;
            }
        }
        InetAddress o6 = (kotlin.text.x.o(str, "[", false) && kotlin.text.x.h(str, "]", false)) ? o(1, str.length() - 1, str) : o(0, str.length(), str);
        if (o6 == null) {
            return null;
        }
        byte[] address = o6.getAddress();
        if (address.length != 16) {
            if (address.length == 4) {
                return o6.getHostAddress();
            }
            throw new AssertionError(k0.d.h('\'', "Invalid IPv6 address: '", str));
        }
        Intrinsics.checkNotNullExpressionValue(address, "address");
        int i12 = 0;
        int i13 = 0;
        while (i12 < address.length) {
            int i14 = i12;
            while (i14 < 16 && address[i14] == 0 && address[i14 + 1] == 0) {
                i14 += 2;
            }
            int i15 = i14 - i12;
            if (i15 > i13 && i15 >= 4) {
                i6 = i12;
                i13 = i15;
            }
            i12 = i14 + 2;
        }
        Buffer buffer = new Buffer();
        while (i5 < address.length) {
            if (i5 == i6) {
                buffer.U(58);
                i5 += i13;
                if (i5 == 16) {
                    buffer.U(58);
                }
            } else {
                if (i5 > 0) {
                    buffer.U(58);
                }
                byte b10 = address[i5];
                byte[] bArr = qs.b.a;
                buffer.X(((b10 & 255) << 8) | (address[i5 + 1] & 255));
                i5 += 2;
            }
        }
        return buffer.W();
    }

    public static int N(ReadableArray readableArray, float[] fArr, float f2) {
        int size = readableArray.size();
        if (size != 6) {
            return size;
        }
        fArr[0] = (float) readableArray.getDouble(0);
        fArr[1] = (float) readableArray.getDouble(2);
        fArr[2] = ((float) readableArray.getDouble(4)) * f2;
        fArr[3] = (float) readableArray.getDouble(1);
        fArr[4] = (float) readableArray.getDouble(3);
        fArr[5] = ((float) readableArray.getDouble(5)) * f2;
        return 6;
    }

    public static final void a(ss.a aVar, ss.b bVar, String str) {
        Logger logger = ss.c.f18142i;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(bVar.f18136b);
        sb2.append(' ');
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String format = String.format("%-22s", Arrays.copyOf(new Object[]{str}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(format, *args)");
        sb2.append(format);
        sb2.append(": ");
        sb2.append(aVar.a);
        logger.fine(sb2.toString());
    }

    public static final byte[] c(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        try {
            Charset forName = Charset.forName("ASCII");
            Intrinsics.checkNotNullExpressionValue(forName, "forName(...)");
            byte[] bytes = value.getBytes(forName);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            return bytes;
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("ASCII not found!", e9);
        }
    }

    public static f9.b d(f9.b bVar) {
        if (((Double) bVar.f8474i) != null) {
            return bVar;
        }
        return new f9.b((Boolean) bVar.f8472d, (Double) bVar.f8473e, e(null, (Double) bVar.f8473e, (Boolean) bVar.f8472d), (Boolean) bVar.f8475v, (Double) bVar.f8476w);
    }

    public static Double e(Double d6, Double d7, Boolean bool) {
        if (d6 != null) {
            return d6;
        }
        double c6 = io.sentry.util.j.a().c();
        if (d7 == null || bool == null) {
            return Double.valueOf(c6);
        }
        if (bool.booleanValue()) {
            return Double.valueOf(d7.doubleValue() * c6);
        }
        return Double.valueOf(((1.0d - d7.doubleValue()) * c6) + d7.doubleValue());
    }

    public static final io.sentry.internal.debugmeta.c f(String sectionName) {
        Intrinsics.checkNotNullParameter(sectionName, "sectionName");
        return new io.sentry.internal.debugmeta.c(sectionName);
    }

    public static final void j(WorkDatabase workDatabase, v3.b configuration, w3.k continuation) {
        int i5;
        Intrinsics.checkNotNullParameter(workDatabase, "workDatabase");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(continuation, "continuation");
        ArrayList i6 = kotlin.collections.c0.i(continuation);
        int i10 = 0;
        while (!i6.isEmpty()) {
            List list = ((w3.k) h0.u(i6)).f19653d;
            Intrinsics.checkNotNullExpressionValue(list, "current.work");
            if (list == null || !list.isEmpty()) {
                Iterator it = list.iterator();
                i5 = 0;
                while (it.hasNext()) {
                    if (((v3.s) it.next()).f19219b.j.a() && (i5 = i5 + 1) < 0) {
                        throw new ArithmeticException("Count overflow has happened.");
                    }
                }
            } else {
                i5 = 0;
            }
            i10 += i5;
        }
        if (i10 == 0) {
            return;
        }
        p t5 = workDatabase.t();
        t5.getClass();
        a3.o g6 = a3.o.g(0, "Select COUNT(*) FROM workspec WHERE LENGTH(content_uri_triggers)<>0 AND state NOT IN (2, 3, 5)");
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) t5.a;
        workDatabase_Impl.b();
        Cursor D = nt.a.D(workDatabase_Impl, g6);
        try {
            int i11 = D.moveToFirst() ? D.getInt(0) : 0;
            D.close();
            g6.i();
            int i12 = configuration.f19190i;
            if (i11 + i10 > i12) {
                throw new IllegalArgumentException(k0.d.m(a3.e.q(i12, "Too many workers with contentUriTriggers are enqueued:\ncontentUriTrigger workers limit: ", i11, ";\nalready enqueued count: ", ";\ncurrent enqueue operation count: "), i10, ".\nTo address this issue you can: \n1. enqueue less workers or batch some of workers with content uri triggers together;\n2. increase limit via Configuration.Builder.setContentUriTriggerWorkersLimit;\nPlease beware that workers with content uri triggers immediately occupy slots in JobScheduler so no updates to content uris are missed."));
            }
        } catch (Throwable th2) {
            D.close();
            g6.i();
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:4:0x0026, code lost:
    
        if (r2.f10210e == false) goto L8;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final String l(ip.f classDescriptor, aq.g typeMappingConfiguration) {
        Intrinsics.checkNotNullParameter(classDescriptor, "klass");
        Intrinsics.checkNotNullParameter(typeMappingConfiguration, "typeMappingConfiguration");
        typeMappingConfiguration.getClass();
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        ip.l h6 = classDescriptor.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        hq.e name = classDescriptor.getName();
        if (name != null) {
            hq.e eVar = hq.g.a;
        }
        name = hq.g.f10213c;
        String c6 = name.c();
        Intrinsics.checkNotNullExpressionValue(c6, "getIdentifier(...)");
        if (h6 instanceof f0) {
            hq.c cVar = ((lp.c0) ((f0) h6)).f14132x;
            if (cVar.a.c()) {
                return c6;
            }
            return kotlin.text.x.m(cVar.a.a, '.', '/') + '/' + c6;
        }
        ip.f classDescriptor2 = h6 instanceof ip.f ? (ip.f) h6 : null;
        if (classDescriptor2 == null) {
            throw new IllegalArgumentException("Unexpected container: " + h6 + " for " + classDescriptor);
        }
        Intrinsics.checkNotNullParameter(classDescriptor2, "classDescriptor");
        return l(classDescriptor2, typeMappingConfiguration) + '$' + c6;
    }

    public static Uri m(Context context, String name) {
        um.h hVar = um.h.a;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(name, "name");
        Locale locale = Locale.ROOT;
        kotlin.text.x.l(a3.e.o(locale, "ROOT", name, locale, "toLowerCase(...)"), "-", "_", false);
        int a10 = hVar.a(context, name, "drawable");
        if (a10 != 0) {
            return Uri.parse("res:/" + a10);
        }
        int a11 = hVar.a(context, name, "raw");
        if (a11 != 0) {
            return Uri.parse("res:/" + a11);
        }
        if (!kotlin.text.x.o(name, "asset:/", false)) {
            return Uri.parse("file:///android_asset/".concat(name));
        }
        return Uri.parse("file:///android_asset/" + StringsKt.N(name, "asset:/"));
    }

    public static void n(Camera.Parameters parameters, h5.s sVar, int i5, int i6, int i10) {
        ArrayList arrayList = new ArrayList(1);
        Matrix matrix = new Matrix();
        float[] fArr = {sVar.a, sVar.f9558b, sVar.f9559c, sVar.f9560d};
        matrix.postRotate(-i10, i5 / 2.0f, i6 / 2.0f);
        matrix.mapPoints(fArr);
        int i11 = (int) fArr[0];
        int i12 = (int) fArr[1];
        int i13 = (int) fArr[2];
        int i14 = (int) fArr[3];
        if (i11 > i13) {
            i13 = i11;
            i11 = i13;
        }
        if (i12 > i14) {
            i14 = i12;
            i12 = i14;
        }
        h5.s sVar2 = new h5.s(i11, i12, i13, i14);
        if (i11 < 0 || i12 < 0 || i13 > i5 || i14 > i6) {
            sVar2 = new h5.s(Math.max(i11, 0), Math.max(i12, 0), Math.min(i13, i5), Math.min(i14, i6));
        }
        arrayList.add(new Camera.Area(new Rect(((sVar2.a * 2000) / i5) - 1000, ((sVar2.f9558b * 2000) / i6) - 1000, ((sVar2.f9559c * 2000) / i5) - 1000, ((sVar2.f9560d * 2000) / i6) - 1000), 1000));
        if (parameters.getMaxNumFocusAreas() > 0) {
            parameters.setFocusAreas(arrayList);
        }
        if (parameters.getMaxNumMeteringAreas() > 0) {
            parameters.setMeteringAreas(arrayList);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x00a2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final InetAddress o(int i5, int i6, String str) {
        int i10;
        byte[] bArr = new byte[16];
        int i11 = i5;
        int i12 = 0;
        int i13 = -1;
        int i14 = -1;
        while (true) {
            if (i11 >= i6) {
                break;
            }
            if (i12 == 16) {
                return null;
            }
            int i15 = i11 + 2;
            if (i15 <= i6 && kotlin.text.x.n(str, i11, "::", false)) {
                if (i13 != -1) {
                    return null;
                }
                i12 += 2;
                i13 = i12;
                if (i15 == i6) {
                    break;
                }
                i14 = i15;
                int i16 = 0;
                i11 = i14;
                while (i11 < i6) {
                }
                i10 = i11 - i14;
                return i10 == 0 ? null : null;
            }
            if (i12 != 0) {
                if (kotlin.text.x.n(str, i11, ":", false)) {
                    i11++;
                } else {
                    if (!kotlin.text.x.n(str, i11, ".", false)) {
                        return null;
                    }
                    int i17 = i12 - 2;
                    int i18 = i17;
                    while (i14 < i6) {
                        if (i18 == 16) {
                            return null;
                        }
                        if (i18 != i17) {
                            if (str.charAt(i14) != '.') {
                                return null;
                            }
                            i14++;
                        }
                        int i19 = 0;
                        int i20 = i14;
                        while (i20 < i6) {
                            char charAt = str.charAt(i20);
                            if (Intrinsics.compare((int) charAt, 48) < 0 || Intrinsics.compare((int) charAt, 57) > 0) {
                                break;
                            }
                            if ((i19 == 0 && i14 != i20) || ((i19 * 10) + charAt) - 48 > 255) {
                                return null;
                            }
                            i20++;
                        }
                        if (i20 - i14 == 0) {
                            return null;
                        }
                        bArr[i18] = (byte) i19;
                        i18++;
                        i14 = i20;
                    }
                    if (i18 != i12 + 2) {
                        return null;
                    }
                    i12 += 2;
                }
            }
            i14 = i11;
            int i162 = 0;
            i11 = i14;
            while (i11 < i6) {
                int q5 = qs.b.q(str.charAt(i11));
                if (q5 == -1) {
                    break;
                }
                i162 = (i162 << 4) + q5;
                i11++;
            }
            i10 = i11 - i14;
            if (i10 == 0 && i10 <= 4) {
                int i21 = i12 + 1;
                bArr[i12] = (byte) (255 & (i162 >>> 8));
                i12 += 2;
                bArr[i21] = (byte) (i162 & 255);
            }
        }
        if (i12 != 16) {
            if (i13 == -1) {
                return null;
            }
            int i22 = i12 - i13;
            System.arraycopy(bArr, i13, bArr, 16 - i22, i22);
            Arrays.fill(bArr, i13, (16 - i12) + i13, (byte) 0);
        }
        return InetAddress.getByAddress(bArr);
    }

    public static final String p(long j) {
        String m5 = j <= -999500000 ? a3.e.m(new StringBuilder(), (j - 500000000) / 1000000000, " s ") : j <= -999500 ? a3.e.m(new StringBuilder(), (j - 500000) / 1000000, " ms") : j <= 0 ? a3.e.m(new StringBuilder(), (j - 500) / 1000, " µs") : j < 999500 ? a3.e.m(new StringBuilder(), (j + 500) / 1000, " µs") : j < 999500000 ? a3.e.m(new StringBuilder(), (j + 500000) / 1000000, " ms") : a3.e.m(new StringBuilder(), (j + 500000000) / 1000000000, " s ");
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String format = String.format("%6s", Arrays.copyOf(new Object[]{m5}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(format, *args)");
        return format;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static double q(double d6, String str, double d7, double d8) {
        double doubleValue;
        String trim = str.trim();
        int length = trim.length();
        int i5 = length - 1;
        if (length == 0 || trim.equals("normal")) {
            return 0.0d;
        }
        if (trim.codePointAt(i5) == 37) {
            return (Double.valueOf(trim.substring(0, i5)).doubleValue() / 100.0d) * d6;
        }
        int i6 = length - 2;
        if (i6 > 0) {
            String substring = trim.substring(i6);
            substring.getClass();
            switch (substring) {
                case "cm":
                    d8 = 35.43307d;
                    length = i6;
                    break;
                case "em":
                    length = i6;
                    break;
                case "in":
                    d8 = 90.0d;
                    length = i6;
                    break;
                case "mm":
                    d8 = 3.543307d;
                    length = i6;
                    break;
                case "pc":
                    d8 = 15.0d;
                    length = i6;
                    break;
                case "pt":
                    d8 = 1.25d;
                    length = i6;
                    break;
                case "px":
                    length = i6;
                    d8 = 1.0d;
                    break;
                default:
                    d8 = 1.0d;
                    break;
            }
            doubleValue = Double.valueOf(trim.substring(0, length)).doubleValue() * d8;
        } else {
            doubleValue = Double.valueOf(trim).doubleValue();
        }
        return doubleValue * d7;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static double r(com.horcrux.svg.r0 r0Var, double d6, double d7, double d8) {
        double d10;
        if (r0Var == null) {
            return 0.0d;
        }
        SVGLength$UnitType sVGLength$UnitType = r0Var.f6419b;
        double d11 = r0Var.a;
        switch (l0.a[sVGLength$UnitType.ordinal()]) {
            case 1:
            case 2:
                d8 = 1.0d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 3:
                d10 = (d11 / 100.0d) * d6;
                break;
            case 4:
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 5:
                d8 /= 2.0d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 6:
                d8 = 35.43307d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 7:
                d8 = 3.543307d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 8:
                d8 = 90.0d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 9:
                d8 = 1.25d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            case 10:
                d8 = 15.0d;
                d11 *= d8;
                d10 = d11 * d7;
                break;
            default:
                d10 = d11 * d7;
                break;
        }
        return d10 + 0.0d;
    }

    public static MediaType s(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Matcher matcher = MediaType.f16040d.matcher(str);
        if (!matcher.lookingAt()) {
            throw new IllegalArgumentException(k0.d.h('\"', "No subtype found for: \"", str).toString());
        }
        String group = matcher.group(1);
        Intrinsics.checkNotNullExpressionValue(group, "typeSubtype.group(1)");
        Locale US = Locale.US;
        String o6 = a3.e.o(US, "US", group, US, "this as java.lang.String).toLowerCase(locale)");
        String group2 = matcher.group(2);
        Intrinsics.checkNotNullExpressionValue(group2, "typeSubtype.group(2)");
        Intrinsics.checkNotNullExpressionValue(US, "US");
        Intrinsics.checkNotNullExpressionValue(group2.toLowerCase(US), "this as java.lang.String).toLowerCase(locale)");
        ArrayList arrayList = new ArrayList();
        Matcher matcher2 = MediaType.f16041e.matcher(str);
        int end = matcher.end();
        while (end < str.length()) {
            matcher2.region(end, str.length());
            if (!matcher2.lookingAt()) {
                StringBuilder sb2 = new StringBuilder("Parameter is not formatted correctly: \"");
                String substring = str.substring(end);
                Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
                sb2.append(substring);
                sb2.append("\" for: \"");
                throw new IllegalArgumentException(s4.h.h(sb2, str, '\"').toString());
            }
            String group3 = matcher2.group(1);
            if (group3 == null) {
                end = matcher2.end();
            } else {
                String group4 = matcher2.group(2);
                if (group4 == null) {
                    group4 = matcher2.group(3);
                } else if (kotlin.text.x.o(group4, "'", false) && kotlin.text.x.h(group4, "'", false) && group4.length() > 2) {
                    group4 = group4.substring(1, group4.length() - 1);
                    Intrinsics.checkNotNullExpressionValue(group4, "this as java.lang.String…ing(startIndex, endIndex)");
                }
                arrayList.add(group3);
                arrayList.add(group4);
                end = matcher2.end();
            }
        }
        Object[] array = arrayList.toArray(new String[0]);
        if (array != null) {
            return new MediaType(str, o6, (String[]) array);
        }
        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
    }

    public static h5.s t(int i5, int i6, h5.s sVar, h5.q qVar, h5.q qVar2) {
        int i10 = qVar.a;
        int i11 = qVar.f9557b;
        int i12 = (i10 - qVar2.a) / 2;
        int i13 = (i11 - qVar2.f9557b) / 2;
        float f2 = i5 / i10;
        float f10 = i6 / i11;
        return new h5.s(Math.max(Math.round((sVar.a + i12) * f2), 0), Math.max(Math.round((sVar.f9558b + i13) * f10), 0), Math.min(Math.round((sVar.f9559c + i12) * f2), i5), Math.min(Math.round((sVar.f9560d + i13) * f10), i6));
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, kotlin.Lazy] */
    public static final Field u(KProperty kProperty) {
        Intrinsics.checkNotNullParameter(kProperty, "<this>");
        o1 c6 = c2.c(kProperty);
        if (c6 != null) {
            return (Field) c6.H.getValue();
        }
        return null;
    }

    public static final Method v(KFunction kFunction) {
        dp.g b10;
        Intrinsics.checkNotNullParameter(kFunction, "<this>");
        cp.r a10 = c2.a(kFunction);
        Member b11 = (a10 == null || (b10 = a10.b()) == null) ? null : b10.b();
        if (b11 instanceof Method) {
            return (Method) b11;
        }
        return null;
    }

    public static float w(MotionEvent event, boolean z5) {
        Intrinsics.checkNotNullParameter(event, "event");
        int actionIndex = event.getActionMasked() == 6 ? event.getActionIndex() : -1;
        if (!z5) {
            int pointerCount = event.getPointerCount();
            int i5 = pointerCount - 1;
            if (i5 == actionIndex) {
                i5 = pointerCount - 2;
            }
            return event.getX(i5);
        }
        int pointerCount2 = event.getPointerCount();
        float f2 = 0.0f;
        int i6 = 0;
        for (int i10 = 0; i10 < pointerCount2; i10++) {
            if (i10 != actionIndex) {
                i6++;
                f2 = event.getX(i10) + f2;
            }
        }
        return f2 / i6;
    }

    public static float x(MotionEvent event, boolean z5) {
        Intrinsics.checkNotNullParameter(event, "event");
        int actionIndex = event.getActionMasked() == 6 ? event.getActionIndex() : -1;
        if (!z5) {
            int pointerCount = event.getPointerCount();
            int i5 = pointerCount - 1;
            if (i5 == actionIndex) {
                i5 = pointerCount - 2;
            }
            return event.getY(i5);
        }
        int pointerCount2 = event.getPointerCount();
        float f2 = 0.0f;
        int i6 = 0;
        for (int i10 = 0; i10 < pointerCount2; i10++) {
            if (i10 != actionIndex) {
                i6++;
                f2 = event.getY(i10) + f2;
            }
        }
        return f2 / i6;
    }

    public static final BitmapDrawable y(MaterialToolbar toolbar, Drawable drawable) {
        Bitmap bitmap;
        Intrinsics.checkNotNullParameter(toolbar, "toolbar");
        Intrinsics.checkNotNullParameter(drawable, "drawable");
        int applyDimension = (int) TypedValue.applyDimension(1, 24.0f, toolbar.getResources().getDisplayMetrics());
        int intrinsicWidth = drawable.getIntrinsicWidth();
        int intrinsicHeight = drawable.getIntrinsicHeight();
        int i5 = (intrinsicWidth <= 0 || intrinsicHeight <= 0) ? applyDimension : (int) (applyDimension * (intrinsicWidth / intrinsicHeight));
        if (drawable instanceof BitmapDrawable) {
            BitmapDrawable bitmapDrawable = (BitmapDrawable) drawable;
            if (bitmapDrawable.getBitmap() == null) {
                throw new IllegalArgumentException("bitmap is null");
            }
            bitmap = (i5 == bitmapDrawable.getBitmap().getWidth() && applyDimension == bitmapDrawable.getBitmap().getHeight()) ? bitmapDrawable.getBitmap() : Bitmap.createScaledBitmap(bitmapDrawable.getBitmap(), i5, applyDimension, true);
        } else {
            Rect bounds = drawable.getBounds();
            int i6 = bounds.left;
            int i10 = bounds.top;
            int i11 = bounds.right;
            int i12 = bounds.bottom;
            Bitmap createBitmap = Bitmap.createBitmap(i5, applyDimension, Bitmap.Config.ARGB_8888);
            drawable.setBounds(0, 0, i5, applyDimension);
            drawable.draw(new Canvas(createBitmap));
            drawable.setBounds(i6, i10, i11, i12);
            bitmap = createBitmap;
        }
        bitmap.setDensity(toolbar.getResources().getDisplayMetrics().densityDpi);
        Resources resources = toolbar.getResources();
        Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
        return new BitmapDrawable(resources, bitmap);
    }

    public static final boolean z(int i5, byte[] byteArray, byte[] pattern) {
        Intrinsics.checkNotNullParameter(byteArray, "byteArray");
        Intrinsics.checkNotNullParameter(pattern, "pattern");
        if (pattern.length + i5 <= byteArray.length) {
            Intrinsics.checkNotNullParameter(pattern, "<this>");
            Intrinsics.checkNotNullParameter(pattern, "<this>");
            Iterable intRange = new IntRange(0, pattern.length - 1, 1);
            if (!(intRange instanceof Collection) || !((Collection) intRange).isEmpty()) {
                Iterator it = intRange.iterator();
                while (((yo.b) it).f20994i) {
                    int nextInt = ((kotlin.collections.r0) it).nextInt();
                    if (byteArray[i5 + nextInt] != pattern[nextInt]) {
                    }
                }
            }
            return true;
        }
        return false;
    }

    public abstract void F(o0.f fVar, o0.f fVar2);

    public abstract void G(o0.f fVar, Thread thread);

    public abstract void J(v vVar, v vVar2, Window window, View view, boolean z5, boolean z6);

    public void b(Window window) {
        Intrinsics.checkNotNullParameter(window, "window");
    }

    public abstract boolean g(o0.g gVar, o0.c cVar, o0.c cVar2);

    public abstract boolean h(o0.g gVar, Object obj, Object obj2);

    public abstract boolean i(o0.g gVar, o0.f fVar, o0.f fVar2);

    public abstract List k(String str, List list);
}
