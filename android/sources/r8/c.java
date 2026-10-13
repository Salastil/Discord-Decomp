package r8;

import a5.k0;
import android.content.Context;
import android.content.res.TypedArray;
import android.database.Cursor;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.media.MediaCodec;
import android.os.Build;
import android.os.Parcel;
import android.os.RemoteException;
import android.util.Log;
import android.view.View;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.customview.widget.FocusStrategy$BoundsAdapter;
import cd.j;
import cd.k;
import cd.l;
import ch.t;
import com.facebook.soloader.b0;
import com.facebook.soloader.c0;
import com.facebook.soloader.i0;
import com.google.android.gms.dynamite.DynamiteModule$DynamiteLoaderClassLoader;
import eightbitlab.com.blurview.BlurController;
import eightbitlab.com.blurview.BlurViewFacade;
import fo.u;
import io.sentry.hints.i;
import java.io.File;
import java.io.IOException;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;
import lh.m;
import nf.h;
import th.q;
import zf.g;

/* loaded from: classes3.dex */
public final class c implements b, FocusStrategy$BoundsAdapter, yb.b, k, BlurController, tm.a, i, lb.c, nf.c, t, q {

    /* renamed from: e, reason: collision with root package name */
    public static c f17138e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17139d;

    public /* synthetic */ c(int i5) {
        this.f17139d = i5;
    }

    public static final boolean p(View view, Boolean bool) {
        u uVar = jm.q.Z;
        Method method = (Method) jm.q.Z.getValue();
        if (method == null || !method.getDeclaringClass().isInstance(view)) {
            return false;
        }
        try {
            method.invoke(view, bool);
            return true;
        } catch (ReflectiveOperationException unused) {
            return false;
        }
    }

    public static c q(Context context, int i5) {
        ta.a.h("Cannot create a CalendarItemStyle with a styleResId of 0", i5 != 0);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(i5, lg.a.f13971v);
        Rect rect = new Rect(obtainStyledAttributes.getDimensionPixelOffset(0, 0), obtainStyledAttributes.getDimensionPixelOffset(2, 0), obtainStyledAttributes.getDimensionPixelOffset(1, 0), obtainStyledAttributes.getDimensionPixelOffset(3, 0));
        k0.u(context, obtainStyledAttributes, 4);
        k0.u(context, obtainStyledAttributes, 9);
        k0.u(context, obtainStyledAttributes, 7);
        obtainStyledAttributes.getDimensionPixelSize(8, 0);
        m.a(context, obtainStyledAttributes.getResourceId(5, 0), obtainStyledAttributes.getResourceId(6, 0)).a();
        obtainStyledAttributes.recycle();
        c cVar = new c(4);
        ta.a.i(rect.left);
        ta.a.i(rect.top);
        ta.a.i(rect.right);
        ta.a.i(rect.bottom);
        return cVar;
    }

    public static MediaCodec r(j jVar) {
        jVar.a.getClass();
        String str = jVar.a.a;
        ke.b.c("createCodec:" + str);
        MediaCodec createByCodecName = MediaCodec.createByCodecName(str);
        ke.b.t();
        return createByCodecName;
    }

    public static io.sentry.android.core.internal.tombstone.a s(String str) {
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        httpURLConnection.setRequestMethod("GET");
        httpURLConnection.connect();
        return new io.sentry.android.core.internal.tombstone.a(httpURLConnection);
    }

