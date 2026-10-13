package ta;

import android.animation.TimeInterpolator;
import android.app.ActionBar;
import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Path;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.SparseArray;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.view.Window;
import android.view.animation.AnimationUtils;
import android.view.animation.PathInterpolator;
import androidx.core.view.r0;
import com.discord.R;
import cq.b0;
import cq.g1;
import de.g;
import e4.m;
import hq.b;
import ip.c;
import ip.p;
import ip.q;
import ip.s0;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.Serializable;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlin.text.StringsKt;
import kotlin.time.Duration;
import kr.o;
import kr.s;
import lh.f;
import lo.h;
import lr.d;
import lr.e;
import m3.n;
import u.i;
import u.j;
import uq.k;
import uq.x;
import yq.c0;
import yq.p0;
import ys.l;

/* loaded from: classes3.dex */
public abstract class a {
    public static f a = null;

    /* renamed from: b, reason: collision with root package name */
    public static boolean f18244b = false;

    /* renamed from: c, reason: collision with root package name */
    public static Method f18245c = null;

    /* renamed from: d, reason: collision with root package name */
    public static boolean f18246d = false;

    /* renamed from: e, reason: collision with root package name */
    public static Field f18247e;

    public static final long B(long j) {
        if (j < 0) {
            Duration.f13595e.getClass();
            return Duration.f13597v;
        }
        Duration.f13595e.getClass();
        return Duration.f13596i;
    }

    public static boolean C(String str, String str2) {
        return str.startsWith(str2.concat("(")) && str.endsWith(")");
    }

    public static final void D() {
        if (a == null) {
            synchronized (a.class) {
                a = new f(17);
            }
        }
    }

    public static final c E(b0 b0Var) {
        Intrinsics.checkNotNullParameter(k.f19038h, "<this>");
        int i5 = b0Var == null ? -1 : x.a[b0Var.ordinal()];
        if (i5 != 1) {
            if (i5 == 2) {
                return c.f12124e;
            }
            if (i5 == 3) {
                return c.f12125i;
            }
            if (i5 == 4) {
                return c.f12126v;
            }
        }
        return c.f12123d;
    }

    public static g F(g gVar, String[] strArr, Map map) {
        int i5 = 0;
        if (gVar == null) {
            if (strArr == null) {
                return null;
            }
            if (strArr.length == 1) {
                return (g) map.get(strArr[0]);
            }
            if (strArr.length > 1) {
                g gVar2 = new g();
                int length = strArr.length;
                while (i5 < length) {
                    gVar2.a((g) map.get(strArr[i5]));
                    i5++;
                }
                return gVar2;
            }
        } else {
            if (strArr != null && strArr.length == 1) {
                gVar.a((g) map.get(strArr[0]));
                return gVar;
            }
            if (strArr != null && strArr.length > 1) {
                int length2 = strArr.length;
                while (i5 < length2) {
                    gVar.a((g) map.get(strArr[i5]));
                    i5++;
                }
            }
        }
        return gVar;
    }

    public static int G(Context context, int i5, int i6) {
        TypedValue I0 = n.I0(context, i5);
        return (I0 == null || I0.type != 16) ? i6 : I0.data;
    }

