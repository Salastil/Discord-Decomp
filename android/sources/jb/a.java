package jb;

import af.h0;
import android.content.ContentResolver;
import android.content.Context;
import android.database.Cursor;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.RelativeSizeSpan;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.util.Pools$SynchronizedPool;
import aq.q;
import com.discord.R;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import d3.e;
import fo.n;
import h5.m;
import java.nio.ByteBuffer;
import jm.z;
import k0.d;
import ke.w;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import lh.g;
import lh.i;
import lh.k;
import qa.u;
import qa.v;

/* loaded from: classes3.dex */
public abstract class a {
    public static b a;

    public static boolean C(String str) {
        b bVar;
        synchronized (a.class) {
            bVar = a;
            if (bVar == null) {
                throw new IllegalStateException("NativeLoader has not been initialized.  To use standard native library loading, call NativeLoader.init(new SystemDelegate()).");
            }
        }
        return bVar.f(str);
    }

    public static long D(w wVar, int i5, int i6) {
        wVar.F(i5);
        if (wVar.a() < 5) {
            return -9223372036854775807L;
        }
        int g6 = wVar.g();
        if ((8388608 & g6) != 0 || ((2096896 & g6) >> 8) != i6 || (g6 & 32) == 0 || wVar.u() < 7 || wVar.a() < 7 || (wVar.u() & 16) != 16) {
            return -9223372036854775807L;
        }
        wVar.e(new byte[6], 0, 6);
        return ((r0[0] & 255) << 25) | ((r0[1] & 255) << 17) | ((r0[2] & 255) << 9) | ((r0[3] & 255) << 1) | ((r0[4] & 255) >> 7);
    }

    public static void E(wd.a aVar) {
        aVar.k = -3.4028235E38f;
        aVar.j = Integer.MIN_VALUE;
        CharSequence charSequence = aVar.a;
        if (charSequence instanceof Spanned) {
            if (!(charSequence instanceof Spannable)) {
                aVar.a = SpannableString.valueOf(charSequence);
            }
            CharSequence charSequence2 = aVar.a;
            charSequence2.getClass();
            Spannable spannable = (Spannable) charSequence2;
            for (Object obj : spannable.getSpans(0, spannable.length(), Object.class)) {
                if ((obj instanceof AbsoluteSizeSpan) || (obj instanceof RelativeSizeSpan)) {
                    spannable.removeSpan(obj);
                }
            }
        }
    }

