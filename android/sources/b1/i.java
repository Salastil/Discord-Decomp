package b1;

import android.content.Context;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.fonts.FontVariationAxis;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import java.io.IOException;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.nio.ByteBuffer;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import zo.c0;

/* loaded from: classes.dex */
public class i extends g {

    /* renamed from: o, reason: collision with root package name */
    public final Class f2717o;

    /* renamed from: p, reason: collision with root package name */
    public final Constructor f2718p;

    /* renamed from: q, reason: collision with root package name */
    public final Method f2719q;

    /* renamed from: r, reason: collision with root package name */
    public final Method f2720r;

    /* renamed from: s, reason: collision with root package name */
    public final Method f2721s;

    /* renamed from: t, reason: collision with root package name */
    public final Method f2722t;

    /* renamed from: u, reason: collision with root package name */
    public final Method f2723u;

    public i() {
        Method method;
        Constructor<?> constructor;
        Method method2;
        Method method3;
        Method method4;
        Method method5;
        Class<?> cls = null;
        try {
            Class<?> cls2 = Class.forName("android.graphics.FontFamily");
            constructor = cls2.getConstructor(null);
            method2 = U(cls2);
            Class cls3 = Integer.TYPE;
            method3 = cls2.getMethod("addFontFromBuffer", ByteBuffer.class, cls3, FontVariationAxis[].class, cls3, cls3);
            method4 = cls2.getMethod("freeze", null);
            method5 = cls2.getMethod("abortCreation", null);
            method = V(cls2);
            cls = cls2;
        } catch (ClassNotFoundException | NoSuchMethodException e9) {
            Log.e("TypefaceCompatApi26Impl", "Unable to collect necessary methods for class ".concat(e9.getClass().getName()), e9);
            method = null;
            constructor = null;
            method2 = null;
            method3 = null;
            method4 = null;
            method5 = null;
        }
        this.f2717o = cls;
        this.f2718p = constructor;
        this.f2719q = method2;
        this.f2720r = method3;
        this.f2721s = method4;
        this.f2722t = method5;
        this.f2723u = method;
    }

    public static Method U(Class cls) {
        Class cls2 = Boolean.TYPE;
        Class cls3 = Integer.TYPE;
        return cls.getMethod("addFontFromAssetManager", AssetManager.class, String.class, cls3, cls2, cls3, cls3, cls3, FontVariationAxis[].class);
    }