    public static TimeInterpolator H(Context context, int i5, TimeInterpolator timeInterpolator) {
        TypedValue typedValue = new TypedValue();
        if (!context.getTheme().resolveAttribute(i5, typedValue, true)) {
            return timeInterpolator;
        }
        if (typedValue.type != 3) {
            throw new IllegalArgumentException("Motion easing theme attribute must be an @interpolator resource for ?attr/motionEasing*Interpolator attributes or a string for ?attr/motionEasing* attributes.");
        }
        String valueOf = String.valueOf(typedValue.string);
        if (!C(valueOf, "cubic-bezier") && !C(valueOf, "path")) {
            return AnimationUtils.loadInterpolator(context, typedValue.resourceId);
        }
        if (C(valueOf, "cubic-bezier")) {
            String[] split = valueOf.substring(13, valueOf.length() - 1).split(",");
            if (split.length == 4) {
                return new PathInterpolator(x(split, 0), x(split, 1), x(split, 2), x(split, 3));
            }
            throw new IllegalArgumentException("Motion easing theme attribute must have 4 control points if using bezier curve format; instead got: " + split.length);
        }
        if (!C(valueOf, "path")) {
            throw new IllegalArgumentException("Invalid motion easing type: ".concat(valueOf));
        }
        String substring = valueOf.substring(5, valueOf.length() - 1);
        Path path = new Path();
        try {
            l.s(l.i(substring), path);
            return new PathInterpolator(path);
        } catch (RuntimeException e9) {
            throw new RuntimeException("Error in parsing ".concat(substring), e9);
        }
    }

    public static final long I(long j, long j5, d dVar) {
        long j7 = j - j5;
        if (((j7 ^ j) & (~(j7 ^ j5))) >= 0) {
            return lr.c.h(j7, dVar);
        }
        d dVar2 = d.f14211i;
        if (dVar.compareTo(dVar2) >= 0) {
            return Duration.m(B(j7));
        }
        long b10 = e.b(1L, dVar2, dVar);
        long j10 = (j / b10) - (j5 / b10);
        long j11 = (j % b10) - (j5 % b10);
        lr.a aVar = Duration.f13595e;
        return Duration.i(lr.c.h(j10, dVar2), lr.c.h(j11, dVar));
    }

    public static boolean J(byte[] bArr, byte[] bArr2) {
        if (bArr2 != null && bArr.length >= bArr2.length) {
            for (int i5 = 0; i5 < bArr2.length; i5++) {
                if (bArr[i5] == bArr2[i5]) {
                }
            }
            return true;
        }
        return false;
    }

    public static b K(hq.c topLevelFqName) {
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        return new b(topLevelFqName.b(), topLevelFqName.a.f());
    }