    public static synchronized c t() {
        c cVar;
        synchronized (c.class) {
            try {
                if (f17138e == null) {
                    f17138e = new c(0);
                }
                cVar = f17138e;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return cVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:43:0x018f, code lost:
    
        if (r7 != false) goto L99;
     */
    @Override // nf.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int b(Context context, boolean z5) {
        Field declaredField;
        int readInt;
        Cursor cursor;
        try {
            synchronized (nf.d.class) {
                Boolean bool = nf.d.f15416c;
                boolean z6 = true;
                Cursor cursor2 = null;
                if (bool == null) {
                    try {
                        declaredField = context.getApplicationContext().getClassLoader().loadClass(DynamiteModule$DynamiteLoaderClassLoader.class.getName()).getDeclaredField("sClassLoader");
                    } catch (ClassNotFoundException | IllegalAccessException | NoSuchFieldException e9) {
                        String obj = e9.toString();
                        StringBuilder sb2 = new StringBuilder(obj.length() + 30);
                        sb2.append("Failed to load module via V2: ");
                        sb2.append(obj);
                        Log.w("DynamiteModule", sb2.toString());
                        bool = Boolean.FALSE;
                    }
                    synchronized (declaredField.getDeclaringClass()) {
                        ClassLoader classLoader = (ClassLoader) declaredField.get(null);
                        if (classLoader == ClassLoader.getSystemClassLoader()) {
                            bool = Boolean.FALSE;
                        } else if (classLoader != null) {
                            try {
                                nf.d.e(classLoader);
                            } catch (nf.b unused) {
                            }
                            bool = Boolean.TRUE;
                        } else {
                            if (!nf.d.c(context)) {
                                return 0;
                            }
                            if (!nf.d.f15418e) {
                                Boolean bool2 = Boolean.TRUE;
                                if (!bool2.equals(null)) {
                                    try {
                                        int d6 = nf.d.d(context, z5, true);
                                        String str = nf.d.f15417d;
                                        if (str != null && !str.isEmpty()) {
                                            ClassLoader F = nf.e.F();
                                            if (F == null) {
                                                if (Build.VERSION.SDK_INT >= 29) {
                                                    nf.a.b();
                                                    String str2 = nf.d.f15417d;
                                                    bf.t.g(str2);
                                                    F = nf.a.a(ClassLoader.getSystemClassLoader(), str2);
                                                } else {
                                                    String str3 = nf.d.f15417d;
                                                    bf.t.g(str3);
                                                    F = new nf.f(str3, ClassLoader.getSystemClassLoader());
                                                }
                                            }
                                            nf.d.e(F);
                                            declaredField.set(null, F);
                                            nf.d.f15416c = bool2;
                                            return d6;
                                        }
                                        return d6;
                                    } catch (nf.b unused2) {
                                        declaredField.set(null, ClassLoader.getSystemClassLoader());
                                        bool = Boolean.FALSE;
                                    }
                                }
                            }
                            declaredField.set(null, ClassLoader.getSystemClassLoader());
                            bool = Boolean.FALSE;
                        }
                        nf.d.f15416c = bool;
                    }
                }
                if (bool.booleanValue()) {
                    try {
                        return nf.d.d(context, z5, false);
                    } catch (nf.b e10) {
                        String message = e10.getMessage();
                        StringBuilder sb3 = new StringBuilder(String.valueOf(message).length() + 42);
                        sb3.append("Failed to retrieve remote module version: ");
                        sb3.append(message);
                        Log.w("DynamiteModule", sb3.toString());
                        return 0;
                    }
                }
                h f2 = nf.d.f(context);
                try {
                    if (f2 == null) {
                        return 0;
                    }
                    try {
                        Parcel t5 = f2.t(6, f2.u());
                        int readInt2 = t5.readInt();
                        t5.recycle();
                        if (readInt2 < 3) {
                            if (readInt2 == 2) {
                                Log.w("DynamiteModule", "IDynamite loader version = 2, no high precision latency measurement.");
                                mf.b bVar = new mf.b(context);
                                Parcel u5 = f2.u();
                                g.b(u5, bVar);
                                u5.writeString("com.google.android.gms.cronet_dynamite");
                                u5.writeInt(z5 ? 1 : 0);
                                Parcel t10 = f2.t(5, u5);
                                readInt = t10.readInt();
                                t10.recycle();
                            } else {
                                Log.w("DynamiteModule", "IDynamite loader version < 2, falling back to getModuleVersion2");
                                mf.b bVar2 = new mf.b(context);
                                Parcel u6 = f2.u();
                                g.b(u6, bVar2);
                                u6.writeString("com.google.android.gms.cronet_dynamite");
                                u6.writeInt(z5 ? 1 : 0);
                                Parcel t11 = f2.t(3, u6);
                                readInt = t11.readInt();
                                t11.recycle();
                            }
                            return readInt;
                        }
                        ThreadLocal threadLocal = nf.d.f15421h;
                        nf.g gVar = (nf.g) threadLocal.get();
                        if (gVar != null && (cursor = gVar.a) != null) {
                            return cursor.getInt(0);
                        }
                        Cursor cursor3 = (Cursor) mf.b.A(f2.A(new mf.b(context), z5, ((Long) nf.d.f15422i.get()).longValue()));
                        if (cursor3 != null) {
                            try {
                                if (cursor3.moveToFirst()) {
                                    int i5 = cursor3.getInt(0);
                                    if (i5 > 0) {
                                        nf.g gVar2 = (nf.g) threadLocal.get();
                                        if (gVar2 == null || gVar2.a != null) {
                                            z6 = false;
                                        } else {
                                            gVar2.a = cursor3;
                                        }
                                    }
                                    cursor2 = cursor3;
                                    if (cursor2 != null) {
                                        cursor2.close();
                                    }
                                    return i5;
                                }
                            } catch (RemoteException e11) {
                                e = e11;
                                cursor2 = cursor3;
                                String message2 = e.getMessage();
                                StringBuilder sb4 = new StringBuilder(String.valueOf(message2).length() + 42);
                                sb4.append("Failed to retrieve remote module version: ");
                                sb4.append(message2);
                                Log.w("DynamiteModule", sb4.toString());
                                if (cursor2 == null) {
                                    return 0;
                                }
                                cursor2.close();
                                return 0;
                            } catch (Throwable th2) {
                                th = th2;
                                cursor2 = cursor3;
                                if (cursor2 != null) {
                                    cursor2.close();
                                }
                                throw th;
                            }
                        }
                        Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                        if (cursor3 == null) {
                            return 0;
                        }
                        cursor3.close();
                        return 0;
                    } catch (RemoteException e12) {
                        e = e12;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            }
        } finally {
        }
    }

    @Override // tm.a
    public String d() {
        switch (this.f17139d) {
            case 6:
                return "onDidDisappear";
            default:
                return "onDetentChanged";
        }
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        for (b0 b0Var : b0VarArr) {
            if (b0Var instanceof i0) {
                i0 i0Var = (i0) b0Var;
                Log.e("SoLoader", "Waiting on SoSource ".concat(b0Var.b()));
                File file = i0Var.a;
                try {
                    c0.d(file, new File(file, "dso_lock")).close();
                } catch (Exception e9) {
                    Log.e("fb-UnpackingSoSource", "Encountered exception during wait for unpacking trying to acquire file lock for " + i0Var.getClass().getName() + " (" + file + "): ", e9);
                }
            }
        }
        return true;
    }

    @Override // javax.inject.Provider
    public Object get() {
        l8.a aVar = new l8.a(6);
        HashMap hashMap = new HashMap();
        Set set = Collections.EMPTY_SET;
        if (set == null) {
            throw new NullPointerException("Null flags");
        }
        hashMap.put(tb.d.f18249d, new cc.c(30000L, 86400000L, set));
        if (set == null) {
            throw new NullPointerException("Null flags");
        }
        hashMap.put(tb.d.f18251i, new cc.c(1000L, 86400000L, set));
        if (set == null) {
            throw new NullPointerException("Null flags");
        }
        Set unmodifiableSet = Collections.unmodifiableSet(new HashSet(Arrays.asList(cc.d.f3371e)));
        if (unmodifiableSet == null) {
            throw new NullPointerException("Null flags");
        }
        hashMap.put(tb.d.f18250e, new cc.c(86400000L, 86400000L, unmodifiableSet));
        if (hashMap.keySet().size() < tb.d.values().length) {
            throw new IllegalStateException("Not all priorities have been configured");
        }
        new HashMap();
        return new cc.b(aVar, hashMap);
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        switch (this.f17139d) {
            case 6:
                return "topDidDisappear";
            default:
                return "topDetentChanged";
        }
    }

    @Override // ch.t
    public WindowInsetsCompat i(View view, WindowInsetsCompat windowInsetsCompat, ch.u uVar) {
        uVar.f3569e = windowInsetsCompat.a() + uVar.f3569e;
        boolean z5 = view.getLayoutDirection() == 1;
        int b10 = windowInsetsCompat.b();
        int c6 = windowInsetsCompat.c();
        int i5 = uVar.f3566b + (z5 ? c6 : b10);
        uVar.f3566b = i5;
        int i6 = uVar.f3568d;
        if (!z5) {
            b10 = c6;
        }
        int i10 = i6 + b10;
        uVar.f3568d = i10;
        view.setPaddingRelative(i5, uVar.f3567c, i10, uVar.f3569e);
        return windowInsetsCompat;
    }

    @Override // nf.c
    public int j(Context context) {
        return nf.d.a(context, "com.google.android.gms.cronet_dynamite");
    }

    @Override // eightbitlab.com.blurview.BlurController
    public boolean k(Canvas canvas) {
        return true;
    }

    @Override // cd.k
    public l n(j jVar) {
        MediaCodec mediaCodec = null;
        try {
            mediaCodec = r(jVar);
            ke.b.c("configureCodec");
            mediaCodec.configure(jVar.f3436b, jVar.f3438d, jVar.f3439e, 0);
            ke.b.t();
            ke.b.c("startCodec");
            mediaCodec.start();
            ke.b.t();
            return new e4.m(mediaCodec);
        } catch (IOException | RuntimeException e9) {
            if (mediaCodec != null) {
                mediaCodec.release();
            }
            throw e9;
        }
    }

    @Override // androidx.customview.widget.FocusStrategy$BoundsAdapter
    public void o(Object obj, Rect rect) {
        ((AccessibilityNodeInfoCompat) obj).g(rect);
    }

    @Override // eightbitlab.com.blurview.BlurController
    public void destroy() {
    }

    @Override // eightbitlab.com.blurview.BlurController
    public void h() {
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public BlurViewFacade a(boolean z5) {
        return this;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public BlurViewFacade c(int i5) {
        return this;
    }

    @Override // th.q
    public int f(int i5) {
        return i5;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public BlurViewFacade g(Drawable drawable) {
        return this;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public BlurViewFacade l(boolean z5) {
        return this;
    }

    @Override // eightbitlab.com.blurview.BlurViewFacade
    public BlurViewFacade m(float f2) {
        return this;
    }
}
