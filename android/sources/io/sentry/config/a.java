package io.sentry.config;

import android.content.Context;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.PorterDuff;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.util.Base64;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ImageView;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.google.android.gms.internal.play_billing.w1;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.textfield.TextInputLayout;
import fo.e0;
import fo.f0;
import java.io.Closeable;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.Executor;
import java.util.zip.Inflater;
import jm.q;
import ke.d0;
import ke.v;
import ke.w;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import o1.f;
import o1.g;
import o1.i;
import o1.j;
import o1.k;
import o1.l;
import o1.m;
import o1.n;
import o1.o;
import o1.p;
import ps.s;
import s4.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final Integer A(ReadableMap readableMap, Context context, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(key, "key");
        if (!readableMap.hasKey(key) || readableMap.isNull(key)) {
            return null;
        }
        return w(readableMap, context, key);
    }

    public static final String B(ReadableMap readableMap) {
        ReadableMap map;
        String string;
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter("imageIconResource", "key");
        if (!readableMap.hasKey("imageIconResource") || readableMap.getType("imageIconResource") != ReadableType.Map || (map = readableMap.getMap("imageIconResource")) == null || (string = map.getString("uri")) == null) {
            return null;
        }
        return string;
    }

    public static final Boolean C(ReadableMap readableMap, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        if (readableMap.hasKey(key) && !readableMap.isNull(key) && readableMap.getType(key) == ReadableType.Boolean) {
            return Boolean.valueOf(readableMap.getBoolean(key));
        }
        return null;
    }

    public static final Integer D(ReadableMap readableMap, Context context, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(key, "key");
        if (!readableMap.hasKey(key) || readableMap.isNull(key)) {
            return null;
        }
        return w(readableMap, context, key);
    }

    public static final Float E(ReadableMap readableMap, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        if (readableMap.hasKey(key) && !readableMap.isNull(key) && readableMap.getType(key) == ReadableType.Number) {
            return Float.valueOf((float) readableMap.getDouble(key));
        }
        return null;
    }

    public static final String F(ReadableMap readableMap, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        if (readableMap.hasKey(key) && !readableMap.isNull(key) && readableMap.getType(key) == ReadableType.String) {
            return readableMap.getString(key);
        }
        return null;
    }

    public static void G(TextInputLayout textInputLayout, CheckableImageButton checkableImageButton, ColorStateList colorStateList) {
        Drawable drawable = checkableImageButton.getDrawable();
        if (checkableImageButton.getDrawable() == null || colorStateList == null || !colorStateList.isStateful()) {
            return;
        }
        int[] drawableState = textInputLayout.getDrawableState();
        int[] drawableState2 = checkableImageButton.getDrawableState();
        int length = drawableState.length;
        int[] copyOf = Arrays.copyOf(drawableState, drawableState.length + drawableState2.length);
        System.arraycopy(drawableState2, 0, copyOf, length, drawableState2.length);
        int colorForState = colorStateList.getColorForState(copyOf, colorStateList.getDefaultColor());
        Drawable mutate = drawable.mutate();
        mutate.setTintList(ColorStateList.valueOf(colorForState));
        checkableImageButton.setImageDrawable(mutate);
    }

    public static final String H(ReadableMap readableMap, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        String string = readableMap.getString(key);
        if (string != null) {
            return string;
        }
        throw new IllegalArgumentException(h.f("[RNScreens] ", key, " property must not be null.").toString());
    }

    public static Boolean I(View view, MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (view != null) {
            return Boolean.valueOf(view.onTouchEvent(event));
        }
        return null;
    }

    public static void J(CheckableImageButton checkableImageButton, View.OnLongClickListener onLongClickListener) {
        boolean hasOnClickListeners = checkableImageButton.hasOnClickListeners();
        boolean z5 = onLongClickListener != null;
        boolean z6 = hasOnClickListeners || z5;
        checkableImageButton.setFocusable(z6);
        checkableImageButton.setClickable(hasOnClickListeners);
        checkableImageButton.setPressable(hasOnClickListeners);
        checkableImageButton.setLongClickable(z5);
        checkableImageButton.setImportantForAccessibility(z6 ? 1 : 2);
    }

    public static void K(List recorded, q handler) {
        Intrinsics.checkNotNullParameter(recorded, "recorded");
        Intrinsics.checkNotNullParameter(handler, "handler");
    }

    public static String L(int i5) {
        Object[] objArr = {Integer.valueOf(Color.red(i5)), Integer.valueOf(Color.green(i5)), Integer.valueOf(Color.blue(i5)), Double.valueOf(Color.alpha(i5) / 255.0d)};
        int i6 = d0.a;
        return String.format(Locale.US, "rgba(%d,%d,%d,%.3f)", objArr);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterative(DepthRegionTraversal.java:31)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visit(SwitchOverStringVisitor.java:60)
     */
    public static final o1.d M(CharSequence charSequence, String type) {
        Intrinsics.checkNotNullParameter(type, "errorType");
        switch (type.hashCode()) {
            case -2055374133:
                if (type.equals("android.credentials.CreateCredentialException.TYPE_USER_CANCELED")) {
                    return new o1.b(charSequence);
                }
                break;
            case -1166690414:
                if (type.equals("androidx.credentials.TYPE_CREATE_CREDENTIAL_UNSUPPORTED_EXCEPTION")) {
                    return new i(charSequence);
                }
                break;
            case -580283253:
                if (type.equals("androidx.credentials.TYPE_CREATE_CREDENTIAL_PROVIDER_CONFIGURATION_EXCEPTION")) {
                    return new g(charSequence);
                }
                break;
            case 1316905704:
                if (type.equals("android.credentials.CreateCredentialException.TYPE_UNKNOWN")) {
                    return new o1.h(charSequence);
                }
                break;
            case 2092588512:
                if (type.equals("android.credentials.CreateCredentialException.TYPE_INTERRUPTED")) {
                    return new o1.e(charSequence);
                }
                break;
            case 2131915191:
                if (type.equals("android.credentials.CreateCredentialException.TYPE_NO_CREATE_OPTIONS")) {
                    return new f(charSequence, "android.credentials.CreateCredentialException.TYPE_NO_CREATE_OPTIONS");
                }
                break;
        }
        if (!x.o(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION", false)) {
            return new o1.c(charSequence, type);
        }
        int i5 = q1.a.f16644i;
        String obj = charSequence != null ? charSequence.toString() : null;
        Intrinsics.checkNotNullParameter(type, "type");
        try {
            if (!StringsKt.D(type, "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION", false)) {
                throw new r1.a();
            }
            int i6 = q1.a.f16644i;
            return ki.b.k(type, obj);
        } catch (r1.a unused) {
            return new o1.c(obj, type);
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterative(DepthRegionTraversal.java:31)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visit(SwitchOverStringVisitor.java:60)
     */
    public static final l N(CharSequence charSequence, String type) {
        Intrinsics.checkNotNullParameter(type, "errorType");
        switch (type.hashCode()) {
            case -781118336:
                if (type.equals("android.credentials.GetCredentialException.TYPE_UNKNOWN")) {
                    return new o(charSequence);
                }
                break;
            case -408155724:
                if (type.equals("androidx.credentials.TYPE_GET_CREDENTIAL_UNSUPPORTED_EXCEPTION")) {
                    return new p(charSequence);
                }
                break;
            case -45448328:
                if (type.equals("android.credentials.GetCredentialException.TYPE_INTERRUPTED")) {
                    return new m(charSequence);
                }
                break;
            case 580557411:
                if (type.equals("android.credentials.GetCredentialException.TYPE_USER_CANCELED")) {
                    return new j(charSequence);
                }
                break;
            case 627896683:
                if (type.equals("android.credentials.GetCredentialException.TYPE_NO_CREDENTIAL")) {
                    return new o1.q(charSequence);
                }
                break;
            case 1594095913:
                if (type.equals("androidx.credentials.TYPE_GET_CREDENTIAL_PROVIDER_CONFIGURATION_EXCEPTION")) {
                    return new n(charSequence);
                }
                break;
        }
        if (!x.o(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION", false)) {
            return new k(charSequence, type);
        }
        int i5 = q1.b.f16648x;
        String obj = charSequence != null ? charSequence.toString() : null;
        Intrinsics.checkNotNullParameter(type, "type");
        try {
            if (!x.o(type, "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION", false)) {
                throw new r1.a();
            }
            int i6 = q1.b.f16648x;
            return nf.e.h(type, obj);
        } catch (r1.a unused) {
            return new k(obj, type);
        }
    }

    public static final long a(float f2, float f10, float f11, float f12, d0.c colorSpace) {
        Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
        float b10 = colorSpace.b(0);
        if (f2 <= colorSpace.a(0) && b10 <= f2) {
            float b11 = colorSpace.b(1);
            if (f10 <= colorSpace.a(1) && b11 <= f10) {
                float b12 = colorSpace.b(2);
                if (f11 <= colorSpace.a(2) && b12 <= f11 && 0.0f <= f12 && f12 <= 1.0f) {
                    if (colorSpace.c()) {
                        long j = (((int) ((f2 * 255.0f) + 0.5f)) << 16) | (((int) ((f12 * 255.0f) + 0.5f)) << 24) | (((int) ((f10 * 255.0f) + 0.5f)) << 8) | ((int) ((f11 * 255.0f) + 0.5f));
                        e0 e0Var = f0.f8814e;
                        long j5 = (j & 4294967295L) << 32;
                        int i5 = c0.a.f3269d;
                        return j5;
                    }
                    long j7 = colorSpace.f7350b;
                    int i6 = d0.b.f7349e;
                    if (((int) (j7 >> 32)) != 3) {
                        throw new IllegalArgumentException("Color only works with ColorSpaces with 3 components");
                    }
                    int i10 = colorSpace.f7351c;
                    if (i10 == -1) {
                        throw new IllegalArgumentException("Unknown color space, please use a color space in ColorSpaces");
                    }
                    short a = c0.b.a(f2);
                    short a10 = c0.b.a(f10);
                    short a11 = c0.b.a(f11);
                    int max = (int) ((Math.max(0.0f, Math.min(f12, 1.0f)) * 1023.0f) + 0.5f);
                    long j10 = a;
                    e0 e0Var2 = f0.f8814e;
                    long j11 = ((a10 & 65535) << 32) | ((j10 & 65535) << 48) | ((a11 & 65535) << 16) | ((max & 1023) << 6) | (i10 & 63);
                    int i11 = c0.a.f3269d;
                    return j11;
                }
            }
        }
        throw new IllegalArgumentException(("red = " + f2 + ", green = " + f10 + ", blue = " + f11 + ", alpha = " + f12 + " outside the range for " + colorSpace).toString());
    }

    public static final long b(long j) {
        e0 e0Var = f0.f8814e;
        long j5 = (j & 4294967295L) << 32;
        int i5 = c0.a.f3269d;
        return j5;
    }

    public static void c(TextInputLayout textInputLayout, CheckableImageButton checkableImageButton, ColorStateList colorStateList, PorterDuff.Mode mode) {
        Drawable drawable = checkableImageButton.getDrawable();
        if (drawable != null) {
            drawable = drawable.mutate();
            if (colorStateList == null || !colorStateList.isStateful()) {
                drawable.setTintList(colorStateList);
            } else {
                int[] drawableState = textInputLayout.getDrawableState();
                int[] drawableState2 = checkableImageButton.getDrawableState();
                int length = drawableState.length;
                int[] copyOf = Arrays.copyOf(drawableState, drawableState.length + drawableState2.length);
                System.arraycopy(drawableState2, 0, copyOf, length, drawableState2.length);
                drawable.setTintList(ColorStateList.valueOf(colorStateList.getColorForState(copyOf, colorStateList.getDefaultColor())));
            }
            if (mode != null) {
                drawable.setTintMode(mode);
            }
        }
        if (checkableImageButton.getDrawable() != drawable) {
            checkableImageButton.setImageDrawable(drawable);
        }
    }

    public static void d(boolean z5) {
        if (!z5) {
            throw new AssertionError();
        }
    }

    public static void e(boolean z5, String str) {
        if (!z5) {
            throw new AssertionError(str);
        }
    }

    public static void f(Object obj) {
        if (obj == null) {
            throw new AssertionError();
        }
    }

    public static void g(Object obj, String str) {
        if (obj == null) {
            throw new AssertionError(str);
        }
    }

    public static boolean h(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        return view.isPressed();
    }

    public static void i(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    public static ImageView.ScaleType j(int i5) {
        return i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 5 ? i5 != 6 ? ImageView.ScaleType.CENTER : ImageView.ScaleType.CENTER_INSIDE : ImageView.ScaleType.CENTER_CROP : ImageView.ScaleType.FIT_END : ImageView.ScaleType.FIT_CENTER : ImageView.ScaleType.FIT_START : ImageView.ScaleType.FIT_XY;
    }

    public static void k(Object obj, String str, String str2) {
        String s2 = s(str);
        if (Log.isLoggable(s2, 3)) {
            Log.d(s2, String.format(str2, obj));
        }
    }

    public static void m(String str, String str2, Exception exc) {
        String s2 = s(str);
        if (Log.isLoggable(s2, 6)) {
            Log.e(s2, str2, exc);
        }
    }

    public static io.sentry.c n(io.sentry.c cVar, Boolean bool, Double d6, Double d7) {
        if (cVar == null) {
            cVar = new io.sentry.c();
        }
        if (cVar.f11414d == null) {
            Double d8 = cVar.f11413c;
            if (d8 != null) {
                d6 = d8;
            }
            Double e9 = e4.f.e(d7, d6, bool);
            if (cVar.f11415e) {
                cVar.f11414d = e9;
            }
        }
        return cVar;
    }

    public static final np.b o(ha.l lVar, hq.b classId, eq.f metadataVersion) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        ve.i R = lVar.R(classId, metadataVersion);
        if (R != null) {
            return (np.b) R.f19405d;
        }
        return null;
    }

    public static s p(String protocol) {
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        if (Intrinsics.areEqual(protocol, "http/1.0")) {
            return s.HTTP_1_0;
        }
        if (Intrinsics.areEqual(protocol, "http/1.1")) {
            return s.HTTP_1_1;
        }
        if (Intrinsics.areEqual(protocol, "h2_prior_knowledge")) {
            return s.H2_PRIOR_KNOWLEDGE;
        }
        if (Intrinsics.areEqual(protocol, "h2")) {
            return s.HTTP_2;
        }
        if (Intrinsics.areEqual(protocol, "spdy/3.1")) {
            return s.SPDY_3;
        }
        if (Intrinsics.areEqual(protocol, "quic")) {
            return s.QUIC;
        }
        throw new IOException(Intrinsics.stringPlus("Unexpected protocol: ", protocol));
    }

    public static final Bundle r(String key, Bundle bundle) {
        Intrinsics.checkNotNullParameter(key, "key");
        Bundle bundle2 = bundle.getBundle(key);
        if (bundle2 != null) {
            return bundle2;
        }
        Intrinsics.checkNotNullParameter(key, "key");
        throw new IllegalArgumentException(h.f("No valid saved state was found for the key '", key, "'. It may be missing, null, or not of the expected type. This can occur if the value was saved with a different type or if the saved state was modified unexpectedly."));
    }

    public static String s(String str) {
        if (Build.VERSION.SDK_INT >= 26) {
            return "TRuntime.".concat(str);
        }
        String concat = "TRuntime.".concat(str);
        return concat.length() > 23 ? concat.substring(0, 23) : concat;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00a7  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00b8  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00c2  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00ae  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Matrix t(RectF rectF, RectF rectF2, String str, int i5) {
        double d6;
        double d7;
        double d8;
        double d10 = rectF.left;
        double d11 = rectF.top;
        double width = rectF.width();
        double height = rectF.height();
        double d12 = rectF2.left;
        double d13 = rectF2.top;
        double width2 = rectF2.width();
        double height2 = rectF2.height();
        double d14 = width2 / width;
        double d15 = height2 / height;
        double d16 = d12 - (d10 * d14);
        double d17 = d13 - (d11 * d15);
        if (i5 == 2) {
            d14 = Math.min(d14, d15);
            if (d14 > 1.0d) {
                d6 = d16 - (((width2 / d14) - width) / 2.0d);
                d8 = (height2 / d14) - height;
            } else {
                d6 = d16 - ((width2 - (width * d14)) / 2.0d);
                d8 = height2 - (height * d14);
            }
            d7 = d17 - (d8 / 2.0d);
            d15 = d14;
        } else {
            if (str.equals("none") || i5 != 0) {
                if (!str.equals("none") && i5 == 1) {
                    d14 = Math.max(d14, d15);
                }
                double d18 = d12 - (d10 * d14);
                double d19 = d13 - (d11 * d15);
                if (str.contains("xMid")) {
                    d18 += (width2 - (width * d14)) / 2.0d;
                }
                d6 = !str.contains("xMax") ? (width2 - (width * d14)) + d18 : d18;
                d7 = !str.contains("YMid") ? ((height2 - (height * d15)) / 2.0d) + d19 : d19;
                if (str.contains("YMax")) {
                    d7 = (height2 - (height * d15)) + d7;
                }
            } else {
                d14 = Math.min(d14, d15);
            }
            d15 = d14;
            double d182 = d12 - (d10 * d14);
            double d192 = d13 - (d11 * d15);
            if (str.contains("xMid")) {
            }
            if (!str.contains("xMax")) {
            }
            if (!str.contains("YMid")) {
            }
            if (str.contains("YMax")) {
            }
        }
        double d20 = d6;
        double d21 = d7;
        Matrix matrix = new Matrix();
        matrix.postTranslate((float) d20, (float) d21);
        matrix.preScale((float) d14, (float) d15);
        return matrix;
    }

    public static void u(int i5, int i6, Intent intent, Executor executor, n1.h callback, CancellationSignal cancellationSignal) {
        n1.q qVar;
        Bundle bundle;
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        int i10 = t1.d.f18156c;
        if (i5 != i10) {
            Log.w("GetCredentialController", "Returned request code " + i10 + " which  does not match what was given " + i5);
            return;
        }
        t1.a aVar = t1.d.a;
        if (t1.c.b(i6, new sr.x(2), new t1.e(executor, callback), cancellationSignal)) {
            return;
        }
        if (intent == null) {
            t1.c.a(cancellationSignal, new s1.b(executor, callback, 4));
            return;
        }
        Intrinsics.checkNotNullParameter(intent, "intent");
        int i11 = Build.VERSION.SDK_INT;
        l lVar = null;
        if (i11 >= 34) {
            qVar = a2.a.d(intent);
        } else {
            Intrinsics.checkNotNullParameter(intent, "intent");
            Bundle bundle2 = intent.getBundleExtra("android.service.credentials.extra.GET_CREDENTIAL_RESPONSE");
            if (bundle2 != null) {
                Intrinsics.checkNotNullParameter(bundle2, "bundle");
                String string = bundle2.getString("androidx.credentials.provider.extra.EXTRA_CREDENTIAL_TYPE");
                if (string != null && (bundle = bundle2.getBundle("androidx.credentials.provider.extra.EXTRA_CREDENTIAL_DATA")) != null) {
                    qVar = new n1.q(nt.a.i(string, bundle));
                }
            }
            qVar = null;
        }
        if (qVar != null) {
            t1.c.a(cancellationSignal, new com.discord.chat.presentation.list.delegate.c(executor, callback, qVar, 7));
            return;
        }
        Intrinsics.checkNotNullParameter(intent, "intent");
        if (i11 >= 34) {
            lVar = a2.a.c(intent);
        } else {
            Intrinsics.checkNotNullParameter(intent, "intent");
            int i12 = l.f15728e;
            Bundle bundle3 = intent.getBundleExtra("android.service.credentials.extra.GET_CREDENTIAL_EXCEPTION");
            if (bundle3 != null) {
                Intrinsics.checkNotNullParameter(bundle3, "bundle");
                String string2 = bundle3.getString("androidx.credentials.provider.extra.CREATE_CREDENTIAL_EXCEPTION_TYPE");
                if (string2 == null) {
                    throw new IllegalArgumentException("Bundle was missing exception type.");
                }
                lVar = N(bundle3.getCharSequence("androidx.credentials.provider.extra.CREATE_CREDENTIAL_EXCEPTION_MESSAGE"), string2);
            }
        }
        t1.c.a(cancellationSignal, new t1.f(executor, callback, lVar, 0));
    }

    public static final boolean v(String s2) {
        Intrinsics.checkNotNullParameter(s2, "s");
        try {
            Base64.decode(s2, 11);
            return true;
        } catch (IllegalArgumentException unused) {
            return false;
        }
    }

    public static final Integer w(ReadableMap readableMap, Context context, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(key, "key");
        try {
            int i5 = um.g.a[readableMap.getType(key).ordinal()];
            if (i5 == 1) {
                return ColorPropConverter.getColor(readableMap.getMap(key), context);
            }
            if (i5 != 2) {
                return null;
            }
            return Integer.valueOf(readableMap.getInt(key));
        } catch (Exception e9) {
            Log.w("ReadableMapExt", "[RNScreens] Could not parse color for key '" + key + "': " + e9.getMessage());
            return null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:80:0x003c, code lost:
    
        if (r3 != 1918990112) goto L4;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:26:0x01a2  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x01bc A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r1v15, types: [me.e] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ArrayList x(w wVar) {
        char c6;
        ArrayList arrayList;
        boolean z5;
        int i5;
        ArrayList arrayList2;
        w wVar2 = wVar;
        ArrayList arrayList3 = null;
        if (wVar2.u() == 0) {
            char c8 = 7;
            wVar2.G(7);
            int g6 = wVar2.g();
            boolean z6 = true;
            if (g6 == 1684433976) {
                w wVar3 = new w();
                Inflater inflater = new Inflater(true);
                try {
                    if (!d0.E(wVar2, wVar3, inflater)) {
                        return null;
                    }
                    inflater.end();
                    wVar2 = wVar3;
                } finally {
                    inflater.end();
                }
            }
            ArrayList arrayList4 = new ArrayList();
            int i6 = wVar2.f13363b;
            int i10 = wVar2.f13364c;
            while (i6 < i10) {
                int g10 = wVar2.g() + i6;
                if (g10 > i6 && g10 <= i10) {
                    if (wVar2.g() == 1835365224) {
                        int g11 = wVar2.g();
                        if (g11 <= 10000) {
                            float[] fArr = new float[g11];
                            for (int i11 = 0; i11 < g11; i11++) {
                                fArr[i11] = Float.intBitsToFloat(wVar2.g());
                            }
                            int g12 = wVar2.g();
                            if (g12 <= 32000) {
                                double log = Math.log(2.0d);
                                c6 = c8;
                                ArrayList arrayList5 = arrayList3;
                                int ceil = (int) Math.ceil(Math.log(g11 * 2.0d) / log);
                                z5 = z6;
                                byte[] bArr = wVar2.a;
                                v vVar = new v(bArr, bArr.length);
                                vVar.p(wVar2.f13363b * 8);
                                float[] fArr2 = new float[g12 * 5];
                                int i12 = 5;
                                int[] iArr = new int[5];
                                arrayList = arrayList5;
                                int i13 = 0;
                                int i14 = 0;
                                while (true) {
                                    if (i13 < g12) {
                                        int i15 = 0;
                                        while (i15 < i12) {
                                            int i16 = iArr[i15];
                                            int i17 = vVar.i(ceil);
                                            int i18 = ((i17 >> 1) ^ (-(i17 & 1))) + i16;
                                            if (i18 >= g11 || i18 < 0) {
                                                break;
                                            }
                                            fArr2[i14] = fArr[i18];
                                            iArr[i15] = i18;
                                            i15++;
                                            i14++;
                                            i12 = 5;
                                        }
                                        i13++;
                                        i12 = 5;
                                    } else {
                                        vVar.p((vVar.g() + 7) & (-8));
                                        int i19 = 32;
                                        int i20 = vVar.i(32);
                                        w1[] w1VarArr = new w1[i20];
                                        int i21 = 0;
                                        while (i21 < i20) {
                                            int i22 = vVar.i(8);
                                            int i23 = vVar.i(8);
                                            int i24 = vVar.i(i19);
                                            if (i24 <= 128000) {
                                                int i25 = i20;
                                                float[] fArr3 = fArr2;
                                                int ceil2 = (int) Math.ceil(Math.log(g12 * 2.0d) / log);
                                                float[] fArr4 = new float[i24 * 3];
                                                float[] fArr5 = new float[i24 * 2];
                                                i5 = i10;
                                                int i26 = 0;
                                                int i27 = 0;
                                                while (i26 < i24) {
                                                    int i28 = vVar.i(ceil2);
                                                    v vVar2 = vVar;
                                                    int i29 = ((i28 >> 1) ^ (-(i28 & 1))) + i27;
                                                    if (i29 >= 0 && i29 < g12) {
                                                        int i30 = i26 * 3;
                                                        int i31 = i29 * 5;
                                                        fArr4[i30] = fArr3[i31];
                                                        fArr4[i30 + 1] = fArr3[i31 + 1];
                                                        fArr4[i30 + 2] = fArr3[i31 + 2];
                                                        int i32 = i26 * 2;
                                                        fArr5[i32] = fArr3[i31 + 3];
                                                        fArr5[i32 + 1] = fArr3[i31 + 4];
                                                        i26++;
                                                        i27 = i29;
                                                        vVar = vVar2;
                                                    }
                                                }
                                                w1VarArr[i21] = new w1(fArr4, fArr5, i22, i23);
                                                i21++;
                                                i20 = i25;
                                                fArr2 = fArr3;
                                                i10 = i5;
                                                vVar = vVar;
                                                i19 = 32;
                                            }
                                        }
                                        i5 = i10;
                                        arrayList2 = new me.e(w1VarArr);
                                    }
                                }
                                i5 = i10;
                                arrayList2 = arrayList;
                                if (arrayList2 != null) {
                                    return arrayList;
                                }
                                arrayList4.add(arrayList2);
                            }
                        }
                        c6 = c8;
                        ArrayList arrayList6 = arrayList3;
                        arrayList = arrayList6;
                        z5 = z6;
                        i5 = i10;
                        arrayList2 = arrayList6;
                        if (arrayList2 != null) {
                        }
                    } else {
                        c6 = c8;
                        arrayList = arrayList3;
                        z5 = z6;
                        i5 = i10;
                    }
                    wVar2.F(g10);
                    i6 = g10;
                    c8 = c6;
                    z6 = z5;
                    arrayList3 = arrayList;
                    i10 = i5;
                }
            }
            return arrayList4;
        }
        return arrayList3;
    }

    public static final boolean z(ReadableMap readableMap, String key) {
        Intrinsics.checkNotNullParameter(readableMap, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        Boolean C = C(readableMap, key);
        if (C != null) {
            return C.booleanValue();
        }
        return false;
    }

    public abstract String l(byte[] bArr, int i5, int i6);

    public abstract void q(lh.v vVar, float f2, float f10);

    public abstract int y(byte[] bArr, int i5, int i6);
}