    public static final Object L(Function1 function1, h frame) {
        j jVar = (j) frame.getContext().o(i.f18757e);
        if (jVar == null) {
            throw new IllegalStateException("A MonotonicFrameClock is not available in this CoroutineContext. Callers should supply an appropriate MonotonicFrameClock using withContext.");
        }
        j0.f fVar = (j0.f) jVar;
        j0.d dVar = fVar.f12370e;
        int i5 = 1;
        nr.j jVar2 = new nr.j(1, ko.f.b(frame));
        jVar2.t();
        j0.e callback = new j0.e(jVar2, fVar, function1);
        if (Intrinsics.areEqual(dVar.f12362i, fVar.f12369d)) {
            Intrinsics.checkNotNullParameter(callback, "callback");
            synchronized (dVar.f12364w) {
                try {
                    dVar.f12366y.add(callback);
                    if (!dVar.G) {
                        dVar.G = true;
                        dVar.f12362i.postFrameCallback(dVar.H);
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            jVar2.v(new hl.a(i5, dVar, callback));
        } else {
            fVar.f12369d.postFrameCallback(callback);
            jVar2.v(new hl.a(2, fVar, callback));
        }
        Object r5 = jVar2.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }

    public static Object a(Parcel parcel) {
        Parcelable.Creator creator = Bundle.CREATOR;
        if (parcel.readInt() != 0) {
            return creator.createFromParcel(parcel);
        }
        return null;
    }

    public static void b(Parcel parcel, Bundle bundle) {
        if (bundle == null) {
            parcel.writeInt(0);
        } else {
            parcel.writeInt(1);
            bundle.writeToParcel(parcel, 0);
        }
    }

    public static float c(float f2) {
        return f2 <= 0.04045f ? f2 / 12.92f : (float) Math.pow((f2 + 0.055f) / 1.055f, 2.4000000953674316d);
    }

    public static float d(float f2) {
        return f2 <= 0.0031308f ? f2 * 12.92f : (float) ((Math.pow(f2, 0.4166666567325592d) * 1.0549999475479126d) - 0.054999999701976776d);
    }

    public static Object e(Parcel parcel, Parcelable.Creator creator) {
        if (parcel.readInt() != 0) {
            return creator.createFromParcel(parcel);
        }
        return null;
    }

    public static final int f(int i5, int i6, int i10) {
        return Math.min(Math.max(0, i10 - i5), i6);
    }

    public static final m g(c0 c0Var, ip.j jVar, int i5) {
        if (jVar == null || ar.l.f(jVar)) {
            return null;
        }
        int size = jVar.l().size() + i5;
        if (jVar.A()) {
            List subList = c0Var.l0().subList(i5, size);
            ip.l h6 = jVar.h();
            return new m(jVar, subList, g(c0Var, h6 instanceof ip.j ? (ip.j) h6 : null, size));
        }
        if (size != c0Var.l0().size()) {
            kq.e.o(jVar);
        }
        return new m(jVar, c0Var.l0().subList(i5, c0Var.l0().size()), (m) null);
    }

    public static void h(String str, boolean z5) {
        if (!z5) {
            throw new IllegalArgumentException(String.valueOf(str));
        }
    }

    public static void i(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException();
        }
    }

    public static final void j(int i5, int i6, int i10, int i11, int i12) {
        o8.h.c(i11 >= 0, "count (%d) ! >= 0", Integer.valueOf(i11));
        o8.h.c(i5 >= 0, "offset (%d) ! >= 0", Integer.valueOf(i5));
        o8.h.c(i10 >= 0, "otherOffset (%d) ! >= 0", Integer.valueOf(i10));
        o8.h.c(i5 + i11 <= i12, "offset (%d) + count (%d) ! <= %d", Integer.valueOf(i5), Integer.valueOf(i11), Integer.valueOf(i12));
        o8.h.c(i10 + i11 <= i6, "otherOffset (%d) + count (%d) ! <= %d", Integer.valueOf(i10), Integer.valueOf(i11), Integer.valueOf(i6));
    }

    public static void k(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(str);
        }
    }

    public static void l(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (RuntimeException e9) {
                throw e9;
            } catch (Exception unused) {
            }
        }
    }

