package zo;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.ParcelFileDescriptor;
import android.os.Process;
import android.os.StrictMode;
import android.util.Base64;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EdgeEffect;
import androidx.recyclerview.widget.h0;
import bs.h1;
import bs.j0;
import bs.o1;
import bs.p1;
import bs.w0;
import bs.w1;
import com.facebook.cache.common.CacheKey;
import com.facebook.drawee.drawable.TransformCallback;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.annotations.ReactPropGroup;
import com.google.android.exoplayer2.upstream.DataSource;
import cp.a2;
import cp.c2;
import cp.j1;
import cp.u1;
import cq.a1;
import cq.i0;
import cq.s0;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.e6;
import io.sentry.v5;
import ip.r0;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Field;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Proxy;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlin.reflect.KTypeProjection;
import kotlin.sequences.Sequence;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.modules.SerializersModule;
import yq.o0;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class c0 implements m3.o {
    public static File A(Context context) {
        File cacheDir = context.getCacheDir();
        if (cacheDir == null) {
            return null;
        }
        String str = ".font" + Process.myPid() + "-" + Process.myTid() + "-";
        for (int i5 = 0; i5 < 100; i5++) {
            File file = new File(cacheDir, str + i5);
            if (file.createNewFile()) {
                return file;
            }
        }
        return null;
    }

    public static boolean B(SentryEvent sentryEvent, v5 v5Var) {
        return io.sentry.util.c.b(v5Var.getSerializer(), v5Var.getLogger(), sentryEvent) <= v5.MAX_EVENT_SIZE_BYTES;
    }

    public static MappedByteBuffer C(Context context, Uri uri) {
        ParcelFileDescriptor openFileDescriptor;
        try {
            openFileDescriptor = context.getContentResolver().openFileDescriptor(uri, "r", null);
        } catch (IOException unused) {
        }
        if (openFileDescriptor == null) {
            if (openFileDescriptor != null) {
                openFileDescriptor.close();
                return null;
            }
            return null;
        }
        try {
            FileInputStream fileInputStream = new FileInputStream(openFileDescriptor.getFileDescriptor());
            try {
                FileChannel channel = fileInputStream.getChannel();
                MappedByteBuffer map = channel.map(FileChannel.MapMode.READ_ONLY, 0L, channel.size());
                fileInputStream.close();
                openFileDescriptor.close();
                return map;
            } finally {
            }
        } finally {
        }
    }

    public static final int D(int i5, int i6) {
        if (i6 == 255) {
            return i5;
        }
        if (i6 == 0) {
            return i5 & 16777215;
        }
        return (i5 & 16777215) | ((((i5 >>> 24) * (i6 + (i6 >> 7))) >> 8) << 24);
    }

    public static float E(EdgeEffect edgeEffect, float f2, float f10) {
        if (Build.VERSION.SDK_INT >= 31) {
            return androidx.core.widget.c.c(edgeEffect, f2, f10);
        }
        androidx.core.widget.b.a(edgeEffect, f2, f10);
        return f2;
    }

    public static final s0 F(s0 s0Var, a4.i typeTable) {
        Intrinsics.checkNotNullParameter(s0Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = s0Var.f7238i;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 256) {
            return s0Var.J;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 512) {
            return typeTable.b(s0Var.K);
        }
        return null;
    }

    public static final Class G(Type type) {
        if (type instanceof Class) {
            return (Class) type;
        }
        if (type instanceof ParameterizedType) {
            Type rawType = ((ParameterizedType) type).getRawType();
            Intrinsics.checkNotNullExpressionValue(rawType, "getRawType(...)");
            return G(rawType);
        }
        if (type instanceof WildcardType) {
            Type[] upperBounds = ((WildcardType) type).getUpperBounds();
            Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
            Object s2 = kotlin.collections.x.s(upperBounds);
            Intrinsics.checkNotNullExpressionValue(s2, "first(...)");
            return G((Type) s2);
        }
        if (type instanceof GenericArrayType) {
            Type genericComponentType = ((GenericArrayType) type).getGenericComponentType();
            Intrinsics.checkNotNullExpressionValue(genericComponentType, "getGenericComponentType(...)");
            return G(genericComponentType);
        }
        throw new IllegalArgumentException("type should be an instance of Class<?>, GenericArrayType, ParametrizedType or WildcardType, but actual argument " + type + " has type " + Reflection.getOrCreateKotlinClass(type.getClass()));
    }

    public static final s0 H(cq.a0 a0Var, a4.i typeTable) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = a0Var.f7005i;
        if ((i5 & 32) == 32) {
            return a0Var.G;
        }
        if ((i5 & 64) == 64) {
            return typeTable.b(a0Var.H);
        }
        return null;
    }

    public static final KSerializer I(SerializersModule serializersModule, Class cls, List list) {
        KSerializer[] kSerializerArr = (KSerializer[]) list.toArray(new KSerializer[0]);
        KSerializer d6 = h1.d(cls, (KSerializer[]) Arrays.copyOf(kSerializerArr, kSerializerArr.length));
        if (d6 != null) {
            return d6;
        }
        Intrinsics.checkNotNullParameter(cls, "<this>");
        KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(cls);
        go.i iVar = o1.a;
        Intrinsics.checkNotNullParameter(orCreateKotlinClass, "<this>");
        KSerializer kSerializer = (KSerializer) o1.a.get(orCreateKotlinClass);
        if (kSerializer != null) {
            return kSerializer;
        }
        serializersModule.b(orCreateKotlinClass, list);
        if (!cls.isInterface()) {
            return null;
        }
        Intrinsics.checkNotNullParameter(cls, "<this>");
        return new xr.c(Reflection.getOrCreateKotlinClass(cls));
    }

    public static final s0 J(cq.a0 a0Var, a4.i typeTable) {
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = a0Var.f7005i;
        if ((i5 & 8) == 8) {
            s0 s0Var = a0Var.f7009y;
            Intrinsics.checkNotNullExpressionValue(s0Var, "getReturnType(...)");
            return s0Var;
        }
        if ((i5 & 16) == 16) {
            return typeTable.b(a0Var.E);
        }
        throw new IllegalStateException("No returnType in ProtoBuf.Function");
    }

    public static final s0 K(i0 i0Var, a4.i typeTable) {
        Intrinsics.checkNotNullParameter(i0Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = i0Var.f7122i;
        if ((i5 & 8) == 8) {
            s0 s0Var = i0Var.f7126y;
            Intrinsics.checkNotNullExpressionValue(s0Var, "getReturnType(...)");
            return s0Var;
        }
        if ((i5 & 16) == 16) {
            return typeTable.b(i0Var.E);
        }
        throw new IllegalStateException("No returnType in ProtoBuf.Property");
    }

    public static String L(CacheKey cacheKey) {
        String c6 = cacheKey.c();
        Intrinsics.checkNotNullExpressionValue(c6, "getUriString(...)");
        Charset forName = Charset.forName("UTF-8");
        Intrinsics.checkNotNullExpressionValue(forName, "forName(...)");
        byte[] bytes = c6.getBytes(forName);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-1");
            messageDigest.update(bytes, 0, bytes.length);
            String encodeToString = Base64.encodeToString(messageDigest.digest(), 11);
            Intrinsics.checkNotNullExpressionValue(encodeToString, "makeSHA1HashBase64(...)");
            return encodeToString;
        } catch (NoSuchAlgorithmException e9) {
            throw new RuntimeException(e9);
        }
    }

    public static final KSerializer M(SerializersModule serializersModule, Type type, boolean z5) {
        ArrayList<KSerializer> arrayList;
        KSerializer elementSerializer;
        KSerializer elementSerializer2;
        KClass kClass;
        if (type instanceof GenericArrayType) {
            Type type2 = ((GenericArrayType) type).getGenericComponentType();
            if (type2 instanceof WildcardType) {
                Type[] upperBounds = ((WildcardType) type2).getUpperBounds();
                Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                type2 = (Type) kotlin.collections.x.s(upperBounds);
            }
            Intrinsics.checkNotNull(type2);
            if (z5) {
                elementSerializer2 = zk.a.B(serializersModule, type2);
            } else {
                Intrinsics.checkNotNullParameter(serializersModule, "<this>");
                Intrinsics.checkNotNullParameter(type2, "type");
                elementSerializer2 = M(serializersModule, type2, false);
                if (elementSerializer2 == null) {
                    return null;
                }
            }
            if (type2 instanceof ParameterizedType) {
                Type rawType = ((ParameterizedType) type2).getRawType();
                Intrinsics.checkNotNull(rawType, "null cannot be cast to non-null type java.lang.Class<*>");
                kClass = com.facebook.imagepipeline.nativecode.c.C((Class) rawType);
            } else {
                if (!(type2 instanceof KClass)) {
                    throw new IllegalStateException("unsupported type in GenericArray: " + Reflection.getOrCreateKotlinClass(type2.getClass()));
                }
                kClass = (KClass) type2;
            }
            Intrinsics.checkNotNull(kClass, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
            Intrinsics.checkNotNullParameter(kClass, "kClass");
            Intrinsics.checkNotNullParameter(elementSerializer2, "elementSerializer");
            p1 p1Var = new p1(kClass, elementSerializer2);
            Intrinsics.checkNotNull(p1Var, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return p1Var;
        }
        if (type instanceof Class) {
            Class cls = (Class) type;
            if (!cls.isArray() || cls.getComponentType().isPrimitive()) {
                Intrinsics.checkNotNull(cls, "null cannot be cast to non-null type java.lang.Class<kotlin.Any>");
                return I(serializersModule, cls, m0.f13512d);
            }
            Class<?> type3 = cls.getComponentType();
            Intrinsics.checkNotNullExpressionValue(type3, "getComponentType(...)");
            if (z5) {
                elementSerializer = zk.a.B(serializersModule, type3);
            } else {
                Intrinsics.checkNotNullParameter(serializersModule, "<this>");
                Intrinsics.checkNotNullParameter(type3, "type");
                elementSerializer = M(serializersModule, type3, false);
                if (elementSerializer == null) {
                    return null;
                }
            }
            KClass kClass2 = com.facebook.imagepipeline.nativecode.c.C(type3);
            Intrinsics.checkNotNull(kClass2, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
            Intrinsics.checkNotNullParameter(kClass2, "kClass");
            Intrinsics.checkNotNullParameter(elementSerializer, "elementSerializer");
            p1 p1Var2 = new p1(kClass2, elementSerializer);
            Intrinsics.checkNotNull(p1Var2, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return p1Var2;
        }
        if (!(type instanceof ParameterizedType)) {
            if (type instanceof WildcardType) {
                Type[] upperBounds2 = ((WildcardType) type).getUpperBounds();
                Intrinsics.checkNotNullExpressionValue(upperBounds2, "getUpperBounds(...)");
                Object s2 = kotlin.collections.x.s(upperBounds2);
                Intrinsics.checkNotNullExpressionValue(s2, "first(...)");
                return M(serializersModule, (Type) s2, true);
            }
            throw new IllegalArgumentException("type should be an instance of Class<?>, GenericArrayType, ParametrizedType or WildcardType, but actual argument " + type + " has type " + Reflection.getOrCreateKotlinClass(type.getClass()));
        }
        ParameterizedType parameterizedType = (ParameterizedType) type;
        Type rawType2 = parameterizedType.getRawType();
        Intrinsics.checkNotNull(rawType2, "null cannot be cast to non-null type java.lang.Class<*>");
        Class cls2 = (Class) rawType2;
        Type[] actualTypeArguments = parameterizedType.getActualTypeArguments();
        Intrinsics.checkNotNull(actualTypeArguments);
        if (z5) {
            arrayList = new ArrayList(actualTypeArguments.length);
            for (Type type4 : actualTypeArguments) {
                Intrinsics.checkNotNull(type4);
                arrayList.add(zk.a.B(serializersModule, type4));
            }
        } else {
            arrayList = new ArrayList(actualTypeArguments.length);
            for (Type type5 : actualTypeArguments) {
                Intrinsics.checkNotNull(type5);
                Intrinsics.checkNotNullParameter(serializersModule, "<this>");
                Intrinsics.checkNotNullParameter(type5, "type");
                KSerializer M = M(serializersModule, type5, false);
                if (M == null) {
                    return null;
                }
                arrayList.add(M);
            }
        }
        if (Set.class.isAssignableFrom(cls2)) {
            KSerializer elementSerializer3 = (KSerializer) arrayList.get(0);
            Intrinsics.checkNotNullParameter(elementSerializer3, "elementSerializer");
            bs.d dVar = new bs.d(elementSerializer3, 2);
            Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return dVar;
        }
        if (List.class.isAssignableFrom(cls2) || Collection.class.isAssignableFrom(cls2)) {
            bs.d a = nf.e.a((KSerializer) arrayList.get(0));
            Intrinsics.checkNotNull(a, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return a;
        }
        if (Map.class.isAssignableFrom(cls2)) {
            j0 b10 = nf.e.b((KSerializer) arrayList.get(0), (KSerializer) arrayList.get(1));
            Intrinsics.checkNotNull(b10, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return b10;
        }
        if (Map.Entry.class.isAssignableFrom(cls2)) {
            KSerializer keySerializer = (KSerializer) arrayList.get(0);
            KSerializer valueSerializer = (KSerializer) arrayList.get(1);
            Intrinsics.checkNotNullParameter(keySerializer, "keySerializer");
            Intrinsics.checkNotNullParameter(valueSerializer, "valueSerializer");
            w0 w0Var = new w0(keySerializer, valueSerializer, 0);
            Intrinsics.checkNotNull(w0Var, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return w0Var;
        }
        if (Pair.class.isAssignableFrom(cls2)) {
            KSerializer keySerializer2 = (KSerializer) arrayList.get(0);
            KSerializer valueSerializer2 = (KSerializer) arrayList.get(1);
            Intrinsics.checkNotNullParameter(keySerializer2, "keySerializer");
            Intrinsics.checkNotNullParameter(valueSerializer2, "valueSerializer");
            w0 w0Var2 = new w0(keySerializer2, valueSerializer2, 1);
            Intrinsics.checkNotNull(w0Var2, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
            return w0Var2;
        }
        if (!fo.v.class.isAssignableFrom(cls2)) {
            ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
            for (KSerializer kSerializer : arrayList) {
                Intrinsics.checkNotNull(kSerializer, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any?>");
                arrayList2.add(kSerializer);
            }
            return I(serializersModule, cls2, arrayList2);
        }
        KSerializer aSerializer = (KSerializer) arrayList.get(0);
        KSerializer bSerializer = (KSerializer) arrayList.get(1);
        KSerializer cSerializer = (KSerializer) arrayList.get(2);
        Intrinsics.checkNotNullParameter(aSerializer, "aSerializer");
        Intrinsics.checkNotNullParameter(bSerializer, "bSerializer");
        Intrinsics.checkNotNullParameter(cSerializer, "cSerializer");
        w1 w1Var = new w1(aSerializer, bSerializer, cSerializer);
        Intrinsics.checkNotNull(w1Var, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<kotlin.Any>");
        return w1Var;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final void N(Drawable drawable, Drawable.Callback callback, TransformCallback transformCallback) {
        if (drawable == 0) {
            return;
        }
        drawable.setCallback(callback);
        com.facebook.drawee.drawable.p pVar = drawable instanceof com.facebook.drawee.drawable.p ? (com.facebook.drawee.drawable.p) drawable : null;
        if (pVar != null) {
            pVar.setTransformCallback(transformCallback);
        }
    }

    public static void O(SentryEvent sentryEvent, v5 v5Var) {
        ArrayList d6 = sentryEvent.d();
        if (d6 != null) {
            Iterator it = d6.iterator();
            while (it.hasNext()) {
                io.sentry.protocol.a0 a0Var = ((io.sentry.protocol.u) it.next()).f11892w;
                if (a0Var != null) {
                    P(a0Var, sentryEvent, v5Var, "Truncated exception stack frames of event %s");
                }
            }
        }
        e6 e6Var = sentryEvent.P;
        ArrayList arrayList = e6Var != null ? e6Var.a : null;
        if (arrayList != null) {
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                io.sentry.protocol.a0 a0Var2 = ((io.sentry.protocol.c0) it2.next()).F;
                if (a0Var2 != null) {
                    P(a0Var2, sentryEvent, v5Var, "Truncated thread stack frames for event %s");
                }
            }
        }
    }

    public static void P(io.sentry.protocol.a0 a0Var, SentryEvent sentryEvent, v5 v5Var, String str) {
        List list = a0Var.f11755d;
        if (list == null || list.size() <= 500) {
            return;
        }
        ArrayList arrayList = new ArrayList(500);
        arrayList.addAll(list.subList(0, h0.DEFAULT_SWIPE_ANIMATION_DURATION));
        arrayList.addAll(list.subList(list.size() - h0.DEFAULT_SWIPE_ANIMATION_DURATION, list.size()));
        a0Var.f11755d = arrayList;
        v5Var.getLogger().u(SentryLevel.DEBUG, str, sentryEvent.f11543d);
    }

    public static final s0 Q(a1 a1Var, a4.i typeTable) {
        Intrinsics.checkNotNullParameter(a1Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        int i5 = a1Var.f7011i;
        if ((i5 & 4) == 4) {
            s0 s0Var = a1Var.f7014x;
            Intrinsics.checkNotNullExpressionValue(s0Var, "getType(...)");
            return s0Var;
        }
        if ((i5 & 8) == 8) {
            return typeTable.b(a1Var.f7015y);
        }
        throw new IllegalStateException("No type in ProtoBuf.ValueParameter");
    }

    public static void R(String str, gk.n nVar, int i5, Dynamic dynamic, Class cls) {
        Method method = null;
        for (Method method2 : cls.getMethods()) {
            if (method2.getName().equals(str)) {
                method = method2;
            }
        }
        String str2 = ((ReactPropGroup) method.getAnnotation(ReactPropGroup.class)).names()[i5];
        kk.c cVar = (kk.c) ((gk.i) nVar.f9343e.f7996m).get(str2);
        cVar.a = cVar.a(dynamic);
        nVar.f9344i.add(str2);
    }

    public static String c(File file) {
        if (!file.getName().endsWith(".apk")) {
            throw new IllegalArgumentException("Non-apk found in splits directory.");
        }
        String replaceFirst = file.getName().replaceFirst("(_\\d+)?\\.apk", "");
        return (replaceFirst.equals("base-master") || replaceFirst.equals("base-main")) ? "" : replaceFirst.startsWith("base-") ? replaceFirst.replace("base-", "config.") : replaceFirst.replace("-", ".config.").replace(".config.master", "").replace(".config.main", "");
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0043  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x010b  */
    /* JADX WARN: Type inference failed for: r0v40, types: [java.lang.Object, kotlin.Lazy] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final dp.g d(j1 j1Var, boolean z5) {
        cp.j jVar;
        Method method;
        dp.g rVar;
        fq.c cVar;
        Method c6;
        Method unboxMethod;
        if (cp.h0.f6904d.d(j1Var.j().F)) {
            return dp.a0.a;
        }
        hq.b bVar = a2.a;
        zk.a b10 = a2.b(j1Var.j().e());
        if (b10 instanceof cp.m) {
            cp.m mVar = (cp.m) b10;
            eq.g gVar = mVar.f6918m;
            fq.e eVar = mVar.f6917l;
            if (z5) {
                if ((eVar.f8960e & 4) == 4) {
                    cVar = eVar.f8963w;
                    c6 = cVar != null ? j1Var.j().f6926y.c(gVar.getString(cVar.f8949i), gVar.getString(cVar.f8950v)) : null;
                    if (c6 == null) {
                        rVar = !Modifier.isStatic(c6.getModifiers()) ? j1Var.h() ? new dp.r(c6, v(j1Var)) : new dp.v(0, c6) : j1Var.j().e().getAnnotations().r(c2.a) ? j1Var.h() ? new dp.s(c6) : new dp.v(1, c6) : j1Var.h() ? new dp.t(c6, false, v(j1Var)) : new dp.v(2, c6);
                    } else if (kq.g.e(j1Var.j().e()) && Intrinsics.areEqual(j1Var.j().e().getVisibility(), ip.q.f12158d)) {
                        Class C = android.support.v4.media.session.b.C(j1Var.j().e().h());
                        if (C == null || (unboxMethod = android.support.v4.media.session.b.l(C, j1Var.j().e())) == null) {
                            throw new u1("Underlying property of inline class " + j1Var.j() + " should have a field");
                        }
                        if (j1Var.h()) {
                            rVar = new dp.x(unboxMethod, v(j1Var));
                        } else {
                            Intrinsics.checkNotNullParameter(unboxMethod, "unboxMethod");
                            rVar = new dp.y(unboxMethod, kotlin.collections.b0.c(unboxMethod.getDeclaringClass()));
                        }
                    } else {
                        Field field = (Field) j1Var.j().H.getValue();
                        if (field == null) {
                            throw new u1("No accessors or field is found for property " + j1Var.j());
                        }
                        rVar = k(j1Var, z5, field);
                    }
                }
                cVar = null;
                if (cVar != null) {
                }
                if (c6 == null) {
                }
            } else {
                if ((eVar.f8960e & 8) == 8) {
                    cVar = eVar.f8964x;
                    if (cVar != null) {
                    }
                    if (c6 == null) {
                    }
                }
                cVar = null;
                if (cVar != null) {
                }
                if (c6 == null) {
                }
            }
        } else if (b10 instanceof cp.k) {
            rVar = k(j1Var, z5, ((cp.k) b10).j);
        } else {
            if (!(b10 instanceof cp.l)) {
                if (!(b10 instanceof cp.n)) {
                    throw new fo.n();
                }
                if (z5) {
                    jVar = ((cp.n) b10).j;
                } else {
                    jVar = ((cp.n) b10).k;
                    if (jVar == null) {
                        throw new u1("No setter found for property " + j1Var.j());
                    }
                }
                cp.h0 h0Var = j1Var.j().f6926y;
                gq.e eVar2 = jVar.f6911b;
                Method c8 = h0Var.c(eVar2.f9439v, eVar2.f9440w);
                if (c8 != null) {
                    Modifier.isStatic(c8.getModifiers());
                    return j1Var.h() ? new dp.r(c8, v(j1Var)) : new dp.v(0, c8);
                }
                throw new u1("No accessor found for property " + j1Var.j());
            }
            if (z5) {
                method = ((cp.l) b10).j;
            } else {
                cp.l lVar = (cp.l) b10;
                method = lVar.k;
                if (method == null) {
                    throw new u1("No source found for setter of Java method property: " + lVar.j);
                }
            }
            rVar = j1Var.h() ? new dp.r(method, v(j1Var)) : new dp.v(0, method);
        }
        return android.support.v4.media.session.b.g(rVar, j1Var.i(), false);
    }

    public static final String e(Type type) {
        if (!(type instanceof Class)) {
            return type.toString();
        }
        Class cls = (Class) type;
        if (!cls.isArray()) {
            String name = cls.getName();
            Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
            return name;
        }
        Sequence c6 = kr.o.c(b0.f21324d, type);
        StringBuilder sb2 = new StringBuilder();
        Intrinsics.checkNotNullParameter(c6, "<this>");
        Iterator it = c6.iterator();
        if (!it.hasNext()) {
            throw new NoSuchElementException("Sequence is empty.");
        }
        Object next = it.next();
        while (it.hasNext()) {
            next = it.next();
        }
        sb2.append(((Class) next).getName());
        sb2.append(kotlin.text.x.k(kr.s.f(c6), "[]"));
        return sb2.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object f(ProducerScope producerScope, Function0 function0, lo.c cVar) {
        pr.r frame;
        int i5;
        try {
            if (cVar instanceof pr.r) {
                frame = (pr.r) cVar;
                int i6 = frame.f16513v;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    frame.f16513v = i6 - Integer.MIN_VALUE;
                    Object obj = frame.f16512i;
                    ko.a aVar = ko.a.f13464d;
                    i5 = frame.f16513v;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        if (frame.getContext().o(nr.t.f15661e) != producerScope) {
                            throw new IllegalStateException("awaitClose() can only be invoked from the producer context");
                        }
                        frame.f16510d = producerScope;
                        frame.f16511e = function0;
                        frame.f16513v = 1;
                        nr.j jVar = new nr.j(1, ko.f.b(frame));
                        jVar.t();
                        producerScope.e(new com.margelo.nitro.playagerangedeclaration.c(jVar, 1));
                        Object r5 = jVar.r();
                        if (r5 == aVar) {
                            Intrinsics.checkNotNullParameter(frame, "frame");
                        }
                        if (r5 == aVar) {
                            return aVar;
                        }
                    } else {
                        if (i5 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        function0 = frame.f16511e;
                        ki.b.R(obj);
                    }
                    function0.invoke();
                    return Unit.a;
                }
            }
            if (i5 != 0) {
            }
            function0.invoke();
            return Unit.a;
        } catch (Throwable th2) {
            function0.invoke();
            throw th2;
        }
        frame = new pr.r(cVar);
        Object obj2 = frame.f16512i;
        ko.a aVar2 = ko.a.f13464d;
        i5 = frame.f16513v;
    }

    public static ie.p g(rd.m mVar, String str, rd.j jVar, int i5) {
        Map map = Collections.EMPTY_MAP;
        Uri K = ke.b.K(str, jVar.f17249c);
        long j = jVar.a;
        long j5 = jVar.f17248b;
        String a = mVar.a();
        if (a == null) {
            a = ke.b.K(((rd.b) mVar.f17252e.get(0)).a, jVar.f17249c).toString();
        }
        String str2 = a;
        ke.b.m(K, "The uri must be set.");
        return new ie.p(K, 0L, 1, null, fi.w0.f8728y, j, j5, str2, i5);
    }

    public static void h(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(str);
        }
    }

    public static void i(DataSource dataSource) {
        if (dataSource != null) {
            try {
                dataSource.close();
            } catch (IOException unused) {
            }
        }
    }

    public static void j(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x003b, code lost:
    
        if (gq.g.d(((wq.r) r0).Y) != false) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:6:0x002d, code lost:
    
        if (kq.e.n(r1, ip.g.f12142w) == false) goto L16;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final dp.w k(j1 j1Var, boolean z5, Field field) {
        ip.m0 e9 = j1Var.j().e();
        ip.l h6 = e9.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        boolean z6 = true;
        if (kq.e.l(h6)) {
            ip.l h7 = h6.h();
            if (!kq.e.n(h7, ip.g.f12139e)) {
            }
            if (e9 instanceof wq.r) {
            }
        }
        if (Modifier.isStatic(field.getModifiers())) {
            boolean z7 = false;
            if (!j1Var.j().e().getAnnotations().r(c2.a)) {
                if (z5) {
                    Intrinsics.checkNotNullParameter(field, "field");
                    return new dp.l(field, z7, 2);
                }
                boolean l6 = l(j1Var);
                Intrinsics.checkNotNullParameter(field, "field");
                return new dp.p(field, l6, z7, 2);
            }
            if (z5) {
                if (j1Var.h()) {
                    Intrinsics.checkNotNullParameter(field, "field");
                    return new dp.k(field, false);
                }
                Intrinsics.checkNotNullParameter(field, "field");
                return new dp.l(field, z6, 1);
            }
            if (j1Var.h()) {
                boolean l7 = l(j1Var);
                Intrinsics.checkNotNullParameter(field, "field");
                return new dp.o(field, l7, false);
            }
            boolean l10 = l(j1Var);
            Intrinsics.checkNotNullParameter(field, "field");
            return new dp.p(field, l10, z6, 1);
        }
        if (z5) {
            if (j1Var.h()) {
                return new dp.j(field, v(j1Var));
            }
            Intrinsics.checkNotNullParameter(field, "field");
            return new dp.l(field, z6, 0);
        }
        if (j1Var.h()) {
            return new dp.n(field, l(j1Var), v(j1Var));
        }
        boolean l11 = l(j1Var);
        Intrinsics.checkNotNullParameter(field, "field");
        return new dp.p(field, l11, z6, 0);
    }

    public static final boolean l(j1 j1Var) {
        return !z0.e(j1Var.j().e().getType());
    }

    public static final Type m(KType kType, boolean z5) {
        c classifier = kType.getClassifier();
        if (classifier instanceof t) {
            return new z((t) classifier);
        }
        if (!(classifier instanceof KClass)) {
            throw new UnsupportedOperationException("Unsupported type classifier: " + kType);
        }
        KClass kClass = (KClass) classifier;
        Class A = z5 ? com.facebook.imagepipeline.nativecode.c.A(kClass) : com.facebook.imagepipeline.nativecode.c.z(kClass);
        List arguments = kType.getArguments();
        if (arguments.isEmpty()) {
            return A;
        }
        if (!A.isArray()) {
            return t(A, arguments);
        }
        if (A.getComponentType().isPrimitive()) {
            return A;
        }
        KTypeProjection kTypeProjection = (KTypeProjection) CollectionsKt.b0(arguments);
        if (kTypeProjection == null) {
            throw new IllegalArgumentException("kotlin.Array must have exactly one type argument: " + kType);
        }
        w wVar = kTypeProjection.a;
        KType kType2 = kTypeProjection.f13550b;
        int i5 = wVar == null ? -1 : a0.a[wVar.ordinal()];
        if (i5 == -1 || i5 == 1) {
            return A;
        }
        if (i5 != 2 && i5 != 3) {
            throw new fo.n();
        }
        Intrinsics.checkNotNull(kType2);
        Type m5 = m(kType2, false);
        return m5 instanceof Class ? A : new a(m5);
    }

    public static final void n(ip.f fVar, LinkedHashSet linkedHashSet, rq.o oVar, boolean z5) {
        for (ip.l lVar : m3.n.I(oVar, rq.f.f17536o, 2)) {
            if (lVar instanceof ip.f) {
                ip.f fVar2 = (ip.f) lVar;
                if (fVar2.z()) {
                    hq.e name = fVar2.getName();
                    Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                    ip.i a = oVar.a(name, qp.c.f16940v);
                    fVar2 = a instanceof ip.f ? (ip.f) a : a instanceof r0 ? ((wq.t) ((r0) a)).B0() : null;
                }
                if (fVar2 != null) {
                    int i5 = kq.e.a;
                    Iterator it = fVar2.n().b().iterator();
                    while (true) {
                        if (it.hasNext()) {
                            if (kq.e.p((yq.y) it.next(), fVar.a())) {
                                linkedHashSet.add(fVar2);
                                break;
                            }
                        } else {
                            break;
                        }
                    }
                    if (z5) {
                        rq.o h0 = fVar2.h0();
                        Intrinsics.checkNotNullExpressionValue(h0, "getUnsubstitutedInnerClassesScope(...)");
                        n(fVar, linkedHashSet, h0, z5);
                    }
                }
            }
        }
    }

    public static final void o(Drawable drawable, Drawable drawable2) {
        if (drawable2 == null || drawable == null || drawable == drawable2) {
            return;
        }
        drawable.setBounds(drawable2.getBounds());
        drawable.setChangingConfigurations(drawable2.getChangingConfigurations());
        drawable.setLevel(drawable2.getLevel());
        drawable.setVisible(drawable2.isVisible(), false);
        drawable.setState(drawable2.getState());
    }

    public static boolean p(File file, Resources resources, int i5) {
        InputStream inputStream;
        try {
            inputStream = resources.openRawResource(i5);
            try {
                boolean q5 = q(inputStream, file);
                j(inputStream);
                return q5;
            } catch (Throwable th2) {
                th = th2;
                j(inputStream);
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            inputStream = null;
        }
    }

    public static boolean q(InputStream inputStream, File file) {
        FileOutputStream fileOutputStream;
        StrictMode.ThreadPolicy allowThreadDiskWrites = StrictMode.allowThreadDiskWrites();
        FileOutputStream fileOutputStream2 = null;
        try {
            try {
                fileOutputStream = new FileOutputStream(file, false);
            } catch (IOException e9) {
                e = e9;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
            while (true) {
                int read = inputStream.read(bArr);
                if (read == -1) {
                    j(fileOutputStream);
                    StrictMode.setThreadPolicy(allowThreadDiskWrites);
                    return true;
                }
                fileOutputStream.write(bArr, 0, read);
            }
        } catch (IOException e10) {
            e = e10;
            fileOutputStream2 = fileOutputStream;
            Log.e("TypefaceCompatUtil", "Error copying resource contents to temp file: " + e.getMessage());
            j(fileOutputStream2);
            StrictMode.setThreadPolicy(allowThreadDiskWrites);
            return false;
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream2 = fileOutputStream;
            j(fileOutputStream2);
            StrictMode.setThreadPolicy(allowThreadDiskWrites);
            throw th;
        }
    }

    public static final Object r(Class annotationClass, Map values, List methods) {
        Intrinsics.checkNotNullParameter(annotationClass, "annotationClass");
        Intrinsics.checkNotNullParameter(values, "values");
        Intrinsics.checkNotNullParameter(methods, "methods");
        fo.u a = fo.l.a(new cp.d0(5, values));
        Object newProxyInstance = Proxy.newProxyInstance(annotationClass.getClassLoader(), new Class[]{annotationClass}, new dp.d(annotationClass, values, fo.l.a(new bs.q(3, annotationClass, values)), a, methods));
        Intrinsics.checkNotNull(newProxyInstance, "null cannot be cast to non-null type T of kotlin.reflect.jvm.internal.calls.AnnotationConstructorCallerKt.createAnnotationInstance");
        return newProxyInstance;
    }

    public static o0 s(boolean z5, zq.n nVar, int i5) {
        if ((i5 & 4) != 0) {
            nVar = zq.n.f21398d;
        }
        zq.n typeSystemContext = nVar;
        Intrinsics.checkNotNullParameter(typeSystemContext, "typeSystemContext");
        zq.e kotlinTypePreparator = zq.e.a;
        Intrinsics.checkNotNullParameter(kotlinTypePreparator, "kotlinTypePreparator");
        zq.f kotlinTypeRefiner = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return new o0(z5, true, typeSystemContext, kotlinTypePreparator, kotlinTypeRefiner);
    }

    public static final y t(Class cls, List list) {
        Class<?> declaringClass = cls.getDeclaringClass();
        if (declaringClass == null) {
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list, 10));
            Iterator it = list.iterator();
            while (it.hasNext()) {
                arrayList.add(y((KTypeProjection) it.next()));
            }
            return new y(cls, null, arrayList);
        }
        if (Modifier.isStatic(cls.getModifiers())) {
            ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
            Iterator it2 = list.iterator();
            while (it2.hasNext()) {
                arrayList2.add(y((KTypeProjection) it2.next()));
            }
            return new y(cls, declaringClass, arrayList2);
        }
        int length = cls.getTypeParameters().length;
        y t5 = t(declaringClass, list.subList(length, list.size()));
        List subList = list.subList(0, length);
        ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(subList, 10));
        Iterator it3 = subList.iterator();
        while (it3.hasNext()) {
            arrayList3.add(y((KTypeProjection) it3.next()));
        }
        return new y(cls, t5, arrayList3);
    }

    public static final HashSet u(Iterable iterable) {
        Intrinsics.checkNotNullParameter(iterable, "<this>");
        HashSet hashSet = new HashSet();
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            Set d6 = ((rq.o) it.next()).d();
            if (d6 == null) {
                return null;
            }
            kotlin.collections.h0.o(hashSet, d6);
        }
        return hashSet;
    }

    public static final Object v(j1 j1Var) {
        Intrinsics.checkNotNullParameter(j1Var, "<this>");
        cp.o1 j = j1Var.j();
        return android.support.v4.media.session.b.b(j.G, j.e());
    }

    public static float w(EdgeEffect edgeEffect) {
        if (Build.VERSION.SDK_INT >= 31) {
            return androidx.core.widget.c.b(edgeEffect);
        }
        return 0.0f;
    }

    public static final String x(CacheKey key) {
        Intrinsics.checkNotNullParameter(key, "key");
        try {
            if (!(key instanceof j8.a)) {
                return L(key);
            }
            ArrayList arrayList = ((j8.a) key).a;
            Intrinsics.checkNotNullExpressionValue(arrayList, "getCacheKeys(...)");
            Object obj = arrayList.get(0);
            Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
            return L((CacheKey) obj);
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException(e9);
        }
    }

    public static final Type y(KTypeProjection kTypeProjection) {
        w wVar = kTypeProjection.a;
        if (wVar == null) {
            e0.f21325i.getClass();
            return e0.f21326v;
        }
        KType kType = kTypeProjection.f13550b;
        Intrinsics.checkNotNull(kType);
        int ordinal = wVar.ordinal();
        if (ordinal == 0) {
            return m(kType, true);
        }
        if (ordinal == 1) {
            return new e0(null, m(kType, true));
        }
        if (ordinal == 2) {
            return new e0(m(kType, true), null);
        }
        throw new fo.n();
    }

    public static final ArrayList z(CacheKey key) {
        Intrinsics.checkNotNullParameter(key, "key");
        try {
            if (!(key instanceof j8.a)) {
                ArrayList arrayList = new ArrayList(1);
                arrayList.add(key.b() ? key.c() : L(key));
                return arrayList;
            }
            ArrayList arrayList2 = ((j8.a) key).a;
            Intrinsics.checkNotNullExpressionValue(arrayList2, "getCacheKeys(...)");
            ArrayList arrayList3 = new ArrayList(arrayList2.size());
            int size = arrayList2.size();
            for (int i5 = 0; i5 < size; i5++) {
                Object obj = arrayList2.get(i5);
                Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
                arrayList3.add(L((CacheKey) obj));
            }
            return arrayList3;
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException(e9);
        }
    }

    @Override // m3.o
    public float b(View view, ViewGroup viewGroup) {
        return view.getTranslationY();
    }
}
