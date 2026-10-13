package com.facebook.imagepipeline.nativecode;

import a3.r;
import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.graphics.Color;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Trace;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;
import androidx.core.view.g0;
import androidx.fragment.app.FragmentManager;
import aq.h;
import aq.m;
import aq.p;
import bs.n1;
import cp.o1;
import cq.j;
import fo.n;
import ha.l;
import hq.e;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import ip.a0;
import ip.f;
import ip.g;
import ip.i;
import ip.o0;
import ip.s0;
import iq.q;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.annotation.Annotation;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.security.cert.Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import java.util.concurrent.Future;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.q0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.ClassBasedDeclarationContainer;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.text.StringsKt;
import kotlin.text.x;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import ps.w;
import uq.u;
import uq.v;
import yq.b1;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.p0;
import yq.s;
import yq.y;
import yq.z0;
import zo.k;
import zq.d;

/* loaded from: classes3.dex */
public abstract class c {
    public static boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public static boolean f4678b = false;

    /* renamed from: c, reason: collision with root package name */
    public static long f4679c = 30000;

    /* renamed from: d, reason: collision with root package name */
    public static int f4680d = 3;

    /* renamed from: e, reason: collision with root package name */
    public static volatile boolean f4681e = true;

    /* renamed from: f, reason: collision with root package name */
    public static long f4682f = 0;

    /* renamed from: g, reason: collision with root package name */
    public static Method f4683g = null;

    /* renamed from: h, reason: collision with root package name */
    public static Method f4684h = null;

    /* renamed from: i, reason: collision with root package name */
    public static Method f4685i = null;
    public static boolean j = true;
    public static Field k;

    /* renamed from: l, reason: collision with root package name */
    public static boolean f4686l;

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    public static final Class A(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        Class<?> jClass = ((ClassBasedDeclarationContainer) kClass).getJClass();
        if (!jClass.isPrimitive()) {
            Intrinsics.checkNotNull(jClass, "null cannot be cast to non-null type java.lang.Class<T of kotlin.jvm.JvmClassMappingKt.<get-javaObjectType>>");
            return jClass;
        }
        String name = jClass.getName();
        switch (name.hashCode()) {
            case -1325958191:
                if (name.equals("double")) {
                    jClass = Double.class;
                    break;
                }
                break;
            case 104431:
                if (name.equals("int")) {
                    jClass = Integer.class;
                    break;
                }
                break;
            case 3039496:
                if (name.equals("byte")) {
                    jClass = Byte.class;
                    break;
                }
                break;
            case 3052374:
                if (name.equals("char")) {
                    jClass = Character.class;
                    break;
                }
                break;
            case 3327612:
                if (name.equals("long")) {
                    jClass = Long.class;
                    break;
                }
                break;
            case 3625364:
                if (name.equals("void")) {
                    jClass = Void.class;
                    break;
                }
                break;
            case 64711720:
                if (name.equals("boolean")) {
                    jClass = Boolean.class;
                    break;
                }
                break;
            case 97526364:
                if (name.equals("float")) {
                    jClass = Float.class;
                    break;
                }
                break;
            case 109413500:
                if (name.equals("short")) {
                    jClass = Short.class;
                    break;
                }
                break;
        }
        Intrinsics.checkNotNull(jClass, "null cannot be cast to non-null type java.lang.Class<T of kotlin.jvm.JvmClassMappingKt.<get-javaObjectType>>");
        return jClass;
    }

    public static final Class B(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        Class<?> jClass = ((ClassBasedDeclarationContainer) kClass).getJClass();
        if (jClass.isPrimitive()) {
            Intrinsics.checkNotNull(jClass, "null cannot be cast to non-null type java.lang.Class<T of kotlin.jvm.JvmClassMappingKt.<get-javaPrimitiveType>>");
            return jClass;
        }
        String name = jClass.getName();
        switch (name.hashCode()) {
            case -2056817302:
                if (name.equals("java.lang.Integer")) {
                    return Integer.TYPE;
                }
                return null;
            case -527879800:
                if (name.equals("java.lang.Float")) {
                    return Float.TYPE;
                }
                return null;
            case -515992664:
                if (name.equals("java.lang.Short")) {
                    return Short.TYPE;
                }
                return null;
            case 155276373:
                if (name.equals("java.lang.Character")) {
                    return Character.TYPE;
                }
                return null;
            case 344809556:
                if (name.equals("java.lang.Boolean")) {
                    return Boolean.TYPE;
                }
                return null;
            case 398507100:
                if (name.equals("java.lang.Byte")) {
                    return Byte.TYPE;
                }
                return null;
            case 398795216:
                if (name.equals("java.lang.Long")) {
                    return Long.TYPE;
                }
                return null;
            case 399092968:
                if (name.equals("java.lang.Void")) {
                    return Void.TYPE;
                }
                return null;
            case 761287205:
                if (name.equals("java.lang.Double")) {
                    return Double.TYPE;
                }
                return null;
            default:
                return null;
        }
    }