    public final boolean R(Context context, Object obj, String str, int i5, int i6, int i10, FontVariationAxis[] fontVariationAxisArr) {
        try {
            return ((Boolean) this.f2719q.invoke(obj, context.getAssets(), str, 0, Boolean.FALSE, Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i10), fontVariationAxisArr)).booleanValue();
        } catch (IllegalAccessException | InvocationTargetException unused) {
            return false;
        }
    }

    public Typeface S(Object obj) {
        try {
            Object newInstance = Array.newInstance((Class<?>) this.f2717o, 1);
            Array.set(newInstance, 0, obj);
            return (Typeface) this.f2723u.invoke(null, newInstance, -1, -1);
        } catch (IllegalAccessException | InvocationTargetException unused) {
            return null;
        }
    }

    public final boolean T(Object obj) {
        try {
            return ((Boolean) this.f2721s.invoke(obj, null)).booleanValue();
        } catch (IllegalAccessException | InvocationTargetException unused) {
            return false;
        }
    }

    public Method V(Class cls) {
        Class<?> cls2 = Array.newInstance((Class<?>) cls, 1).getClass();
        Class cls3 = Integer.TYPE;
        Method declaredMethod = Typeface.class.getDeclaredMethod("createFromFamiliesWithDefault", cls2, cls3, cls3);
        declaredMethod.setAccessible(true);
        return declaredMethod;
    }

    @Override // b1.g, zk.a
    public final Typeface h(Context context, a1.f fVar, Resources resources, int i5) {
        Object obj;
        Method method = this.f2719q;
        if (method == null) {
            Log.w("TypefaceCompatApi26Impl", "Unable to collect necessary private methods. Fallback to legacy implementation.");
        }
        if (method == null) {
            return super.h(context, fVar, resources, i5);
        }
        try {
            obj = this.f2718p.newInstance(null);
        } catch (IllegalAccessException | InstantiationException | InvocationTargetException unused) {
            obj = null;
        }
        if (obj != null) {
            a1.g[] gVarArr = fVar.a;
            int length = gVarArr.length;
            int i6 = 0;
            while (true) {
                if (i6 < length) {
                    a1.g gVar = gVarArr[i6];
                    Context context2 = context;
                    if (R(context2, obj, gVar.a, gVar.f20e, gVar.f17b, gVar.f18c ? 1 : 0, FontVariationAxis.fromFontVariationSettings(gVar.f19d))) {
                        i6++;
                        context = context2;
                    } else {
                        try {
                            this.f2722t.invoke(obj, null);
                            break;
                        } catch (IllegalAccessException | InvocationTargetException unused2) {
                        }
                    }
                } else if (T(obj)) {
                    return S(obj);
                }
            }
        }
        return null;
    }

    @Override // b1.g, zk.a
    public final Typeface i(Context context, i1.g[] gVarArr, int i5) {
        Object obj;
        Typeface S;
        boolean z5;
        if (gVarArr.length >= 1) {
            Method method = this.f2719q;
            if (method == null) {
                Log.w("TypefaceCompatApi26Impl", "Unable to collect necessary private methods. Fallback to legacy implementation.");
            }
            try {
                if (method != null) {
                    HashMap hashMap = new HashMap();
                    for (i1.g gVar : gVarArr) {
                        if (gVar.f10457f == 0) {
                            Uri uri = gVar.a;
                            if (!hashMap.containsKey(uri)) {
                                hashMap.put(uri, c0.C(context, uri));
                            }
                        }
                    }
                    Map unmodifiableMap = Collections.unmodifiableMap(hashMap);
                    try {
                        obj = this.f2718p.newInstance(null);
                    } catch (IllegalAccessException | InstantiationException | InvocationTargetException unused) {
                        obj = null;
                    }
                    if (obj != null) {
                        int length = gVarArr.length;
                        int i6 = 0;
                        boolean z6 = false;
                        while (true) {
                            Method method2 = this.f2722t;
                            if (i6 < length) {
                                i1.g gVar2 = gVarArr[i6];
                                ByteBuffer byteBuffer = (ByteBuffer) unmodifiableMap.get(gVar2.a);
                                if (byteBuffer != null) {
                                    try {
                                        z5 = ((Boolean) this.f2720r.invoke(obj, byteBuffer, Integer.valueOf(gVar2.f10453b), null, Integer.valueOf(gVar2.f10454c), Integer.valueOf(gVar2.f10455d ? 1 : 0))).booleanValue();
                                    } catch (IllegalAccessException | InvocationTargetException unused2) {
                                        z5 = false;
                                    }
                                    if (!z5) {
                                        method2.invoke(obj, null);
                                        break;
                                    }
                                    z6 = true;
                                }
                                i6++;
                                z6 = z6;
                            } else if (!z6) {
                                method2.invoke(obj, null);
                            } else if (T(obj) && (S = S(obj)) != null) {
                                return Typeface.create(S, i5);
                            }
                        }
                    }
                } else {
                    i1.g o6 = o(gVarArr, i5);
                    ParcelFileDescriptor openFileDescriptor = context.getContentResolver().openFileDescriptor(o6.a, "r", null);
                    if (openFileDescriptor != null) {
                        try {
                            Typeface build = new Typeface.Builder(openFileDescriptor.getFileDescriptor()).setWeight(o6.f10454c).setItalic(o6.f10455d).build();
                            openFileDescriptor.close();
                            return build;
                        } finally {
                        }
                    }
                    if (openFileDescriptor != null) {
                        openFileDescriptor.close();
                        return null;
                    }
                }
            } catch (IOException | IllegalAccessException | InvocationTargetException unused3) {
            }
        }
        return null;
    }

    @Override // zk.a
    public final Typeface l(Context context, Resources resources, int i5, String str, int i6) {
        Object obj;
        Method method = this.f2719q;
        if (method == null) {
            Log.w("TypefaceCompatApi26Impl", "Unable to collect necessary private methods. Fallback to legacy implementation.");
        }
        if (method == null) {
            return super.l(context, resources, i5, str, i6);
        }
        try {
            obj = this.f2718p.newInstance(null);
        } catch (IllegalAccessException | InstantiationException | InvocationTargetException unused) {
            obj = null;
        }
        if (obj != null) {
            if (!R(context, obj, str, 0, -1, -1, null)) {
                try {
                    this.f2722t.invoke(obj, null);
                } catch (IllegalAccessException | InvocationTargetException unused2) {
                }
            } else if (T(obj)) {
                return S(obj);
            }
        }
        return null;
    }
}
