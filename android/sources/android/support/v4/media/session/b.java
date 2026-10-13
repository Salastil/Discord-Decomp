package android.support.v4.media.session;

import a5.e0;
import a5.f0;
import a5.k0;
import android.R;
import android.animation.ObjectAnimator;
import android.animation.PropertyValuesHolder;
import android.animation.TimeInterpolator;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Typeface;
import android.media.ExifInterface;
import android.os.BadParcelableException;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Log;
import android.util.Property;
import android.view.View;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import aq.m;
import com.android.billingclient.api.BillingResult;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.image.ReactImageView;
import com.google.android.gms.internal.play_billing.a4;
import com.google.firebase.messaging.d;
import cp.c2;
import cp.u1;
import e4.r;
import fo.n;
import fp.k;
import fp.o;
import io.sentry.SentryLevel;
import io.sentry.hints.j;
import io.sentry.util.h;
import io.sentry.v5;
import io.sentry.x2;
import ip.f;
import ip.i;
import ip.l;
import ip.m0;
import ip.o0;
import ip.p0;
import ip.q;
import ip.s0;
import ip.v0;
import ip.z;
import java.io.File;
import java.lang.annotation.Annotation;
import java.lang.reflect.Method;
import java.security.cert.X509Certificate;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.d0;
import kotlin.collections.h0;
import kotlin.collections.q0;
import kotlin.collections.v;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kq.g;
import lp.r0;
import lp.u;
import m3.b0;
import okhttp3.CacheControl;
import okhttp3.Request;
import okhttp3.Response;
import okio.ByteString;
import oq.e;
import yq.c0;
import yq.c1;
import yq.y;
import yq.z0;

/* loaded from: classes.dex */
public abstract class b {
    public static boolean a;