    public static float F(int i5, int i6, int i10, float f2) {
        float f10;
        if (f2 == -3.4028235E38f) {
            return -3.4028235E38f;
        }
        if (i5 == 0) {
            f10 = i10;
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    return -3.4028235E38f;
                }
                return f2;
            }
            f10 = i6;
        }
        return f2 * f10;
    }

    public static int G(float f2) {
        return (int) (f2 + (f2 < 0.0f ? -0.5f : 0.5f));
    }

    public static final void H(View view, e eVar) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        view.setTag(R.id.view_tree_saved_state_registry_owner, eVar);
    }

    public static void I(View view, i iVar) {
        bh.a aVar = iVar.f14001e.f13984c;
        if (aVar == null || !aVar.a) {
            return;
        }
        float f2 = 0.0f;
        for (ViewParent parent = view.getParent(); parent instanceof View; parent = parent.getParent()) {
            f2 += ((View) parent).getElevation();
        }
        g gVar = iVar.f14001e;
        if (gVar.f13992m != f2) {
            gVar.f13992m = f2;
            iVar.x();
        }
    }

    public static void J(Drawable drawable, int i5) {
        drawable.setTint(i5);
    }

    public static int L(int[] iArr) {
        int i5 = 0;
        for (int i6 : iArr) {
            i5 += i6;
        }
        return i5;
    }

    public static m M(String str, int i5, Function0 block, int i6) {
        boolean z5 = (i6 & 2) == 0;
        if ((i6 & 8) != 0) {
            str = null;
        }
        if ((i6 & 16) != 0) {
            i5 = -1;
        }
        Intrinsics.checkNotNullParameter(block, "block");
        m mVar = new m(1, block);
        if (z5) {
            mVar.setDaemon(true);
        }
        if (i5 > 0) {
            mVar.setPriority(i5);
        }
        if (str != null) {
            mVar.setName(str);
        }
        mVar.start();
        return mVar;
    }

    public static float c(float f2, float f10, float f11) {
        return f2 < f10 ? f10 : f2 > f11 ? f11 : f2;
    }

    public static int d(int i5, int i6, int i10) {
        return i5 < i6 ? i6 : i5 > i10 ? i10 : i5;
    }

    public static int e(int i5, int i6) {
        int i10 = i5 - i6;
        if (i10 > i6) {
            i10 = i6;
            i6 = i10;
        }
        int i11 = 1;
        int i12 = 1;
        while (i5 > i6) {
            i11 *= i5;
            if (i12 <= i10) {
                i11 /= i12;
                i12++;
            }
            i5--;
        }
        while (i12 <= i10) {
            i11 /= i12;
            i12++;
        }
        return i11;
    }

    public static io.sentry.config.a f(int i5) {
        return i5 != 0 ? i5 != 1 ? new k() : new lh.e() : new k();
    }

    public static final k1.b g(v poolFactory) {
        Intrinsics.checkNotNullParameter(poolFactory, "poolFactory");
        int i5 = ((u) poolFactory.f16727d).f16720c.f16736d;
        Pools$SynchronizedPool pools$SynchronizedPool = new Pools$SynchronizedPool(i5);
        for (int i6 = 0; i6 < i5; i6++) {
            h0 h0Var = r8.a.a;
            ByteBuffer allocate = ByteBuffer.allocate(16384);
            Intrinsics.checkNotNullExpressionValue(allocate, "allocate(...)");
            pools$SynchronizedPool.release(allocate);
        }
        return pools$SynchronizedPool;
    }

    public static float h(float f2, float f10, float f11) {
        float f12 = f2 / (f11 / 2.0f);
        float f13 = f10 / 2.0f;
        if (f12 < 1.0f) {
            return (f13 * f12 * f12 * f12) + 0.0f;
        }
        float f14 = f12 - 2.0f;
        return (((f14 * f14 * f14) + 2.0f) * f13) + 0.0f;
    }

    public static final WritableMap i(tn.a insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble(ViewProps.TOP, PixelUtil.toDIPFromPixel(insets.a));
        createMap.putDouble(ViewProps.RIGHT, PixelUtil.toDIPFromPixel(insets.f18656b));
        createMap.putDouble(ViewProps.BOTTOM, PixelUtil.toDIPFromPixel(insets.f18657c));
        createMap.putDouble(ViewProps.LEFT, PixelUtil.toDIPFromPixel(insets.f18658d));
        return createMap;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static ps.w j(String javaName) {
        Intrinsics.checkNotNullParameter(javaName, "javaName");
        int hashCode = javaName.hashCode();
        if (hashCode != 79201641) {
            if (hashCode != 79923350) {
                switch (hashCode) {
                    case -503070503:
                        if (javaName.equals("TLSv1.1")) {
                            return ps.w.TLS_1_1;
                        }
                        break;
                    case -503070502:
                        if (javaName.equals("TLSv1.2")) {
                            return ps.w.TLS_1_2;
                        }
                        break;
                    case -503070501:
                        if (javaName.equals("TLSv1.3")) {
                            return ps.w.TLS_1_3;
                        }
                        break;
                }
            } else if (javaName.equals("TLSv1")) {
                return ps.w.TLS_1_0;
            }
        } else if (javaName.equals("SSLv3")) {
            return ps.w.SSL_3_0;
        }
        throw new IllegalArgumentException(Intrinsics.stringPlus("Unexpected TLS version: ", javaName));
    }

    public static z k(MotionEvent event) {
        double atan;
        Intrinsics.checkNotNullParameter(event, "event");
        double d6 = 1.5707963267948966d;
        double axisValue = 1.5707963267948966d - event.getAxisValue(25);
        double pressure = event.getPressure(0);
        double orientation = (event.getOrientation(0) + 1.5707963267948966d) % 6.283185307179586d;
        if (orientation != 0.0d && Math.signum(orientation) != Math.signum(6.283185307179586d)) {
            orientation += 6.283185307179586d;
        }
        double d7 = orientation;
        if (axisValue < 1.0E-9d) {
            double d8 = (d7 < 1.0E-9d || Math.abs(d7 - 6.283185307179586d) < 1.0E-9d) ? 1.5707963267948966d : 0.0d;
            double d10 = d7 - 1.5707963267948966d;
            double d11 = Math.abs(d10) < 1.0E-9d ? 1.5707963267948966d : 0.0d;
            double d12 = d7 - 3.141592653589793d;
            atan = -1.5707963267948966d;
            if (Math.abs(d12) < 1.0E-9d) {
                d8 = -1.5707963267948966d;
            }
            double d13 = d7 - 4.71238898038469d;
            if (Math.abs(d13) < 1.0E-9d) {
                d11 = -1.5707963267948966d;
            }
            if (d7 > 1.0E-9d && Math.abs(d10) < 1.0E-9d) {
                d11 = 1.5707963267948966d;
                d8 = 1.5707963267948966d;
            }
            if (Math.abs(d10) > 1.0E-9d && Math.abs(d12) < 1.0E-9d) {
                d11 = 1.5707963267948966d;
                d8 = -1.5707963267948966d;
            }
            if (Math.abs(d12) > 1.0E-9d && Math.abs(d13) < 1.0E-9d) {
                d11 = -1.5707963267948966d;
                d8 = -1.5707963267948966d;
            }
            if (Math.abs(d13) <= 1.0E-9d || Math.abs(d7 - 6.283185307179586d) >= 1.0E-9d) {
                atan = d11;
                d6 = d8;
            }
        } else {
            double tan = Math.tan(axisValue);
            d6 = Math.atan(Math.cos(d7) / tan);
            atan = Math.atan(Math.sin(d7) / tan);
        }
        return new z(Double.valueOf(Math.rint(d6 * 57.29577951308232d)).doubleValue(), Double.valueOf(Math.rint(atan * 57.29577951308232d)).doubleValue(), axisValue, d7, pressure);
    }

    public static q l(com.facebook.imagepipeline.nativecode.b signature) {
        Intrinsics.checkNotNullParameter(signature, "signature");
        if (signature instanceof gq.e) {
            gq.e eVar = (gq.e) signature;
            String name = eVar.f9439v;
            String desc = eVar.f9440w;
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(desc, "desc");
            return new q(d.k(name, desc));
        }
        if (!(signature instanceof gq.d)) {
            throw new n();
        }
        gq.d dVar = (gq.d) signature;
        String name2 = dVar.f9437v;
        String desc2 = dVar.f9438w;
        Intrinsics.checkNotNullParameter(name2, "name");
        Intrinsics.checkNotNullParameter(desc2, "desc");
        return new q(name2 + '#' + desc2);
    }

    public static final String o(ContentResolver contentResolver, Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        Cursor query = contentResolver.query(uri, null, null, null, null);
        if (query == null) {
            return "";
        }
        int columnIndex = query.getColumnIndex("_display_name");
        query.moveToFirst();
        String string = query.getString(columnIndex);
        query.close();
        Intrinsics.checkNotNull(string);
        return string;
    }

    public static int u(int[] iArr, int i5, boolean z5) {
        boolean z6;
        int[] iArr2 = iArr;
        int i6 = 0;
        for (int i10 : iArr2) {
            i6 += i10;
        }
        int length = iArr2.length;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        while (true) {
            int i14 = length - 1;
            if (i11 >= i14) {
                return i12;
            }
            int i15 = 1 << i11;
            i13 |= i15;
            int i16 = 1;
            while (i16 < iArr2[i11]) {
                int i17 = i6 - i16;
                int i18 = length - i11;
                int i19 = i18 - 2;
                int e9 = e(i17 - 1, i19);
                if (z5 && i13 == 0) {
                    int i20 = i18 - 1;
                    if (i17 - i20 >= i20) {
                        e9 -= e(i17 - i18, i19);
                    }
                }
                boolean z7 = true;
                if (i18 - 1 > 1) {
                    int i21 = i17 - i19;
                    int i22 = 0;
                    while (i21 > i5) {
                        i22 += e((i17 - i21) - 1, i18 - 3);
                        i21--;
                        z7 = z7;
                    }
                    z6 = z7;
                    e9 -= (i14 - i11) * i22;
                } else {
                    z6 = true;
                    if (i17 > i5) {
                        e9--;
                    }
                }
                i12 += e9;
                i16++;
                i13 &= ~i15;
                iArr2 = iArr;
            }
            i6 -= i16;
            i11++;
            iArr2 = iArr;
        }
    }

    public static final Drawable w(Context context, String str) {
        Intrinsics.checkNotNullParameter(context, "context");
        if (str == null) {
            return null;
        }
        int identifier = context.getResources().getIdentifier(str, "drawable", context.getPackageName());
        if (identifier > 0) {
            return ys.d.J(context, identifier);
        }
        int identifier2 = context.getResources().getIdentifier(str, "drawable", "android");
        if (identifier2 > 0) {
            return ys.d.J(context, identifier2);
        }
        Log.w("SystemDrawable", "[RNScreens] Unable to resolve drawable resource with the name ".concat(str));
        return null;
    }

    public static void x(b bVar) {
        if (z()) {
            return;
        }
        synchronized (a.class) {
            try {
                if (a != null) {
                    throw new IllegalStateException("Cannot re-initialize NativeLoader.");
                }
                a = bVar;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static boolean z() {
        boolean z5;
        synchronized (a.class) {
            z5 = a != null;
        }
        return z5;
    }

    public abstract boolean A(View view);

    public abstract boolean B(float f2, float f10);

    public abstract boolean K(View view, float f2);

    public abstract void N(ViewGroup.MarginLayoutParams marginLayoutParams, int i5);

    public abstract void O(ViewGroup.MarginLayoutParams marginLayoutParams, int i5, int i6);

    public abstract int a(ViewGroup.MarginLayoutParams marginLayoutParams);

    public abstract float b(int i5);

    public abstract int m(ViewGroup.MarginLayoutParams marginLayoutParams);

    public abstract int n();

    public abstract int p();

    public abstract int q();

    public abstract int r();

    public abstract int s(View view);

    public abstract int t(CoordinatorLayout coordinatorLayout);

    public abstract int v();

    public abstract boolean y(float f2);
}
