package b1;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.net.Uri;
import android.util.Log;
import androidx.collection.SimpleArrayMap;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.nio.ByteBuffer;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.util.List;
import zo.c0;

/* loaded from: classes.dex */
public final class h extends zk.a {
    public static final Class j;
    public static final Constructor k;

    /* renamed from: l, reason: collision with root package name */
    public static final Method f2715l;

    /* renamed from: m, reason: collision with root package name */
    public static final Method f2716m;

    static {
        Class<?> cls;
        Method method;
        Method method2;
        Constructor<?> constructor = null;
        try {
            cls = Class.forName("android.graphics.FontFamily");
            Constructor<?> constructor2 = cls.getConstructor(null);
            Class cls2 = Integer.TYPE;
            method2 = cls.getMethod("addFontWeightStyle", ByteBuffer.class, cls2, List.class, cls2, Boolean.TYPE);
            method = Typeface.class.getMethod("createFromFamiliesWithDefault", Array.newInstance(cls, 1).getClass());
            constructor = constructor2;
        } catch (ClassNotFoundException | NoSuchMethodException e9) {
            Log.e("TypefaceCompatApi24Impl", e9.getClass().getName(), e9);
            cls = null;
            method = null;
            method2 = null;
        }
        k = constructor;
        j = cls;
        f2715l = method2;
        f2716m = method;
    }

    public static boolean P(Object obj, ByteBuffer byteBuffer, int i5, int i6, boolean z5) {
        try {
            return ((Boolean) f2715l.invoke(obj, byteBuffer, Integer.valueOf(i5), null, Integer.valueOf(i6), Boolean.valueOf(z5))).booleanValue();
        } catch (IllegalAccessException | InvocationTargetException unused) {
            return false;
        }
    }

    public static Typeface Q(Object obj) {
        try {
            Object newInstance = Array.newInstance((Class<?>) j, 1);
            Array.set(newInstance, 0, obj);
            return (Typeface) f2716m.invoke(null, newInstance);
        } catch (IllegalAccessException | InvocationTargetException unused) {
            return null;
        }
    }

    @Override // zk.a
    public final Typeface h(Context context, a1.f fVar, Resources resources, int i5) {
        Object obj;
        int i6;
        MappedByteBuffer mappedByteBuffer;
        FileInputStream fileInputStream;
        try {
            obj = k.newInstance(null);
        } catch (IllegalAccessException | InstantiationException | InvocationTargetException unused) {
            obj = null;
        }
        if (obj != null) {
            for (a1.g gVar : fVar.a) {
                int i10 = gVar.f21f;
                File A = c0.A(context);
                if (A != null) {
                    try {
                        if (c0.p(A, resources, i10)) {
                            try {
                                fileInputStream = new FileInputStream(A);
                            } catch (IOException unused2) {
                                mappedByteBuffer = null;
                            }
                            try {
                                FileChannel channel = fileInputStream.getChannel();
                                mappedByteBuffer = channel.map(FileChannel.MapMode.READ_ONLY, 0L, channel.size());
                                fileInputStream.close();
                                i6 = (mappedByteBuffer != null && P(obj, mappedByteBuffer, gVar.f20e, gVar.f17b, gVar.f18c)) ? i6 + 1 : 0;
                            } finally {
                            }
                        }
                    } finally {
                        A.delete();
                    }
                }
                mappedByteBuffer = null;
                if (mappedByteBuffer != null) {
                }
            }
            return Q(obj);
        }
        return null;
    }

    @Override // zk.a
    public final Typeface i(Context context, i1.g[] gVarArr, int i5) {
        Object obj;
        try {
            obj = k.newInstance(null);
        } catch (IllegalAccessException | InstantiationException | InvocationTargetException unused) {
            obj = null;
        }
        if (obj != null) {
            int i6 = 0;
            SimpleArrayMap simpleArrayMap = new SimpleArrayMap(0);
            int length = gVarArr.length;
            while (true) {
                if (i6 < length) {
                    i1.g gVar = gVarArr[i6];
                    Uri uri = gVar.a;
                    ByteBuffer byteBuffer = (ByteBuffer) simpleArrayMap.get(uri);
                    if (byteBuffer == null) {
                        byteBuffer = c0.C(context, uri);
                        simpleArrayMap.put(uri, byteBuffer);
                    }
                    if (byteBuffer == null || !P(obj, byteBuffer, gVar.f10453b, gVar.f10454c, gVar.f10455d)) {
                        break;
                    }
                    i6++;
                } else {
                    Typeface Q = Q(obj);
                    if (Q != null) {
                        return Typeface.create(Q, i5);
                    }
                }
            }
        }
        return null;
    }
}