    public static int A(Context context, int i5) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(R.style.Animation.Activity, new int[]{i5});
        int resourceId = obtainStyledAttributes.getResourceId(0, -1);
        obtainStyledAttributes.recycle();
        return resourceId;
    }

    public static byte[] B(d dVar) {
        ArrayDeque arrayDeque = new ArrayDeque(20);
        int min = Math.min(8192, Math.max(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, Integer.highestOneBit(0) * 2));
        int i5 = 0;
        while (i5 < 2147483639) {
            int min2 = Math.min(min, 2147483639 - i5);
            byte[] bArr = new byte[min2];
            arrayDeque.add(bArr);
            int i6 = 0;
            while (i6 < min2) {
                int read = dVar.read(bArr, i6, min2 - i6);
                if (read == -1) {
                    return c(arrayDeque, i5);
                }
                i6 += read;
                i5 += read;
            }
            long j = min * (min < 4096 ? 4 : 2);
            min = j > 2147483647L ? Integer.MAX_VALUE : j < -2147483648L ? Integer.MIN_VALUE : (int) j;
        }
        if (dVar.read() == -1) {
            return c(arrayDeque, 2147483639);
        }
        throw new OutOfMemoryError("input is too large to fit in a byte array");
    }

    public static final Class C(l lVar) {
        if (!(lVar instanceof f) || !g.b(lVar)) {
            return null;
        }
        f fVar = (f) lVar;
        Class k = c2.k(fVar);
        if (k != null) {
            return k;
        }
        throw new u1("Class object for the class " + fVar.getName() + " cannot be found (classId=" + e.f((i) lVar) + ')');
    }

    public static final Class D(y yVar) {
        c0 i5;
        Class C = C(yVar.r0().a());
        if (C == null) {
            return null;
        }
        if (z0.e(yVar) && ((i5 = g.i(yVar)) == null || z0.e(i5) || fp.i.G(i5))) {
            return null;
        }
        return C;
    }

    public static Bundle E(Bundle bundle) {
        if (bundle == null) {
            return null;
        }
        bundle.setClassLoader(b.class.getClassLoader());
        try {
            bundle.isEmpty();
            return bundle;
        } catch (BadParcelableException unused) {
            Log.e("MediaSessionCompat", "Could not unparcel the data.");
            return null;
        }
    }

    public static final Object F(bn.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        if (Intrinsics.areEqual(dVar, bn.b.a)) {
            return null;
        }
        if (dVar instanceof bn.c) {
            return ((bn.c) dVar).a;
        }
        throw new n();
    }

    public static void G(int i5, BillingResult billingResult, f0 f0Var, int i6) {
        int i10 = e0.a;
        ((r) f0Var).x(e0.b(i5, 29, billingResult, null, a4.BROADCAST_ACTION_UNSPECIFIED), i6);
    }

    /* JADX WARN: Type inference failed for: r4v13, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r4v8, types: [java.lang.Object, kotlin.Lazy] */
    public static mq.f a(Class cls) {
        int i5 = 0;
        while (cls.isArray()) {
            i5++;
            cls = cls.getComponentType();
            Intrinsics.checkNotNullExpressionValue(cls, "getComponentType(...)");
        }
        if (!cls.isPrimitive()) {
            hq.b a10 = op.c.a(cls);
            String str = hp.d.a;
            hq.c fqName = a10.a();
            Intrinsics.checkNotNullParameter(fqName, "fqName");
            hq.b bVar = (hq.b) hp.d.f10154h.get(fqName.a);
            if (bVar != null) {
                a10 = bVar;
            }
            return new mq.f(a10, i5);
        }
        if (Intrinsics.areEqual(cls, Void.TYPE)) {
            hq.c topLevelFqName = o.f8882d.g();
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            return new mq.f(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()), i5);
        }
        k d6 = pq.c.b(cls.getName()).d();
        Intrinsics.checkNotNullExpressionValue(d6, "getPrimitiveType(...)");
        if (i5 > 0) {
            hq.c topLevelFqName2 = (hq.c) d6.f8871v.getValue();
            Intrinsics.checkNotNullParameter(topLevelFqName2, "topLevelFqName");
            return new mq.f(new hq.b(topLevelFqName2.b(), topLevelFqName2.a.f()), i5 - 1);
        }
        hq.c topLevelFqName3 = (hq.c) d6.f8870i.getValue();
        Intrinsics.checkNotNullParameter(topLevelFqName3, "topLevelFqName");
        return new mq.f(new hq.b(topLevelFqName3.b(), topLevelFqName3.a.f()), i5);
    }

    public static final Object b(Object obj, ip.d descriptor) {
        y k;
        Class D;
        Method l6;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return (((descriptor instanceof m0) && g.e((v0) descriptor)) || (k = k(descriptor)) == null || (D = D(k)) == null || (l6 = l(D, descriptor)) == null) ? obj : l6.invoke(obj, null);
    }

    public static byte[] c(ArrayDeque arrayDeque, int i5) {
        if (arrayDeque.isEmpty()) {
            return new byte[0];
        }
        byte[] bArr = (byte[]) arrayDeque.remove();
        if (bArr.length == i5) {
            return bArr;
        }
        int length = i5 - bArr.length;
        byte[] copyOf = Arrays.copyOf(bArr, i5);
        while (length > 0) {
            byte[] bArr2 = (byte[]) arrayDeque.remove();
            int min = Math.min(length, bArr2.length);
            System.arraycopy(bArr2, 0, copyOf, i5 - length, min);
            length -= min;
        }
        return copyOf;
    }

    public static final cr.i d(c1 c1Var) {
        Intrinsics.checkNotNullParameter(c1Var, "<this>");
        int ordinal = c1Var.ordinal();
        if (ordinal == 0) {
            return cr.i.f7320v;
        }
        if (ordinal == 1) {
            return cr.i.f7318e;
        }
        if (ordinal == 2) {
            return cr.i.f7319i;
        }
        throw new n();
    }

    public static gp.f e(gp.c functionClass, boolean z5) {
        String lowerCase;
        Intrinsics.checkNotNullParameter(functionClass, "functionClass");
        List list = functionClass.H;
        gp.f fVar = new gp.f(functionClass, null, ip.c.f12123d, z5);
        u u02 = functionClass.u0();
        kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
        ArrayList arrayList = new ArrayList();
        for (Object obj : list) {
            if (((s0) obj).getVariance() != c1.f21014v) {
                break;
            }
            arrayList.add(obj);
        }
        v m02 = CollectionsKt.m0(arrayList);
        ArrayList arrayList2 = new ArrayList(d0.l(m02, 10));
        Iterator it = m02.iterator();
        while (true) {
            q0 q0Var = (q0) it;
            if (!q0Var.f13519e.hasNext()) {
                fVar.G0(null, u02, m0Var, m0Var, arrayList2, ((s0) CollectionsKt.Q(list)).k(), z.f12183w, q.f12159e);
                gp.f fVar2 = fVar;
                fVar2.U = true;
                return fVar2;
            }
            IndexedValue indexedValue = (IndexedValue) q0Var.next();
            int i5 = indexedValue.a;
            s0 s0Var = (s0) indexedValue.f13483b;
            String b10 = s0Var.getName().b();
            Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
            if (Intrinsics.areEqual(b10, "T")) {
                lowerCase = "instance";
            } else if (Intrinsics.areEqual(b10, "E")) {
                lowerCase = "receiver";
            } else {
                lowerCase = b10.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            }
            gp.f fVar3 = fVar;
            hq.e e9 = hq.e.e(lowerCase);
            Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
            c0 k = s0Var.k();
            Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
            p0 NO_SOURCE = o0.f12151g;
            Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
            arrayList2.add(new r0(fVar3, null, i5, jp.g.a, e9, k, false, false, false, null, NO_SOURCE));
            fVar = fVar3;
        }
    }

    public static ObjectAnimator f(View view, b0 b0Var, int i5, int i6, float f2, float f10, float f11, float f12, TimeInterpolator timeInterpolator, androidx.transition.b bVar) {
        float translationX = view.getTranslationX();
        float translationY = view.getTranslationY();
        if (((int[]) b0Var.f14327b.getTag(com.discord.R.id.transition_position)) != null) {
            f2 = (r2[0] - i5) + translationX;
            f10 = (r2[1] - i6) + translationY;
        }
        view.setTranslationX(f2);
        view.setTranslationY(f10);
        if (f2 == f11 && f10 == f12) {
            return null;
        }
        ObjectAnimator ofPropertyValuesHolder = ObjectAnimator.ofPropertyValuesHolder(view, PropertyValuesHolder.ofFloat((Property<?, Float>) View.TRANSLATION_X, f2, f11), PropertyValuesHolder.ofFloat((Property<?, Float>) View.TRANSLATION_Y, f10, f12));
        m3.c0 c0Var = new m3.c0(view, b0Var.f14327b, translationX, translationY);
        bVar.a(c0Var);
        ofPropertyValuesHolder.addListener(c0Var);
        ofPropertyValuesHolder.setInterpolator(timeInterpolator);
        return ofPropertyValuesHolder;
    }

    public static final dp.g g(dp.g gVar, ip.d descriptor, boolean z5) {
        y k;
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        if (!g.a(descriptor)) {
            List a0 = descriptor.a0();
            Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
            if (a0 == null || !a0.isEmpty()) {
                Iterator it = a0.iterator();
                while (it.hasNext()) {
                    y type = ((u) it.next()).getType();
                    Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                    if (g.g(type)) {
                        break;
                    }
                }
            }
            List P = descriptor.P();
            Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
            if (P == null || !P.isEmpty()) {
                Iterator it2 = P.iterator();
                while (it2.hasNext()) {
                    y type2 = ((r0) it2.next()).getType();
                    Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                    if (g.g(type2)) {
                        break;
                    }
                }
            }
            y returnType = descriptor.getReturnType();
            if ((returnType == null || !g.c(returnType)) && ((k = k(descriptor)) == null || !g.g(k))) {
                return gVar;
            }
        }
        return new dp.c0(gVar, descriptor, z5);
    }

    public static final String h(yq.p0 p0Var) {
        StringBuilder sb2 = new StringBuilder();
        i("type: " + p0Var, sb2);
        i("hashCode: " + p0Var.hashCode(), sb2);
        i("javaClass: " + p0Var.getClass().getCanonicalName(), sb2);
        for (l a10 = p0Var.a(); a10 != null; a10 = a10.h()) {
            i("fqName: " + jq.f.a.v(a10), sb2);
            i("javaClass: " + a10.getClass().getCanonicalName(), sb2);
        }
        return sb2.toString();
    }

    public static final void i(String str, StringBuilder sb2) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        sb2.append(str);
        sb2.append('\n');
    }

    public static WritableNativeMap j(String str) {
        Float f2;
        Float f10;
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        ArrayList arrayList = new ArrayList(Arrays.asList("FNumber", "DateTime", "ExposureTime", "Flash", "FocalLength", "GPSAltitude", "GPSAltitudeRef", "GPSDateStamp", "GPSLatitude", "GPSLatitudeRef", "GPSLongitude", "GPSLongitudeRef", "GPSProcessingMethod", "GPSTimeStamp", "ImageLength", "ImageWidth", "ISOSpeedRatings", "Make", "Model", "Orientation", "WhiteBalance"));
        arrayList.addAll(new ArrayList(Arrays.asList("DateTimeDigitized", "SubSecTime", "SubSecTimeDigitized", "SubSecTimeOriginal")));
        ExifInterface exifInterface = new ExifInterface(str);
        try {
            String attribute = exifInterface.getAttribute("GPSLatitude");
            String attribute2 = exifInterface.getAttribute("GPSLatitudeRef");
            String attribute3 = exifInterface.getAttribute("GPSLongitude");
            String attribute4 = exifInterface.getAttribute("GPSLongitudeRef");
            if (attribute == null || attribute2 == null || attribute3 == null || attribute4 == null) {
                f2 = null;
                f10 = null;
            } else {
                f2 = attribute2.equals("N") ? com.facebook.imagepipeline.nativecode.b.g(attribute) : Float.valueOf(0.0f - com.facebook.imagepipeline.nativecode.b.g(attribute).floatValue());
                f10 = attribute4.equals("E") ? com.facebook.imagepipeline.nativecode.b.g(attribute3) : Float.valueOf(0.0f - com.facebook.imagepipeline.nativecode.b.g(attribute3).floatValue());
            }
            if (f2 != null && f10 != null) {
                writableNativeMap.putDouble("Latitude", f2.floatValue());
                writableNativeMap.putDouble("Longitude", f10.floatValue());
            }
        } catch (Exception e9) {
            e9.printStackTrace();
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            String str2 = (String) it.next();
            writableNativeMap.putString(str2, exifInterface.getAttribute(str2));
        }
        return writableNativeMap;
    }

    public static final y k(ip.d dVar) {
        u W = dVar.W();
        u T = dVar.T();
        if (W != null) {
            return W.getType();
        }
        if (T != null) {
            if (dVar instanceof ip.k) {
                return T.getType();
            }
            l h6 = dVar.h();
            f fVar = h6 instanceof f ? (f) h6 : null;
            if (fVar != null) {
                return fVar.k();
            }
        }
        return null;
    }

    public static final Method l(Class cls, ip.d descriptor) {
        Intrinsics.checkNotNullParameter(cls, "<this>");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        try {
            Method declaredMethod = cls.getDeclaredMethod("unbox-impl", null);
            Intrinsics.checkNotNull(declaredMethod);
            return declaredMethod;
        } catch (NoSuchMethodException unused) {
            throw new u1("No unbox method found in inline class: " + cls + " (calling " + descriptor + ')');
        }
    }

    public static final ArrayList m(c0 type) {
        Intrinsics.checkNotNullParameter(type, "type");
        ArrayList n6 = n(yq.c.b(type));
        if (n6 == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(d0.l(n6, 10));
        Iterator it = n6.iterator();
        while (it.hasNext()) {
            arrayList.add("unbox-impl-" + ((String) it.next()));
        }
        i a10 = type.r0().a();
        Intrinsics.checkNotNull(a10, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        Class k = c2.k((f) a10);
        Intrinsics.checkNotNull(k);
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            arrayList2.add(k.getDeclaredMethod((String) it2.next(), null));
        }
        return arrayList2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.util.ArrayList] */
    public static final ArrayList n(c0 c0Var) {
        ?? c6;
        if (!g.h(c0Var)) {
            return null;
        }
        i a10 = c0Var.r0().a();
        Intrinsics.checkNotNull(a10, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
        f fVar = (f) a10;
        int i5 = e.a;
        Object i02 = fVar != null ? fVar.i0() : null;
        ip.b0 b0Var = i02 instanceof ip.b0 ? (ip.b0) i02 : null;
        Intrinsics.checkNotNull(b0Var);
        ArrayList arrayList = b0Var.a;
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            hq.e eVar = (hq.e) pair.f13474d;
            ArrayList n6 = n((c0) pair.f13475e);
            if (n6 != null) {
                c6 = new ArrayList(d0.l(n6, 10));
                Iterator it2 = n6.iterator();
                while (it2.hasNext()) {
                    c6.add(eVar.c() + '-' + ((String) it2.next()));
                }
            } else {
                c6 = kotlin.collections.b0.c(eVar.c());
            }
            h0.o(arrayList2, c6);
        }
        return arrayList2;
    }

    public static void o(v5 v5Var) {
        if (v5Var.getProfilingTracesDirPath() != null) {
            return;
        }
        File file = new File(System.getProperty("java.io.tmpdir"), "sentry_profiling_traces");
        if (file.mkdirs() || file.exists()) {
            v5Var.setProfilingTracesDirPath(file.getAbsolutePath());
        } else {
            throw new IllegalArgumentException("Creating a fallback directory for profiling failed in " + file.getAbsolutePath());
        }
    }

    public static Object p(Bundle bundle, String str, Class cls) {
        if (Build.VERSION.SDK_INT >= 34) {
            return e.e.c(bundle, str, cls);
        }
        Parcelable parcelable = bundle.getParcelable(str);
        if (cls.isInstance(parcelable)) {
            return parcelable;
        }
        return null;
    }

    public static boolean q(Response response, Request request) {
        Intrinsics.checkNotNullParameter(response, "response");
        Intrinsics.checkNotNullParameter(request, "request");
        int i5 = response.f16088v;
        if (i5 != 200 && i5 != 410 && i5 != 414 && i5 != 501 && i5 != 203 && i5 != 204) {
            if (i5 != 307) {
                if (i5 != 308 && i5 != 404 && i5 != 405) {
                    switch (i5) {
                        case ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS /* 300 */:
                        case 301:
                            break;
                        case 302:
                            break;
                        default:
                            return false;
                    }
                }
            }
            if (response.f("Expires", null) == null && response.c().f16006c == -1 && !response.c().f16009f && !response.c().f16008e) {
                return false;
            }
        }
        if (response.c().f16005b) {
            return false;
        }
        CacheControl cacheControl = request.f16080f;
        if (cacheControl == null) {
            int i6 = CacheControl.f16004n;
            cacheControl = k0.N(request.f16077c);
            request.f16080f = cacheControl;
        }
        return !cacheControl.f16005b;
    }

    public static final boolean r(m0 m0Var) {
        Intrinsics.checkNotNullParameter(m0Var, "<this>");
        return m0Var.getGetter() == null;
    }

    public static String u(X509Certificate certificate) {
        Intrinsics.checkNotNullParameter(certificate, "certificate");
        if (certificate == null) {
            throw new IllegalArgumentException("Certificate pinning requires X509 certificates");
        }
        Intrinsics.checkNotNullParameter(certificate, "<this>");
        ByteString byteString = ByteString.f16115v;
        byte[] encoded = certificate.getPublicKey().getEncoded();
        Intrinsics.checkNotNullExpressionValue(encoded, "publicKey.encoded");
        return Intrinsics.stringPlus("sha256/", j.F(encoded).b("SHA-256").a());
    }

    public static void v(aq.o oVar, Annotation annotation) {
        Class z5 = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation));
        m Z = oVar.Z(op.c.a(z5), new np.a(annotation));
        if (Z != null) {
            w(Z, annotation, z5);
        }
    }

    public static void w(m mVar, Annotation annotation, Class cls) {
        Iterator it = ArrayIteratorKt.iterator(cls.getDeclaredMethods());
        while (it.hasNext()) {
            Method method = (Method) it.next();
            try {
                Object invoke = method.invoke(annotation, null);
                Intrinsics.checkNotNull(invoke);
                hq.e e9 = hq.e.e(method.getName());
                Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                Class<?> cls2 = invoke.getClass();
                if (Intrinsics.areEqual(cls2, Class.class)) {
                    Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type java.lang.Class<*>");
                    mVar.G(e9, a((Class) invoke));
                } else if (np.c.a.contains(cls2)) {
                    mVar.x(e9, invoke);
                } else if (op.c.e(cls2)) {
                    if (!cls2.isEnum()) {
                        cls2 = cls2.getEnclosingClass();
                    }
                    Intrinsics.checkNotNull(cls2);
                    hq.b a10 = op.c.a(cls2);
                    Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Enum<*>");
                    hq.e e10 = hq.e.e(((Enum) invoke).name());
                    Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
                    mVar.J(e9, a10, e10);
                } else if (Annotation.class.isAssignableFrom(cls2)) {
                    Class<?>[] interfaces = cls2.getInterfaces();
                    Intrinsics.checkNotNullExpressionValue(interfaces, "getInterfaces(...)");
                    Class cls3 = (Class) x.D(interfaces);
                    Intrinsics.checkNotNull(cls3);
                    m k = mVar.k(op.c.a(cls3), e9);
                    if (k != null) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Annotation");
                        w(k, (Annotation) invoke, cls3);
                    }
                } else {
                    if (!cls2.isArray()) {
                        throw new UnsupportedOperationException("Unsupported annotation argument value (" + cls2 + "): " + invoke);
                    }
                    aq.n B = mVar.B(e9);
                    if (B != null) {
                        Class<?> componentType = cls2.getComponentType();
                        int i5 = 0;
                        if (componentType.isEnum()) {
                            Intrinsics.checkNotNull(componentType);
                            hq.b a11 = op.c.a(componentType);
                            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
                            Object[] objArr = (Object[]) invoke;
                            int length = objArr.length;
                            while (i5 < length) {
                                Object obj = objArr[i5];
                                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Enum<*>");
                                hq.e e11 = hq.e.e(((Enum) obj).name());
                                Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
                                B.C(a11, e11);
                                i5++;
                            }
                        } else if (Intrinsics.areEqual(componentType, Class.class)) {
                            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
                            Object[] objArr2 = (Object[]) invoke;
                            int length2 = objArr2.length;
                            while (i5 < length2) {
                                Object obj2 = objArr2[i5];
                                Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type java.lang.Class<*>");
                                B.p(a((Class) obj2));
                                i5++;
                            }
                        } else if (Annotation.class.isAssignableFrom(componentType)) {
                            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
                            Object[] objArr3 = (Object[]) invoke;
                            int length3 = objArr3.length;
                            while (i5 < length3) {
                                Object obj3 = objArr3[i5];
                                Intrinsics.checkNotNull(componentType);
                                m q02 = B.q0(op.c.a(componentType));
                                if (q02 != null) {
                                    Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.Annotation");
                                    w(q02, (Annotation) obj3, componentType);
                                }
                                i5++;
                            }
                        } else {
                            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
                            Object[] objArr4 = (Object[]) invoke;
                            int length4 = objArr4.length;
                            while (i5 < length4) {
                                B.O(objArr4[i5]);
                                i5++;
                            }
                        }
                        B.j();
                    }
                }
            } catch (IllegalAccessException unused) {
            }
        }
        mVar.j();
    }

    public static Insets x(com.swmansion.rnscreens.d dVar, int i5, WindowInsets windowInsets) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        if (windowInsets == null) {
            Insets NONE = Insets.f1511e;
            Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
            return NONE;
        }
        WindowInsetsCompat g6 = WindowInsetsCompat.g(null, windowInsets);
        androidx.core.view.c2 c2Var = g6.a;
        Intrinsics.checkNotNullExpressionValue(g6, "toWindowInsetsCompat(...)");
        Insets f2 = c2Var.f(i5);
        Intrinsics.checkNotNull(f2);
        return f2;
    }

    public static final Collection y(Collection collection, Function1 descriptorByHandle) {
        Intrinsics.checkNotNullParameter(collection, "<this>");
        Intrinsics.checkNotNullParameter(descriptorByHandle, "descriptorByHandle");
        if (collection.size() <= 1) {
            return collection;
        }
        LinkedList linkedList = new LinkedList(collection);
        int i5 = ir.k.f12269i;
        ir.k f2 = ir.n.f();
        while (!linkedList.isEmpty()) {
            Object K = CollectionsKt.K(linkedList);
            int i6 = ir.k.f12269i;
            ir.k f10 = ir.n.f();
            ArrayList g6 = kq.n.g(K, linkedList, descriptorByHandle, new aq.a(4, f10));
            Intrinsics.checkNotNullExpressionValue(g6, "extractMembersOverridableInBothWays(...)");
            if (g6.size() == 1 && f10.isEmpty()) {
                Object Y = CollectionsKt.Y(g6);
                Intrinsics.checkNotNullExpressionValue(Y, "single(...)");
                f2.add(Y);
            } else {
                Object s2 = kq.n.s(g6, descriptorByHandle);
                ip.b bVar = (ip.b) descriptorByHandle.invoke(s2);
                Iterator it = g6.iterator();
                while (it.hasNext()) {
                    Object next = it.next();
                    Intrinsics.checkNotNull(next);
                    if (!kq.n.k(bVar, (ip.b) descriptorByHandle.invoke(next))) {
                        f10.add(next);
                    }
                }
                if (!f10.isEmpty()) {
                    f2.addAll(f10);
                }
                f2.add(s2);
            }
        }
        return f2;
    }

    public static boolean z(v5 v5Var, v5 v5Var2, boolean z5) {
        boolean z6 = h.a;
        if (!z6 && (v5Var2.getVersionDetector() instanceof x2)) {
            v5Var2.setVersionDetector(new u4.b(17, v5Var2));
        }
        if (!v5Var2.getVersionDetector().a()) {
            return !z5 || v5Var == null || v5Var2.isForceInit() || v5Var.getInitPriority().ordinal() <= v5Var2.getInitPriority().ordinal();
        }
        v5Var2.getLogger().u(SentryLevel.ERROR, "Not initializing Sentry because mixed SDK versions have been detected.", new Object[0]);
        throw new IllegalStateException(s4.h.f("Sentry SDK has detected a mix of versions. This is not supported and likely leads to crashes. Please always use the same version of all SDK modules (dependencies). See ", z6 ? "https://docs.sentry.io/platforms/android/troubleshooting/mixed-versions" : "https://docs.sentry.io/platforms/java/troubleshooting/mixed-versions", " for more details."));
    }

    public abstract void s(int i5);

    public abstract void t(Typeface typeface, boolean z5);
}
