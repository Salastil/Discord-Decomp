package b1;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.os.ParcelFileDescriptor;
import android.system.ErrnoException;
import android.system.Os;
import android.system.OsConstants;
import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import zo.c0;

/* loaded from: classes.dex */
public class g extends zk.a {
    public static Class j = null;
    public static Constructor k = null;

    /* renamed from: l, reason: collision with root package name */
    public static Method f2712l = null;

    /* renamed from: m, reason: collision with root package name */
    public static Method f2713m = null;

    /* renamed from: n, reason: collision with root package name */
    public static boolean f2714n = false;

    public static boolean P(String str, boolean z5, int i5, Object obj) {
        Q();
        try {
            return ((Boolean) f2712l.invoke(obj, str, Integer.valueOf(i5), Boolean.valueOf(z5))).booleanValue();
        } catch (IllegalAccessException | InvocationTargetException e9) {
            throw new RuntimeException(e9);
        }
    }

    public static void Q() {
        Method method;
        Class<?> cls;
        Method method2;
        if (f2714n) {
            return;
        }
        f2714n = true;
        Constructor<?> constructor = null;
        try {
            cls = Class.forName("android.graphics.FontFamily");
            Constructor<?> constructor2 = cls.getConstructor(null);
            method2 = cls.getMethod("addFontWeightStyle", String.class, Integer.TYPE, Boolean.TYPE);
            method = Typeface.class.getMethod("createFromFamiliesWithDefault", Array.newInstance(cls, 1).getClass());
            constructor = constructor2;
        } catch (ClassNotFoundException | NoSuchMethodException e9) {
            Log.e("TypefaceCompatApi21Impl", e9.getClass().getName(), e9);
            method = null;
            cls = null;
            method2 = null;
        }
        k = constructor;
        j = cls;
        f2712l = method2;
        f2713m = method;
    }

    @Override // zk.a
    public Typeface h(Context context, a1.f fVar, Resources resources, int i5) {
        Q();
        try {
            Object newInstance = k.newInstance(null);
            for (a1.g gVar : fVar.a) {
                File A = c0.A(context);
                if (A == null) {
                    return null;
                }
                try {
                    if (!c0.p(A, resources, gVar.f21f)) {
                        return null;
                    }
                    if (!P(A.getPath(), gVar.f18c, gVar.f17b, newInstance)) {
                        return null;
                    }
                    A.delete();
                } catch (RuntimeException unused) {
                    return null;
                } finally {
                    A.delete();
                }
            }
            Q();
            try {
                Object newInstance2 = Array.newInstance((Class<?>) j, 1);
                Array.set(newInstance2, 0, newInstance);
                return (Typeface) f2713m.invoke(null, newInstance2);
            } catch (IllegalAccessException | InvocationTargetException e9) {
                throw new RuntimeException(e9);
            }
        } catch (IllegalAccessException | InstantiationException | InvocationTargetException e10) {
            throw new RuntimeException(e10);
        }
    }

    @Override // zk.a
    public Typeface i(Context context, i1.g[] gVarArr, int i5) {
        File file;
        String readlink;
        if (gVarArr.length >= 1) {
            try {
                ParcelFileDescriptor openFileDescriptor = context.getContentResolver().openFileDescriptor(o(gVarArr, i5).a, "r", null);
                if (openFileDescriptor != null) {
                    try {
                        try {
                            readlink = Os.readlink("/proc/self/fd/" + openFileDescriptor.getFd());
                        } finally {
                        }
                    } catch (ErrnoException unused) {
                    }
                    try {
                        if (OsConstants.S_ISREG(Os.stat(readlink).st_mode)) {
                            file = new File(readlink);
                            if (file != null && file.canRead()) {
                                Typeface createFromFile = Typeface.createFromFile(file);
                                openFileDescriptor.close();
                                return createFromFile;
                            }
                            FileInputStream fileInputStream = new FileInputStream(openFileDescriptor.getFileDescriptor());
                            Typeface k5 = k(context, fileInputStream);
                            fileInputStream.close();
                            openFileDescriptor.close();
                            return k5;
                        }
                        Typeface k52 = k(context, fileInputStream);
                        fileInputStream.close();
                        openFileDescriptor.close();
                        return k52;
                    } finally {
                    }
                    file = null;
                    if (file != null) {
                        Typeface createFromFile2 = Typeface.createFromFile(file);
                        openFileDescriptor.close();
                        return createFromFile2;
                    }
                    FileInputStream fileInputStream2 = new FileInputStream(openFileDescriptor.getFileDescriptor());
                } else if (openFileDescriptor != null) {
                    openFileDescriptor.close();
                    return null;
                }
            } catch (IOException unused2) {
            }
        }
        return null;
    }
}