    public static final KClass C(Class cls) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        return Reflection.getOrCreateKotlinClass(cls);
    }

    public static SharedPreferences D(Context context) {
        Context applicationContext = context.getApplicationContext();
        if (applicationContext != null) {
            context = applicationContext;
        }
        return context.getSharedPreferences("com.google.firebase.messaging", 0);
    }

    public static String E(Activity activity, Uri uri) {
        Throwable th2;
        Cursor cursor = null;
        if (!"content".equalsIgnoreCase(uri.getScheme())) {
            if ("file".equalsIgnoreCase(uri.getScheme())) {
                return uri.getPath();
            }
            return null;
        }
        if ("com.google.android.apps.photos.content".equals(uri.getAuthority())) {
            return uri.getLastPathSegment();
        }
        try {
            Cursor query = activity.getContentResolver().query(uri, new String[]{"_data", "_display_name"}, null, null, null);
            if (query != null) {
                try {
                    if (query.moveToFirst()) {
                        int columnIndex = query.getColumnIndex("_data");
                        if ((columnIndex > -1 ? query.getString(columnIndex) : null) != null) {
                            String string = query.getString(columnIndex);
                            query.close();
                            return string;
                        }
                        String absolutePath = Z(activity, query.getString(query.getColumnIndexOrThrow("_display_name")), uri).getAbsolutePath();
                        query.close();
                        return absolutePath;
                    }
                } catch (Throwable th3) {
                    th2 = th3;
                    cursor = query;
                    if (cursor == null) {
                        throw th2;
                    }
                    cursor.close();
                    throw th2;
                }
            }
            if (query != null) {
                query.close();
            }
            return null;
        } catch (Throwable th4) {
            th2 = th4;
        }
    }

    public static final y F(s0 s0Var) {
        Object obj;
        Intrinsics.checkNotNullParameter(s0Var, "<this>");
        List upperBounds = s0Var.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
        upperBounds.isEmpty();
        List upperBounds2 = s0Var.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds2, "getUpperBounds(...)");
        Iterator it = upperBounds2.iterator();
        while (true) {
            obj = null;
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            i a10 = ((y) next).r0().a();
            f fVar = a10 instanceof f ? (f) a10 : null;
            if (fVar != null && fVar.b() != g.f12139e && fVar.b() != g.f12142w) {
                obj = next;
                break;
            }
        }
        y yVar = (y) obj;
        if (yVar != null) {
            return yVar;
        }
        List upperBounds3 = s0Var.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds3, "getUpperBounds(...)");
        Object K = CollectionsKt.K(upperBounds3);
        Intrinsics.checkNotNullExpressionValue(K, "first(...)");
        return (y) K;
    }

    public static np.b G(r container, boolean z5, boolean z6, Boolean bool, boolean z7, l kotlinClassFinder, eq.f metadataVersion) {
        u uVar;
        j jVar;
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        j jVar2 = j.INTERFACE;
        if (z5) {
            if (bool == null) {
                throw new IllegalStateException(("isConst should not be null for property (container=" + container + ')').toString());
            }
            if (container instanceof u) {
                u uVar2 = (u) container;
                if (uVar2.f19066h == jVar2) {
                    hq.b bVar = uVar2.f19065g;
                    e e9 = e.e("DefaultImpls");
                    Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                    return io.sentry.config.a.o(kotlinClassFinder, bVar.d(e9), metadataVersion);
                }
            }
            if (bool.booleanValue() && (container instanceof v)) {
                o0 o0Var = (o0) container.f102d;
                h hVar = o0Var instanceof h ? (h) o0Var : null;
                pq.b bVar2 = hVar != null ? hVar.f2638e : null;
                if (bVar2 != null) {
                    String d6 = bVar2.d();
                    Intrinsics.checkNotNullExpressionValue(d6, "getInternalName(...)");
                    hq.c topLevelFqName = new hq.c(x.m(d6, '/', '.'));
                    Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                    return io.sentry.config.a.o(kotlinClassFinder, new hq.b(topLevelFqName.b(), topLevelFqName.a.f()), metadataVersion);
                }
            }
        }
        if (z6 && (container instanceof u)) {
            u uVar3 = (u) container;
            if (uVar3.f19066h == j.COMPANION_OBJECT && (uVar = uVar3.f19064f) != null && ((jVar = uVar.f19066h) == j.CLASS || jVar == j.ENUM_CLASS || (z7 && (jVar == jVar2 || jVar == j.ANNOTATION_CLASS)))) {
                o0 o0Var2 = (o0) uVar.f102d;
                p pVar = o0Var2 instanceof p ? (p) o0Var2 : null;
                if (pVar != null) {
                    return pVar.f2650d;
                }
                return null;
            }
        }
        if (container instanceof v) {
            o0 o0Var3 = (o0) container.f102d;
            if (o0Var3 instanceof h) {
                Intrinsics.checkNotNull(o0Var3, "null cannot be cast to non-null type org.jetbrains.kotlin.load.kotlin.JvmPackagePartSource");
                h hVar2 = (h) o0Var3;
                np.b bVar3 = hVar2.f2639i;
                return bVar3 == null ? io.sentry.config.a.o(kotlinClassFinder, hVar2.a(), metadataVersion) : bVar3;
            }
        }
        return null;
    }

    public static void I(String str, Exception exc) {
        if (exc instanceof InvocationTargetException) {
            Throwable cause = exc.getCause();
            if (!(cause instanceof RuntimeException)) {
                throw new RuntimeException(cause);
            }
            throw ((RuntimeException) cause);
        }
        Log.v("Trace", "Unable to call " + str + " via reflection", exc);
    }

    public static final boolean J(s0 typeParameter, p0 p0Var, Set set) {
        Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
        List<y> upperBounds = typeParameter.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
        if (upperBounds != null && upperBounds.isEmpty()) {
            return false;
        }
        for (y yVar : upperBounds) {
            Intrinsics.checkNotNull(yVar);
            if (l(yVar, typeParameter.k().r0(), set) && (p0Var == null || Intrinsics.areEqual(yVar.r0(), p0Var))) {
                return true;
            }
        }
        return false;
    }

    public static /* synthetic */ boolean K(s0 s0Var, p0 p0Var, int i5) {
        if ((i5 & 2) != 0) {
            p0Var = null;
        }
        return J(s0Var, p0Var, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final boolean L(o1 o1Var) {
        Intrinsics.checkNotNullParameter(o1Var, "<this>");
        if (o1Var instanceof k) {
            Field u5 = e4.f.u(o1Var);
            if (!(u5 != null ? u5.isAccessible() : true)) {
                return false;
            }
            Intrinsics.checkNotNullParameter(o1Var, "<this>");
            Method v5 = e4.f.v(o1Var.getGetter());
            if (!(v5 != null ? v5.isAccessible() : true)) {
                return false;
            }
            k kVar = (k) o1Var;
            Intrinsics.checkNotNullParameter(kVar, "<this>");
            Method v6 = e4.f.v(kVar.getSetter());
            if (!(v6 != null ? v6.isAccessible() : true)) {
                return false;
            }
        } else {
            Field u6 = e4.f.u(o1Var);
            if (!(u6 != null ? u6.isAccessible() : true)) {
                return false;
            }
            Intrinsics.checkNotNullParameter(o1Var, "<this>");
            Method v7 = e4.f.v(o1Var.getGetter());
            if (!(v7 != null ? v7.isAccessible() : true)) {
                return false;
            }
        }
        return true;
    }

    public static boolean M(int i5) {
        if (i5 == 0) {
            return false;
        }
        ThreadLocal threadLocal = b1.c.a;
        double[] dArr = (double[]) threadLocal.get();
        if (dArr == null) {
            dArr = new double[3];
            threadLocal.set(dArr);
        }
        int red = Color.red(i5);
        int green = Color.green(i5);
        int blue = Color.blue(i5);
        if (dArr.length != 3) {
            throw new IllegalArgumentException("outXyz must have a length of 3.");
        }
        double d6 = red / 255.0d;
        double pow = d6 < 0.04045d ? d6 / 12.92d : Math.pow((d6 + 0.055d) / 1.055d, 2.4d);
        double d7 = green / 255.0d;
        double pow2 = d7 < 0.04045d ? d7 / 12.92d : Math.pow((d7 + 0.055d) / 1.055d, 2.4d);
        double d8 = blue / 255.0d;
        double pow3 = d8 < 0.04045d ? d8 / 12.92d : Math.pow((d8 + 0.055d) / 1.055d, 2.4d);
        dArr[0] = ((0.1805d * pow3) + (0.3576d * pow2) + (0.4124d * pow)) * 100.0d;
        double d10 = ((0.0722d * pow3) + (0.7152d * pow2) + (0.2126d * pow)) * 100.0d;
        dArr[1] = d10;
        dArr[2] = ((pow3 * 0.9505d) + (pow2 * 0.1192d) + (pow * 0.0193d)) * 100.0d;
        return d10 / 100.0d > 0.5d;
    }

    public static boolean N() {
        if (Build.VERSION.SDK_INT >= 29) {
            return l3.a.c();
        }
        try {
            if (f4683g == null) {
                f4682f = Trace.class.getField("TRACE_TAG_APP").getLong(null);
                f4683g = Trace.class.getMethod("isTagEnabled", Long.TYPE);
            }
            return ((Boolean) f4683g.invoke(null, Long.valueOf(f4682f))).booleanValue();
        } catch (Exception e9) {
            I("isTagEnabled", e9);
            return false;
        }
    }

    public static final boolean O(y yVar, y superType) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(superType, "superType");
        return d.a.b(yVar, superType);
    }

    public static final boolean P(int i5, String str) {
        char charAt = str.charAt(i5);
        return 'A' <= charAt && charAt < '[';
    }

    public static int Q(int i5, int i6, float f2) {
        return b1.c.c(b1.c.e(i6, Math.round(Color.alpha(i6) * f2)), i5);
    }

    public static void R(Class cls, Object obj, ILogger iLogger) {
        iLogger.u(SentryLevel.DEBUG, "%s is not %s", obj != null ? obj.getClass().getCanonicalName() : "Hint", cls.getCanonicalName());
    }

    public static final b1 S(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        if (yVar == null) {
            z0.a(1);
            throw null;
        }
        b1 g6 = z0.g(yVar, true);
        Intrinsics.checkNotNullExpressionValue(g6, "makeNullable(...)");
        return g6;
    }

    public static final y T(y yVar, jp.h newAnnotations) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(newAnnotations, "newAnnotations");
        return (yVar.getAnnotations().isEmpty() && newAnnotations.isEmpty()) ? yVar : yVar.w0().z0(yq.c.r(yVar.q0(), newAnnotations));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v11, types: [yq.b1] */
    public static final b1 U(y yVar) {
        c0 c0Var;
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        if (w02 instanceof s) {
            s sVar = (s) w02;
            c0 c0Var2 = sVar.f21068e;
            if (!c0Var2.r0().getParameters().isEmpty() && c0Var2.r0().a() != null) {
                List parameters = c0Var2.r0().getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                ArrayList arrayList = new ArrayList(d0.l(parameters, 10));
                Iterator it = parameters.iterator();
                while (it.hasNext()) {
                    arrayList.add(new h0((s0) it.next()));
                }
                c0Var2 = yq.c.q(c0Var2, arrayList, null, 2);
            }
            c0 c0Var3 = sVar.f21069i;
            if (!c0Var3.r0().getParameters().isEmpty() && c0Var3.r0().a() != null) {
                List parameters2 = c0Var3.r0().getParameters();
                Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
                ArrayList arrayList2 = new ArrayList(d0.l(parameters2, 10));
                Iterator it2 = parameters2.iterator();
                while (it2.hasNext()) {
                    arrayList2.add(new h0((s0) it2.next()));
                }
                c0Var3 = yq.c.q(c0Var3, arrayList2, null, 2);
            }
            c0Var = yq.c.e(c0Var2, c0Var3);
        } else {
            if (!(w02 instanceof c0)) {
                throw new n();
            }
            c0 c0Var4 = (c0) w02;
            boolean isEmpty = c0Var4.r0().getParameters().isEmpty();
            c0Var = c0Var4;
            if (!isEmpty) {
                i a10 = c0Var4.r0().a();
                c0Var = c0Var4;
                if (a10 != null) {
                    List parameters3 = c0Var4.r0().getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters3, "getParameters(...)");
                    ArrayList arrayList3 = new ArrayList(d0.l(parameters3, 10));
                    Iterator it3 = parameters3.iterator();
                    while (it3.hasNext()) {
                        arrayList3.add(new h0((s0) it3.next()));
                    }
                    c0Var = yq.c.q(c0Var4, arrayList3, null, 2);
                }
            }
        }
        return yq.c.h(c0Var, w02);
    }

    public static final String X(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        StringBuilder sb2 = new StringBuilder(str.length());
        int length = str.length();
        for (int i5 = 0; i5 < length; i5++) {
            char charAt = str.charAt(i5);
            if ('A' <= charAt && charAt < '[') {
                charAt = Character.toLowerCase(charAt);
            }
            sb2.append(charAt);
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public static String Y(String str) {
        return str.length() <= 127 ? str : str.substring(0, 127);
    }

    public static File Z(Context context, String str, Uri uri) {
        String str2 = context.getCacheDir() + "/react-native-image-crop-picker";
        new File(str2).mkdir();
        File file = new File(new File(str2), str.substring(str.lastIndexOf(47) + 1));
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            byte[] bArr = new byte[8192];
            InputStream openInputStream = context.getContentResolver().openInputStream(uri);
            while (true) {
                int read = openInputStream.read(bArr, 0, 8192);
                if (read <= 0) {
                    fileOutputStream.close();
                    openInputStream.close();
                    return file;
                }
                fileOutputStream.write(bArr, 0, read);
                fileOutputStream.flush();
            }
        } catch (Exception e9) {
            e9.printStackTrace();
            return file;
        }
    }

    public static final n1 a(String serialName, zr.f kind) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(kind, "kind");
        if (StringsKt.K(serialName)) {
            throw new IllegalArgumentException("Blank serial names are prohibited");
        }
        go.i iVar = bs.o1.a;
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Object it = ((go.l) bs.o1.a.values()).iterator();
        while (((g0) it).hasNext()) {
            KSerializer kSerializer = (KSerializer) ((go.g) it).next();
            if (Intrinsics.areEqual(serialName, kSerializer.getDescriptor().a())) {
                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("\n                The name of serial descriptor should uniquely identify associated serializer.\n                For serial name ", serialName, " there already exists ");
                m5.append(Reflection.getOrCreateKotlinClass(kSerializer.getClass()).getSimpleName());
                m5.append(".\n                Please refer to SerialDescriptor documentation for additional information.\n            ");
                throw new IllegalArgumentException(kotlin.text.r.b(m5.toString()));
            }
        }
        return new n1(serialName, kind);
    }

    public static final void b(Encoder encoder) {
        Intrinsics.checkNotNullParameter(encoder, "<this>");
        if ((encoder instanceof ds.c0 ? (ds.c0) encoder : null) != null) {
            return;
        }
        throw new IllegalStateException("This serializer can be used only with Json format.Expected Encoder to be JsonEncoder, got " + Reflection.getOrCreateKotlinClass(encoder.getClass()));
    }

    public static final cs.g c(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "<this>");
        cs.g gVar = decoder instanceof cs.g ? (cs.g) decoder : null;
        if (gVar != null) {
            return gVar;
        }
        throw new IllegalStateException("This serializer can be used only with Json format.Expected Decoder to be JsonDecoder, got " + Reflection.getOrCreateKotlinClass(decoder.getClass()));
    }

    public static final h0 d(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        return new h0(yVar);
    }

    public static void e(String str) {
        Trace.beginSection(Y(str));
    }

    public static final zr.g f(String serialName, SerialDescriptor[] typeParameters, Function1 builderAction) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(typeParameters, "typeParameters");
        Intrinsics.checkNotNullParameter(builderAction, "builderAction");
        if (StringsKt.K(serialName)) {
            throw new IllegalArgumentException("Blank serial names are prohibited");
        }
        zr.a aVar = new zr.a(serialName);
        builderAction.invoke(aVar);
        return new zr.g(serialName, zr.j.f21433t, aVar.f21406c.size(), kotlin.collections.x.H(typeParameters), aVar);
    }

    public static final zr.g g(String serialName, d9.a kind, SerialDescriptor[] typeParameters, Function1 builder) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(typeParameters, "typeParameters");
        Intrinsics.checkNotNullParameter(builder, "builder");
        if (StringsKt.K(serialName)) {
            throw new IllegalArgumentException("Blank serial names are prohibited");
        }
        if (Intrinsics.areEqual(kind, zr.j.f21433t)) {
            throw new IllegalArgumentException("For StructureKind.CLASS please use 'buildClassSerialDescriptor' instead");
        }
        zr.a aVar = new zr.a(serialName);
        builder.invoke(aVar);
        return new zr.g(serialName, kind, aVar.f21406c.size(), kotlin.collections.x.H(typeParameters), aVar);
    }

    public static final String i(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str.length() == 0) {
            return str;
        }
        char charAt = str.charAt(0);
        if ('a' > charAt || charAt >= '{') {
            return str;
        }
        StringBuilder sb2 = new StringBuilder(str.length());
        sb2.append(Character.toUpperCase(charAt));
        sb2.append((CharSequence) str, 1, str.length());
        return sb2.toString();
    }

    public static final void j(Closeable closeable, Throwable th2) {
        if (closeable != null) {
            if (th2 == null) {
                closeable.close();
                return;
            }
            try {
                closeable.close();
            } catch (Throwable th3) {
                fo.f.a(th2, th3);
            }
        }
    }

    public static int k(int i5, int i6) {
        return b1.c.e(i5, (Color.alpha(i5) * i6) / 255);
    }

    public static final boolean l(y yVar, p0 p0Var, Set set) {
        boolean l6;
        if (Intrinsics.areEqual(yVar.r0(), p0Var)) {
            return true;
        }
        i a10 = yVar.r0().a();
        ip.j jVar = a10 instanceof ip.j ? (ip.j) a10 : null;
        List l7 = jVar != null ? jVar.l() : null;
        Iterable m02 = CollectionsKt.m0(yVar.l0());
        if (!(m02 instanceof Collection) || !((Collection) m02).isEmpty()) {
            Iterator it = m02.iterator();
            do {
                q0 q0Var = (q0) it;
                if (q0Var.f13519e.hasNext()) {
                    IndexedValue indexedValue = (IndexedValue) q0Var.next();
                    int i5 = indexedValue.a;
                    yq.s0 s0Var = (yq.s0) indexedValue.f13483b;
                    s0 s0Var2 = l7 != null ? (s0) CollectionsKt.M(i5, l7) : null;
                    if ((s0Var2 == null || set == null || !set.contains(s0Var2)) && !s0Var.c()) {
                        y b10 = s0Var.b();
                        Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                        l6 = l(b10, p0Var, set);
                    } else {
                        l6 = false;
                    }
                }
            } while (!l6);
            return true;
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:49:0x00c5, code lost:
    
        if (r3 != bq.a.F) goto L43;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x00c9, code lost:
    
        if (r1.f3151v != null) goto L43;
     */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00e8 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00e9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static np.b m(Class klass) {
        aj.a aVar;
        m mVar;
        bq.a aVar2;
        Intrinsics.checkNotNullParameter(klass, "klass");
        bq.e visitor = new bq.e();
        visitor.f3148d = null;
        visitor.f3149e = null;
        visitor.f3150i = 0;
        visitor.f3151v = null;
        visitor.f3152w = null;
        visitor.f3153x = null;
        visitor.f3154y = null;
        visitor.E = null;
        Intrinsics.checkNotNullParameter(klass, "klass");
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        Iterator it = ArrayIteratorKt.iterator(klass.getDeclaredAnnotations());
        while (it.hasNext()) {
            Annotation annotation = (Annotation) it.next();
            Intrinsics.checkNotNull(annotation);
            Class z5 = z(u(annotation));
            hq.b a10 = op.c.a(z5);
            Intrinsics.checkNotNullParameter(annotation, "annotation");
            hq.c a11 = a10.a();
            if (a11.equals(rp.y.a)) {
                mVar = new gj.c(6, visitor);
            } else if (a11.equals(rp.y.f17506o)) {
                mVar = new l(visitor);
            } else if (bq.e.F || visitor.f3154y != null || (aVar2 = (bq.a) bq.e.G.get(a10)) == null) {
                mVar = null;
            } else {
                visitor.f3154y = aVar2;
                mVar = new u4.b(6, visitor);
            }
            if (mVar != null) {
                android.support.v4.media.session.b.w(mVar, annotation, z5);
            }
        }
        eq.f fVar = eq.f.f8216g;
        if (visitor.f3154y != null && visitor.f3148d != null) {
            eq.f fVar2 = new eq.f(visitor.f3148d, (visitor.f3150i & 8) != 0);
            if (fVar2.b(fVar)) {
                bq.a aVar3 = visitor.f3154y;
                if (aVar3 != bq.a.f3138w) {
                    if (aVar3 != bq.a.f3139x) {
                    }
                }
            } else {
                visitor.f3153x = visitor.f3151v;
                visitor.f3151v = null;
            }
            String[] strArr = visitor.E;
            if (strArr != null) {
                gq.a.a(strArr);
            }
            aVar = new aj.a(visitor.f3154y, fVar2, visitor.f3151v, visitor.f3153x, visitor.f3152w, visitor.f3149e, visitor.f3150i);
            if (aVar != null) {
                return null;
            }
            return new np.b(klass, aVar);
        }
        aVar = null;
        if (aVar != null) {
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x003b, code lost:
    
        if (r1 <= r0.f8187c) goto L14;
     */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x008c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static vq.c n(hq.c fqName, xq.l storageManager, a0 module, InputStream inputStream) {
        cq.g0 g0Var;
        cq.g0 g0Var2;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(inputStream, "inputStream");
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        try {
            dq.a aVar = dq.a.f7678f;
            dq.a F = b.F(inputStream);
            dq.a ourVersion = dq.a.f7678f;
            int i5 = F.f8187c;
            Intrinsics.checkNotNullParameter(ourVersion, "ourVersion");
            int i6 = F.f8186b;
            if (i6 == 0) {
                if (ourVersion.f8186b == 0 && i5 == ourVersion.f8187c) {
                    iq.g gVar = new iq.g();
                    dq.b.a(gVar);
                    cq.a aVar2 = cq.g0.H;
                    aVar2.getClass();
                    iq.e eVar = new iq.e(inputStream);
                    iq.a aVar3 = (iq.a) aVar2.a(eVar, gVar);
                    try {
                        eVar.a(0);
                        if (!aVar3.b()) {
                            q qVar = new q(new ai.k().getMessage());
                            qVar.f12236d = aVar3;
                            throw qVar;
                        }
                        g0Var = (cq.g0) aVar3;
                        g0Var2 = g0Var;
                        inputStream.close();
                        if (g0Var2 != null) {
                            return new vq.c(fqName, storageManager, module, g0Var2, F);
                        }
                        throw new UnsupportedOperationException("Kotlin built-in definition format version is not supported: expected " + ourVersion + ", actual " + F + ". Please update Kotlin");
                    } catch (q e9) {
                        e9.f12236d = aVar3;
                        throw e9;
                    }
                }
                g0Var = null;
                g0Var2 = g0Var;
                inputStream.close();
                if (g0Var2 != null) {
                }
            } else {
                if (i6 == ourVersion.f8186b) {
                }
                g0Var = null;
                g0Var2 = g0Var;
                inputStream.close();
                if (g0Var2 != null) {
                }
            }
        } finally {
        }
    }

    public static Handler o(Looper looper) {
        if (Build.VERSION.SDK_INT >= 28) {
            return androidx.core.view.h.b(looper);
        }
        try {
            return (Handler) Handler.class.getDeclaredConstructor(Looper.class, Handler.Callback.class, Boolean.TYPE).newInstance(looper, null, Boolean.TRUE);
        } catch (IllegalAccessException e9) {
            e = e9;
            Log.w("HandlerCompat", "Unable to invoke Handler(Looper, Callback, boolean) constructor", e);
            return new Handler(looper);
        } catch (InstantiationException e10) {
            e = e10;
            Log.w("HandlerCompat", "Unable to invoke Handler(Looper, Callback, boolean) constructor", e);
            return new Handler(looper);
        } catch (NoSuchMethodException e11) {
            e = e11;
            Log.w("HandlerCompat", "Unable to invoke Handler(Looper, Callback, boolean) constructor", e);
            return new Handler(looper);
        } catch (InvocationTargetException e12) {
            Throwable cause = e12.getCause();
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            if (cause instanceof Error) {
                throw ((Error) cause);
            }
            throw new RuntimeException(cause);
        }
    }

    public static final h0 p(y type, c1 projectionKind, s0 s0Var) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(projectionKind, "projectionKind");
        if ((s0Var != null ? s0Var.getVariance() : null) == projectionKind) {
            projectionKind = c1.f21013i;
        }
        return new h0(type, projectionKind);
    }

    public static final androidx.fragment.app.a q(FragmentManager fragmentManager) {
        Intrinsics.checkNotNullParameter(fragmentManager, "<this>");
        fragmentManager.getClass();
        androidx.fragment.app.a aVar = new androidx.fragment.app.a(fragmentManager);
        aVar.f1949p = true;
        Intrinsics.checkNotNullExpressionValue(aVar, "setReorderingAllowed(...)");
        return aVar;
    }

    public static synchronized void r() {
        synchronized (c.class) {
            if (!a) {
                jb.a.C("static-webp");
                a = true;
            }
        }
    }

    public static final void s(y yVar, y yVar2, LinkedHashSet linkedHashSet, Set set) {
        i a10 = yVar.r0().a();
        if (a10 instanceof s0) {
            if (!Intrinsics.areEqual(yVar.r0(), yVar2.r0())) {
                linkedHashSet.add(a10);
                return;
            }
            for (y yVar3 : ((s0) a10).getUpperBounds()) {
                Intrinsics.checkNotNull(yVar3);
                s(yVar3, yVar2, linkedHashSet, set);
            }
            return;
        }
        i a11 = yVar.r0().a();
        ip.j jVar = a11 instanceof ip.j ? (ip.j) a11 : null;
        List l6 = jVar != null ? jVar.l() : null;
        int i5 = 0;
        for (yq.s0 s0Var : yVar.l0()) {
            int i6 = i5 + 1;
            s0 s0Var2 = l6 != null ? (s0) CollectionsKt.M(i5, l6) : null;
            if ((s0Var2 == null || set == null || !set.contains(s0Var2)) && !s0Var.c() && !CollectionsKt.E(linkedHashSet, s0Var.b().r0().a()) && !Intrinsics.areEqual(s0Var.b().r0(), yVar2.r0())) {
                y b10 = s0Var.b();
                Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                s(b10, yVar2, linkedHashSet, set);
            }
            i5 = i6;
        }
    }

    public static ps.q t(SSLSession sSLSession) {
        List list;
        Intrinsics.checkNotNullParameter(sSLSession, "<this>");
        String cipherSuite = sSLSession.getCipherSuite();
        if (cipherSuite == null) {
            throw new IllegalStateException("cipherSuite == null");
        }
        if (Intrinsics.areEqual(cipherSuite, "TLS_NULL_WITH_NULL_NULL") ? true : Intrinsics.areEqual(cipherSuite, "SSL_NULL_WITH_NULL_NULL")) {
            throw new IOException(Intrinsics.stringPlus("cipherSuite == ", cipherSuite));
        }
        ps.l c6 = ps.l.f16549b.c(cipherSuite);
        String protocol = sSLSession.getProtocol();
        if (protocol == null) {
            throw new IllegalStateException("tlsVersion == null");
        }
        if (Intrinsics.areEqual("NONE", protocol)) {
            throw new IOException("tlsVersion == NONE");
        }
        w j5 = jb.a.j(protocol);
        try {
            Certificate[] peerCertificates = sSLSession.getPeerCertificates();
            list = peerCertificates != null ? qs.b.k(Arrays.copyOf(peerCertificates, peerCertificates.length)) : m0.f13512d;
        } catch (SSLPeerUnverifiedException unused) {
            list = m0.f13512d;
        }
        Certificate[] localCertificates = sSLSession.getLocalCertificates();
        return new ps.q(j5, c6, localCertificates != null ? qs.b.k(Arrays.copyOf(localCertificates, localCertificates.length)) : m0.f13512d, new ps.p(list, 1));
    }

    public static final KClass u(Annotation annotation) {
        Intrinsics.checkNotNullParameter(annotation, "<this>");
        Class<? extends Annotation> annotationType = annotation.annotationType();
        Intrinsics.checkNotNullExpressionValue(annotationType, "annotationType(...)");
        KClass C = C(annotationType);
        Intrinsics.checkNotNull(C, "null cannot be cast to non-null type kotlin.reflect.KClass<out T of kotlin.jvm.JvmClassMappingKt.<get-annotationClass>>");
        return C;
    }

    public static final fp.i v(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        fp.i g6 = yVar.r0().g();
        Intrinsics.checkNotNullExpressionValue(g6, "getBuiltIns(...)");
        return g6;
    }

    public static int w(int i5, View view) {
        Context context = view.getContext();
        TypedValue L0 = m3.n.L0(view.getContext(), view.getClass().getCanonicalName(), i5);
        int i6 = L0.resourceId;
        return i6 != 0 ? context.getColor(i6) : L0.data;
    }

    public static int x(Context context, int i5, int i6) {
        Integer num;
        TypedValue I0 = m3.n.I0(context, i5);
        if (I0 != null) {
            int i10 = I0.resourceId;
            num = Integer.valueOf(i10 != 0 ? context.getColor(i10) : I0.data);
        } else {
            num = null;
        }
        return num != null ? num.intValue() : i6;
    }

    public static Object y(Future future) {
        Object obj;
        if (!future.isDone()) {
            throw new IllegalStateException(ys.l.n("Future was expected to be done: %s", future));
        }
        boolean z5 = false;
        while (true) {
            try {
                obj = future.get();
                break;
            } catch (InterruptedException unused) {
                z5 = true;
            } catch (Throwable th2) {
                if (z5) {
                    Thread.currentThread().interrupt();
                }
                throw th2;
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
        return obj;
    }

    public static final Class z(KClass kClass) {
        Intrinsics.checkNotNullParameter(kClass, "<this>");
        Class<?> jClass = ((ClassBasedDeclarationContainer) kClass).getJClass();
        Intrinsics.checkNotNull(jClass, "null cannot be cast to non-null type java.lang.Class<T of kotlin.jvm.JvmClassMappingKt.<get-java>>");
        return jClass;
    }

    public float H(View view) {
        if (j) {
            try {
                return ah.d.d(view);
            } catch (NoSuchMethodError unused) {
                j = false;
            }
        }
        return view.getAlpha();
    }

    public void V(View view, float f2) {
        if (j) {
            try {
                ah.d.m(view, f2);
                return;
            } catch (NoSuchMethodError unused) {
                j = false;
            }
        }
        view.setAlpha(f2);
    }

    public void W(int i5, View view) {
        if (!f4686l) {
            try {
                Field declaredField = View.class.getDeclaredField("mViewFlags");
                k = declaredField;
                declaredField.setAccessible(true);
            } catch (NoSuchFieldException unused) {
                Log.i("ViewUtilsApi19", "fetchViewFlagsField: ");
            }
            f4686l = true;
        }
        Field field = k;
        if (field != null) {
            try {
                k.setInt(view, i5 | (field.getInt(view) & (-13)));
            } catch (IllegalAccessException unused2) {
            }
        }
    }
}