    public static final List m(ip.j jVar) {
        List list;
        Object obj;
        p0 n6;
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        List l6 = jVar.l();
        Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
        if (!jVar.A() && !(jVar.h() instanceof ip.b)) {
            return l6;
        }
        int i5 = oq.e.a;
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        oq.b bVar = oq.b.f16176e;
        Sequence g6 = s.g(o.c(bVar, jVar), 1);
        ip.s predicate = ip.s.f12170v;
        Intrinsics.checkNotNullParameter(g6, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        List q5 = s.q(s.l(s.i(new kr.e(g6, predicate, 1), ip.s.f12171w), ip.s.f12172x));
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        Intrinsics.checkNotNullParameter(jVar, "<this>");
        Iterator it = s.g(o.c(bVar, jVar), 1).iterator();
        while (true) {
            list = null;
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (obj instanceof ip.f) {
                break;
            }
        }
        ip.f fVar = (ip.f) obj;
        if (fVar != null && (n6 = fVar.n()) != null) {
            list = n6.getParameters();
        }
        if (list == null) {
            list = m0.f13512d;
        }
        if (q5.isEmpty() && list.isEmpty()) {
            List l7 = jVar.l();
            Intrinsics.checkNotNullExpressionValue(l7, "getDeclaredTypeParameters(...)");
            return l7;
        }
        ArrayList V = CollectionsKt.V(q5, list);
        ArrayList arrayList = new ArrayList(d0.l(V, 10));
        Iterator it2 = V.iterator();
        while (it2.hasNext()) {
            s0 s0Var = (s0) it2.next();
            Intrinsics.checkNotNull(s0Var);
            arrayList.add(new ip.e(s0Var, jVar, l6.size()));
        }
        return CollectionsKt.V(l6, arrayList);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static long[] n(Serializable serializable) {
        if (!(serializable instanceof int[])) {
            if (serializable instanceof long[]) {
                return (long[]) serializable;
            }
            return null;
        }
        int[] iArr = (int[]) serializable;
        long[] jArr = new long[iArr.length];
        for (int i5 = 0; i5 < iArr.length; i5++) {
            jArr[i5] = iArr[i5];
        }
        return jArr;
    }

    public static void o(InputStream inputStream, OutputStream outputStream) {
        byte[] bArr = new byte[8192];
        while (true) {
            int read = inputStream.read(bArr);
            if (read == -1) {
                return;
            } else {
                outputStream.write(bArr, 0, read);
            }
        }
    }

    public static void p(n2.b bVar, n2.c cVar, int i5) {
        byte[] bArr = new byte[8192];
        while (i5 > 0) {
            int min = Math.min(i5, 8192);
            int read = bVar.read(bArr, 0, min);
            if (read != min) {
                throw new IOException("Failed to copy the given amount of bytes from the inputstream to the output stream.");
            }
            i5 -= read;
            cVar.write(bArr, 0, read);
        }
    }

    public static boolean q(String current, String str) {
        Intrinsics.checkNotNullParameter(current, "current");
        if (Intrinsics.areEqual(current, str)) {
            return true;
        }
        if (current.length() != 0) {
            int i5 = 0;
            int i6 = 0;
            int i10 = 0;
            while (true) {
                if (i5 < current.length()) {
                    char charAt = current.charAt(i5);
                    int i11 = i10 + 1;
                    if (i10 == 0 && charAt != '(') {
                        break;
                    }
                    if (charAt != '(') {
                        if (charAt == ')' && i6 - 1 == 0 && i10 != current.length() - 1) {
                            break;
                        }
                    } else {
                        i6++;
                    }
                    i5++;
                    i10 = i11;
                } else if (i6 == 0) {
                    String substring = current.substring(1, current.length() - 1);
                    Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                    return Intrinsics.areEqual(StringsKt.b0(substring).toString(), str);
                }
            }
        }
        return false;
    }

    public static final p r(g1 g1Var) {
        Intrinsics.checkNotNullParameter(k.f19038h, "<this>");
        switch (g1Var == null ? -1 : x.f19070b[g1Var.ordinal()]) {
            case 1:
                p INTERNAL = q.f12158d;
                Intrinsics.checkNotNullExpressionValue(INTERNAL, "INTERNAL");
                return INTERNAL;
            case 2:
                p PRIVATE = q.a;
                Intrinsics.checkNotNullExpressionValue(PRIVATE, "PRIVATE");
                return PRIVATE;
            case 3:
                p PRIVATE_TO_THIS = q.f12156b;
                Intrinsics.checkNotNullExpressionValue(PRIVATE_TO_THIS, "PRIVATE_TO_THIS");
                return PRIVATE_TO_THIS;
            case 4:
                p PROTECTED = q.f12157c;
                Intrinsics.checkNotNullExpressionValue(PROTECTED, "PROTECTED");
                return PROTECTED;
            case 5:
                p PUBLIC = q.f12159e;
                Intrinsics.checkNotNullExpressionValue(PUBLIC, "PUBLIC");
                return PUBLIC;
            case 6:
                p LOCAL = q.f12160f;
                Intrinsics.checkNotNullExpressionValue(LOCAL, "LOCAL");
                return LOCAL;
            default:
                p PRIVATE2 = q.a;
                Intrinsics.checkNotNullExpressionValue(PRIVATE2, "PRIVATE");
                return PRIVATE2;
        }
    }

    public static boolean s(View view, KeyEvent keyEvent) {
        ArrayList arrayList;
        int size;
        int indexOfKey;
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        if (Build.VERSION.SDK_INT >= 28) {
            return false;
        }
        ArrayList arrayList2 = r0.f1626d;
        r0 r0Var = (r0) view.getTag(R.id.tag_unhandled_key_event_manager);
        WeakReference weakReference = null;
        if (r0Var == null) {
            r0Var = new r0();
            r0Var.a = null;
            r0Var.f1627b = null;
            r0Var.f1628c = null;
            view.setTag(R.id.tag_unhandled_key_event_manager, r0Var);
        }
        WeakReference weakReference2 = r0Var.f1628c;
        if (weakReference2 != null && weakReference2.get() == keyEvent) {
            return false;
        }
        r0Var.f1628c = new WeakReference(keyEvent);
        if (r0Var.f1627b == null) {
            r0Var.f1627b = new SparseArray();
        }
        SparseArray sparseArray = r0Var.f1627b;
        if (keyEvent.getAction() == 1 && (indexOfKey = sparseArray.indexOfKey(keyEvent.getKeyCode())) >= 0) {
            weakReference = (WeakReference) sparseArray.valueAt(indexOfKey);
            sparseArray.removeAt(indexOfKey);
        }
        if (weakReference == null) {
            weakReference = (WeakReference) sparseArray.get(keyEvent.getKeyCode());
        }
        if (weakReference == null) {
            return false;
        }
        View view2 = (View) weakReference.get();
        if (view2 == null || !view2.isAttachedToWindow() || (arrayList = (ArrayList) view2.getTag(R.id.tag_unhandled_key_listeners)) == null || (size = arrayList.size() - 1) < 0) {
            return true;
        }
        arrayList.get(size).getClass();
        throw new ClassCastException();
    }

    /* JADX WARN: Removed duplicated region for block: B:56:0x00bf  */
    /* JADX WARN: Removed duplicated region for block: B:63:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean t(androidx.core.view.j jVar, View view, Window.Callback callback, KeyEvent keyEvent) {
        DialogInterface.OnKeyListener onKeyListener;
        Window window;
        boolean z5 = false;
        if (jVar != null) {
            if (Build.VERSION.SDK_INT >= 28) {
                return jVar.superDispatchKeyEvent(keyEvent);
            }
            if (callback instanceof Activity) {
                Activity activity = (Activity) callback;
                activity.onUserInteraction();
                Window window2 = activity.getWindow();
                if (window2.hasFeature(8)) {
                    ActionBar actionBar = activity.getActionBar();
                    if (keyEvent.getKeyCode() == 82 && actionBar != null) {
                        if (!f18244b) {
                            try {
                                f18245c = actionBar.getClass().getMethod("onMenuKeyEvent", KeyEvent.class);
                            } catch (NoSuchMethodException unused) {
                            }
                            f18244b = true;
                        }
                        Method method = f18245c;
                        if (method != null) {
                            try {
                                Object invoke = method.invoke(actionBar, keyEvent);
                                if (invoke != null) {
                                    z5 = ((Boolean) invoke).booleanValue();
                                }
                            } catch (IllegalAccessException | InvocationTargetException unused2) {
                            }
                        }
                        if (z5) {
                            return true;
                        }
                    }
                }
                if (window2.superDispatchKeyEvent(keyEvent)) {
                    return true;
                }
                View decorView = window2.getDecorView();
                if (androidx.core.view.s0.d(decorView, keyEvent)) {
                    return true;
                }
                return keyEvent.dispatch(activity, decorView != null ? decorView.getKeyDispatcherState() : null, activity);
            }
            if (callback instanceof Dialog) {
                Dialog dialog = (Dialog) callback;
                if (!f18246d) {
                    try {
                        Field declaredField = Dialog.class.getDeclaredField("mOnKeyListener");
                        f18247e = declaredField;
                        declaredField.setAccessible(true);
                    } catch (NoSuchFieldException unused3) {
                    }
                    f18246d = true;
                }
                Field field = f18247e;
                if (field != null) {
                    try {
                        onKeyListener = (DialogInterface.OnKeyListener) field.get(dialog);
                    } catch (IllegalAccessException unused4) {
                    }
                    if (onKeyListener == null && onKeyListener.onKey(dialog, keyEvent.getKeyCode(), keyEvent)) {
                        return true;
                    }
                    window = dialog.getWindow();
                    if (!window.superDispatchKeyEvent(keyEvent)) {
                        return true;
                    }
                    View decorView2 = window.getDecorView();
                    if (androidx.core.view.s0.d(decorView2, keyEvent)) {
                        return true;
                    }
                    return keyEvent.dispatch(dialog, decorView2 != null ? decorView2.getKeyDispatcherState() : null, dialog);
                }
                onKeyListener = null;
                if (onKeyListener == null) {
                }
                window = dialog.getWindow();
                if (!window.superDispatchKeyEvent(keyEvent)) {
                }
            } else if ((view != null && androidx.core.view.s0.d(view, keyEvent)) || jVar.superDispatchKeyEvent(keyEvent)) {
                return true;
            }
        }
        return false;
    }

    public static int u(int i5, int i6, float f2) {
        if (i5 == i6 || f2 <= 0.0f) {
            return i5;
        }
        if (f2 >= 1.0f) {
            return i6;
        }
        float f10 = ((i5 >> 24) & 255) / 255.0f;
        float f11 = ((i6 >> 24) & 255) / 255.0f;
        float c6 = c(((i5 >> 16) & 255) / 255.0f);
        float c8 = c(((i5 >> 8) & 255) / 255.0f);
        float c10 = c((i5 & 255) / 255.0f);
        float c11 = c(((i6 >> 16) & 255) / 255.0f);
        float c12 = c(((i6 >> 8) & 255) / 255.0f);
        float c13 = c((i6 & 255) / 255.0f);
        float c14 = k0.d.c(f11, f10, f2, f10);
        float c15 = k0.d.c(c11, c6, f2, c6);
        float c16 = k0.d.c(c12, c8, f2, c8);
        float c17 = k0.d.c(c13, c10, f2, c10);
        float d6 = d(c15) * 255.0f;
        float d7 = d(c16) * 255.0f;
        return Math.round(d(c17) * 255.0f) | (Math.round(d6) << 16) | (Math.round(c14 * 255.0f) << 24) | (Math.round(d7) << 8);
    }

    public static b v(String string, boolean z5) {
        String l6;
        Intrinsics.checkNotNullParameter(string, "string");
        int I = StringsKt.I(string, '`', 0, 6);
        if (I == -1) {
            I = string.length();
        }
        int M = StringsKt.M(I, 4, string, "/");
        String str = "";
        if (M == -1) {
            l6 = kotlin.text.x.l(string, "`", "", false);
        } else {
            String substring = string.substring(0, M);
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            String m5 = kotlin.text.x.m(substring, '/', '.');
            String substring2 = string.substring(M + 1);
            Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
            l6 = kotlin.text.x.l(substring2, "`", "", false);
            str = m5;
        }
        return new b(new hq.c(str), new hq.c(l6), z5);
    }

    public static String w(KeyEvent.Callback callback) {
        if (callback == null) {
            return null;
        }
        String canonicalName = callback.getClass().getCanonicalName();
        return canonicalName != null ? canonicalName : callback.getClass().getSimpleName();
    }

    public static float x(String[] strArr, int i5) {
        float parseFloat = Float.parseFloat(strArr[i5]);
        if (parseFloat >= 0.0f && parseFloat <= 1.0f) {
            return parseFloat;
        }
        throw new IllegalArgumentException("Motion easing control point value must be between 0 and 1; instead got: " + parseFloat);
    }

    public abstract ViewPropertyAnimator A(int i5, View view);

    public abstract ze.n await(long j, TimeUnit timeUnit);

    public abstract int y(View view, ViewGroup.MarginLayoutParams marginLayoutParams);

    public abstract int z();
}
